#include "AddBikeUI.h"
#include "../control/AddBike.h"
#include "../repository/Repository.h"

/**
 * AddBikeUI implementation
 */

 /**
  * ������ ��� �������̽� ����
  * - ȭ�鿡 3.1. ������ ��� �޽����� ���
  */
void AddBikeUI::startInterface(std::ofstream& outStream) {
	this->out = &outStream;
	*out << "3.1. ������ ���\n> ";
}

/**
 * ����ڷκ��� ������ ������ �Է¹ް�, ������ ��� ó�� ����
 *
 * @param inStream ������ id�� �����縦 �Է¹��� �Է� ��Ʈ��
 * @param outStream ��� ��� ��Ʈ��
 * @param repository ������ ����Ʈ�� �����ϴ� �����
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