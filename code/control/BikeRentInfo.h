#include <string>
#include "../repository/Repository.h"

#ifndef _BIKERENTINFO_H
#define _BIKERENTINFO_H
/**
* BikeRentInfo 클래스는 현재 로그인한 사용자가 대여한 자전거 목록을 조회하는 기능을 담당하는 Control 클래스.
**/
class BikeRentInfo {
public: 
    void startInterface(std::ofstream& out);
    std::vector<Bike> getBikeRentInfo(std::string& currentId, Repository* repository);
};

#endif //_BIKERENTINFO_H