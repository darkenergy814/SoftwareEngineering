#include "../repository/Repository.h"

#ifndef _RENTBIKE_H
#define _RENTBIKE_H
 /**
  * ������ �뿩 ����� ����ϴ� Control Ŭ����
  * - �뿩 �޴� �������̽� ǥ��
  * - �뿩 ��û ó��
  */
class RentBike {
private:
    std::ofstream* out = nullptr;
public: 
    /**
     * ������ �뿩 �������̽� ����
     * @param outStream ��� ��Ʈ��
     */
    void startInterface(std::ofstream& outStream);
    /**
     * ������� ������ �뿩 ��û�� ó��
     * @param bikeId �뿩�� ������ ID
     * @param currentId ���� �α����� ����� ID
     * @param repository ������/ȸ�� �����
     */
    void rentBike(const std::string& bikeId, std::string& currentId, Repository* repository);
};

#endif //_RENTBIKE_H