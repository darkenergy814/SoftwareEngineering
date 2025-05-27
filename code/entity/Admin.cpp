/**
 * Project Untitled
 */


#include "Admin.h"

 /**
  * Admin 생성자
  * 기본 관리자 계정 "admin" / "admin" 을 User 기반으로 초기화.
  */
Admin::Admin() : User("admin", "admin") {}