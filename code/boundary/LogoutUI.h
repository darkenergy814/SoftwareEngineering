/**
 * LoginUI Ŭ����
 * - �α׾ƿ� �޴��� UI�� ����ϴ� boundary Ŭ����
 * - �α׾ƿ� �� �Է°� ó�� �� ��� ���
 */
#include <string>
#include <vector>
#include <fstream>
#include "../control/Logout.h"

#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

class LogoutUI {
private:
    std::ofstream* out=nullptr;

public: 
    // �α׾ƿ� �޴��� ���
    void startInterface(std::ofstream& out);
    // ����� �Է��� �޾� �α׾ƿ� ����
    void logout(const std::string& id, std::ofstream& out);
};

#endif //_LOGOUTUI_H