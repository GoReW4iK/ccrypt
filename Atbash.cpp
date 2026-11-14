#include "atbash.h"
using namespace std;
void Atbash::encrypt(string message) {
    ofstream file("encrypted.txt", std::ios_base::app);
    string ciphertext = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int n = alphabet.length();

    for (char c : message) {
        if (isalpha(c)) {
            char lower_c = tolower(c);
            int index = alphabet.find(lower_c);

            if (index == string::npos) {
                ciphertext += c;
            }
            else {
                char encrypted_c = alphabet[n - 1 - index];
                ciphertext += isupper(c) ? toupper(encrypted_c) : encrypted_c;
            }
        }
        else {
            ciphertext += c;
        }
    }
    file << ciphertext << endl;
    file.close();
}

void Atbash::decrypt(string message) {
    ofstream file("decrypted.txt", std::ios_base::app);
    string ciphertext = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int n = alphabet.length();

    for (char c : message) {
        if (isalpha(c)) {
            char lower_c = tolower(c);
            int index = alphabet.find(lower_c);

            if (index == string::npos) {
                ciphertext += c;
            }
            else {
                char encrypted_c = alphabet[n - 1 - index];
                ciphertext += isupper(c) ? toupper(encrypted_c) : encrypted_c;
            }
        }
        else {
            ciphertext += c;
        }
    }
    file << ciphertext << endl;
    file.close();
    // метод одинаков для шифрования и дешифрования
}