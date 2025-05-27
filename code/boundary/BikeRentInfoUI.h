/**
 * Project Untitled
 */
#include <fstream>
#include "../control/BikeRentInfo.h"

#ifndef _BIKERENTINFOUI_H
#define _BIKERENTINFOUI_H
 /**
  * BikeRentInfoUI 클래스는 자전거 대여 내역 조회 기능의 UI(Boundary) 역할.
  * 사용자로부터의 요청을 받아 컨트롤러(BikeRentInfo)와 협력하여
  * 대여한 자전거 목록을 출력.
  */
class BikeRentInfoUI {
private:
    std::ofstream* out = nullptr;
public: 
    /**
     * 대여 내역 조회 메뉴 헤더 출력
     * @param out 출력 스트림
     */
    void startInterface(std::ofstream& out);
    /**
     * 현재 로그인한 사용자의 대여 자전거 목록을 출력
     * @param currentId 현재 로그인한 사용자 ID
     * @param out 출력 스트림
     * @param repository 자전거 및 회원 정보가 저장된 저장소
     */
    void getBikeRentInfo(std::string& currentId, std::ofstream& out, Repository* repository);
};

#endif //_BIKERENTINFOUI_H