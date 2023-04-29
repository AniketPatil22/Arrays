#include <iostream>

using namespace std;




void sort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;


        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;


        }
        // for(;j >= 0; j--){
        //     if(arr[j] > temp){
        //     arr[j+1] = arr[j];
        //     }

        //     else{
        //         break;
        //     }
        // }
        arr[j+1] = temp;

    }
}

void printArr(int arr[],int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[4] = {9,8,10,3};
    sort(arr,4);
    printArr(arr,4);
    return 0;

}
