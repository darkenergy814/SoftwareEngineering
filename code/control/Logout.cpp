#include "Logout.h"
#include "../boundary/LogoutUI.h"

/**
 * Logout implementation
 */


 // 로그아웃 메뉴 UI 출력
void Logout::startInterface(std::ofstream& out) {
	LogoutUI ui;
	ui.startInterface(out);
}

// 로그아웃 처리 로직 (추후 확장 가능, 현재는 성공만 반환)
bool Logout::logout(const std::string& id) {
    return true;
}