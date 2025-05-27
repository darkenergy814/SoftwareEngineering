#include "LogoutUI.h"
#include "../control/Logout.h"

/**
 * LogoutUI implementation
 */


 // �α׾ƿ� �������̽� ����: �α׾ƿ� �޴� ������ ���
void LogoutUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "2.2. �α׾ƿ�\n> ";
    return;
}
// �α׾ƿ� ����: Control Ŭ������ logout �Լ� ȣ�� ��, ����� ���.
void LogoutUI::logout(const std::string& id, std::ofstream& outStream) {
    this->out = &outStream;

    Logout control;
    bool success = control.logout(id);

    if (success)
        *out << id << "\n";
    else
        *out << "\n";
    // ��� ������ ���� �ٹٲ�
    *out << "\n";
}
