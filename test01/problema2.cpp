#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);
    int nr = 0, v, c;
    char* p = strtok(s, " ");
    while (p != nullptr) {
        v = 0;
        c = 0;
        for (int i = 0; p[i] != '\0'; i++) {
            char ch = p[i];
            if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
            if (ch >= 'a' && ch <= 'z') {
                if (strchr("aeiou", ch) != nullptr) v++;
                else c++;
            }
        }
        if (v > 0 && v == c) nr++;
        p = strtok(nullptr, " ");
    }
    if (nr == 0) cout << "nu există";
    else cout << nr;
    return 0;
}
