#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() 
{ 
    int arr[] = {5,9,8,4,3,2,1,10,7}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Sort: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
    bubbleSort(arr, n); 
    cout << "After Sort: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0; 
}