#include "BikeRentInfo.h"
#include "../boundary/BikeRentInfoUI.h"
#include <algorithm>

/**
 * ������ �뿩 ���� ��� �������̽��� ����.
 * ��� ������ ���߱� ���� UI Ŭ������ ȣ��.
 */
void BikeRentInfo::startInterface(std::ofstream& out) {
    BikeRentInfoUI ui;
    ui.startInterface(out);
}
/**
 * getBikeRentInfo
 *
 * ���� �α����� ����ڰ� �뿩�� ������ ����Ʈ�� ��ȯ�մϴ�.
 * @param currentId ���� �α����� ����� ID
 * @param repository ��ü ������ �뿩 ������ ���Ե� �����
 * @return ���� ����ڰ� �뿩 ���� ������ ���
 */
std::vector<Bike> BikeRentInfo::getBikeRentInfo(std::string& currentId, Repository* repository) {
    std::vector<Bike> bikeList;
    const std::vector<Bike>& rentBikeList = repository->getRentBikes();

    for (const auto& bike : rentBikeList) {
        if (bike.getRenter()->getId() == currentId) {
            bikeList.push_back(bike);
        }
    }
    // ������ ID �������� ����
    std::sort(bikeList.begin(), bikeList.end(), [](const Bike& a, const Bike& b) {
        return a.getBikeId() < b.getBikeId();
    });

    return bikeList;
}