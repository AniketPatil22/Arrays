#include <iostream>
using namespace std;
int main()
{
    
    char name[] = "python";
    int i=0, j;
    char temp;
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
    cout<<name<<endl;
    return 0;
}
