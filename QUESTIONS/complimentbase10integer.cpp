#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cout << "ENTER A NUMBER : ";
    cin>>n;

    int m = n;
    int mask = 0;

     if(n ==0){
        return 1;
    }

    for(int i = 0; m!=0; i++){
        mask = mask<<1 | 1;
        m = m>>1;

        
    }

    int ans = (~n) & mask ;
    cout << ans;

}