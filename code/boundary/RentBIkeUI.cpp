#include <fstream>
#include "RentBikeUI.h"

/**
 * RentBIkeUI implementation
 */

 /**
  * 대여 메뉴 시작 출력
  */
void RentBikeUI::startInterface(std::ofstream& outStream) {
	this->out = &outStream;
	*out << "4.1. 자전거 대여\n> ";
}

/**
 * 자전거 대여 처리
 * - bikeId를 입력으로 받고
 * - Control 계층을 호출하여 대여 요청 처리
 * - 결과를 출력
 */
void RentBikeUI::rentBike(std::ifstream& inStream, std::string& currentId, std::ofstream& outStream, Repository* repository) {
    std::string bikeId;

    inStream >> bikeId;
    this->out = &outStream;

    RentBike control;
    control.rentBike(bikeId, currentId, repository);

    *out << bikeId << "\n";
    *out << "\n";
}