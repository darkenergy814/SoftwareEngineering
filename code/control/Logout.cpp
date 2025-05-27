#include "Logout.h"
#include "../boundary/LogoutUI.h"

/**
 * Logout implementation
 */


 // �α׾ƿ� �޴� UI ���
void Logout::startInterface(std::ofstream& out) {
	LogoutUI ui;
	ui.startInterface(out);
}

// �α׾ƿ� ó�� ���� (���� Ȯ�� ����, ����� ������ ��ȯ)
bool Logout::logout(const std::string& id) {
    return true;
}