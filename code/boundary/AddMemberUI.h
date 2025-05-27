#include <string>
#include <fstream>
#include "../control/AddMember.h"

#ifndef _ADDMEMBERUI_H
#define _ADDMEMBERUI_H
/**
 * AddMemberUI Ŭ����
 * - ����� �������̽� �������� ȸ�� ���� �޴��� �����ְ� �Է��� �޾� ó��.
 */
class AddMemberUI {
private:
    std::ofstream* out = nullptr;;

public: 
    // ȸ������ �޴� ���, ���� ���� ��������� ��ü
    void startInterface(std::ofstream& outStream);
    // ����� �Է��� �޾� ȸ�� ���� ó��
    void addMember(std::ifstream& inStream, std::ofstream& outStream, Repository* repository);
};

#endif //_ADDMEMBERUI_H