#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int>v;
    
    v.push_back(4);
    v.emplace_back(5);

    vector<pair<int,int>> vec;


    v.emplace_back(3,4);

    vector<int> v(5,100);
    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);


    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it = it +2;

    cout << *(it) << " ";

    vector<int>::iterator it = v.end();//right after ending position


    cout << v[0];

    cout << v.back() << endl; ;//prints last element of the vector

    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";

    };


    for (auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";

    };

    for(auto it : v){
        cout << it << " ";

    }

    v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.begin() + 4);


    //insert function

    vector<int>v(2,100);//{100,100}

    v.insert(v.begin(),300);//{300,100,100}

    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

   vector<int> copy(2,50);//{50,50}
   v.insert(v.begin(), copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

   cout << v.size(); //2

   v.pop_back(); //{10}

   v.empty();//true or false

   //v1 -> {10,20}
   //v2 -> {30,40}

   v1.swap(v2);

   v.clear(); // clears everything

   









}