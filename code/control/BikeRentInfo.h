#include <string>
#include "../repository/Repository.h"

#ifndef _BIKERENTINFO_H
#define _BIKERENTINFO_H
/**
* BikeRentInfo Ŭ������ ���� �α����� ����ڰ� �뿩�� ������ ����� ��ȸ�ϴ� ����� ����ϴ� Control Ŭ����.
**/
class BikeRentInfo {
public: 
    void startInterface(std::ofstream& out);
    std::vector<Bike> getBikeRentInfo(std::string& currentId, Repository* repository);
};

#endif //_BIKERENTINFO_H