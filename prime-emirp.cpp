#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, bait, np, rp, temp;
    np = rp = temp = 0;
    cin >> n;
    bait = n;

    while (bait > 0) {
        temp = temp * 10 + bait % 10;
        bait /= 10;
    }

    np = 1;
    if (n < 2)
        np = 0;
    for (int i = 2; i * i <= n && np == 1; i++) {
        if (n % i == 0)
            np = 0;
    }

    rp = 1;
    if (temp < 2)
        rp = 0;
    for (int i = 2; i * i <= temp && rp == 1; i++) {
        if (temp % i == 0)
            rp = 0;
    }

    if (np == 1 && rp == 1 && temp != n)
        cout << n << " is emirp";
    else if (np == 1)
        cout << n << " is prime";
    else
        cout << n << " is not prime";

    cout << endl;
    return 0;
}
