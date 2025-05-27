#include <string>
#include <fstream>
#include "../control/AddBike.h"
#include "../entity/Bike.h"

#ifndef _ADDBIKEUI_H
#define _ADDBIKEUI_H

class AddBikeUI {
private:
    std::string bikeId, maker;
    std::ofstream* out = nullptr;
public: 
    /**
    * 자전거 등록 메뉴의 시작 인터페이스 출력
    */
    void startInterface(std::ofstream& outStream);
    /**
     * 자전거 정보를 입력받고 등록 처리
     *
     * @param inStream 사용자 입력 스트림
     * @param outStream 결과 출력 스트림
     * @param repository 자전거를 저장할 저장소
     */
    void addBike(std::ifstream& inStream, std::ofstream& outStream, Repository* repository);
};

#endif //_ADDBIKEUI_H