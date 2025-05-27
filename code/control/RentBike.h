#include "../repository/Repository.h"

#ifndef _RENTBIKE_H
#define _RENTBIKE_H
 /**
  * 자전거 대여 기능을 담당하는 Control 클래스
  * - 대여 메뉴 인터페이스 표시
  * - 대여 요청 처리
  */
class RentBike {
private:
    std::ofstream* out = nullptr;
public: 
    /**
     * 자전거 대여 인터페이스 시작
     * @param outStream 출력 스트림
     */
    void startInterface(std::ofstream& outStream);
    /**
     * 사용자의 자전거 대여 요청을 처리
     * @param bikeId 대여할 자전거 ID
     * @param currentId 현재 로그인한 사용자 ID
     * @param repository 자전거/회원 저장소
     */
    void rentBike(const std::string& bikeId, std::string& currentId, Repository* repository);
};

#endif //_RENTBIKE_H