#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;
    
    int ans = 0;
    for(int i = 0; n!=0; i++){
        int digit= n%10;
        if(digit == 1){
            ans = ans + pow(2,i);

        }
        n = n/10;
    
    }

    cout << ans << endl;
}