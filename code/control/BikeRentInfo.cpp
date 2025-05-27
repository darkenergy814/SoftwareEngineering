#include "BikeRentInfo.h"
#include "../boundary/BikeRentInfoUI.h"
#include <algorithm>

/**
 * 자전거 대여 정보 출력 인터페이스를 시작.
 * 출력 포맷을 맞추기 위해 UI 클래스를 호출.
 */
void BikeRentInfo::startInterface(std::ofstream& out) {
    BikeRentInfoUI ui;
    ui.startInterface(out);
}
/**
 * getBikeRentInfo
 *
 * 현재 로그인한 사용자가 대여한 자전거 리스트를 반환합니다.
 * @param currentId 현재 로그인한 사용자 ID
 * @param repository 전체 자전거 대여 정보가 포함된 저장소
 * @return 현재 사용자가 대여 중인 자전거 목록
 */
std::vector<Bike> BikeRentInfo::getBikeRentInfo(std::string& currentId, Repository* repository) {
    std::vector<Bike> bikeList;
    const std::vector<Bike>& rentBikeList = repository->getRentBikes();

    for (const auto& bike : rentBikeList) {
        if (bike.getRenter()->getId() == currentId) {
            bikeList.push_back(bike);
        }
    }
    // 자전거 ID 기준으로 정렬
    std::sort(bikeList.begin(), bikeList.end(), [](const Bike& a, const Bike& b) {
        return a.getBikeId() < b.getBikeId();
    });

    return bikeList;
}