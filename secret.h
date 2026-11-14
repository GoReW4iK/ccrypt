#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include <windows.h>
inline void s0m3() {
    std::string text = "You choosed it by yourself...";
    std::string e = "3nj0y!";
    for (int i = 0; i < text.length(); i++) {
        std::cout << text[i];
        Sleep(60);
    }
    Sleep(1200);
    for (int i = 0; i < text.length(); i++) {
        std::cout << "\b \b";
        Sleep(55);
    }
    Sleep(1000);
    for (int i = 0; i < e.length(); i++) {
        std::cout << e[i];
        Sleep(250);
    }
    Sleep(3000);
}
inline void s3cr3t() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    std::cout << "\x1b[2J";
    for (;;) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for (j = 0; j < 6.28; j += 0.1) {
            for (i = 0; i < 6.28; i += 0.07) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        std::cout << "\x1b[H";
        for (k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        Sleep(15);
    }
}