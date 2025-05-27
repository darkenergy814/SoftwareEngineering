#include "AddMember.h"
#include "../boundary/AddMemberUI.h"
#include "../repository/Repository.h"

/**
 * AddMember 구현부
 * - UI와 연결하거나 Repository를 통해 회원을 추가.
 */
void AddMember::startInterface(std::ofstream& out) {
    AddMemberUI ui;
    ui.startInterface(out);
}

// 새로운 회원을 생성하고 저장소(Repository)에 추가
Member AddMember::addNewMember(const std::string& id, const std::string& pw, const std::string& phone, Repository* repository) {
    Member m(id, pw, phone);
    repository->addMember(m);
    return m;
}