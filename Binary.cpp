#include "binary.h"
using namespace std;

string Binary::binS(int input) {
	string binary = "";
	while (input > 0) {
		binary = to_string(input % 2) + binary;
		input /= 2;
	}
	return binary;
}
int Binary::decS(string binary) {
	int decimal = 0;
	int size = binary.size();
	for (int i = 0; i < size; i++) {
		int bit = binary[size - i - 1] - '0';
		decimal += bit * pow(2, i);
	}
	return decimal;
}

void Binary::encrypt(string input) {
	ofstream file("encrypted.txt", std::ios_base::app);
	string buff;
	int b;
	vector <string> result;
	for (int i = 0; i < input.length(); i++) {
		b = (int)input[i];
		buff = binS(b);
		result.push_back(buff);
	}
	for (int i = 0; i < result.size(); i++) {
		file << result[i] << endl;
	}
	file.close();
}

void Binary::decrypt(string input) {
	ofstream file("decrypted.txt", std::ios_base::app);
	string buff;
	int b;
	b = decS(input);
	buff = b;
	file << buff;
	file.close();
}
