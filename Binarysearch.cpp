#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int key){

    int start  = 0, end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end){ 

        if(arr[mid] == key){
            return mid;
        }

        else if(key > arr[mid]){
            start =  mid + 1;
        }

        else {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}



int main()
{

    int even [6] = {2,6,8,19,56,63};
    int odd [5] = {3,6,8,17,36};
    
    int evenindex = binarysearch(even , 6 , 56);
    cout<<"Index of 56 is "<<evenindex<<endl;

    int oddindex = binarysearch(odd , 5 , 8);
    cout<<"Index of 17 is "<<oddindex<<endl;
    return 0;
}