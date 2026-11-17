#include "tritemius.h"
using namespace std;

string Tritemius::generateTable(string key) {
    string table = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < key.size(); i++) {
        char c = tolower(key[i]);
        if (table.find(c) == string::npos) {
            table += c;
        }
    }
    for (int i = 0; i < alphabet.size(); i++) {
        char c = alphabet[i];
        if (table.find(c) == string::npos) {
            table += c;
        }
    }
    return table;
}

void Tritemius::encrypt(string message, string key) {
    ofstream file("encrypted.txt", std::ios_base::app);
    string table = generateTable(key);
    string ciphertext = "";
    for (int i = 0; i < message.size(); i++) {
        char c = tolower(message[i]);
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            ciphertext += table[index];
        }
        else {
            ciphertext += c;
        }
    }
    file << ciphertext << endl;
    file.close();
}

void Tritemius::decrypt(string message, string key) {
    ofstream file("decrypted.txt", std::ios_base::app);
    string table = generateTable(key);
    string plaintext = "";
    for (int i = 0; i < message.size(); i++) {
        char c = tolower(message[i]);
        if (c >= 'a' && c <= 'z') {
            int index = table.find(c);
            plaintext += 'a' + index;
        }
        else {
            plaintext += c;
        }
    }
    file << plaintext << endl;
    file.close();
}