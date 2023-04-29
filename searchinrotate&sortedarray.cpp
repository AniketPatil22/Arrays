#include<iostream>
using namespace std;

int getpivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s + (e-s)/2;
    while(s < e){
        if(arr[m] >= arr[0]){
            s = m+1;
        }
        else{ 
            e = m;
        }
        m = s + (e-s)/2;
    }
    return e;
}
int binarysearch(int arr[], int n, int k){

    int s = 0;
    int e = n-1;
    int m = s + (e-s)/2;
    while(s < e){
        if(arr[m] == k){
        return m;
    }

    else if(key > m){
        s = m+1;
    }

    else {
        e = m-1;
    }
    m = s + (e-s)/2;
    }
    
    return -1;
}
int main(int arr[],int n, int k)
{
    int arr[5] = {10,17,1,3,8};
    
    int pivot = getpivot(arr , n)
    if(k >= arr[pivot]  && k <= arr[n-1]){
        return binarysearch(arr,pivot,n-1,k)
    }

    else{
        return binarysearch(arr, 0 ,pivot - 1,k)
    }
    return 0;
}