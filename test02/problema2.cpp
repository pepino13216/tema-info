#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);
    int mx = -1, nr = 0, v;
    char* p = strtok(s, " ");
    while (p != nullptr) {
        v = 0;
        for (int i = 0; p[i] != '\0'; i++) {
            char ch = p[i];
            if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
            if (ch >= 'a' && ch <= 'z' && strchr("aeiou", ch) != nullptr) v++;
        }
        if (v > mx) {
            mx = v;
            nr = 1;
        } else if (v == mx) {
            nr++;
        }
        p = strtok(nullptr, " ");
    }
    if (mx < 0) cout << "nu există";
    else cout << nr;
    return 0;
}
