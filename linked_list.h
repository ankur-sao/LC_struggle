#include<iostream>

using namespace std;

struct listnode{
    int val;
    listnode* next;

    listnode() : val(0), next(nullptr){}
    listnode(int x):  val(x), next(nullptr){}
    listnode (int x, listnode *n): val(x), next(n){}  
};

namespace ll {

class Solution{

    public:

    listnode *current;

    void print(listnode * head);

    listnode* reverse(listnode* head);
    
    listnode* delNthLast(listnode  *head, int n);

    listnode* mergeSorted(listnode *l1, listnode* l2);

    void printRev(listnode *head);

    bool isPalindrome(listnode *head);

    bool containsCycle(listnode *head);

    size_t cycleSize(listnode *head);

};

bool Solution::containsCycle(listnode *head){
    if (!head || !head->next) return false;

    listnode *slow = head, *fast  = head;
    while (fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

/*
  
  1 > 2 > 3 > 4 > 5
          |_______|
             
*/

size_t Solution::cycleSize(listnode *head){
    return 8;
}


bool Solution::isPalindrome(listnode *head){
        if (!head) return true;
        if (!isPalindrome(head->next)) return false;
        if (current->val != head->val) return false;
        current = current->next;
        return true;
}

void Solution::printRev(listnode *head){
    if (!head) return;
    printRev(head->next);
    cout << head->val << " > ";
}


void Solution::print(listnode * head){
        while(head){
            cout << " --> " << head->val;
            head = head->next;
        }
        cout << endl;
    }

listnode* Solution::reverse(listnode* head){
        if (!head || !head->next) return head;

        listnode* node = reverse(head->next);
        head->next->next  = head;
        head->next = nullptr;
        return node;
    }

 listnode* Solution::delNthLast(listnode  *head, int n){
        listnode **t1 = &head, *t2  = head;

        for(int i = 0 ; i < n ; ++i){
            t2 = t2->next;
        }

        while(t2){
            t2 = t2->next;
            t1 = &((*t1)->next);
        }

        auto t = *t1;
        *t1 = (*t1)->next;
        delete t;
        return head;
    }   


listnode* Solution::mergeSorted(listnode *l1, listnode* l2){
        listnode* head = nullptr;
        listnode **l3 = &head;
        
        while(l1 && l2){
            listnode *& l = l1->val <  l2->val ? l1 : l2;  
            *l3 = l;
            l = l->next;
            l3 = &((*l3)->next);
        }
        *l3  =  l1 ? l1: l2;
        return head;
    
    }


}
/*class Solution
{
public:
    listnode* removeNthFromEnd(listnode* head, int n)
    {
        listnode** t1 = &head, *t2 = head;
        for(int i = 1; i < n; ++i)
        {
            t2 = t2->next;
        }
        while(t2->next != NULL)
        {
            t1 = &((*t1)->next);
            t2 = t2->next;
        }
        auto t = (*t1);
        *t1 = (*t1) ->next;
        delete t;
        

        return head;
    }
}; */



/*
use double ptr when: 
1. you want to delete a node in  singly linked list.
2. when you want to free the memory of node pointed by ptr and point ptr to some other node

*/