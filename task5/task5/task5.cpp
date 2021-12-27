#include <iostream>

int Input() {
    int a;
    while (!(std::cin >> a)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
        std::cout << "!!!WRONG INPUT!!!\tTRY AGAIN\n";
    }
    return a;
}

std::string ArabucToRoman(int n) {
    int arabic[13] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    std::string roman[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    std::string s = "";
    for (int i = 0; i < 13; i++) {
        while (n >= arabic[i]) {
            s += roman[i];
            n -= arabic[i];
        }
    }
    return s;
}


int main()
{
    std::cout << "Enter number = ";
    int n = Input();
    std::cout << "Your number in Roman system = " << ArabucToRoman(n) << "\n";
    return 0;
}
