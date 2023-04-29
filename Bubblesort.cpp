#include<iostream>
using namespace std;

void Bubblesort(int arr[],int n){
    for(int i = 1; i < n; i++){
        bool swapped = false;
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false){
            break;
        }
    }
}

void PrintArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6] = {22,4,1,6,9,15};
    Bubblesort(arr,6);
    PrintArr(arr,6);
    return 0;
}