#include <iostream>
#include <string>
#include <vector>
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
using namespace std;
// 9 * 1,000,000,000
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* it){
    while(it!=nullptr){
        cout << it->val;
        if(it->next==nullptr){
            cout << endl;
        }
        else{
            cout << ",";
        }
        it = it->next;
    }
    return;
}

void printVector(vector<int> thisVector){
    for(auto it = thisVector.begin(); it != thisVector.end(); ++it){
        cout << *it << endl;
    }
    return;
}

ListNode* createList(vector<int> nodeValues){
    ListNode* returnListHead;
    ListNode* listIterator;
    int nodeCount = 0;
    for(auto it = nodeValues.begin(); it != nodeValues.end(); ++it){
        ListNode* newNode = new ListNode();
    //    cout << "Creating node " << ++nodeCount << endl;
        newNode->val = *it;
        if(it==nodeValues.begin()){
            returnListHead = newNode;
            listIterator = newNode;
        }
        else{
          listIterator->next = newNode;
          listIterator = newNode;
        }
    }
    return returnListHead;
}

int convertToInteger(ListNode* listArgument){
    int valueScaler = 1;
    int rawValue, convertedValue = 0;
    ListNode* listIterator = listArgument;
    while(listIterator!=nullptr){
        rawValue = listIterator->val;
        convertedValue += rawValue * valueScaler;
        valueScaler = valueScaler*10;
        listIterator = listIterator->next;
    }
    cout << "Converted value: " << convertedValue << endl;
    return convertedValue;
}

ListNode* convertToList(string stringArgument){
    ListNode* returnListHead;
    vector<int> reversedVector;
    int valueAsInt, maxIndex = stringArgument.size() - 1;
    cout << "Number of digits: " << maxIndex << endl;
    for(int i  = maxIndex; i >= 0; i--){
        reversedVector.insert(reversedVector.end(), int(stringArgument[i]) - 48);
    }
    printVector(reversedVector);
    return returnListHead;
}


int main(int argc, char *argv[]) {
    vector<int> vals1 = {2, 4, 3};
    vector<int> vals2 = {5, 6, 4};
    string sumString;
    double argOne = 0, argTwo = 0, valueScaler = 1;
    ListNode* l1 = createList(vals1);
    ListNode* l2 = createList(vals2);
    printList(l1);
    printList(l2);
    ListNode* iteratorOne = l1;
    ListNode* iteratorTwo = l2;
    // create a dummy node, with 0 as the value
    ListNode dummy(0);
    // point p to new dummy node
    ListNode* p = &dummy;
    int carry = 0, sum = 0;
    // while l1 or l2 are not null, iterate through list 1 and list 2
    while(l1 || l2) {
        // set um = carry
      sum = carry;
      // if l1 isn't null, include l1's value in sum
      if(l1) sum += l1->val;
      // same for l2
      if(l2) sum += l2->val;
      // since each node only holds a single digit value, carry is included in next node
      if(sum >= 10) {
          // determine carry value
        carry = sum / 10;
        // determine sum value
        sum %= 10;
      }
      // sum is a single digit value, carry value = 0
      else carry = 0;
      // create new node with sum value, point current p iterator to it
      p->next = new ListNode(sum);
      // increment p
      p = p->next;
      // increment whichever lists still have entries
      if(l1) l1 = l1->next;
      if(l2) l2 = l2->next;
    }
    // if after iterating through all nodes in both lists a carry value exists, a new node is necessary
    if(carry)
      p->next = new ListNode(carry);
    printList(&dummy);
    return 0;
}
