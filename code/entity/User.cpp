#include "User.h"

/**
 * User implementation
 */
 // User 클래스 생성자: 사용자 ID와 비밀번호를 초기화.
User::User(const std::string& id, const std::string& pw)
    : id(id), password(pw) {}

// 사용자 ID를 반환.
std::string User::getId() const { return id; }
// 사용자 비밀번호를 반환합니다.
std::string User::getPassword() const { return password; }