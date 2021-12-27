#include <iostream>
#include <iomanip>
#include "../../StaticLib/StaticLib/header.h";

int main()
{
    std::cout << "For convenience enter the number in ten numeral system\n";
    std::cout << "It will turn to binary numeral system in inverse code\n";
    long long a;
    std::cin >> a;
    std::cout << std::setw(45) << "Your number : " << a << "\n";
    std::string s = converterToBinaryCode(a);
    s = getInverseCode(s);
    std::cout << std::setw(45) << "Your number in inverse code : " << s << "\n";
    long long res = converterFromInverseCodeToNum(s);
    std::cout << std::setw(45) << "Your converted number : " << res << "\n";
    return 0;
}
