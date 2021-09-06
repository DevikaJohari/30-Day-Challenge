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
ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
            return head;
        ListNode* dummy=head;
        int len=1;
        while(dummy->next && ++len)
            dummy=dummy->next;
        dummy->next=head;
        k=k% len;
        k=len-k;
        while(k--)
            dummy=dummy->next;
        head=dummy->next;
        dummy->next=NULL;
        return head;
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
    int n,num;
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
    cout<<"Number of times the list has to be rotated: ";
    cin>>num;
    cout<<"Input: ";
    printLinkedList(head);
    list1=rotateRight(head,num);
    cout<<"Output: ";
    printLinkedList(list1);
    return 0;
}