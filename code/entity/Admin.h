#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h"

/**
 * Admin 클래스는 시스템 관리자를 표현하는 엔티티 클래스.
 * User 클래스를 상속받아 관리자 고유의 초기 계정(id: "admin", pw: "admin")을 설정.
 */
class Admin: public User {
public:
    Admin();
};

#endif //_ADMIN_H