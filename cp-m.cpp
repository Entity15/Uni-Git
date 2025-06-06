#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if((a + b) % 3 != 0){
            cout << "NO" << endl;
        } 
        else{
            if(2 * a >= b && 2 * b >= a){
                cout << "YES" << endl;
            } 
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}