#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[21];
    cin >> s;
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (strchr("aeiou", ch) == nullptr) s[k++] = ch;
    }
    s[k] = '\0';
    cout << s;
    return 0;
}
