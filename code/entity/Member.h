#ifndef _MEMBER_H
#define _MEMBER_H

#include "User.h"
#include <string>
#include "Bike.h"
#include <vector>

class Bike;
/**
 * Member 클래스는 사용자(User)의 하위 클래스이며, 일반 회원 정보를 포함.
 * 회원의 전화번호 및 대여한 자전거 목록을 관리.
 */
class Member: public User {
private:
    std::string phoneNumber;
    std::vector<Bike*> bikes;

public:
    /**
     * Member 생성자
     *
     * @param id 사용자 ID
     * @param pw 사용자 비밀번호
     * @param phone 전화번호
     */
    Member(const std::string& id, const std::string& pw, const std::string& phone);

    /**
     * 회원 ID 반환
     */
    std::string getId() const { return id; }

    /**
     * 회원 비밀번호 반환
     */
    std::string getPassword() const { return password; }

    /**
     * 회원 전화번호 반환
     */
    std::string getPhone() const { return phoneNumber; }
};

#endif //_MEMBER_H