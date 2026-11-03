#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[251];
    cin.getline(s, 251);
    for (int i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && s[i] == s[i + 1])
            cout << s[i] << s[i + 1] << endl;
    }
    return 0;
}
