#include <bits/stdc++.h>

using namespace std;
#define ITEMS 5
int main(){
    int maxWeight = 10;
    int weights[ITEMS] = {3, 2, 8, 7, 4};
    int values[ITEMS] = {2, 4, 6, 1, 9};
    int maxWin = 0;
    // what are all the possible combinations that are less than max weight?
    for(int i = 0; i < ITEMS; i++){
        int minWin = i;
        maxWin = ITEMS;
        for(int j = i; j < maxWin; j++){

        }
    }

    return 0;
}
