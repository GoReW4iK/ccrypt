#include "caesar.h"
using namespace std;

void Caesar::encrypt(string input, int k) {
    ofstream file("encrypted.txt", std::ios_base::app);
    string result = "";
    int len = input.length();
    for (int i = 0; i < len; i++)
    {
        if (isalpha(input[i]))
        {
            if (isupper(input[i]))
            {
                result += char(int(input[i] + k - 65) % 26 + 65);
            }
            else result += char(int(input[i] + k - 97) % 26 + 97);
        }
        else result += input[i];
    }
    file << result << endl;
    file.close();
}
void Caesar::decrypt(string input, int k) {
    ofstream file("decrypted.txt", std::ios_base::app);
    string result = "";
    int len = input.length();
    for (int i = 0; i < len; i++)
    {
        if (isalpha(input[i]))
        {
            if (isupper(input[i]))
            {
                result += char(int(input[i] - k - 65 + 26) % 26 + 65);
            }
            else result += char(int(input[i] - k - 97 + 26) % 26 + 97);
        }
        else result += input[i];
    }
    file << result << endl;
    file.close();
}