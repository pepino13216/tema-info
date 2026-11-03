#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[201];
    cin.getline(s, 201);
    char* p = strtok(s, " ");
    while (p != nullptr) {
        int c = 0;
        for (int i = 0; p[i] != '\0'; i++) {
            char ch = p[i];
            if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
            if (ch >= 'a' && ch <= 'z' && strchr("aeiou", ch) == nullptr) c++;
        }
        if (c <= 3) cout << p << endl;
        p = strtok(nullptr, " ");
    }
    return 0;
}
