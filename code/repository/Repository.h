#ifndef _MEMBERREPOSITORY_H
#define _MEMBERREPOSITORY_H

#include <vector>
#include "../entity/Member.h"
#include "../entity/Bike.h"

/**
 * 멤버, 바이크 클래스의 콜렉션 클래스
 */

class Repository {
private:
    /**
     * 회원 가입된 맴버 리스트
     */
    std::vector<Member> memberList;
    /**
     * 등록된 자전거 리스트
     */
    std::vector<Bike> bikeList;
    /**
     * 빌린 자전거 리스트
     */
    std::vector<Bike> rentBikeList;
public:
    Member* findMemberById(const std::string& id);
    /**
     * 새로운 맴버 추가(회원가입)
     */
    void addMember(const Member& member);
    /**
     * 맴버 리스트 반환
     * @return memberList
     */
    const std::vector<Member>& getMembers() const;
    
    /**
     * 새로운 자전거 등록
     */
    void addBike(const Bike& bike);
    /**
     * 자전거 리스트 반환
     * @return bikeList
     */
    const std::vector<Bike>& getBikes() const;

    /**
     * 빌릴 자전거 추가
     * @return true or false
     */
    bool rentBike(const Bike& bike, Member* member);
    /**
     * 빌린 자전거 리스트 반환
     * @return rentBikeList
     */
    const std::vector<Bike>& getRentBikes() const;
};

#endif //_MEMBERREPOSITORY_H