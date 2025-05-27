/**
 * Project Untitled
 */
#include <vector>
#include <string>
#include <fstream>
#include "../control/Login.h"
#include "../repository/Repository.h"

#ifndef _LOGINUI_H
#define _LOGINUI_H

 /**
  * LoginUI 클래스는 로그인 기능의 UI(Boundary) 역할을 수행.
  * 사용자로부터 입력을 받아 Login 컨트롤 클래스와 협력하여 로그인 절차를 처리.
  */
class LoginUI {
private:
    std::ofstream* out = nullptr;
public:
    /**
    * 로그인 UI의 시작 인터페이스를 출력.
    */
    void startInterface(std::ofstream& out);
    /**
     * 로그인 입력을 받고, Login 컨트롤 객체를 통해 로그인 로직을 수행.
     *
     * @param inStream 입력 스트림 (사용자 입력으로부터 id, pw 읽음)
     * @param outStream 출력 스트림 (로그인 결과 출력)
     * @param repository 회원 정보를 갖고 있는 저장소 객체
     * @return 로그인한 사용자의 ID 문자열
     */
    std::string login(std::ifstream& inStream, std::ofstream& outStream, Repository* repository);
};

#endif //_LOGINUI_H