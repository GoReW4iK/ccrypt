#include "xor.h"

void XOR::encrypt(std::string message, std::string key) {
	std::ofstream file("encrypted.txt", std::ios_base::app);
	std::string result = "";
	for (size_t i = 0; i < message.length(); i++) {
		result += message[i] ^ key[i % key.length()];
	}
	file << result << std::endl;
	file.close();
}
void XOR::decrypt(std::string message, std::string key) {
	std::ofstream file("decrypted.txt", std::ios_base::app);
	std::string result;
	for (size_t i = 0; i < message.length(); i++) {
		result += message[i] ^ key[i % key.length()];
	}
	file << result << std::endl;
	file.close();
}