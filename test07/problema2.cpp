#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    int n = strlen(s);
    int st = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            int lg = i - st;
            int a = -1;
            int b = -1;
            for (int j = st; j < i; j++) {
                char ch = s[j];
                if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                    b = a;
                    a = j;
                }
            }
            if (lg >= 2 && b != -1) {
                char ch = s[b];
                if (ch >= 'a' && ch <= 'z') s[b] = ch - 'a' + 'A';
            }
            st = i + 1;
        }
    }
    cout << s;
    return 0;
}
