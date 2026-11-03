#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[21];
    cin.getline(s, 21);
    int i = 0;
    while (s[i] != '\0' && s[i] != ' ') i++;
    char num[21];
    strncpy(num, s, i);
    num[i] = '\0';
    while (s[i] == ' ') i++;
    char pre[21];
    strcpy(pre, s + i);
    cout << pre[0] << ". " << num;
    return 0;
}
