#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            arr[i] = key;
            cout << "The key is present at position " << i << endl;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {10, 12, 5, 2, 3, 7, 9, 8, 4, 6};
    int x = 0;
    int n = sizeof(arr) / sizeof(int);
    while (x <= n)
    {
        cout << arr[x]<<" ";
        x++;
    }

    int key;
    cout<<endl;
    cout << "Enter the element you want to search : ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Element is present in the given array " << endl;
    }
    else
    {
        cout << "The key you entered is not there in array " << endl;
    }
    return 0;
}