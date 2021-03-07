#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
using namespace std;
bool sumCheck(int arg1, int arg2, int target){
    int checkSol = arg1 + arg2;
    if(checkSol==target)return true;
    return false;
}

vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> resultVector;
  int sum;
  for (int i = 0; i < nums.size(); i++) {
    for(int ii = 0; ii < nums.size(); ii++){
        if(ii != i){
            sum = nums[i] + nums[ii];
            cout << nums[i] << " + " << nums[ii] << " = " << sum << endl;
            if(sum==target){
                cout << " Target = sum " << endl;
                resultVector.insert(resultVector.end(), i);
                resultVector.insert(resultVector.end(), ii);
                return resultVector;
            }
        }
    }
  }
  return resultVector;
}

vector<int> twoSumSorted(vector<int> &nums, int target){
  int tempSum;
  vector<int> resultVector;
  vector<int> sortedVector = nums;
  sort(sortedVector.begin(), sortedVector.end());
  vector<int>::iterator head = sortedVector.begin();
  vector<int>::iterator tail = sortedVector.end()-1;
  while(head < tail){
    tempSum = *head + *tail;
    cout << "head: " << *head << endl;
    cout << "tail: " << *tail << endl;
    cout << "sum: " << tempSum << endl;
    if(tempSum > target) tail--;
    else if(tempSum < target) head++;
    else{
     resultVector.push_back(*head);
     resultVector.push_back(*tail);
     return resultVector;
    }
  }
  return resultVector;
}

vector<int> twoSumHashMap(vector<int> &nums, int target){
  unordered_map<int, int> valueMap;
  unordered_map<int, int>::iterator findIterator;
  int seeking;
  vector<int> resultVector;
  for(int i = 0; i < nums.size(); i++){
    seeking = target - nums[i];
    findIterator = valueMap.find(seeking);
    if(findIterator == valueMap.end()){
      cout << seeking << " not found. Inserting into hash map" << endl;
      valueMap.insert({nums[i], nums[i]});
    }
    else{
      resultVector.push_back(nums[i]);
      resultVector.push_back(findIterator->second);
      return resultVector;
    }
  }
  return resultVector;

}

int main(int argc, char *argv[]) {
  vector<int> sumVector = {2, 7, 11, 5};
  vector<int> resultVector;
  int lockCheck, currIndex, sum, target = 9;
  resultVector = twoSumHashMap(sumVector, 9);
  for (auto x : resultVector){
    cout << x << endl;
  }
  return 0;
}
