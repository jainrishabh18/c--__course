#include <iostream>
#include <map>
using namespace std;


class node
{
    public:

    int data;
    node* next;

    node (int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<< "memory is free for node with data " << value << endl;
    }


};
 

void insertNode(node* &tail,int element,int d)
{
    // empty list
    if(tail == NULL)
    {
        node* newNode = new node(d);
        tail = newNode;
        // bcz circular linked list
        newNode ->next = tail;
    }
    else
    {
        node* curr = tail;
        while(curr->data != element)
        {
            curr = curr->next;

        }
        
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
        
    }
    

}

void printLL(node* tail) {

    node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
}

int main()
{
    node* tail = NULL;
    printLL(tail);
    insertNode(tail,3, 5);
    printLL(tail);

    insertNode(tail,5, 10);
    printLL(tail);

    insertNode(tail,5, 7);
    printLL(tail);

    insertNode(tail,10, 5);
    printLL(tail);

    insertNode(tail,5, 6);
    printLL(tail);
}