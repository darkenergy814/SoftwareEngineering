#include "User.h"

/**
 * User implementation
 */
 // User Ŭ���� ������: ����� ID�� ��й�ȣ�� �ʱ�ȭ.
User::User(const std::string& id, const std::string& pw)
    : id(id), password(pw) {}

// ����� ID�� ��ȯ.
std::string User::getId() const { return id; }
// ����� ��й�ȣ�� ��ȯ�մϴ�.
std::string User::getPassword() const { return password; }