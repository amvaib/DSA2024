#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int > p  = {1,2};

    cout << "FIRST ELEMENT IS " << p.first << " SECOND ELEMENT IS " << p.second<< endl;

    pair<int,pair<int,int>> s = {1,{3,4}};

    cout << " " << s.second.first<< endl;

    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};

    cout << "FIRST PAIR IS " << arr[0].second<< " ";



}