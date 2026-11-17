#include "scytall.h"
using namespace std;
void Scytall::encrypt(string message, int key) {
	ofstream file("encrypted.txt", std::ios_base::app);
    int len = message.length();
    int rows = ceil((double)len / key);
    char** matrix = new char* [rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new char[key];
    }
    int k = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < key; j++)
        {
            if (k < len)
                matrix[i][j] = message[k++];
            else
                matrix[i][j] = ' ';
        }
    }

    string cipher = "";

    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cipher += matrix[j][i];
        }
    }
	file << cipher;
	file.close();
}

void Scytall::decrypt(string message, int key) {
	ofstream file("decrypted.txt", std::ios_base::app);
    int len = message.length();
    int rows = ceil((double)len / key);
    char** matrix = new char* [rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new char[key];
    }

    int k = 0;

    for (int i = 0; i < key; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (k < len)
                matrix[j][i] = message[k++];
            else
                matrix[j][i] = ' ';
        }
    }

    string result = "";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < key; j++)
        {
            result += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
	file << result;
	file.close();
}