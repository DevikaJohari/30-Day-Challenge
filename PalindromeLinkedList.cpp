#include <iostream>
#include <conio.h>
#include <stack> 
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
};
void printLinkedList(Node* n)
{
   Node* t=n;
    while(t !=NULL)
    {
    cout<<t->data<<" ";
    t=t->next;
    }
    cout<<"\n";
}
Node* insert(int num)
{
    Node* newItem=NULL;
    newItem = new Node();
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
bool isPalindrome(Node* head)
{
    stack <int> stack1;
    Node* p1 = head;
    while(p1!=NULL)
    {
        stack1.push(p1->data);
        p1=p1->next;
    }
    while(head!=NULL)
    {
        
        if(stack1.top()==head->data)
        {
            stack1.pop();
            head=head->next;
        }
        else
            return false;
    }
    if(stack1.empty())
        return true;
    else
        return false;
}
int main()
{
    Node* head=NULL;
    Node* added =NULL;
    int n;
    bool val;
    cout<<"enter the numbers in list 1 or enter -1 to end inserting : \n";
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
    val=isPalindrome(head);
    if(val)
        cout<<"Output: True";
    else
        cout<<"Output: False";
    return 0;
}