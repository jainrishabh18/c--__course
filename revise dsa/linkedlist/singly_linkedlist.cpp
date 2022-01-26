#include <bits/stdc++.h>
using namespace std;

class Node{
    //in this class we are writting what we will add  to the list
    //taking data in int data
    // *next is the pointer showing the address of the next value 
    // in this case next==null because we are adding it to last so nothing will be
    //there to add .
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

};

class List{
    private:
       Node *head=NULL;
    
    public:
        void addLast(int value){
            //*toadd is a pointer that will add new node to list and
            // in toadd the value will be those which we want to add
            Node *toadd=new Node(value);
            //if else cond. here says if head is empty then put value in it.
            //if head is not empty make a pointer temp that will point to head 
            //and till the point temp is not empty we will run the cond 
            //when temp will be empty we will add new node to it. 
            if(head==NULL){
                head=toadd;
            }
            else{
                Node *temp=head;
                while(temp->next != NULL){
                    temp = temp->next;

                }
                temp->next = toadd;

            }
        }
        void addFirst(int value)
        {
            Node *toadd = new Node(value);
            if (head == NULL)
            {
                head = toadd;
            }
            else
            { //here temp is pointing at head
                //then we put the value we want to addfirst in head using head=toadd
                //then after we added we again iterate the list by head->next=temp
                Node *temp = head;
                head = toadd;
                head->next = temp;
            }
        }

        void printList(){
            Node *temp=head;
            while(temp != NULL){
                cout<< temp->data <<" ";
                temp=temp->next;
            }
            cout << endl;
        }
        int listLength()
        {
            int length = 0;
            if (head == NULL)
            {
                length = 0;
            }
            else
            {
                Node *temp = head;
                while (temp != NULL)
                {
                    length++;
                    temp = temp->next;
                }
            }
            return length;
        }
        bool detectLoop(Node *head)
        {
            if (head == NULL || head->next == NULL)
            {
                return false;
            }
            else
            {
                Node *slow = head;
                Node *fast = head;
                while (fast->next && fast->next->next != NULL)
                {
                    slow = slow->next;
                    fast = fast->next->next;
                    if (slow == fast)
                    {
                        return true;
                    }
                }
                return false;

            } // your code here
        }
};


int main(){
    
    List l;
    for(int i=1; i<=10;i++){
        l.addLast(i);
    }
    l.printList();
    return 0;
}