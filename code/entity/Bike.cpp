/**
 * Project Untitled
 */

#include "Bike.h"

/**
 * Bike 생성자
 * @param bikeId 자전거 ID
 * @param maker 제조사
 * 자전거 객체 생성 시 ID, 제조사를 설정하고 초기 대여 상태는 false로 설정.
 */
Bike::Bike(const std::string& bikeId, const std::string& maker)
    : bikeId(bikeId), maker(maker), isRentedFlag(false), rentedBy(nullptr) {}

/**
* 자전거 ID를 반환
*/
std::string Bike::getBikeId() const {
    return bikeId;
}

/**
* 자전거 제조사 반환
*/
std::string Bike::getMaker() const {
    return maker;
}

/**
* 자전거가 대여 중인지 여부 반환
*/
bool Bike::isRented() const {
    return isRentedFlag;
}

/**
* 자전거를 빌린 회원 객체 반환
*/
Member* Bike::getRenter() const {
    return rentedBy;
}

/**
* 자전거의 대여 상태 설정
* @param flag true이면 대여 중, false이면 반납 상태
*/
void Bike::setRented(bool flag) {
    isRentedFlag = flag;
}

/**
* 자전거의 대여자 설정
* @param m 대여한 회원의 포인터
*/
void Bike::setRenter(Member* m) {
    rentedBy = m;
}