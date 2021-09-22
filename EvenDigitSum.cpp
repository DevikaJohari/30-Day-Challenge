#include <iostream>
#include <conio.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *new_node, *head=NULL, *temp=NULL;
void create()
{
    char ch='y';
    while(ch == 'y')
    {
        new_node = (struct Node*)malloc(sizeof(struct Node)); 
        cout<<" Input data item: ";
        cin>>new_node->data;
        new_node->next = head;
        
        if(head != NULL)
        {
            temp->next = new_node;
            temp = new_node;
        }
        else
            head = temp = new_node;
        
	    cout<<" Input y for adding more nodes: ";
        cin>>ch;
    }
}
void deleteNode(Node* del)
{
    struct Node* temp1 = head;
    if (head == del)
        head = del->next;
    while (temp->next != del) {
        temp = temp->next;
    }
    temp->next = del->next;
    free(del);
    return;
}
void deletedelement()
{
    temp=head;
    int digit;
    int x,sum;
    do
    {
        sum=0;
        digit=temp->data;
        while(digit)
        {
            x=digit%10;
            sum=sum+x;
            digit=digit/10;
        }
        if(sum % 2 == 0)
        {
            deleteNode(temp);
        }
        temp=temp->next;
    } while (temp!=head);
}

void traverse()
{   temp = head;
    do {
        cout<<" "<<temp->data;
        temp = temp->next;
    } while (temp->next != head);
    cout<<" "<<temp->data;
}

int main()
{
    int item_to_find,num;
    create();
    cout<<"\n The data items in the linked list are:\n";
    traverse();
    deletedelement();
    cout<<"\n The edited data items in the linked list are:\n";
    traverse();
    return 0;
}
