#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< "  ";
    }
    cout<<endl;
}

void sortonetwo(int arr[], int n){


    int i = 0, j = 0, k = n-1;

    while(i<=k){

        if(arr[i] == 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }

        else if(arr[i] == 1){
            i++;
        }

        else if(arr[i] == 2){
            swap(arr[i],arr[k]);
            k--;
        }
    }
}

int main()
{
    int arr[6] = {2, 2 , 1 ,0,1,1};

    sortonetwo(arr , 6);
    printarray(arr,6);
    return 0;
}