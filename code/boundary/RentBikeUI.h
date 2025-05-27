#include "../control/RentBike.h"
#include "../repository/Repository.h"

#ifndef _RENTBIKEUI_H
#define _RENTBIKEUI_H

/**
 * RentBikeUI 클래스는 자전거 대여 요청을 UI 계층에서 처리
 * 사용자 입력을 받아 Control 계층(RentBike)을 호출
 */
class RentBikeUI {
private:
    std::ofstream* out = nullptr;
public: 
    /**
     * 4.1 메뉴 헤더 출력
     */
    void startInterface(std::ofstream& outStream);
    /**
     * 자전거 대여 처리
     * @param inStream 사용자 입력 스트림
     * @param currentId 현재 로그인한 사용자 ID
     * @param outStream 출력 스트림
     * @param repository 저장소
     */
    void rentBike(std::ifstream& inStream, std::string& currentId, std::ofstream& outStream, Repository* repository);
};

#endif //_RENTBIKEUI_H