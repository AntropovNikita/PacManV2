#pragma once

#include <exception>


class WrongFileNameException : public std::exception
{
	private:
		std::string __message;

	public:
		WrongFileNameException(const std::string& msg) : __message(msg) {}

		std::string what() { return "Wrong file name: " + this->__message; }
};

class NoSuchFileException : public std::exception
{
	private:
		std::string __message;

	public:
		NoSuchFileException(const std::string& msg) : __message(msg) {}

		std::string what() { return "No such file: " + this->__message; }
};

class FileOpenException : public std::exception
{
	private:
		std::string __message;

	public:
		FileOpenException(const std::string& msg) : __message(msg) {}

		std::string what() { return "File open fail: " + this->__message; }
};

class FileReadExeption : public std::exception {
private:
	std::string __message;

public:
	FileReadExeption(const std::string& msg) : __message(msg) {}

	std::string what() { return "File read fail: " + this->__message; }

};
