#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL)
        {
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=curr;
            curr=curr->next;
            prev=prev->next->next;
        }
        return dummy->next;
    }
void printLinkedList(ListNode* n)
{
    ListNode* t=n;
    
        while(t !=NULL)
            {
                cout<<t->val<<" ";
                t=t->next;
                    
            }
        cout<<"\n";
    
}
ListNode* insert(int num)
{
    ListNode* newItem=NULL;
    newItem = new ListNode();
    if(newItem != NULL)
    { 
        newItem->next=NULL; 
        newItem->val=num; 
    }
    else{
        cout<<"Allocation Failure";
    }
    return newItem;
}
int main()
{
    ListNode* list1=NULL;
    ListNode* head=NULL;
    ListNode* added =NULL;
    int n;
    cout<<"enter the number in list: or press -1 to break \n";
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else{
            if(head == NULL)
            {
                head = insert(n);
                if(head != NULL)
                {
                    added = head;
                }
            }
            else{
                added->next=insert(n);
                if(added->next !=NULL)
                {
                    added = added->next;
                }
            }
        }
    }
    cout<<"Input: ";
    printLinkedList(head);
    list1=swapPairs(head);
    cout<<"Output: ";
    printLinkedList(list1);
    return 0;
}