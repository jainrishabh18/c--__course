#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }

};

class List{
    private:
        Node *head=NULL;
    public:
        void addLast(int value){
            Node *toadd = new Node(value);
            if(head == NULL)
            {
                head=toadd;
            }
            else{
                Node *temp=head;
                while(temp->next != NULL)
                {
                    temp=temp->next;
                }
                temp->next=toadd;
            }
        }
        void addFirst(int value){
            Node *toadd =new Node(value);
            if(head == NULL){
                head=toadd;
            }
            else
            {   //here temp is pointing at head
                //then we put the value we want to addfirst in head using head=toadd
                //then after we added we again iterate the list by head->next=temp
                Node *temp = head;
                head = toadd;
                head->next = temp;
            }
        }

        void printList(){
            Node *temp = head;
            while (temp != NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }

        int listLength(){
            int length=0;
            if(head==NULL){
                length=0;
            }
            else{
                Node *temp=head;
                while(temp!=NULL){
                    length++;
                    temp=temp->next;
                }
            }
            return length;
        }
        

};

int main(){

    List l;
    for(int i=1;i<=10;i++)
    {
        l.addLast(i);
    }
    l.printList();
    for (int i = 11; i <= 20; i++)
    {
        l.addFirst(i);
    }
    l.printList();

    cout<<"list length:"<<l.listLength()<<endl;

    return 0;
}