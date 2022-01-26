#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
        node *prev;
        
        node(int val){
            data=val;
            node *next=NULL;
            node *prev=NULL;

        }

};

class List{
    private:

        node *head=NULL;

    public:


        void insertatHead(int val)
        {

            node *n=new node(val);
            //node *temp = head;
            //temp->prev=n;
            n->next=head;
            if(head !=NULL)
            {
                head->prev = n;
            }
            n->prev = NULL;
            head=n;
        }
        void insertatTail(int val)
        {

            if(head==NULL){
                insertatHead(val);
                return;
            }
            node *n= new node(val);
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;

            }
            temp->next=n;
            n->prev=temp;
            n->next=NULL;
             
        }
        void deleteAtHead(){
            //node *temp=head;
            if(head!=NULL){
                //delete head;
                node *todelete=head;
                head=head->next;
                head->prev=NULL;

                delete todelete;


            }
        }
        void deleteAnyNode(int pos)
        {

            if(pos==1){
                deleteAtHead();
                return;
            }
            node *temp=head;
            int count=1;
            while(temp != NULL && count != pos){
                temp=temp->next;
                count++;
            }
            temp->prev->next=temp->next;
            if (temp->next != NULL){
                temp->next->prev = temp->prev;
            } 
            delete temp;
            

        }
        

        
        void printList()
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){

    List l;
    l.insertatTail(1);
    l.insertatTail(2);
    l.insertatTail(4);
    l.insertatTail(6);
    l.printList();
    l.insertatHead(7);
    l.printList();
    l.deleteAnyNode(2);
    l.printList();
    l.deleteAtHead();
    l.printList();

    return 0;
}