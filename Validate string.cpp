/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int validate(char name[]){
    int i;
    for(i=0; name[i] != '\0'; i++){
        
        if(!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57)){
        
            return 0;
        }
        
    }
    return 1;
}

int main()
{

    char name[] = "Aniket123";
    
    if(validate(name)){
        cout<<"Validate"<<endl;
    }
    else{
    
        cout<<"Not Validate"<<endl;
    }
    
    
    return 0;
}
