#include "Member.h"

/**
 * Member implementation
 */
 // Member Ŭ���� ������: ����� ID, ��й�ȣ, ��ȭ��ȣ�� �ʱ�ȭ
Member::Member(const std::string& id, const std::string& pw, const std::string& phone)
    : User(id, pw), phoneNumber(phone) {}