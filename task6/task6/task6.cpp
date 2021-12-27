#include <iostream>

// 1 option , but it works too long with big nums 

/*
unsigned long long S(unsigned long long a) {
    unsigned long long res = 0;
    while (a) {
        res += a % 10;
        a /= 10;
    }
    return res;
}

void IntrestingNum() {
    std::cout << "Enter number\n";
    unsigned long long x;
    std::cin >> x;
    unsigned long long counter = 0;
    for (unsigned long long i = 1; i <= x; i++) {
        if (S(i + 1) < S(i)) {
            counter++;
        }
    }
    std::cout << counter << "\n";
}

void Ttimes(int t) {
    for (int i = 0; i < t; i++) {
        IntrestingNum();
    }
}

int main()
{
    std::cout << "Enter t\n";
    int t;
    std::cin >> t;
    Ttimes(t);
    return 0;
}*/

//2 option , works quickly

int main() {
    std::cout << "Enter number of tests\n";
    int t;
    std::cin >> t;
    while (t) {
        std::cout << "Enter number\n";
        unsigned long long n;
        std::cin >> n;
        std::cout << (n + 1) / 10 << "\n";
        t--;

    }
    return 0;
}

