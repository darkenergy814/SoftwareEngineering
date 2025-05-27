#ifndef _FILE_H
#define _FILE_H
#include <fstream>
/**
 * File 클래스는 프로그램 전체에서 공통적으로 사용하는
 * 입력 파일(input.txt)과 출력 파일(output.txt)을 관리합니다.
 *
 * - open(): 파일 스트림 열기
 * - close(): 파일 스트림 닫기
 * - in(): 입력 파일 스트림 참조 반환
 * - out(): 출력 파일 스트림 참조 반환
 */
class File {
private:
	static std::ifstream in_fp;
	static std::ofstream out_fp;
	static const std::string input_filename;
	static const std::string output_filename;
public:
	static void open();
	static void close();
	static std::ifstream& in();
	static std::ofstream& out();
};

#endif //_FILE_H