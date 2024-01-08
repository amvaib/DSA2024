#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;
    int ans = 0;

    for(int i= 1; n!=0; i++){
        int digit = n%10;
        if(ans > INT_MAX/10 || INT_MIN/10){
            return 0;
        }
        ans = (ans * 10 ) + digit;
        n = n/10;
    }

    cout << ans;


}