#pragma once
#include "User.h"
#include "Message.h"
#include <vector>
#include <exception>
#include <memory>

class Methods {
	std::vector<User> UserSpisok;				 //������ ������������������ �������������
	std::vector<Message> messageList;			 //������� ������, ������� ������ ��������� � ����
	std::shared_ptr<User> currentUser = nullptr; //��������� ��������� �� �������� ������������

public:
	Methods() = default;
	~Methods() = default;

	int userLogin = 0;									// ��� ������� �������� ������
	std::shared_ptr<User>getCurrentUser() const;
	std::shared_ptr<User>getUserByName(const std::string& name) const;
	std::shared_ptr<User>getUserByLogin(const std::string& login) const;

	void Menu();
	bool FindName(const std::string& name);							      //�������� �����
	bool FindLogin(const std::string& login);							  //�������� ������
	void NewUser();														  //�������� ������ ������������
	bool UserSearch(const std::string& login, const std::string& password);//����� ������������ �� ������ � ������
	void PrintNamesUsers();												  //��������� ������ ������������������ �������������
	int FindUserinUserSpisok(const std::string& name);					  //�������� ��������� �� ������� ���
	void setPrivateShowChat() const;									  //������ ������ ���������
	void setAllShowChat() const;										  //������ ����� ���������
	void setAddMessage();												  //���������� ��������� � ������
	void currrenNull();
};

class LoginExp : public std::exception {			//���������� ���� ������ ����� "all"
public:
	const char* what() const noexcept override {
		return "ERROR: ����� �����!\n\n";
	}
};

class NameExp : public std::exception {			//���������� ���� ������� ��� "all"
public:
	const char* what()const noexcept override {
		return "ERROR: ��� ������������ ������!\n\n";
	}
};
