/**
 * LoginUI 클래스
 * - 로그아웃 메뉴의 UI를 담당하는 boundary 클래스
 * - 로그아웃 시 입력값 처리 및 결과 출력
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
    // 로그아웃 메뉴를 출력
    void startInterface(std::ofstream& out);
    // 사용자 입력을 받아 로그아웃 수행
    void logout(const std::string& id, std::ofstream& out);
};

#endif //_LOGOUTUI_H