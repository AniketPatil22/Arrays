#include <iostream>
using namespace std;

void sort(int arr[] , int n){
    
    for(int i = 0; i < n-1; i++){
        
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
            
        }

    }
}

void printArr(int arr[],int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6] = {3,6,1,8,4,5};
    sort(arr,6);
    printArr(arr,6);
    return 0;

}
