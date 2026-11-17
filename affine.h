#pragma once
#include <string>
#include <fstream>
namespace Affine {
	int Inverse();
	void encrypt(std::string message);
	void decrypt(std::string message);
}