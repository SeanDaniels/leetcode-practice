#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int reverse(int x){
            int retVal = 0;
            int overflowCatch = INT_MAX/10;
            cout << "If 'retval' is greater than " <<  INT_MAX << " (" << hex << INT_MAX << "), return 0" << endl;
            cout << "If current 'retval' is = " << dec << overflowCatch << "(" << hex << overflowCatch << "), return 0" << endl;
            while(x != 0){
                // modulo remaining input value with 10
                int pop = x % 10;
                cout << "Pop value: " << pop << endl;
                // divide remaining input value by 10
                x /= 10;
                cout << "Shrinking x value: " << x << endl;
                int temp = retVal*10+pop;
                cout << "Shifted return value: " << temp << endl;
                retVal = temp;
                cout << "Growing return value: " << retVal << endl;
            }
            return retVal;
        }
};

int main(){
    Solution mySolution;
    mySolution.reverse(-21);
    return 0;
}
