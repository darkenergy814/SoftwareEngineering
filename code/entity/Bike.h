#ifndef _BIKE_H
#define _BIKE_H

#include "Member.h"
#include <string>

class Member;
/**
 * Bike Ŭ������ ������ ������ �����ϴ� ����Ƽ Ŭ����.
 * �� �����Ŵ� ���� ID, ������ ����, �뿩 ����, �뿩�� ȸ�� ������ ����.
 */

class Bike {
private:
    std::string bikeId;
    std::string maker;
    bool isRentedFlag = false;
    Member* rentedBy = nullptr;;
public: 
    /**
     * ������
     * @param bikeId ������ ID
     * @param maker ������ ������
     */
    Bike(const std::string& bikeId, const std::string& maker);
    
    // ������ ID ��ȯ
    std::string getBikeId() const;
    
    // ������ ���� ��ȯ
    std::string getMaker() const;

    // �뿩 ���� ��ȯ
    bool isRented() const;

    // �뿩 ���� ����
    void setRented(bool flag);

    // �뿩 ȸ�� ����
    void setRenter(Member* m);

    // �뿩 ȸ�� ��ȯ
    Member* getRenter() const;
};

#endif //_BIKE_H