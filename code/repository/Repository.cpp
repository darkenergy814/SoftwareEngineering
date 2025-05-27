#include "Repository.h"

/**
* memberID�� ��� ã��
* return member
*/
Member* Repository::findMemberById(const std::string& id) {
    for (auto& member : memberList) {
        if (member.getId() == id) {
            return &member;
        }
    }
    return nullptr;

}
/**
* �����ϴ� ����� memberList�� �߰�
*/
void Repository::addMember(const Member& member) {
    memberList.push_back(member);
}
/**
* ȸ�� ���Ե� ��� ����Ʈ ��ȯ
* @return memberList
*/
const std::vector<Member>& Repository::getMembers() const {
    return memberList;
}

/**
* �����Ÿ� bikeList�� �߰�
*/
void Repository::addBike(const Bike& bike) {
    bikeList.push_back(bike);
}
/**
* ��ϵ� ������ ����Ʈ ��ȯ
* @return BikeList
*/
const std::vector<Bike>& Repository::getBikes() const {
    return bikeList;
}
/**
* ���� ������ �߰�
* @return true(����), false(����)
*/
bool Repository::rentBike(const Bike& bike, Member* member) {
    for (auto& b : bikeList) {
        if (b.getBikeId() == bike.getBikeId() && !b.isRented()) {
            b.setRented(true);
            b.setRenter(member);
            rentBikeList.push_back(b);  // ���纻 ����
            return true;
        }
    }
    return false;
}
/**
* ���� ������ ����Ʈ ��ȯ
* @return rentBikeList
*/
const std::vector<Bike>& Repository::getRentBikes() const {
    return rentBikeList;
}