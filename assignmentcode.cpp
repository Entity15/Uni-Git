#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int cn = 1; cn <= T; cn++) {
        long long n, m;
        cin >> n >> m;

        long long nb = n / (2 * m);

        long long sum = m * (m + 1) / 2;
        long long sum1 = (2 * m) * (2 * m + 1) / 2 - sum;
        long long bt = sum1 - sum;

        long long total = bt * nb;

        cout << "Case " << cn << ": " << total << endl;
    }

    return 0;
}
