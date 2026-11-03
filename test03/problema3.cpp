#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '5') cout << "V";
        else if (s[i] == '7') cout << "VII";
        else if (s[i] == '*') cout << "@";
    }
    return 0;
}
