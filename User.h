#pragma once
#include <string>

class User {
	std::string name_;
	std::string login_;
	std::string password_;

public:
	User() = default;
	User(const std::string& name, const std::string& login, const std::string& password);
	~User() = default;
	const std::string& getName() const;
	const std::string& getLogin() const;
	const std::string& getPassword() const;
};