#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, x, total = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        total += x;
    }
    cout << total << endl;
    return 0;
}
