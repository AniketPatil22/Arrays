#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int Lastocc(int arr[], int n, int key){
    int start = 0, end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start  = mid + 1;
        }

        else if(arr[mid] > key){
            end = mid - 1;
        }
            
        

        else if(arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans;
}





int main()
{

    int even[7] = {1,2,2,3,4,5,7};
    cout<<"First occurance of 5 is at index "<<firstocc(even,7,2)<<endl;
    cout<<"last occurance of 5 is at index "<<Lastocc(even,7,2)<<endl;
    // cout<<"total number of occurance of 5 is "<<totalocc<<endl;

    int start = firstocc(even,7,2);
    int end = Lastocc(even,7,2);

    int total_occurance = (end - start ) + 1;

    cout<<total_occurance<<endl;
    return 0;
}   