#include "FILE.h"
#include <iostream>

/**
 * File Ŭ������ input.txt�� output.txt�� ���� ������� �������� �����ϴ� Ŭ�����Դϴ�.
 *
 * - ���α׷� �������� �Է�/��� ��Ʈ���� �����մϴ�.
 * - input.txt: ǥ�� �Է� ����
 * - output.txt: ǥ�� ��� ����
 *
 * �ֿ� ���:
 * - open(): ���� ��Ʈ���� ���� �غ�
 * - close(): ���� ��Ʈ���� ����
 * - in(): �Է� ���� ��Ʈ�� ���� ��ȯ
 * - out(): ��� ���� ��Ʈ�� ���� ��ȯ
 *
 * ��� ��:
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