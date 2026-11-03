#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream fin("BAC.TXT");
    char s[32] = "";
    int k = 0;
    fin >> s >> k;
    if (k >= 1 && k <= (int)strlen(s)) {
        char ch = s[k - 1];
        for (int i = 0; i < k; i++) cout << ch;
    }
    return 0;
}
