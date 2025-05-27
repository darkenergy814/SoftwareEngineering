#include "FILE.h"
#include <iostream>

/**
 * File 클래스는 input.txt와 output.txt에 대한 입출력을 정적으로 관리하는 클래스입니다.
 *
 * - 프로그램 전역에서 입력/출력 스트림을 공유합니다.
 * - input.txt: 표준 입력 파일
 * - output.txt: 표준 출력 파일
 *
 * 주요 기능:
 * - open(): 파일 스트림을 열고 준비
 * - close(): 파일 스트림을 닫음
 * - in(): 입력 파일 스트림 참조 반환
 * - out(): 출력 파일 스트림 참조 반환
 *
 * 사용 예:
 *     File::open();
 *     File::in() >> value;
 *     File::out() << result;
 *     File::close();
 */
std::ifstream File::in_fp;
std::ofstream File::out_fp;
const std::string File::input_filename = "input.txt";
const std::string File::output_filename = "output.txt";

void File::open() {
    in_fp.open(input_filename);
    out_fp.open(output_filename);
}

void File::close() {
    in_fp.close();
    out_fp.close();
}

std::ifstream& File::in() {
    return in_fp;
}

std::ofstream& File::out() {
    return out_fp;
}