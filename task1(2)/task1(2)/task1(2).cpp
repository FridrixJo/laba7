#include <iostream>
#include <iomanip>
#include <string>
#include "..\..\StaticLib\StaticLib\header.h"


int main()
{
    std::cout << "For convenience enter the number in ten numeral system\n";
    std::cout << "It will turn to nine numeral system\n";
    int a;
    std::cin >> a;
    int b = a;
    char* arr = new char[10];
    int k = 0;
    while (a) {
        int remainder = a % 9;
        char item = static_cast<char>(remainder + 48);
        AddItem(arr, k, item);
        k++;
        a -= remainder;
        a /= 9;
    }
    
    std::cout << std::setw(20) << "Your number : " << convertToNine(arr, k) << " (9)\n";
    std::cout << std::setw(20) << "Your final number : " << convertToTwelve(b) << " (12)\n";
    return 0;
}
