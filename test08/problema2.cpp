#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream fin("cuvinte.in");
    ofstream fout("cuvinte.out");
    int L;
    cin >> L;
    char s[256];
    bool ok = true;
    while (fin.getline(s, 256)) {
        char* p = strtok(s, " ");
        while (p != nullptr) {
            if ((int)strlen(p) == L) {
                if (!ok) fout << " ";
                fout << p;
                ok = false;
            }
            p = strtok(nullptr, " ");
        }
    }
    fout << "\n";
    return 0;
}
