#include <bits/stdc++.h>
using namespace std;
int fibonnaci(int n){
    if(n < 0){
        cout << "Invalid input" << endl;
        return 0;
    }
    if(n == 0){
        cout << "0" << endl;
        return 0;
    }
    int fib0, fib1, fib;
    fib0 = 0; fib1 = 1;
    cout << fib0 << " " << fib1 << " ";
    for(int i = 0; i < n - 2; i++){
        fib = fib0 + fib1;
        cout << fib << " ";
        fib0 = fib1;
        fib1 = fib;
    }

    return 0;
}
int main(){

    int n; cin >> n;
   
    fibonnaci(n);

    return 0;
}
