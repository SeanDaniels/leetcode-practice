#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void getThreeSets(vector<int> &mainV, vector<int> &subV, vector<vector<int>> &resultV, int idx){
            for(int i = idx; i < mainV.size(); i++){
                subV.push_back(mainV[i]);
                if(subV.size()==3){
                    resultV.push_back(subV);
                }
                getThreeSets(mainV, subV, resultV, idx+1);
                subV.pop_back();
            }
        }
        vector<vector<int>> threeSum(vector<int> &nums){
            vector<vector<int>> resultVector;
            vector<int> subsets;
            getThreeSets(nums, subsets, resultVector, 0);
            for(auto x : resultVector){
                for(auto y : x){
                    cout << y << ",";
                }
                cout << endl;
            }
            return resultVector;
        }
};

int main(){
    vector<int> mainVector = {-1, 0, 1, 2, -1, 4};
    Solution mySolution;
    mySolution.threeSum(mainVector);
    return 0;
}
