#include <iostream>
#include <conio.h>
using namespace std;
struct ListNode
{
    int data;
    ListNode* next;
};
ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        
        ListNode* PREV=NULL, *NEXT;
        while(head->next){
            NEXT = head->next;
            head->next = PREV;
            PREV = head;
            head = NEXT;
        }
        head->next = PREV;
        return head;
    }
void printLinkedList(ListNode* n)
{
    ListNode* t=n;
    
        while(t !=NULL)
            {
                cout<<t->data<<" ";
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
        newItem->data=num; 
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
    cout<<"Input: ";
    printLinkedList(head);
    list1=reverseList(head);
    cout<<"Output: ";
    printLinkedList(list1);
    return 0;
}