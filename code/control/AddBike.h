#include <vector>
#include "../entity/Bike.h"
#include "../repository/Repository.h"

#ifndef _ADDBIKE_H
#define _ADDBIKE_H

/**
 * AddBike Ŭ������ ������ ����� ����ϴ� Control Ŭ����.
 * UI�� Repository ���̿��� ������ �����͸� ó��.
 */
class AddBike {
public:
    /**
     * ������ ��� �������̽� ���� �Լ�
     * @param out ��� ��Ʈ�� (�α� ��Ͽ�)
     */
    void startInterface(std::ofstream& out);
    /**
     * ���ο� ������ ��ü�� �����ϰ� Repository�� ����
     * @param bikeId ������ ���� ID
     * @param maker ������ �̸�
     * @param repository ������ �����
     * @return ������ Bike ��ü
     */
    Bike bike(const std::string& bikeId, const std::string& maker, Repository* repository);
};

#endif //_ADDBIKE_H