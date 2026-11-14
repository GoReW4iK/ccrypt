#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include <windows.h>
#include <cstdlib>
inline void Sweap() {
#ifdef _WIN32 // проверка операционной системы
    std::system("cls"); // очистка терминала в Windows
#else
    std::system("clear"); // очистка терминала в Linux и macOS
#endif
}
inline void about() {
    std::string b = "101000011011111110111";
    std::string a = "Created by:";
    std::string c = R"(
 __          __  _                            _______    
 \ \        / / | |                          |__   __|   
  \ \  /\  / /__| | ___ ___  _ __ ___   ___     | | ___  
   \ \/  \/ / _ \ |/ __/ _ \| '_ ` _ \ / _ \    | |/ _ \ 
    \  /\  /  __/ | (_| (_) | | | | | |  __/    | | (_) |
     \/  \/ \___|_|\___\___/|_| |_| |_|\___|    |_|\___/ 
                                                         
)";
    std::string lib = R"(
   _____ _____                  _   
  / ____/ ____|                | |  
 | |   | |     _ __ _   _ _ __ | |_ 
 | |   | |    | '__| | | | '_ \| __|
 | |___| |____| |  | |_| | |_)| |_ 
  \_____\_____|_|   \__, | .__/ \__|
                     __/ | |        
                    |___/|_|        
)";
    std::string nick = R"(
   _____       _____   __          ___  _   _ _  __
  / ____|     |  __ \  \ \        / / || | (_) |/ /
 | |  __  ___ | |__) |__\ \  /\  / /| || |_ _| ' / 
 | | |_ |/ _ \|  _  // _ \ \/  \/ / |__   _| |  <  
 | |__| | (_) | | \ \  __/\  /\  /     | | | | . \ 
  \_____|\___/|_|  \_\___| \/  \/      |_| |_|_|\_\
                                                   
)";

    for (int i = 0; i < b.length(); i++) {
        std::cout << b[i];
        Sleep(75);
    }
    Sleep(1000);
    for (int i = 0; i < b.length(); i++) {
        std::cout << "\b \b";
        Sleep(60);
    }
    Sleep(1000);
    for (int i = 0; i < a.length(); i++) {
        std::cout << a[i];
        Sleep(60);
    }
    std::cout << std::endl;
    for (int i = 0; i < nick.length(); i++) {
        std::cout << nick[i];
        Sleep(5);
    }
    Sleep(1500);
    Sweap();
    for (int i = 0; i < c.length(); i++) {
        std::cout << c[i];
        Sleep(5);
    }
    for (int i = 0; i < lib.length(); i++) {
        std::cout << lib[i];
        Sleep(1);
    }
    std::cout << std::endl;
    Sleep(1500);
    Sweap();
    for (int i = 0; i < lib.length(); i++) {
        std::cout << lib[i];
    }
    std::cout << std::endl;
}
