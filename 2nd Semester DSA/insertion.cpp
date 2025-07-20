#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, ind, v;
    char c;
    cout << "Array Size: ";
    cin >> n;
    int a[n];
    memset(a, -1, sizeof(a));

    for(int i = 0; i < n; i++){
        cout << a[i]<< " ";
    }
    cout << endl;
    cout << "For exit: x\nFor insertion: i\nFor deletion: d\nFor printing: p" << endl;
    while(1){

        cin >> c;
        if(c == 'x'){
            break;
        }
        else if(c == 'i'){
            cin >> ind >> v;
            if(a[ind] == -1){
                a[ind] = v;
            }
            else {
                for(int i = n-1; i > ind; i--){
                a[i] = a[i-1];
                }
                a[ind] = v;
            }
        }
        else if(c == 'd'){
            cin >> ind;
            for(int i = ind; i < n-1; i++){
                a[i] = a[i+1];
            }
            a[n-1] = -1;
        }
        else if(c == 'p'){
            for(int i = 0; i < n; i++){
                cout << a[i]<< " ";
            }
            cout << endl;
        }
    }

    return 0;
}
