#include <string>
#include <fstream>
#include "../control/AddMember.h"

#ifndef _ADDMEMBERUI_H
#define _ADDMEMBERUI_H
/**
 * AddMemberUI 클래스
 * - 사용자 인터페이스 계층에서 회원 가입 메뉴를 보여주고 입력을 받아 처리.
 */
class AddMemberUI {
private:
    std::ofstream* out = nullptr;;

public: 
    // 회원가입 메뉴 출력, 현재 파일 입출력으로 대체
    void startInterface(std::ofstream& outStream);
    // 사용자 입력을 받아 회원 가입 처리
    void addMember(std::ifstream& inStream, std::ofstream& outStream, Repository* repository);
};

#endif //_ADDMEMBERUI_H