#include "LogoutUI.h"
#include "../control/Logout.h"

/**
 * LogoutUI implementation
 */


 // 로그아웃 인터페이스 시작: 로그아웃 메뉴 정보를 출력
void LogoutUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "2.2. 로그아웃\n> ";
    return;
}
// 로그아웃 수행: Control 클래스의 logout 함수 호출 후, 결과를 출력.
void LogoutUI::logout(const std::string& id, std::ofstream& outStream) {
    this->out = &outStream;

    Logout control;
    bool success = control.logout(id);

    if (success)
        *out << id << "\n";
    else
        *out << "\n";
    // 출력 형식을 위한 줄바꿈
    *out << "\n";
}
