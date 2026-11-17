#pragma once
#include <string>
#include <fstream>
namespace XOR{
	void encrypt(std::string message, std::string key);
	void decrypt(std::string message, std::string key);
}