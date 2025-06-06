#include <iostream>
using namespace std;

int main() {
    long long n;
    while(cin >> n){
        long long bait = n;
        long long rev_n = 0;
        while(bait > 0){
            rev_n = rev_n * 10 + bait % 10;
            bait /= 10;
        }

        int np = 1;
        if(n < 2)
            np = 0;
        else{
            for(int i = 2; i * i <= n; i++){
                if(n % i == 0){
                    np = 0;
                    break;
                }
            }
        }

        int rp = 1;
        if(rev_n < 2)
            rp = 0;
        else{
            for(int i = 2; i * i <= rev_n; i++) {
                if(rev_n % i == 0){
                    rp = 0;
                    break;
                }
            }
        }

        if(np == 0){
            cout << n << " is not prime." << endl;
        }
        else if(rp == 1 && rev_n != n){
            cout << n << " is emirp." << endl;
        } 
        else{
            cout << n << " is prime." << endl;
        }
    }
    return 0;
}