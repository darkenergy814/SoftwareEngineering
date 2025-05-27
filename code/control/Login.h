#include <string>
#include "../entity/Member.h"
#include "../control/AddMember.h"
#include "../repository/Repository.h"

#ifndef _LOGIN_H
#define _LOGIN_H

/**
 * Login 클래스
 * - 로그인 기능을 담당하는 control 클래스.
 * - Admin 또는 Member 계정을 인증하는 역할.
 */
class Login {
public: 
    // 로그인 메뉴 출력
    void startInterface(std::ofstream& out);
    // 로그인 인증 처리 (Admin 또는 Member)
    bool login(const std::string& id, const std::string& pw, Repository* repository);
};

#endif //_LOGIN_H