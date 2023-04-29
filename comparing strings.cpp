/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    char A[] = "Painter";
    char B[] = "Painting";
    
    int i, j;
    
    for(i=0,j =0; A[i] != '\0' && B[j] != '\0'; i++,j++ ){
        if(A[i] != B[j]){
            cout<<"Not equal"<<endl;
            break;
        }
        
        if(A[i] == B[j] ){
        
            cout<<"Equal"<<endl;
        }
        
        else if(A[i] < B[j]){
        
            cout<<"A[i] is smaller"<<endl;
        }
        
        else{
            cout<<"Bigger"<<endl;
        }
        
        
        
    }
    
    return 0;
}
