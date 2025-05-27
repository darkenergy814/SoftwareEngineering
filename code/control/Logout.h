#include <string>
#include <fstream>

#ifndef _LOGOUT_H
#define _LOGOUT_H
/**
 * Logout Ŭ����
 * - �α׾ƿ� ����� ����ϴ� control Ŭ����.
 * - ���� �α��ε� ������� �α׾ƿ� ó���� ���.
 */
class Logout {
public: 
    // �α׾ƿ� UI ���
    void startInterface(std::ofstream& out);
    // ���� �α׾ƿ� ó�� �Լ� (����� �ܼ��� true ��ȯ)
    bool logout(const std::string& id);
};

#endif //_LOGOUT_H