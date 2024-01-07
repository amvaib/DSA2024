#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>> n;
    
    
    int prod= 1;
    int sum = 0;


    for(int i = 1; n!=0; i++){
        int digit = n%10;
        prod = prod*digit;
        sum = sum+digit;
        n = n/10;
        

    }

    int ans = prod - sum;

    cout << ans;

}