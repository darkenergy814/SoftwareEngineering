#include "BikeRentInfoUI.h"
#include "../control/BikeRentInfo.h"

/**
 * BikeRentInfoUI implementation
 */

 // 자전거 대여 리스트 기능의 시작 인터페이스를 출력.
void BikeRentInfoUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "5.1. 자전거 대여 리스트\n";
}

// 현재 로그인된 사용자의 대여 목록을 출력.
void BikeRentInfoUI::getBikeRentInfo(std::string& currentId, std::ofstream& out, Repository* repository) {
    BikeRentInfo control;
    std::vector<Bike> rentedBikes = control.getBikeRentInfo(currentId, repository);

    for (const auto& bike : rentedBikes) {
        out << "> " << bike.getBikeId() << " " << bike.getMaker() << "\n";
    }
    // 출력 형식을 위한 줄바꿈
    out << "\n";
}