#include "affine.h"
using namespace std;
int Affine::Inverse() {
    int a = 5;
    int m = 26;
    a = a % m;
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;
}

void Affine::encrypt(string message) {
    int a = 5;
    int b = 8;
    int m = 26;
    ofstream file("encrypted.txt", std::ios_base::app);
    string ciphertext = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (isalpha(c)) {
            c = toupper(c);
            int x = c - 'A';
            int y = (a * x + b) % m;
            ciphertext += (char)('A' + y);
        }
        else {
            ciphertext += c;
        }
    }
    file << ciphertext;
    file.close();
}

void Affine::decrypt(string message) {
    int a = 5;
    int b = 8;
    int m = 26;
    ofstream file("decrypted.txt", std::ios_base::app);
    string plaintext = "";
    int a_inv = Affine::Inverse();
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (isalpha(c)) {
            c = toupper(c);
            int y = c - 'A';
            int x = (a_inv * (y - b + m)) % m;
            plaintext += (char)('A' + x);
        }
        else {
            plaintext += c;
        }
    }
    file << plaintext;
    file.close();
}