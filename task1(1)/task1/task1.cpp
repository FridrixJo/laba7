#include <iostream>
#include "..\..\StaticLib\StaticLib\header.h"
#include <string>
#include <iomanip>

int main()
{
    std::cout << "For convenience enter the number in ten numeral system\n";
    std::cout << "It will turn to nine numeral system\n";
    int a;
    std::cin >> a;
    std::cout << std::setw(20) << "Your number : " << tenToNine(a) << " (9)\n";
    std::cout << std::setw(20) << "Your final number : " << tenToTwelve(a) << " (12)\n";
    return 0;
}
