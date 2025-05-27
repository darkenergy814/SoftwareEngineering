
#include <string>
#include <fstream>
#include "AddBike.h"
#include "../boundary/AddBikeUI.h"

/**
 * startInterface
 * 자전거 등록 UI의 인터페이스 출력을 시작.
 * @param out 출력 스트림
 */
void AddBike::startInterface(std::ofstream& out) {
    AddBikeUI ui;
    ui.startInterface(out);
}

/**
 * bike
 * 자전거 객체를 생성하고 Repository에 등록.
 * @param bikeId 등록할 자전거의 ID
 * @param maker 제조사
 * @param repository 자전거 목록을 저장하는 저장소
 * @return 등록된 Bike 객체
 */
Bike AddBike::bike(const std::string& bikeId, const std::string& maker, Repository* repository) {
    Bike b(bikeId, maker);
    repository->addBike(b);
    return b;
}