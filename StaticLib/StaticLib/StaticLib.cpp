#include <iostream>
#include <string>
#include <iomanip>

void AddItem(char*& arr, int size, const char item) {
    char* newArray = new char[size + 1]; // creating a new dynamic array with size + 1 elements
    for (int i = 0; i < size; i++) {
        newArray[i + 1] = arr[i]; // copying elements to a new array from the 1st position
    }
    newArray[0] = item; // assigning the zero position of an array to a variable
    size++; // increasing the size of the array by one unit
    delete[] arr; // clearing heap of old array
    arr = newArray; // substitution of pointers
}

int tenToNine(int a) {
    int k = 0;
    int res = 0;
    while (a) {
        int b = a % 9;
        res += b * pow(10, k);
        k++;
        a -= b;
        a /= 9;
    }
    return res;
}

std::string convertToNine(char* arr, const int size) {
    std::string s = "";
    for (int i = 0; i < size; i++) {
        s.push_back(arr[i]);
    }
    return s;
}

std::string tenToTwelve(int a) {
    std::string s = "";
    int x = a;
    if (a < 0) {
        a = abs(a);
    }
    while (a) {
        int b = a % 12;
        int d = b;
        if (b > 9) {
            if (b == 10) {
                b = static_cast<char>(b);
                b = 'A';
            }
            else if (b == 11) {
                b = static_cast<char>(b);
                b = 'B';
            }
        }
        else {
            b = static_cast<char>((a % 12) + 48);
        }
        s.push_back(b);
        a -= d;
        a /= 12;
    }
    if (x < 0) {
        s.push_back('-');
    }
    std::string s2 = "";
    for (int i = s.size() - 1; i > -1; i--) {
        s2.push_back(s[i]);
    }
    return s2;
}

std::string convertToTwelve(int b) {
    char* arr = new char[10];
    int k = 0;
    while (b) {
        int remainder = b % 12;
        char item;
        if (remainder == 10) {
            item = static_cast<char>(remainder + 48);
            item = 'A';
        }
        else if (remainder == 11) {
            item = static_cast<char>(remainder + 48);
            item = 'B';
        }
        else {
            item = static_cast<char>(remainder + 48);
        }
        AddItem(arr, k, item);
        k++;
        b -= remainder;
        b /= 12;
    }
    std::string s = "";
    for (int i = 0; i < k; i++) {
        s.push_back(arr[i]);
    }
    return s;
}

std::string converterToBinaryCode(long long a) {
    long long x = a;
    a = abs(a);
    std::string s = "";
    while (a) {
        int d = a % 2;
        s.push_back(static_cast<char>(d + 48));
        a -= d;
        a /= 2;
    }
    if (s.size() < 9) {
        for (int i = s.size(); i < 8; i++) {
            s.push_back('0');
        }
        if (x > 0) {
            s[s.size() - 1] = '0';
        }
        else if (x < 0) {
            s[s.size() - 1] = '1';
        }
    }
    else if (s.size() < 17) {
        for (int i = s.size(); i < 16; i++) {
            s.push_back('0');
        }
        if (x > 0) {
            s[s.size() - 1] = '0';
        }
        else if (x < 0) {
            s[s.size() - 1] = '1';
        }
    }
    else if (s.size() < 33) {
        for (int i = s.size(); i < 32; i++) {
            s.push_back('0');
        }
        if (x > 0) {
            s[s.size() - 1] = '0';
        }
        else if (x < 0) {
            s[s.size() - 1] = '1';
        }
    }
    else if (s.size() < 65) {
        for (int i = s.size(); i < 64; i++) {
            s.push_back('0');
        }
        if (x > 0) {
            s[s.size() - 1] = '0';
        }
        else if (x < 0) {
            s[s.size() - 1] = '1';
        }
    }
    if (x < 0) {
        s[s.size() - 1] = '1';
    }
    std::string s2 = "";
    for (int i = s.size() - 1; i > -1; i--) {
        s2.push_back(s[i]);
    }
    return s2;
}

long long converterFromBinaryCode(std::string s) {
    long long res = 0;
    int d = 0;
    std::string s2 = s;
    for (int i = s.size() - 1; i > 0; i--) {
        res += static_cast<int>(s[i] - 48) * pow(2, d);
        d++;
    }
    if (s2[0] == '1') {
        res *= (-1);
    }
    return res;
}

std::string getInverseCode(std::string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '0') {
            s[i] = '1';
        }
        else {
            s[i] = '0';
        }
    }
    return s;
}

long long converterFromInverseCodeToNum(std::string s) {
    s = getInverseCode(s);
    long long res = converterFromBinaryCode(s);
    return res;
}

std::string plusOne(std::string s) {
    std::string s1 = "";
    for (int i = s.size() - 1; i > -1; i--) {
        s1.push_back(s[i]);
    }
    std::string s2 = "00000001";
    std::string s3 = "";
    for (int i = s1.size() - 1; i > -1; i--) {
        int a = static_cast<int>(s1[i] - 48);
        int b = static_cast<int>(s2[i] - 48);
        if (a + b == 0) {
            s3.push_back('0');
        }
        if (a + b == 1) {
            s3.push_back('1');
        }
        if (a + b == 2) {
            s1[i - 1]++;
            s3.push_back('0');
        }
        if (a + b == 3) {
            s1[i - 1]++;
            s3.push_back('1');
        }
    }
    return s3;
}

std::string converterToAddedCode(std::string s1) {
    std::string s2 = "00000001";
    std::string s3 = "";
    for (int i = s1.size() - 1; i > -1; i--) {
        int a = static_cast<int>(s1[i] - 48);
        int b = static_cast<int>(s2[i] - 48);
        if (a + b == 0) {
            s3.push_back('0');
        }
        if (a + b == 1) {
            s3.push_back('1');
        }
        if (a + b == 2) {
            s1[i - 1]++;
            s3.push_back('0');
        }
        if (a + b == 3) {
            s1[i - 1]++;
            s3.push_back('1');
        }
    }
    std::string s4 = "";
    for (int i = s3.size() - 1; i > -1; i--) {
        s4.push_back(s3[i]);
    }
    return s4;
}

std::string sumInverseCodes(std::string s1, std::string s2) {
    std::string s3 = "";
    for (int i = s1.size() - 1; i > -1; i--) {
        int a = static_cast<int>(s1[i] - 48);
        int b = static_cast<int>(s2[i] - 48);
        if (a + b == 0) {
            s3.push_back('0');
        }
        if (a + b == 1) {
            s3.push_back('1');
        }
        if (a + b == 2) {
            if (i == 1) {
                s3.push_back('0');
                s3 = plusOne(s3);
                break;
            }
            else {
                s1[i - 1]++;
                s3.push_back('0');
            }
        }
        if (a + b == 3) {
            if (i == 0) {
                s3.push_back('1');
                s3 = plusOne(s3);
                break;
            }
            else {
                s1[i - 1]++;
                s3.push_back('1');
            }
        }
    }
    std::string s4 = "";
    for (int i = s3.size() - 1; i > -1; i--) {
        s4.push_back(s3[i]);
    }
    return s4;
}

std::string SumOfTwoStrings(int a, int b, char sign) {
    std::string s1 = tenToTwelve(a);
    std::string s2 = tenToTwelve(b);
    int sum = a;
    if (sign == '+') {
        sum += b;
    }
    else if (sign == '-') {
        sum -= b;
    }
    else {
        std::cout << "Wrong sign, it was replaced to '+'\n";
        sum += b;
    }
    std::string Sum = tenToTwelve(sum);
    return Sum;
}