#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[2*n];
    cin >> n;
    for(int i = 0; i < 2*n - 1; i+2){
        int x, y;
        cin >> x >> y;
        a[i] = x; a[i + 1] = y;
    }
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        if(a[i] > a[i + 1]){
            swap(a[i], a[i + 1]);
        }
    }
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        cout << a[i] << " ";
    }
    return 0;
}