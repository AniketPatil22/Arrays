#include<iostream>
using namespace std;

void swap(int arr[], int size){
    for(int i = 0; i < size; i = i+2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int even[8] = {2,5,6,3,4,7,8,55};
    int odd[5] = {22,5,6,33,74};

    swap(even,8);
    printarray(even,8);

    swap(odd,5);
    printarray(odd,5);

    
    return 0;
}