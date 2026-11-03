#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    char r[256];
    int k = 0;
    int n = strlen(s);
    int st = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            bool ok = true;
            if (i > st) {
                char a = s[st];
                if (a >= 'A' && a <= 'Z') a = a - 'A' + 'a';
                ok = (strchr("aeiou", a) == nullptr);
            }
            for (int j = st; j < i; j++) {
                char ch = s[j];
                char lc = ch;
                if (lc >= 'A' && lc <= 'Z') lc = lc - 'A' + 'a';
                bool lit = (lc >= 'a' && lc <= 'z');
                bool voc = lit && strchr("aeiou", lc) != nullptr;
                if (ok || !lit || voc) r[k++] = ch;
            }
            if (i < n) r[k++] = s[i];
            st = i + 1;
        }
    }
    r[k] = '\0';
    cout << r;
    return 0;
}
