#pragma once
#include <string>
#include <fstream>
namespace Caesar {
	void encrypt(std::string input, int k);
	void decrypt(std::string input, int k);
}