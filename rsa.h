#pragma once
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <random>
namespace RSA {
	bool isPrime(long int prime);
	long int calculateE(long int t);
	long int greatestCommonDivisor(long int e, long int t);
	long int calculateD(long int e, long int t);
	long long encrypt(long long i, long long e, long long n);
	long long decrypt(long long i, long long d, long long n);
}