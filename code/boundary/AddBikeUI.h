#include <string>
#include <fstream>
#include "../control/AddBike.h"
#include "../entity/Bike.h"

#ifndef _ADDBIKEUI_H
#define _ADDBIKEUI_H

class AddBikeUI {
private:
    std::string bikeId, maker;
    std::ofstream* out = nullptr;
public: 
    /**
    * ������ ��� �޴��� ���� �������̽� ���
    */
    void startInterface(std::ofstream& outStream);
    /**
     * ������ ������ �Է¹ް� ��� ó��
     *
     * @param inStream ����� �Է� ��Ʈ��
     * @param outStream ��� ��� ��Ʈ��
     * @param repository �����Ÿ� ������ �����
     */
    void addBike(std::ifstream& inStream, std::ofstream& outStream, Repository* repository);
};

#endif //_ADDBIKEUI_H