#include <iostream>
using namespace std;
int main()
{

    char arr[] = "how are you";
    int i, word = 1;
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == ' ' && arr[i-1] != ' ' ){
            word++;
        }
    }
    cout<<word<<endl;
    return 0;
}
