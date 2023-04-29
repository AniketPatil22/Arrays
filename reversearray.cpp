#include<iostream>
using namespace std;


void reverse(int array[], int size){
    int  start = 0;
    int  end = size-1;

    while(start <= end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}



void printarray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout<<array[i]<<"  ";

    }
    cout<<endl;
}
int main()
{

    int array1[7] = {10,20,30,40,50,60};
    int array2[5] = {2,5,8,3,9};

    reverse(array1 , 7);
    reverse(array2 , 5);

    printarray(array1 , 7);
    printarray(array2 , 5);


    return 0;
}