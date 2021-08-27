/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list*/
#include <iostream>
#include <conio.h>
#include<stack>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode final(0);
    ListNode* p = &final;
    int c = 0, sum;
    while(l1 || l2) 
    {
      sum = c;
      if(l1) 
        sum += l1->data;
      if(l2) 
        sum += l2->data;
      if(sum >= 10) 
      {
        c = sum / 10;
        sum %= 10;
      } 
      else 
        c = 0;
      p->next = new ListNode(sum);
      p = p->next;
      if(l1) 
        l1 = l1->next;
      if(l2) 
        l2 = l2->next;
    }
    if(c)
      p->next = new ListNode(c);
    return final.next;
}
int main()
{
    ListNode* head1=NULL;
    ListNode* added =NULL;
    int n;
    cout<<"enter the numbers in list 1 or enter -1 to end inserting : \n";
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else{
            if(head1 == NULL)
            {
                head1 = insert(n);
                if(head1 != NULL)
                {
                    added = head1;
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
    ListNode* head2=NULL;
    ListNode* added2 =NULL;
    int n2;
    cout<<"enter the number in list 2 or enter -1 to end inserting : \n";
    while(1)
    {
        cin>>n2;
        if(n2==-1)
        {
            break;
        }
        else{
            if(head2 == NULL)
            {
                head2 = insert(n2);
                if(head2 != NULL)
                {
                    added2 = head2;
                }
            }
            else{
                added2->next=insert(n2);
                if(added2->next !=NULL)
                {
                    added2 = added2->next;
                }
            }
        }
    }
    ListNode* Add=NULL;
    Add=addTwoNumbers(head1,head2);
    printLinkedList(Add);
    return 0;
}