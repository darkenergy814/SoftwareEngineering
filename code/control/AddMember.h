/**
 * AddMember Ŭ������ ȸ�� ���� ����� ����ϴ� control Ŭ����.
 *
 * - startInterface(): UI�� ȸ������ �޴��� ���.
 * - addNewMember(): �Է¹��� ������ �������� ���ο� ȸ�� ��ü�� �����ϰ� ����ҿ� �߰�.
 * - getMembers(): ���� ��ϵ� ȸ�� ����� ��ȯ.
 */

#include <vector>
#include "../entity/Member.h"
#include "../repository/Repository.h"

#ifndef _ADDMEMBER_H
#define _ADDMEMBER_H

class AddMember {
public:
    void startInterface(std::ofstream& out);
    Member addNewMember(const std::string& id, const std::string& pw, const std::string& phone, Repository* repository);

    static const std::vector<Member>& getMembers();
};

#endif //_ADDMEMBER_H