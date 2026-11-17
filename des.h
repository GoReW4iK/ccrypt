#pragma once
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>

#define DEBUG 0
namespace DES {
	std::string encode(std::string str, std::string key);
	std::string decode(std::string str, std::string key);
	void fill(std::string str);
	void formatSourceCode();
	void getIP0();
	std::string Feistel(std::string R, std::string K);
	std::string getPTransform(std::string str);
	std::string Feistel_SBOX(std::string str, int num);
	std::string E_expend(std::string str);
	std::string XORoperation(std::string a, std::string b);
	std::string iterationT_A(int begin, int end);
	std::string iterationT_D(int begin, int end);
	std::string getIP1(std::string str);
	std::string formatResult(std::string str);
	std::string formatAndReduceResult(std::string str);
	int Two2Ten(std::string num);
	std::string formatKey();
	std::string getPC1Key(std::string str);
	void get_C_D(std::string str);
	void getKeyI();
	void LS_1(std::string& str);
	void LS_2(std::string& str);
	std::string getPC2Key(std::string str);
	void getKeys();
}