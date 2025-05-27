#include <string>

#ifndef _USER_H
#define _USER_H

/**
 * ���� ����ڿ� ���� ���� ������ �����ϴ� �߻�ȭ�� �⺻ Ŭ����.
 * ȸ��(Member), ������(Admin) ���� ���� �Ӽ�(id, password)�� ����.
 */

class User {
protected:
    std::string id;
    std::string password;
public: 
    /**
     * ������
     * @param id ����� ID
     * @param pw ����� ��й�ȣ
     */
    User(const std::string& id, const std::string& pw);

    /**
     * ����� ID�� ��ȯ.
     */
    virtual std::string getId() const;
    
    /**
     * ����� ��й�ȣ�� ��ȯ.
     */
    virtual std::string getPassword() const;
};

#endif //_USER_H