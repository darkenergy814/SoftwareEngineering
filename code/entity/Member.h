#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include <string>
#include "Bike.h"
#include <vector>

class Bike;
/**
 * Member Ŭ������ �����(User)�� ���� Ŭ�����̸�, �Ϲ� ȸ�� ������ ����.
 * ȸ���� ��ȭ��ȣ �� �뿩�� ������ ����� ����.
 */
class Member: public User {
private:
    std::string phoneNumber;
    std::vector<Bike*> bikes;

public:
    /**
     * Member ������
     *
     * @param id ����� ID
     * @param pw ����� ��й�ȣ
     * @param phone ��ȭ��ȣ
     */
    Member(const std::string& id, const std::string& pw, const std::string& phone);

    /**
     * ȸ�� ID ��ȯ
     */
    std::string getId() const { return id; }

    /**
     * ȸ�� ��й�ȣ ��ȯ
     */
    std::string getPassword() const { return password; }

    /**
     * ȸ�� ��ȭ��ȣ ��ȯ
     */
    std::string getPhone() const { return phoneNumber; }
};

#endif //_MEMBER_H