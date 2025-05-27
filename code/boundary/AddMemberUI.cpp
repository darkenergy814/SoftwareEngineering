#include "AddMemberUI.h"
#include "../control/AddMember.h"
#include "../repository/Repository.h"
/**
 * AddMemberUI 구현부
 */

 // UI 출력을 위한 함수: "1.1. 회원가입"을 출력
void AddMemberUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "1.1. 회원가입\n> ";
}


// 입력 스트림에서 id, pw, phone을 읽고 AddMember control을 통해 등록 처리
void AddMemberUI::addMember(std::ifstream& inStream, std::ofstream& outStream, Repository* repository) {
    std::string id;
    std::string pw;
    std::string phone;
    inStream >> id >> pw >> phone;
    this->out = &outStream;
    AddMember control;
    Member newMember = control.addNewMember(id, pw, phone, repository);

    *out << id << " " << pw << " " << phone << "\n\n";
}