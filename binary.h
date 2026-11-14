#pragma once
#include <string>
#include <vector>
#include <fstream>
namespace Binary {
	void encrypt(std::string input);
	void decrypt(std::string input);
	std::string binS(int input);
	int decS(std::string input);
}