#pragma once
#include <string>

class Message {
	std::string fromMessage_;
	std::string toMessage_;
	std::string text_;
public:
	Message() = default;
	Message(const std::string& fromMessage, const std::string& toMessage, const std::string& text);
	~Message() = default;

	const std::string& getFromMessage() const;
	const std::string& getToMessage() const;
	const std::string& getText() const;
};