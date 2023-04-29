#include<iostream>
using namespace std;
int main()
{
    // For same row and col
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // For different row and coloumn
    int row;
    cout << "Enter the number of rows : ";
    cin>>row;
    int col;
    cout << "Enter the number of cols : ";
    cin>>col;

    // Creating a 2D array
    int **arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[row];
    }

    // Taking Input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }


    // Taking Output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    // releasing memory 
    for(int i = 0; i < row; i++){
        delete[] arr[i];
    }

    delete []arr;

    return 0;
}