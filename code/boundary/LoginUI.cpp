#include "LoginUI.h"
#include "../control/Login.h"

/**
 * �α��� �޴� UI�� �����ϴ� �Լ�
 * - �α��� ����� ���� ��������, ����ڿ��� �α��� �Է��� �ȳ��ϴ� �޽����� ���
 *
 * @param outStream �α��� �޽����� ����� ��� ��Ʈ��
 */

void LoginUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "2.1. �α���\n> ";
    return;
}
/**
 * ����ڷκ��� ���̵�� ��й�ȣ�� �Է¹޾� �α��� �õ�
 * - Repository�� �̿��� �α��� ���� ó��
 * - ���� ���ο� ���� ��� ������ ����
 *
 * @param inStream ����� �Է��� ���� �Է� ��Ʈ�� (id, pw)
 * @param outStream �α��� ����� ����� ��� ��Ʈ��
 * @param repository ����� ����� ���� �ִ� ����� (������ ���)
 * @return �Է¹��� ����� id (���� ���ο� �����ϰ� ��ȯ��)
 */
std::string  LoginUI::login(std::ifstream& inStream, std::ofstream& outStream, Repository* repository) {
    std::string id;
    std::string pw;

    inStream >> id >> pw;
    this->out = &outStream;

    Login control;
    bool success = control.login(id, pw, repository);

    if (success)
        *out << id << " " << pw << "\n"; // �α��� ���� �� id, pw ���
    else
        *out << "\n";       // ���� �� �� �� ���
    *out << "\n";// ���� �� ����

    return id;
}
