#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    int f[26] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') continue;
        if (i + 1 < n && s[i + 1] != ' ') continue;
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
        if (ch >= 'a' && ch <= 'z' && strchr("aeiou", ch) != nullptr) f[ch - 'a']++;
    }
    int mx = 0;
    char r = 0;
    for (int i = 0; i < 26; i++) {
        if (strchr("aeiou", 'a' + i) == nullptr) continue;
        if (f[i] > mx) {
            mx = f[i];
            r = 'a' + i;
        }
    }
    if (r != 0) cout << r;
    return 0;
}
