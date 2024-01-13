#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;

    for(int i = 0; i<=30; i++){
        int ans = pow(2,i);
        if(ans == n){
            return true;
    }
    else{
        return false;
    }
}
}