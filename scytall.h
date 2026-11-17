#pragma once
#include <string>
#include <cmath>
#include <fstream>
namespace Scytall {
	void encrypt(std::string message, int k);
	void decrypt(std::string message, int k);
}