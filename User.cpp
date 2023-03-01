#include <iostream>
#include "User.h"


User::User(const std::string& name, const std::string& login, const std::string& password) :
	name_(name), login_(login), password_(password) {}

const std::string& User::getName() const { return name_; }
const std::string& User::getLogin() const { return login_; }
const std::string& User::getPassword() const { return password_; }