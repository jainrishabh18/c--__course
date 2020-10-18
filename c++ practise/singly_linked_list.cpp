/*
#include<bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
};

// 5-6

/*  1-2-3-4  */
/*
class SinglyLinkedList
{

public:
    Node *head = NULL;

    void addLast(int value)
    {
        Node *toAdd = new Node();
        // (*toAdd).data = value;
        toAdd->data = value;
        if (head == NULL)
        {
            head = toAdd;
        }
        else
        {
            Node *temp = head;
            while ((*temp).next != NULL)
            {
                temp = temp->next;
            }
            temp->next = toAdd;
        }
    }

    void displayList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{

    SinglyLinkedList list;
    for (int i = 0; i < 5; i++)
    {
        list.addLast(i);
    }
    list.displayList();

    return 0;
}
*/

#include <iostream>
using namespace std;

class node
{
    public:

        int data;
        node *next;

        node()
        {
            data = 0;
            next = NULL;
        }
}; 

class singlylinkedlist
{
    public:
        node *head = NULL;
        //to append a value in a list using singlylinkedlist
        void addatlast(int value)
        {
            node *toadd = new node();
            toadd->data = value;
            if(head==NULL)
            {
                head = toadd;
            }
            else
            {
                node *temp = head;
                while(temp->next !=NULL)
                {
                    temp = temp->next;
                }
                temp->next=toadd;

            }   
        }

        void displaylist()
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout<< temp->data <<" ";
                temp=temp->next;
            }
            cout<< endl;
        }

    
};


int main(){

    singlylinkedlist list;
    for (int i = 0; i < 5; i++)
    {
        list.addatlast(i);
    }
    list.displaylist();
    
    
    return 0;
}
