#include "AddBikeUI.h"
#include "../control/AddBike.h"
#include "../repository/Repository.h"

/**
 * AddBikeUI implementation
 */

 /**
  * 자전거 등록 인터페이스 시작
  * - 화면에 3.1. 자전거 등록 메시지를 출력
  */
void AddBikeUI::startInterface(std::ofstream& outStream) {
	this->out = &outStream;
	*out << "3.1. 자전거 등록\n> ";
}

/**
 * 사용자로부터 자전거 정보를 입력받고, 자전거 등록 처리 수행
 *
 * @param inStream 자전거 id와 제조사를 입력받을 입력 스트림
 * @param outStream 결과 출력 스트림
 * @param repository 자전거 리스트를 관리하는 저장소
 */
void AddBikeUI::addBike(std::ifstream& inStream, std::ofstream& outStream, Repository* repository) {
    std::string bikeId;
    std::string maker;

    inStream >> bikeId >> maker;
    this->out = &outStream;

    AddBike control;
    Bike newBike = control.bike(bikeId, maker, repository);

    *out << bikeId << " " << maker << "\n\n";
}