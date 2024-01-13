#include<bits/stdc++.h>
using namespace std;
//FUNCTION FOR FACTORIAL
long factorial(long num){

    long ans = 1;

    for(long i = num; i!=0; i--){
        ans = i * ans;

    }

    return ans;

}
//FUNCTION FOR NCR
long nCr(long n , long r){

    long nfac = factorial(n);

    long rfac = factorial(r);
    long operation = n-r;
    long nrfac = factorial(operation);

    long result = (nfac)/(rfac*(nrfac));

    return result ;

}

int main(){
    int n;
    cout << "ENTER THE VALUE OF N : ";
    cin>> n;

    int r;
    cout << "ENTER THE VALUE OF R : ";
    cin>> r;


    long result = nCr(n , r);

    cout << "THE nCr IS : " << result;




    
}