#include <vector>
#include <fstream>
#include "RentBike.h"
#include "../boundary/RentBikeUI.h"
#include "../entity/Bike.h"

/**
 * RentBike ���� ����
 * ������ �뿩 ����� ����ϴ� control Ŭ������ �޼��� ������ ����.
 */

 // ����ڿ��� ������ �뿩 �޴��� �����ִ� UI ��� ����
void RentBike::startInterface(std::ofstream& out) {
    RentBikeUI ui;
    ui.startInterface(out);
}

/**
 * ������ �뿩 ó�� �Լ�
 * @param bikeId - �뿩�� �������� ID
 * @param currentId - ���� �α����� ȸ���� ID
 * @param repository - ������ �� ȸ�� �����͸� �����ϴ� �����
 */
void RentBike::rentBike(const std::string& bikeId, std::string& currentId, Repository* repository) {
    Member* currentMember = repository->findMemberById(currentId);
    if (currentMember == nullptr) return;

    std::vector<Bike> bikes = repository->getBikes();

    for (auto& b : bikes) {
        if (b.getBikeId() == bikeId && !b.isRented()) {
            repository->rentBike(b, currentMember);
            break;
        }
    }
}