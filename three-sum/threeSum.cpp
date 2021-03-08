#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution{
    public:
        vector<vector<int>> threeSum(vector<int> &nums){
            vector<vector<int>> resultVector;
            unordered_map<int, int> targetMap;
            unordered_map<int, int>::iterator targetIt;
            for(int i = 0; i < nums.size(); i++){
                int tempTarget = 0 - nums[i];
                targetIt = targetMap.find(tempTarget);
                if(targetIt==targetMap.end()){
                    targetMap.insert({tempTarget, tempTarget});
                }

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
