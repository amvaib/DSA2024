#include<bits/stdc++.h>
using namespace std;
int findElement(int arr[],int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }

    return ans;
}
int main(){

    int a[7] = {1,2,5,2,5,6,6};
    cout << findElement(a, 7);
}