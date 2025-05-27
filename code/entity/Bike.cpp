/**
 * Project Untitled
 */

#include "Bike.h"

/**
 * Bike ������
 * @param bikeId ������ ID
 * @param maker ������
 * ������ ��ü ���� �� ID, �����縦 �����ϰ� �ʱ� �뿩 ���´� false�� ����.
 */
Bike::Bike(const std::string& bikeId, const std::string& maker)
    : bikeId(bikeId), maker(maker), isRentedFlag(false), rentedBy(nullptr) {}

/**
* ������ ID�� ��ȯ
*/
std::string Bike::getBikeId() const {
    return bikeId;
}

/**
* ������ ������ ��ȯ
*/
std::string Bike::getMaker() const {
    return maker;
}

/**
* �����Ű� �뿩 ������ ���� ��ȯ
*/
bool Bike::isRented() const {
    return isRentedFlag;
}

/**
* �����Ÿ� ���� ȸ�� ��ü ��ȯ
*/
Member* Bike::getRenter() const {
    return rentedBy;
}

/**
* �������� �뿩 ���� ����
* @param flag true�̸� �뿩 ��, false�̸� �ݳ� ����
*/
void Bike::setRented(bool flag) {
    isRentedFlag = flag;
}

/**
* �������� �뿩�� ����
* @param m �뿩�� ȸ���� ������
*/
void Bike::setRenter(Member* m) {
    rentedBy = m;
}