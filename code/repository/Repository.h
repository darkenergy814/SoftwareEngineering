#ifndef _MEMBERREPOSITORY_H
#define _MEMBERREPOSITORY_H

#include <vector>
#include "../entity/Member.h"
#include "../entity/Bike.h"

/**
 * ���, ����ũ Ŭ������ �ݷ��� Ŭ����
 */

class Repository {
private:
    /**
     * ȸ�� ���Ե� �ɹ� ����Ʈ
     */
    std::vector<Member> memberList;
    /**
     * ��ϵ� ������ ����Ʈ
     */
    std::vector<Bike> bikeList;
    /**
     * ���� ������ ����Ʈ
     */
    std::vector<Bike> rentBikeList;
public:
    Member* findMemberById(const std::string& id);
    /**
     * ���ο� �ɹ� �߰�(ȸ������)
     */
    void addMember(const Member& member);
    /**
     * �ɹ� ����Ʈ ��ȯ
     * @return memberList
     */
    const std::vector<Member>& getMembers() const;
    
    /**
     * ���ο� ������ ���
     */
    void addBike(const Bike& bike);
    /**
     * ������ ����Ʈ ��ȯ
     * @return bikeList
     */
    const std::vector<Bike>& getBikes() const;

    /**
     * ���� ������ �߰�
     * @return true or false
     */
    bool rentBike(const Bike& bike, Member* member);
    /**
     * ���� ������ ����Ʈ ��ȯ
     * @return rentBikeList
     */
    const std::vector<Bike>& getRentBikes() const;
};

#endif //_MEMBERREPOSITORY_H