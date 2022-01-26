#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node(int x)
    {
        data =x;
        next=NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;

    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail =tail->next;
    }
    return head;    
}

void printList(Node* n)
{
    while(n){
        cout<<n->data <<" ";
        n=n->next;
    }
    cout<<endl;
}

class Solution
{
public:
    //Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // code here
        //reverse karenga linkded list
        Node *newList = NULL;

        //reverse first list
        Node *prevptr1=NULL;
        Node *currptr1=first;
        Node *nextptr1=NULL;
        while(currptr1 != NULL)
        {
            nextptr1=currptr1->next;
            currptr1->next =prevptr1;


            prevptr1=currptr1;
            currptr1=nextptr1; 
        } 
        first =prevptr1;

        //reverse first list
        Node *prevptr2 = NULL;
        Node *currptr2 = second;
        Node *nextptr2 = NULL;
        while (currptr2 != NULL)
        {
            nextptr2 = currptr2->next;
            currptr2->next = prevptr2;

            prevptr2 = currptr2;
            currptr2 = nextptr2;
        }
        second = prevptr2;

        Node *tempA=first;
        Node *tempB=second;
        int carry=0;

        while(tempA != NULL && tempB != NULL)
        {
            int value =tempA->data + tempB->data + carry;
            if(value>= 10){
                carry= value %10;
                value= value/10;    
            }
            else{
                carry=0;
            }
            if(newList==NULL)
            {
                newList=new Node(value);
                
            }
            else{
                Node *toAdd=new Node(value);
                toAdd->next=newList;
                newList=toAdd;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        while(tempA != NULL)
        {
            int value = tempA->data + tempB->data + carry;
            if (value >= 10)
            {
                carry = value % 10;
                value = value / 10;
            }
            else
            {
                carry = 0;
            }
            if (newList == NULL)
            {
                newList = new Node(value);
            }
            else
            {
                Node *toAdd = new Node(value);
                toAdd->next = newList;
                newList = toAdd;
            }
            tempA = tempA->next;
        }

        while(tempB != NULL)
        {
            int value = tempA->data + tempB->data + carry;
            if (value >= 10)
            {
                carry = value % 10;
                value = value / 10;
            }
            else
            {
                carry = 0;
            }
            if (newList == NULL)
            {
                newList = new Node(value);
            }
            else
            {
                Node *toAdd = new Node(value);
                toAdd->next = newList;
                newList = toAdd;
            }
            tempB = tempB->next;
        }


    }
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
         
        cin>>n;
        Node* first = buildList(n);
        cin>>m;
        Node* second = buildList(m);

        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}