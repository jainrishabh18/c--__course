#include <bits/stdc++.h>
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

    void addFirst(int value)
    {
        Node *toAdd = new Node();
        toAdd->data = value;
        if (head == NULL)
        {
            head = toAdd;
        }
        else
        {
            toAdd->next = head;
            head = toAdd;
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

    /*  1-2-3-4  */

    int displayLength()
    {
        int length = 0;
        if (head == NULL)
        {
            return 0;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                length++;
                temp = temp->next;
            }
            return length;
        }
    }

    void addAt(int position, int value)
    {
        Node *toAdd = new Node();
        toAdd->data = value;
        Node *temp = head;
        Node *prev = NULL;
        for (int i = 0; i < position; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = toAdd;
        //?
        toAdd->next = temp;
    }
};