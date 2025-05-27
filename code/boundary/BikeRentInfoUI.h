/**
 * Project Untitled
 */
#include <fstream>
#include "../control/BikeRentInfo.h"

#ifndef _BIKERENTINFOUI_H
#define _BIKERENTINFOUI_H
 /**
  * BikeRentInfoUI Ŭ������ ������ �뿩 ���� ��ȸ ����� UI(Boundary) ����.
  * ����ڷκ����� ��û�� �޾� ��Ʈ�ѷ�(BikeRentInfo)�� �����Ͽ�
  * �뿩�� ������ ����� ���.
  */
class BikeRentInfoUI {
private:
    std::ofstream* out = nullptr;
public: 
    /**
     * �뿩 ���� ��ȸ �޴� ��� ���
     * @param out ��� ��Ʈ��
     */
    void startInterface(std::ofstream& out);
    /**
     * ���� �α����� ������� �뿩 ������ ����� ���
     * @param currentId ���� �α����� ����� ID
     * @param out ��� ��Ʈ��
     * @param repository ������ �� ȸ�� ������ ����� �����
     */
    void getBikeRentInfo(std::string& currentId, std::ofstream& out, Repository* repository);
};

#endif //_BIKERENTINFOUI_H