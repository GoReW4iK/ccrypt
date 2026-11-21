#include "rsa.h"
bool RSA::isPrime(long int prime) {
    long int i, j;

    j = (long int)sqrt((long double)prime);

    for (i = 2; i <= j; i++)
    {
        if (prime % i == 0)
        {
            return false;
        }
    }

    return true;
}
long int RSA::calculateE(long int t) {

    long int e;

    for (e = 2; e < t; e++)
    {
        if (greatestCommonDivisor(e, t) == 1)
        {
            return e;
        }
    }

    return -1;
}
long int RSA::greatestCommonDivisor(long int e, long int t) {
    while (e > 0)
    {
        long int myTemp;

        myTemp = e;
        e = t % e;
        t = myTemp;
    }

    return t;
}
long int RSA::calculateD(long int e, long int t) {
    long int d;
    long int k = 1;

    while (1)
    {
        k = k + t;

        if (k % e == 0)
        {
            d = (k / e);
            return d;
        }
    }
}
long long RSA::encrypt(long long i, long long e, long long n) {
    long long current, result;

    current = i - 97;
    result = 1;

    for (long int j = 0; j < e; j++)
    {
        result = result * current;
        result = result % n;
    }

    return result;
}
long long RSA::decrypt(long long i, long long d, long long n) {
    long long current, result;
    current = i;
    result = 1;
    for (long int j = 0; j < d; j++)
    {
        result = result * current;
        result = result % n;
    }
    return result + 97;
}