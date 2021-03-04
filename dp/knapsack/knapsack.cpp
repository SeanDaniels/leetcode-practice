#include <bits/stdc++.h>

using namespace std;
#define ITEMS 5
int main(){
    int maxWeight = 10;
    int weights[ITEMS] = {3, 2, 8, 7, 4};
    int values[ITEMS] = {2, 4, 6, 1, 9};
    int minWin = 0, maxWin = 0;
    // what are all the possible combinations that are less than max weight?
    for(int windowSize = 1; windowSize < 5; windowSize++){
        maxWin = minWin + windowSize;
        for(int i = 0; i < 5; i = i + windowSize){
            for(int j = i + windowSize; j < 5; j = j + windowSize){
                cout << "i: " << i << " j: "<< j << endl;
                cout << weights[i] << ", " << weights[j] << endl;
            }
        }
    }

    return 0;
}
