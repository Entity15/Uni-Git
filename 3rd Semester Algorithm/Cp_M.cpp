#include <bits/stdc++.h>
using namespace std;

bool isLucky(int num) {
    string s = to_string(num);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isLucky(i)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
