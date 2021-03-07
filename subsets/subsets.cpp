#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void generateSubset(vector<int> &mainV, vector<vector<int>> &res, vector<int> &subV, int idx){
    for(int i=idx; i < mainV.size(); i++){
        subV.push_back(mainV[i]);
        if(subV.size()==3){
            res.push_back(subV);
        }
        generateSubset(mainV, res, subV, i+1);
        subV.pop_back();
    }
}

int main(){
    vector<int> superSet = {1, 2, 3, 4};
    vector<vector<int>> result;
    vector<int> subSet;
    int thisSize = 4;
    generateSubset(superSet, result, subSet, 0);
    for(auto x : result){
        for(auto y : x){
            cout << y << ",";
        }
        cout << endl;
    }
    return 0;
}
