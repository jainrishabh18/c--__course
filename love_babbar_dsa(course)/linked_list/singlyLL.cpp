#include<iostream>
#include<map>
using namespace std;

class node
{
    public:

        int data;
        node* next;

// constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }


// destructor
    ~node() {
        int value = this->data;
    // memory free here
        if(this->next != NULL){
            delete next;

            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }

};

void insertAtHead(node* &head , int d)
{
    // created a new node
    node* toadd = new node(d);
    if(head == NULL)
    {
        head = toadd;
    }
    else{
        
        node* temp = head;
        head = toadd; 
        toadd->next = temp;
    }

}

void insertAtTail(node* head,int d)
{
    node* toadd = new node(d);
    node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp -> next = toadd;
    // toadd->next = NULL;


}

void insertAtPos(node* head, node*tail,int d , int pos)
{
    
//  inserting node at the start
    if(pos==1)
    {
        insertAtHead(head, d);
        return;
    }

    node* curr = head;
    int count = 1;

// inserting node at any pos except start and end
    while(count < pos-1)
    {
        curr = curr->next;
        count++;    
    }

// inserting node at last pos
    if(curr->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
//  creating a new node and adding it to a position asked
    node* toadd = new node(d);
    toadd->next = curr->next;
    curr->next = toadd;


}


void deleteNode(node* &head, int pos)
{

    if(pos == 1)
    {
        node* temp = head;
        head = head->next; 
        
        temp->next = NULL;
        delete temp;
        // return;

    }
    else
    {
        int cnt = 1;
        node* prev = NULL;
        node* currptr = head;
        // node* nextptr = currptr->next;

        while( cnt < pos)
        {
            prev = currptr;
            currptr = currptr->next;
            cnt++;
        }
        
        
        prev -> next = currptr ->next;
        currptr->next = NULL;
        delete currptr;
    }
    

}





void printLL(node* head)
{
    if(head == NULL)
    {
        cout<<"empty list"<<endl;
    }
    else{

        node* temp = head;
        while(temp != NULL)
        {
            cout<< temp->data <<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    

}

int main()
{
    node* node1 = new node(10);

    // node* head = node1;
    node* head = node1;
    node* tail = node1;

    printLL(head);
    insertAtHead(head ,4);
    insertAtHead(head ,12);
    printLL(head);

    deleteNode(head ,3);
    cout << "after 1st deletion" <<endl;
    printLL(head);
    deleteNode(head ,1);
    cout << "after 2nd deletion" <<endl;
    printLL(head);
    deleteNode(head ,1);
    cout << "after 3rd deletion" <<endl;
    printLL(head);
}
