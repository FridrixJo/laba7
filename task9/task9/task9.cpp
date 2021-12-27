#include <iostream>

std::string tenToInvThree(long long a) {
    std::string s = "";
    while (a) {
        int b = a % 3;
        int p = b;
        if (b == 0) {
            b = 3;
        }
        char sign = static_cast<char>(b + 48);
        s.push_back(sign);
        a -= p;
        a /= 3;
    }
    std::string s2 = "";
    for (int i = s.size() - 1; i > -1; i--) {
        s2.push_back(s[i]);
    }
    return s2;
}

int main()
{
    std::cout << "Enter num\n";
    unsigned long long a;
    std::cin >> a;
    std::cout << tenToInvThree(a);
    return 0;
}
