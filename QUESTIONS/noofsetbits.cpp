#include<bits/stdc++.h>
using namespace std;

int setBits(int num){
    int count =0;
    for(int i =1 ; num!=0; i++){

        if(num&1 == 1){
            count ++;
        }

        num = num>>1;

    }

    return count;
    }


int main(){

    int n;
    cout <<"ENTER A NUMBER : ";
    cin>>n;

    

    int result = setBits(n);

    cout << "THE NUMBER OF SET BITS ARE : " << result << endl;




}