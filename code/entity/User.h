#include <string>

#ifndef _USER_H
#define _USER_H

/**
 * 스템 사용자에 대한 공통 정보를 포함하는 추상화된 기본 클래스.
 * 회원(Member), 관리자(Admin) 등의 공통 속성(id, password)을 정의.
 */

class User {
protected:
    std::string id;
    std::string password;
public: 
    /**
     * 생성자
     * @param id 사용자 ID
     * @param pw 사용자 비밀번호
     */
    User(const std::string& id, const std::string& pw);

    /**
     * 사용자 ID를 반환.
     */
    virtual std::string getId() const;
    
    /**
     * 사용자 비밀번호를 반환.
     */
    virtual std::string getPassword() const;
};

#endif //_USER_H