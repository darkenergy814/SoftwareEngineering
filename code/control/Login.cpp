#include "Login.h"
#include "../entity/Admin.h"
#include "../boundary/LoginUI.h"

/**
 * Login Ŭ���� ����
 */
 // �α��� �޴� UI ���
void Login::startInterface(std::ofstream& out) {
    LoginUI ui;
    ui.startInterface(out);
}

// �α��� ���� ����: admin �Ǵ� member ����
bool Login::login(const std::string& id, const std::string& pw, Repository* repository) {
    Admin admin;

    if (admin.getId() == id && admin.getPassword() == pw) {
        return true;
    }
    // ȸ�� ����Ʈ���� ��ġ�ϴ� ���� ã��
    const std::vector<Member>& members = repository->getMembers();

    for (const auto& m : members) {
        if (m.getId() == id && m.getPassword() == pw) {
            return true;
        }
    }

    return false;
}