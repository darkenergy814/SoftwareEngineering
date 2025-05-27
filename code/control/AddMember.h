/**
 * AddMember 클래스는 회원 가입 기능을 담당하는 control 클래스.
 *
 * - startInterface(): UI에 회원가입 메뉴를 출력.
 * - addNewMember(): 입력받은 정보를 바탕으로 새로운 회원 객체를 생성하고 저장소에 추가.
 * - getMembers(): 현재 등록된 회원 목록을 반환.
 */

#include <vector>
#include "../entity/Member.h"
#include "../repository/Repository.h"

#ifndef _ADDMEMBER_H
#define _ADDMEMBER_H

class AddMember {
public:
    void startInterface(std::ofstream& out);
    Member addNewMember(const std::string& id, const std::string& pw, const std::string& phone, Repository* repository);

    static const std::vector<Member>& getMembers();
};

#endif //_ADDMEMBER_H