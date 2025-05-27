#include <vector>
#include "../entity/Bike.h"
#include "../repository/Repository.h"

#ifndef _ADDBIKE_H
#define _ADDBIKE_H

/**
 * AddBike 클래스는 자전거 등록을 담당하는 Control 클래스.
 * UI와 Repository 사이에서 자전거 데이터를 처리.
 */
class AddBike {
public:
    /**
     * 자전거 등록 인터페이스 시작 함수
     * @param out 출력 스트림 (로그 기록용)
     */
    void startInterface(std::ofstream& out);
    /**
     * 새로운 자전거 객체를 생성하고 Repository에 저장
     * @param bikeId 자전거 고유 ID
     * @param maker 제조사 이름
     * @param repository 자전거 저장소
     * @return 생성된 Bike 객체
     */
    Bike bike(const std::string& bikeId, const std::string& maker, Repository* repository);
};

#endif //_ADDBIKE_H