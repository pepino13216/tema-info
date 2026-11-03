#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);
    int poz = 0;
    char* p = strtok(s, " ");
    while (p != nullptr) {
        if (poz % 2 == 1) cout << p << endl;
        poz++;
        p = strtok(nullptr, " ");
    }
    return 0;
}
