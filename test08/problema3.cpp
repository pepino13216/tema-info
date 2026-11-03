#include <iostream>
#include <fstream>
using namespace std;

bool sub(const char* a, const char* b) {
    int j = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        while (b[j] != '\0' && b[j] != a[i]) j++;
        if (b[j] == '\0') return false;
        j++;
    }
    return true;
}

int main() {
    char v[4][15];
    for (int i = 0; i < 4; i++) cin >> v[i];
    ofstream fout("bac.txt");
    bool ok = false;
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (sub(v[i], v[j]) || sub(v[j], v[i])) {
                fout << v[i] << "," << v[j] << "\n";
                ok = true;
            }
        }
    }
    if (!ok) fout << "FĂRĂ SOLUȚIE";
    return 0;
}
