#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>> n;
    int num1 = 0;
    int num2 = 1;

    int ans = 0;

    cout << num1 << " ";
    cout << num2  << " ";

    for(int i = 1; i<=n-2; i++){

        ans = num1 + num2;
        cout << ans << " " ;

        num1 = num2;
        num2 = ans; 


    }
}