#include "../control/RentBike.h"
#include "../repository/Repository.h"

#ifndef _RENTBIKEUI_H
#define _RENTBIKEUI_H

/**
 * RentBikeUI Ŭ������ ������ �뿩 ��û�� UI �������� ó��
 * ����� �Է��� �޾� Control ����(RentBike)�� ȣ��
 */
class RentBikeUI {
private:
    std::ofstream* out = nullptr;
public: 
    /**
     * 4.1 �޴� ��� ���
     */
    void startInterface(std::ofstream& outStream);
    /**
     * ������ �뿩 ó��
     * @param inStream ����� �Է� ��Ʈ��
     * @param currentId ���� �α����� ����� ID
     * @param outStream ��� ��Ʈ��
     * @param repository �����
     */
    void rentBike(std::ifstream& inStream, std::string& currentId, std::ofstream& outStream, Repository* repository);
};

#endif //_RENTBIKEUI_H