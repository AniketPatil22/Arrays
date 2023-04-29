#include<iostream>
using namespace std;
int getmin(int arr[], int n){
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini,arr[i]);
        /* code */
    }
    return mini;
    
}

int getmax(int arr[], int n){
    int maxi = INT_MIN;

        for(int i = 0;i < n; i++){
            maxi = max(maxi,arr[i]);
        }
        // cout<<maxi<<endl;
        return maxi;
}


int main()
{

    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[100];

    for(int i; i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum number from the array is "<< getmax(arr,size)<<endl;
    cout<<"Minimum number from the array is "<< getmin(arr,size)<<endl;

    int max = getmax(arr,size);
    int min = getmin(arr,size);

    int sum = max + min;
    cout<<"Addition of minimum and maximum element from the array is :  "<<sum<<endl;

    return 0;
}