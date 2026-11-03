#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream fin("fraze.txt");
    char s[64];
    int mx = 0;
    int mn = 0;
    bool ok = true;
    while (fin >> s) {
        char* p = strtok(s, ".,;:!?\"'()");
        if (p == nullptr) continue;
        int n = strlen(p);
        cout << p << " " << n << endl;
        if (ok || n > mx) mx = n;
        if (ok || n < mn) mn = n;
        ok = false;
    }
    cout << "Lungimea maxima " << mx << endl;
    cout << "Lungimea minima " << mn;
    return 0;
}
