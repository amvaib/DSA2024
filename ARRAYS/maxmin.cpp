#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n){
    int imax = INT_MIN;

    for(int i = 1; i<=n; i++){
        imax = max(imax , arr[i]);

    }
    return imax;
}

int getMin(int arr[], int n){
    int imin = INT_MAX;

    for(int i = 1; i<=n; i++){
        imin = min(imin , arr[i]);

    }
    return imin;
}


int main(){
    int size;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin>>size;

    int num[100];

    for(int i = 1; i<=size; i++){
        cout << "ENTER "<< i << " ELEMENT : ";
        cin >> num[i];
    }
    
    cout << "THE MAXIMUM ELEMENT OF THE ARRAY IS : "<< getMax(num,size ) << endl;
    cout << "THE MINIMUM ELEMENT OF THE ARRAY IS : "<< getMin(num,size ) << endl;

    


}