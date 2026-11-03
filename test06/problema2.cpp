#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[21];
    cin >> s;
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!(s[i] >= 'a' && s[i] <= 'z')) s[k++] = s[i];
    }
    s[k] = '\0';
    cout << s;
    return 0;
}
