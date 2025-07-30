#include <iostream>
#include <ctime>
#include <cstdlib>

#define SIZE 50000

int t[SIZE];
int temp;
clock_t start_time, end_time;
double totalTime;

void bubbleSort(int a[]);
void selectionSort(int a[]);
void insertionSort(int a[]);

using namespace std;

int main()
{
    int a[SIZE];
    int i;

    srand(time(0));
    for(i = 0; i < SIZE; i++)
        a[i] = (rand() % 10000) - 1000;

    bubbleSort(a);
    selectionSort(a);
    insertionSort(a);

    return 0;
}

void bubbleSort(int a[])
{
    int i, j;

    cout << "Bubble sort in progress. Wait ...";
    start_time = clock();

    for(i = 0; i < SIZE; i++)
        t[i] = a[i];

    for(i = 0; i < SIZE; i++)
    {
        for(j = 1; j < SIZE - i; j++)
        {
            if(t[j - 1] > t[j])
            {
                temp = t[j];
                t[j] = t[j - 1];
                t[j - 1] = temp;
            }
        }
    }

    end_time = clock();
    totalTime = (end_time - start_time) / (CLOCKS_PER_SEC * 1.0);
    cout << "\nTime required for Bubble Sort: " << totalTime << " seconds.\n\n";
}

void selectionSort(int a[])
{
    int i, j, pos;

    cout << "Selection sort in progress. Wait ...";
    start_time = clock();

    for(i = 0; i < SIZE; i++)
        t[i] = a[i];

    for(i = 0; i < SIZE; i++)
    {
        pos = i;
        for(j = i + 1; j < SIZE; j++)
        {
            if(t[j] < t[pos])
                pos = j;
        }
        if(pos != i)
        {
            temp = t[i];
            t[i] = t[pos];
            t[pos] = temp;
        }
    }

    end_time = clock();
    totalTime = (end_time - start_time) / (CLOCKS_PER_SEC * 1.0);
    cout << "\nTime required for Selection Sort: " << totalTime << " seconds.\n\n";
}

void insertionSort(int a[])
{
    int i, j, key;

    cout << "Insertion sort in progress. Wait ...";
    start_time = clock();

    for(i = 0; i < SIZE; i++)
        t[i] = a[i];

    for(i = 1; i < SIZE; i++)
    {
        key = t[i];
        j = i - 1;

        while(j >= 0 && t[j] > key)
        {
            t[j + 1] = t[j];
            j = j - 1;
        }
        t[j + 1] = key;
    }

    end_time = clock();
    totalTime = (end_time - start_time) / (CLOCKS_PER_SEC * 1.0);
    cout << "\nTime required for Insertion Sort: " << totalTime << " seconds.\n\n";
}
