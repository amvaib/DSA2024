#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;
    int count = 0;


    for(int i =1 ; n!=0; i++){

        if(n&1){
        count ++;
    }
       n=  n>>1;
    }

    cout << count;
}