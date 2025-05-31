#include <bits/stdc++.h>
using namespace std;
int main(){

    int left, right, mid, s;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cin >> s;
    left = 0;
    right = sizeof(a)/sizeof(a[0]) - 1;
    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == s){
            cout << "Found at index: " << mid << endl;
            break;
        }
        else if(a[mid] < s){
            left = mid + 1;
        }
        else if(a[mid] > s){
            right = mid - 1;
        }
        else{
            cout << "Not found" << endl;
            break;
        }
    }
    
    return 0;
}