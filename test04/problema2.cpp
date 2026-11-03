#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    int nr = 0;
    char lg[256] = "";
    char sc[256] = "";
    char* p = strtok(s, " ");
    while (p != nullptr) {
        nr++;
        int n = strlen(p);
        if (nr == 1 || n > (int)strlen(lg) ||
            (n == (int)strlen(lg) && strcmp(p, lg) < 0)) {
            strcpy(lg, p);
        }
        if (nr == 1 || n < (int)strlen(sc) ||
            (n == (int)strlen(sc) && strcmp(p, sc) < 0)) {
            strcpy(sc, p);
        }
        p = strtok(nullptr, " ");
    }
    cout << nr << " cuvinte" << endl;
    cout << "cuvântul cel mai lung " << lg << endl;
    cout << "cuvântul cel mai scurt " << sc;
    return 0;
}
