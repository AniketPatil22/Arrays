// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once.
//  There is a single integer value that is present in the array twice. Your task is to find the duplicate 
// integer value present in the array.
#include<iostream>
#include <vector>
using namespace std;

int findfuplicate(vector<int> &arr){
    int ans = 0;

    for(int i = 0; i <arr.size(); i++ ){
        ans = ans^arr[i];
    }
    cout<<"HI"<<endl;
    for(int i = 0;i < arr.size(); i++){
        ans = ans^i;
    }
    cout<<ans<<endl;
    return ans;
}


int main()
{
    vector<int> arr = {1,2,1,3,4,4};
    findfuplicate(arr);
    return 0;
}