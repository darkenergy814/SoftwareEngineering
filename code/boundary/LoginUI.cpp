#include "LoginUI.h"
#include "../control/Login.h"

/**
 * 로그인 메뉴 UI를 시작하는 함수
 * - 로그인 기능의 시작 지점으로, 사용자에게 로그인 입력을 안내하는 메시지를 출력
 *
 * @param outStream 로그인 메시지를 출력할 출력 스트림
 */

void LoginUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "2.1. 로그인\n> ";
    return;
}
/**
 * 사용자로부터 아이디와 비밀번호를 입력받아 로그인 시도
 * - Repository를 이용해 로그인 인증 처리
 * - 성공 여부에 따라 출력 내용을 변경
 *
 * @param inStream 사용자 입력을 받을 입력 스트림 (id, pw)
 * @param outStream 로그인 결과를 출력할 출력 스트림
 * @param repository 사용자 목록을 갖고 있는 저장소 (인증에 사용)
 * @return 입력받은 사용자 id (성공 여부와 무관하게 반환됨)
 */
std::string  LoginUI::login(std::ifstream& inStream, std::ofstream& outStream, Repository* repository) {
    std::string id;
    std::string pw;

    inStream >> id >> pw;
    this->out = &outStream;

    Login control;
    bool success = control.login(id, pw, repository);

    if (success)
        *out << id << " " << pw << "\n"; // 로그인 성공 시 id, pw 출력
    else
        *out << "\n";       // 실패 시 빈 줄 출력
    *out << "\n";// 공백 줄 삽입

    return id;
}
