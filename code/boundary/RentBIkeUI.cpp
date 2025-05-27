#include <fstream>
#include "RentBikeUI.h"

/**
 * RentBIkeUI implementation
 */

 /**
  * �뿩 �޴� ���� ���
  */
void RentBikeUI::startInterface(std::ofstream& outStream) {
	this->out = &outStream;
	*out << "4.1. ������ �뿩\n> ";
}

/**
 * ������ �뿩 ó��
 * - bikeId�� �Է����� �ް�
 * - Control ������ ȣ���Ͽ� �뿩 ��û ó��
 * - ����� ���
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