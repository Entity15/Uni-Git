#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int stack1[MAX], top = -1;

void push(int val){
    if(top == MAX - 1) cout << "ERROR: Stack Overflow!" << endl;
    else stack1[++top] = val;
}

int pop(){
    if(top == -1){
        cout << "ERROR: Stack Underflow!" << endl;
        return -1;
    }
    return stack1[top--];
}

void dtob(int n){
    if(n == 0){
        cout << "Binary: 0" << endl;
        return;
    }
    while(n > 0){
        push(n % 2);
        n /= 2;
    }
    cout << "Binary: ";
    while(top != -1) cout << pop();
    cout << endl;
}

int main() {
    int n;
    cout << "Decimal Value: ";
    cin >> n;

    if(n < 0) cout << "Enter value above 0" << endl;
    else dtob(n);

    return 0;
}
