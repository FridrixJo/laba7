#include <iostream>
#include <string>
#include "..\..\StaticLib\StaticLib\header.h";

int main()
{
    std::cout << "Enter two numbers and sign between them\n";
    int a, b;
    char sign;
    std::cin >> a >> sign >> b;
    std::cout << "\n";
    std::string s1 = tenToTwelve(a), s2 = tenToTwelve(b);
    std::cout << s1 << "\n";
    if (sign == '+') {
        std::cout << "addition (+)\n";
    }
    else if (sign == '-') {
        std::cout << "subtraction (-)\n";
    }
    else {
        std::cout << "addition (+)\n";
    }
    std::cout << s2 << "\n\n";
    std::cout << SumOfTwoStrings(a, b, sign) << "\tin (12) numeral system\n";
    return 0;
}
