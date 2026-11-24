#include <iostream>
#include "about.h"
#include "rsa.h"
#include "des.h"
#include "binary.h"
#include "caesar.h"
#include "secret.h"
#include "scytall.h"
#include "affine.h"
#include "atbash.h"
#include "tritemius.h"
#include "xor.h"
using namespace std;
int main() {
    fstream file;
    int choose, mode;
    string message;
    vector<string> menu = { "Binary", "Caesar", "Scytall", "Affine", "Atbash", "Tritemius", "XOR", "DES", "RSA", "S0m3_S3cR3t" };
    // RSA
    int rsa_m;
    string rsa_msg, rsa_result = "";
    long long p, q, n, t, e, d;
    vector<long long> encryptedText, decryptedText;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<long long> dist(1000, 9999);
    //DES
    string des_msg, des_key, des_buff;
    // Tritemius
    string tr_key;
    // XOR
    string xor_key;
    about();
    cout << "Please choose encryption mode: " << endl;
    for (int i = 0; i < menu.size(); i++) {
        cout << i << ". " << menu[i] << endl;
    }
    cout << "+-----------------------------------------------+" << endl;
    cout << "| PLEASE BE SURE THAT YOU HAVE READ README FILE |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << "Your encryption mode: ";
    cin >> choose;
    switch (choose) {
    case 0:
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                Binary::encrypt(message);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                Binary::decrypt(message);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;
        }

        break;
    case 1:
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        int key;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Please enter Caesar key: ";
            cin >> key;
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                Caesar::encrypt(message, key);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Please enter Caesar key: ";
            cin >> key;
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                Caesar::decrypt(message, key);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;
        }
        break;
    case 2:
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Please enter Scytall key: ";
            cin >> key;
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                Scytall::encrypt(message, key);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Please enter Scytall key: ";
            cin >> key;
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                Caesar::decrypt(message, key);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;
        }
        break;
    case 3:
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                Affine::encrypt(message);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                Affine::decrypt(message);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;
        }
        break;
    case 4:
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                Atbash::encrypt(message);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                Atbash::decrypt(message);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;
        }
        break;
    case 5: //Tritemius
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Please enter Tritemius key: ";
            cin >> tr_key;
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                Tritemius::encrypt(message, tr_key);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Please enter Tritemius key: ";
            cin >> tr_key;
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                Tritemius::decrypt(message, tr_key);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;

        }
        break;
    case 6: //XOR
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Please enter XOR key: ";
            cin >> xor_key;
            cout << "Encrypting ur data from \"data.txt\" file." << endl;
            file.open("data.txt");
            while (getline(file, message)) {
                XOR::encrypt(message, xor_key);
            }
            file.close();
            cout << "Ur data encrypted and saved in \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Please enter XOR key: ";
            cin >> xor_key;
            cout << "Decrypting ur data from \"encrypted.txt\" file." << endl;
            file.open("encrypted.txt");
            while (getline(file, message)) {
                XOR::decrypt(message, xor_key);
            }
            file.close();
            cout << "Data decrypted and saved in \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided!" << endl;
            break;

        }
        break;
    case 7: //DES
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Please enter DES key: ";
            cin >> des_key;
            file.open("data.txt");
            while (file >> des_msg) {
                DES::encode(des_msg, des_key);
            }
            file.close();
            cout << "Data encrypted to \"encrypted.txt\" file." << endl;
            break;
        case 2:
            cout << "Please enter DES key: ";
            cin >> des_key;
            file.open("encrypted.txt");
            while (file >> des_msg) {
                des_buff = DES::encode(des_msg, des_key);
                DES::decode(des_msg, des_key);
            }
            file.close();
            cout << "Data decrypted to \"decrypted.txt\" file." << endl;
            break;
        default:
            cout << "No such option provided." << endl;
            break;
        }
        break;
    case 8: //RSA
        cout << "Choose mode: \n1. Encrypt\n2. Decrypt" << endl;
        long long buff;
        cin >> mode;
        switch (mode) {
        case 1:
            cout << "Enter:\n1. You have a key and you want to encrypt\n2. You want to generate key and encrypt " << endl;
            cin >> rsa_m;
            switch (rsa_m) {

            case 1:

                cout << "Please enter your RSA public key (n,e): ";
                cin >> n >> e;
                file.open("data.txt");
                while (getline(file, rsa_msg)) {
                    for (long int i = 0; i < rsa_msg.length(); i++)
                    {
                        buff = RSA::encrypt(rsa_msg[i], e, n);
                        encryptedText.push_back(buff);
                    }
                }
                file.close();
                file.open("encrypted.txt");
                for (int i = 0; i < encryptedText.size(); i++) {
                    file << encryptedText[i] << endl;
                }
                cout << "Data encrypted to \"encrypted.txt\" file." << endl;
                file.close();
                break;
            case 2:
                // Генерация двух простых чисел p и q

                while (true) {
                    p = dist(gen);
                    if (RSA::isPrime(p)) {
                        break;
                    }
                }
                while (true) {
                    q = dist(gen);
                    if (RSA::isPrime(q) && q != p) {
                        break;
                    }
                }
                n = p * q;

                t = (p - 1) * (q - 1);

                e = RSA::calculateE(t);

                d = RSA::calculateD(e, t);

                cout << "\nRSA public key is (n = " << n << ", e = " << e << ")" << endl;
                cout << "RSA private key is (n = " << n << ", d = " << d << ")" << endl;
                file.open("data.txt");
                while (getline(file, rsa_msg)) {
                    for (long int i = 0; i < rsa_msg.length(); i++)
                    {
                        buff = RSA::encrypt(rsa_msg[i], e, n);
                        encryptedText.push_back(buff);
                    }
                }
                file.close();
                file.open("encrypted.txt");
                for (int i = 0; i < encryptedText.size(); i++) {
                    file << encryptedText[i] << endl;
                }
                cout << "Data encrypted to \"encrypted.txt\" file." << endl;
                file.close();
                break;
            default:
                cout << "No such option provided" << endl;
                break;
            }
            break;
        case 2:
            long long ms;
            cout << "Please enter RSA private key(n,d): ";
            cin >> n >> d;
            file.open("encrypted.txt");
            while (file >> ms) {
                encryptedText.push_back(ms);
            }
            file.close();
            for (int i = 0; i < encryptedText.size(); i++) {
                ms = RSA::decrypt(encryptedText[i], d, n);
                decryptedText.push_back(ms);
            }
            for (int i = 0; i < decryptedText.size(); i++) {
                rsa_result += decryptedText[i];
            }
            file.open("decrypted.txt");
            file << rsa_result << endl;
            file.close();
            cout << "Data decrypted to \"decrypted.txt\" file." << endl;
        }
        break;
    case 9:
        Sweap();
        s0m3();
        Sweap();
        s3cr3t();
        break;
    default:
        cout << "Sorry, we dont have such option yet" << endl;
        cout << "End of program" << endl;
        break;
    }

}