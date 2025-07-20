#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cs = 0;
    cin >> n;
    while (n--) {
        long long x, y;
        cin >> x >> y;
        long long sum = y - x + 1;
        long long ct1 = (y + 2) / 3 - (x + 1) / 3;
        long long c = sum - ct1;
        cout << "Case " << ++cs << ": " << c << endl;
    }
    return 0;
}