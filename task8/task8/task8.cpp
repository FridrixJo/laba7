#include <iostream>

std::string toBinaryCode(int a) {
    std::string s = "";
    while (a) {
        int d = a % 2;
        s.push_back(static_cast<char>(d + 48));
        a -= d;
        a /= 2;
    }
    std::string s1 = "";
    for (int i = s.size() - 1; i > -1; i--) {
        s1.push_back(s[i]);
    }
    return s1;
}

std::string getNumberString(int a) {
    std::string s = "";
    while (a) {
        s.push_back(static_cast<char>(a % 10 + 48));
        a /= 10;
    }
    std::string s1 = "";
    for (int i = s.size() - 1; i > -1; i--) {
        s1.push_back(s[i]);
    }
    return s1;
}

bool twoDemicalNumber(std::string s1, std::string s2) {
    bool status = false;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[i]) {
            status = true;
        }
        else {
            return false;
        }
    }
    return status;
}

int Input() {
    int a;
    while (!(std::cin >> a)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
        std::cout << "!!!WRONG INPUT!!!\tTRY AGAIN\n";
    }
    return a;
}

int main()
{
    std::cout << "Enter number = ";
    int n;
    std::cin >> n;
    std::string s1 = getNumberString(n), s2 = toBinaryCode(n);
    std::cout << s1 << " = " << s2 << " in binary system\n";
    std::cout << std::boolalpha << twoDemicalNumber(s1, s2);
    return 0;
}
