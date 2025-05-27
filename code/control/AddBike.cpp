
#include <string>
#include <fstream>
#include "AddBike.h"
#include "../boundary/AddBikeUI.h"

/**
 * startInterface
 * ������ ��� UI�� �������̽� ����� ����.
 * @param out ��� ��Ʈ��
 */
void AddBike::startInterface(std::ofstream& out) {
    AddBikeUI ui;
    ui.startInterface(out);
}

/**
 * bike
 * ������ ��ü�� �����ϰ� Repository�� ���.
 * @param bikeId ����� �������� ID
 * @param maker ������
 * @param repository ������ ����� �����ϴ� �����
 * @return ��ϵ� Bike ��ü
 */
Bike AddBike::bike(const std::string& bikeId, const std::string& maker, Repository* repository) {
    Bike b(bikeId, maker);
    repository->addBike(b);
    return b;
}