#include <iostream>

bool isDevided(int a, int b) {
    int x = a;
    while (a <= b) {
        if (a == b) {
            return true;
        }
        a += x;
    }
    return false;
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
    std::cout << "ENTER NUMBER  =  ";
    int a = Input();
    std::cout << "\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "type num\t";
        int var = Input();
        std::cout << std::boolalpha << (isDevided(a, var)) << "\n\n";
    }
    return 0;
}
