#ifndef _ADMIN_H
#define _ADMIN_H

#include "User.h"

/**
 * Admin Ŭ������ �ý��� �����ڸ� ǥ���ϴ� ��ƼƼ Ŭ����.
 * User Ŭ������ ��ӹ޾� ������ ������ �ʱ� ����(id: "admin", pw: "admin")�� ����.
 */
class Admin: public User {
public:
    Admin();
};

#endif //_ADMIN_H