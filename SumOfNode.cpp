#include <iostream>
#include <conio.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *new_node, *head=NULL, *temp=NULL, *current = NULL;
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
// delete galat ho raha h 
void deleteAll(int key)
{
    int i, count;
    struct Node *prev, *cur;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    count = 0;
    cur   = head;
    prev  = cur;


    // Find node before head node
    while (prev->next != head) 
    {
        prev = prev->next;
        count++;
    }

    // Iterate till first node
    i = 0;
    while (i <= count)
    {
        if (cur->data == key)
        {
            // Link prev node with next node of current
            if (cur->next != cur)
                prev->next = cur->next;
            else
                prev->next = NULL;

            // Adjust head node if needed
            if (cur == head)
                head = prev->next;

            // Delete current node
            free(cur);

            // Move current node ahead
            if (prev != NULL) 
                cur = prev->next;
            else
                cur = NULL;
        }
        else 
        {
            prev = cur;
            cur  = cur->next;
        }


        i++;

    }
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
        while(digit!=0)
        {
            x=digit%10;
            sum=sum+x;
            digit=digit/10;
        }
        if(sum%2==0)
        {
            deleteAll(temp->data);
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
    int item_to_find;
    create();
    cout<<"\nInput: ";
    traverse();
    deletedelement();
    cout<<"\nOutput: ";
    traverse();
    return 0;
}
