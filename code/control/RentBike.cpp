#include <vector>
#include <fstream>
#include "RentBike.h"
#include "../boundary/RentBikeUI.h"
#include "../entity/Bike.h"

/**
 * RentBike 구현 파일
 * 자전거 대여 기능을 담당하는 control 클래스의 메서드 구현을 포함.
 */

 // 사용자에게 자전거 대여 메뉴를 보여주는 UI 출력 시작
void RentBike::startInterface(std::ofstream& out) {
    RentBikeUI ui;
    ui.startInterface(out);
}

/**
 * 자전거 대여 처리 함수
 * @param bikeId - 대여할 자전거의 ID
 * @param currentId - 현재 로그인한 회원의 ID
 * @param repository - 자전거 및 회원 데이터를 관리하는 저장소
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