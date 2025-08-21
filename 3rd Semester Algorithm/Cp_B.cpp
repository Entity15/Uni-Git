#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cs = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long a, b, c;
        cin >> a >> b;
        c = a / b;
        if(c == (a/b) ){
            if(a % b == 0){
                cout << "Case " << cs++ << ": " << "divisible" << endl;
            } else {
                cout << "Case " << cs++ << ": " << "not divisible" << endl;
            }
        }
    }
return 0;
}