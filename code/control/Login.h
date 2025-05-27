#include <string>
#include "../entity/Member.h"
#include "../control/AddMember.h"
#include "../repository/Repository.h"

#ifndef _LOGIN_H
#define _LOGIN_H

/**
 * Login Ŭ����
 * - �α��� ����� ����ϴ� control Ŭ����.
 * - Admin �Ǵ� Member ������ �����ϴ� ����.
 */
class Login {
public: 
    // �α��� �޴� ���
    void startInterface(std::ofstream& out);
    // �α��� ���� ó�� (Admin �Ǵ� Member)
    bool login(const std::string& id, const std::string& pw, Repository* repository);
};

#endif //_LOGIN_H