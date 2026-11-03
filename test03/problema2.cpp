#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    int p;
    cin.getline(s, 256);
    cin >> p;
    char r[256];
    int k = 0;
    int n = strlen(s);
    int st = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            int lg = i - st;
            for (int j = st; j < i; j++) {
                if (p >= 0 && lg > p && j - st == p) continue;
                r[k++] = s[j];
            }
            if (i < n) r[k++] = s[i];
            st = i + 1;
        }
    }
    r[k] = '\0';
    cout << r;
    return 0;
}
