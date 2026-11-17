#pragma once
#include <string>
#include <fstream>
namespace Tritemius {
	std::string generateTable(std::string key);
	void encrypt(std::string message, std::string key);
	void decrypt(std::string message, std::string key);
}