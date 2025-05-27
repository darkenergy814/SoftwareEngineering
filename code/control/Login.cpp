#include "Login.h"
#include "../entity/Admin.h"
#include "../boundary/LoginUI.h"

/**
 * Login 클래스 구현
 */
 // 로그인 메뉴 UI 출력
void Login::startInterface(std::ofstream& out) {
    LoginUI ui;
    ui.startInterface(out);
}

// 로그인 인증 로직: admin 또는 member 인증
bool Login::login(const std::string& id, const std::string& pw, Repository* repository) {
    Admin admin;

    if (admin.getId() == id && admin.getPassword() == pw) {
        return true;
    }
    // 회원 리스트에서 일치하는 계정 찾기
    const std::vector<Member>& members = repository->getMembers();

    for (const auto& m : members) {
        if (m.getId() == id && m.getPassword() == pw) {
            return true;
        }
    }

    return false;
}