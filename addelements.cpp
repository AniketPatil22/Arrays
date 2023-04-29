#include<iostream>
using namespace std;

void addition(int arr[], int n){
    int count = 0;

    for(int i = 0; i <= n-1; i++){
        count = count + arr[i];
    }
    cout<<count;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};

    addition(arr,6);

    return 0;
}