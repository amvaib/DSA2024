#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[] , int size){

    // Write your code here
    int ans = 0;

    for (int i = 0; i < arr[size]; i++) {
        ans = ans^arr[i];
    }

    for (int i = 1; i<arr[size]; i++) {
        ans = ans^i;
    }

    return ans;};

int main(){

    int a[100] = {1,2,3,4,2};
    cout << findDuplicate(a,4);

}