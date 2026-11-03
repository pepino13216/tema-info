#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.get();
    char v[101][256];
    int mx = -1;
    int b = 0;
    for (int i = 0; i < n; i++) {
        cin.getline(v[i], 256);
        int nr = 0;
        int lg = strlen(v[i]);
        for (int j = 0; j < lg; j++) {
            if (v[i][j] != ' ' && (j == 0 || v[i][j - 1] == ' ')) nr++;
        }
        if (nr > mx) {
            mx = nr;
            b = i;
        }
    }
    cout << v[b];
    return 0;
}
