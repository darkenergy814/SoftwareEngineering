/**
 * Project Untitled
 */
#include <vector>
#include <string>
#include <fstream>
#include "../control/Login.h"
#include "../repository/Repository.h"

#ifndef _LOGINUI_H
#define _LOGINUI_H

 /**
  * LoginUI Ŭ������ �α��� ����� UI(Boundary) ������ ����.
  * ����ڷκ��� �Է��� �޾� Login ��Ʈ�� Ŭ������ �����Ͽ� �α��� ������ ó��.
  */
class LoginUI {
private:
    std::ofstream* out = nullptr;
public:
    /**
    * �α��� UI�� ���� �������̽��� ���.
    */
    void startInterface(std::ofstream& out);
    /**
     * �α��� �Է��� �ް�, Login ��Ʈ�� ��ü�� ���� �α��� ������ ����.
     *
     * @param inStream �Է� ��Ʈ�� (����� �Է����κ��� id, pw ����)
     * @param outStream ��� ��Ʈ�� (�α��� ��� ���)
     * @param repository ȸ�� ������ ���� �ִ� ����� ��ü
     * @return �α����� ������� ID ���ڿ�
     */
    std::string login(std::ifstream& inStream, std::ofstream& outStream, Repository* repository);
};

#endif //_LOGINUI_H