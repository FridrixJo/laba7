#include <iostream>
#include <iomanip>
#include <string>
#include "..\..\StaticLib\StaticLib\header.h";

int main()
{
    int a, b;
    std::cout << "Enter 2 random numbers\n";
    std::cout << "They will be turned to inverse code\n";
    std::cin >> a >> b;
    std::cout << "\n";

    std::string s1, s2;
    if (a < 0) {
        s1 = converterToBinaryCode(a);
        s1 = getInverseCode(s1);
        std::cout << std::setw(35) << "1 num :" << std::setw(15) << s1 << "\n";
    }
    else {
        s1 = converterToBinaryCode(a);
        std::cout << std::setw(35) << "1 num :" << std::setw(15) << s1 << "\n";
    }
    if (b < 0) {
        s2 = converterToBinaryCode(b);
        s2 = getInverseCode(s2);
        std::cout << std::setw(35) << "2 num :" << std::setw(15) << s2 << "\n";
    }
    else {
        s2 = converterToBinaryCode(b);
        std::cout << std::setw(35) << "2 num :" << std::setw(15) << s2 << "\n";
    }

    std::string sum;
    if (a < 0 || b < 0 || a < 0 && b < 0) {
        sum = sumInverseCodes(s1, s2);
        sum = getInverseCode(sum);
    }
    else {
        sum = sumInverseCodes(s1, s2);
    }

    std::cout << "\n\n";

    int res;
    res = converterFromBinaryCode(sum);
    std::cout << std::setw(35) << "The answer in 10 numeral syster :" << std::setw(15) << res << "\n";

    if (res > 0) {
        std::string s = converterToBinaryCode(res);
        std::cout << std::setw(35) << "The answer in added code :" << std::setw(15) << s << "\n";
    }
    else {
        std::string s = converterToBinaryCode(res);
        s = getInverseCode(s);
        s = converterToAddedCode(s);
        std::cout << std::setw(35) << "The answer in added code :" << std::setw(15) << s << "\n";
    }
    return 0;
}
