#include <iostream>

using namespace std;

int sqroot(int k){
    int s = 0;
    int e = k;
    int m = s + (e-s)/2;
    
    int ans = -1;
    while(s <= e){
    int square = m*m;
        if(square == k){
            return m;
        }
        
        else if(square < k){
            ans = k;
            s = m+1;
        }
        
        else if(square > k){
            e = m-1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}


int main()
{
    int n; 
    cout<<"Enter the number : ";
    cin>>n;
    
    int temp = sqroot(n);
    
    cout<<"Square root of "<<n<<" is "<<sqroot(n)<<endl;
    


    return 0;
}




#include<iostream>
using namespace std;

 long long int sqroot(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

// double morePrecision(int n, int precision, int tempSol) {
    
//     double factor = 1;
//     double ans = tempSol;

//     for(int i=0; i<precision; i++) {
//         factor = factor/10;

//         for(double j=ans; j*j<n; j= j+factor ){
//             ans = j;
//         }
//     }
//     return ans;
// }


double exactsqrt(int n, int precision, int tempsol){
    double factor = 1;
    double ans = tempsol;
    
    for(int i = 0; i < precision; i++){
        factor = factor/10;
        for(double j = ans; j*j < n;j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int temp = sqroot(n);
    
    cout<<"Answer is : "<<exactsqrt(n, 3, temp)<<endl;

    return 0;
}
