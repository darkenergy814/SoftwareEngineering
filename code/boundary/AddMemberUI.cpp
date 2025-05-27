#include "AddMemberUI.h"
#include "../control/AddMember.h"
#include "../repository/Repository.h"
/**
 * AddMemberUI ������
 */

 // UI ����� ���� �Լ�: "1.1. ȸ������"�� ���
void AddMemberUI::startInterface(std::ofstream& outStream) {
    this->out = &outStream;
    *out << "1.1. ȸ������\n> ";
}


// �Է� ��Ʈ������ id, pw, phone�� �а� AddMember control�� ���� ��� ó��
void AddMemberUI::addMember(std::ifstream& inStream, std::ofstream& outStream, Repository* repository) {
    std::string id;
    std::string pw;
    std::string phone;
    inStream >> id >> pw >> phone;
    this->out = &outStream;
    AddMember control;
    Member newMember = control.addNewMember(id, pw, phone, repository);

    *out << id << " " << pw << " " << phone << "\n\n";
}