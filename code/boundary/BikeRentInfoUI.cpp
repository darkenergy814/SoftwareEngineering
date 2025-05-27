#include "BikeRentInfoUI.h"
#include "../control/BikeRentInfo.h"

/**
 * BikeRentInfoUI implementation
 */

 // ������ �뿩 ����Ʈ ����� ���� �������̽��� ���.
void BikeRentInfoUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "5.1. ������ �뿩 ����Ʈ\n";
}

// ���� �α��ε� ������� �뿩 ����� ���.
void BikeRentInfoUI::getBikeRentInfo(std::string& currentId, std::ofstream& out, Repository* repository) {
    BikeRentInfo control;
    std::vector<Bike> rentedBikes = control.getBikeRentInfo(currentId, repository);

    for (const auto& bike : rentedBikes) {
        out << "> " << bike.getBikeId() << " " << bike.getMaker() << "\n";
    }
    // ��� ������ ���� �ٹٲ�
    out << "\n";
}