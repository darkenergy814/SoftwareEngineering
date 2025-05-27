#include "Repository.h"

/**
* memberID로 멤버 찾기
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
* 가입하는 멤버를 memberList에 추가
*/
void Repository::addMember(const Member& member) {
    memberList.push_back(member);
}
/**
* 회원 가입된 멤버 리스트 반환
* @return memberList
*/
const std::vector<Member>& Repository::getMembers() const {
    return memberList;
}

/**
* 자전거를 bikeList에 추가
*/
void Repository::addBike(const Bike& bike) {
    bikeList.push_back(bike);
}
/**
* 등록된 자전거 리스트 반환
* @return BikeList
*/
const std::vector<Bike>& Repository::getBikes() const {
    return bikeList;
}
/**
* 빌릴 자전거 추가
* @return true(성공), false(실패)
*/
bool Repository::rentBike(const Bike& bike, Member* member) {
    for (auto& b : bikeList) {
        if (b.getBikeId() == bike.getBikeId() && !b.isRented()) {
            b.setRented(true);
            b.setRenter(member);
            rentBikeList.push_back(b);  // 복사본 저장
            return true;
        }
    }
    return false;
}
/**
* 빌린 자전거 리스트 반환
* @return rentBikeList
*/
const std::vector<Bike>& Repository::getRentBikes() const {
    return rentBikeList;
}