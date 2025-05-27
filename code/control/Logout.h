#include <string>
#include <fstream>

#ifndef _LOGOUT_H
#define _LOGOUT_H
/**
 * Logout 클래스
 * - 로그아웃 기능을 담당하는 control 클래스.
 * - 현재 로그인된 사용자의 로그아웃 처리를 담당.
 */
class Logout {
public: 
    // 로그아웃 UI 출력
    void startInterface(std::ofstream& out);
    // 실제 로그아웃 처리 함수 (현재는 단순히 true 반환)
    bool logout(const std::string& id);
};

#endif //_LOGOUT_H