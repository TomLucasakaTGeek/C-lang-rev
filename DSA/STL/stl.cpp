#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

//Pairs
void creatingPairs() {

    pair<int, int> p1 = {1, 3};

    cout << p1.first << " " << p1.second;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.second << " " << p2.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;

}

//Vectors
void creatingVectors() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1,2);    //assumes 2 inputs as a piar

    vector<int> ve(5, 100);  //{100, 100, 100, 100, 100}

    vector<int> v1(5);     //vector of size 5

    vector<int> v2(v1);   // copy of vector v1

    //iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " "; 

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it : v) {
        cout << it << " ";
    }

    //delete element 
    v.erase(v.begin()+1);

    //insert element
    v.insert(v.begin(), 300);

    
}

int main() {
    
    return 0;
}