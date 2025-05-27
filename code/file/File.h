#ifndef _FILE_H
#define _FILE_H
#include <fstream>
/**
 * File Ŭ������ ���α׷� ��ü���� ���������� ����ϴ�
 * �Է� ����(input.txt)�� ��� ����(output.txt)�� �����մϴ�.
 *
 * - open(): ���� ��Ʈ�� ����
 * - close(): ���� ��Ʈ�� �ݱ�
 * - in(): �Է� ���� ��Ʈ�� ���� ��ȯ
 * - out(): ��� ���� ��Ʈ�� ���� ��ȯ
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