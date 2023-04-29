#include<iostream>
using namespace std;
int reverse (char name[]){
    int i=0, j;
    char temp;
    char *store = name;
    for(j =0 ; name[j] != '\0'; j++){}
    j = j-1;
    
    // for(i = 0; i < j; i++,j--){
    while(i < j){
        temp = name[i];
        name[i] = name [j];
        name [j] = temp;
        i++;
        j--;
    }

    if(name == store){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}

int main()
{
    char name[] = "painter";
    cout<<reverse(name)<<endl;

    // bool check = reverse(name);

    // if(check == *name){
    //     cout<<"Palindrome"<<endl;
    //     return 1;
    // }
    // else{
    //     cout<<"Not a palindrome"<<endl;
    //     return 0;
    // }

    // for(int i = 0; i < name[i] != '\0'; i++){

    // }

    return 0;
}