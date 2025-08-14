#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){}
};

class Solution{
public:
    ListNode *getIntersactionNode(ListNode *headA, ListNode *headB){
        if (!headA || !headB) return nullptr;
        
        ListNode *currA = headA;
        ListNode *currB = headB;
        
        while (currA != currB) {
            currA = (currA == nullptr) ? headB : currA->next;
            currB = (currB == nullptr) ? headA : currB->next;
        }
        
        return currA;
    }
};