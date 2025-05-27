#ifndef _BIKE_H
#define _BIKE_H

#include "Member.h"
#include <string>

class Member;
/**
 * Bike 클래스는 자전거 정보를 관리하는 엔터티 클래스.
 * 각 자전거는 고유 ID, 제조사 정보, 대여 여부, 대여한 회원 정보를 포함.
 */

class Bike {
private:
    std::string bikeId;
    std::string maker;
    bool isRentedFlag = false;
    Member* rentedBy = nullptr;;
public: 
    /**
     * 생성자
     * @param bikeId 자전거 ID
     * @param maker 자전거 제조사
     */
    Bike(const std::string& bikeId, const std::string& maker);
    
    // 자전거 ID 반환
    std::string getBikeId() const;
    
    // 제조사 정보 반환
    std::string getMaker() const;

    // 대여 여부 반환
    bool isRented() const;

    // 대여 상태 설정
    void setRented(bool flag);

    // 대여 회원 설정
    void setRenter(Member* m);

    // 대여 회원 반환
    Member* getRenter() const;
};

#endif //_BIKE_H