#include "AddMember.h"
#include "../boundary/AddMemberUI.h"
#include "../repository/Repository.h"

/**
 * AddMember ������
 * - UI�� �����ϰų� Repository�� ���� ȸ���� �߰�.
 */
void AddMember::startInterface(std::ofstream& out) {
    AddMemberUI ui;
    ui.startInterface(out);
}

// ���ο� ȸ���� �����ϰ� �����(Repository)�� �߰�
Member AddMember::addNewMember(const std::string& id, const std::string& pw, const std::string& phone, Repository* repository) {
    Member m(id, pw, phone);
    repository->addMember(m);
    return m;
}