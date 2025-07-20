#include <bits/stdc++.h>
using namespace std;
#define MAX 10

int queue1[MAX], front1 = -1, rear = -1;

void enqueue(int val){
    if(rear == MAX - 1){
        cout << "ERROR: Queue Overflow!" << endl;
    }
    else{
        if (front1 == -1) front1 = 0;
        queue1[++rear] = val;
    }
}

int dequeue(){
    if(front1 == -1 || front1 > rear){
        cout << "ERROR: Queue Underflow!" << endl;
        return -1;
    }
    int val = queue1[front1++];
    if(front1 > rear) front1 = rear = -1;
    return val;
}

void print(){
    if(front1 == -1){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue elements: ";
        for (int i = front1; i <= rear; i++) {
            cout << queue1[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int c, val;

    while(1){
        cout << "\n1. Enqueue\n2. Dequeue\n3. Print\n4. Exit\n";
        cout << "Enter option: ";
        cin >> c;

        switch(c){
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                enqueue(val);
                break;
            case 2:
                val = dequeue();
                if(val != -1){
                    cout << "Dequeued value: " << val << endl;
                }
                break;
            case 3:
                print();
                break;
            case 4:
                exit(0);
            default:
                cout << "Only options between 1 to 4!" << endl;
        }
    }

    return 0;
}