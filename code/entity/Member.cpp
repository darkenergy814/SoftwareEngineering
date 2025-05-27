#include "Member.h"

/**
 * Member implementation
 */
 // Member 클래스 생성자: 사용자 ID, 비밀번호, 전화번호를 초기화
Member::Member(const std::string& id, const std::string& pw, const std::string& phone)
    : User(id, pw), phoneNumber(phone) {}