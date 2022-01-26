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

class List
{
    private:
        Node *head=NULL;
    public:    
        void addLast(int value)
        {
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
            {   
                Node *temp = head;
                head = toadd;
                head->next = temp;
            }
        }

        void printList()
        {
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
        int getNthFromLast(int n)
        {
            Node *temp = head;
            if (n > listLength())
            {
                return -1;
            }
            else
            {
                for (int i = 0; i < listLength() - n; i++)
                {
                    temp = temp->next;
                }
                return temp->data;
            }
            // Your code here
        }

        void lastAtFirst()
        {
            Node *prev=NULL;
            Node *curr=head;
            while(curr->next !=NULL){
                prev=curr;
                curr=curr->next;

            }
            prev->next=NULL;
            curr->next=head;
            head=curr;
        }

        void reverselinkedlist()
        {
            Node *prevptr=NULL;
            Node *currptr=head;
            Node *nextptr = NULL;

            while(currptr != NULL){
            //if want to revise concept head to aman dhatarwal video of reversing a  linkedlist
                nextptr=currptr->next;
                currptr->next=prevptr;

                prevptr=currptr;
                currptr=nextptr;
            }
            head = prevptr;
        }

        void addOneToList(){
            Node *prevptr1=NULL;
            Node *currptr1=head;
            Node *nextptr1=NULL;

            while(currptr1 !=NULL){
                nextptr1=currptr1->next;
                currptr1->next=prevptr1;

                prevptr1=currptr1;
                currptr1=nextptr1;

            }
            head=prevptr1;
            //6->2->1
            //9->9->1
            Node *temp=head;
            int toAdd =1;
            while(temp != NULL){
            
                int value = temp->data;//9 //9 //1
                value+=toAdd;//10 //10 //2
                if(value >=10)
                {
                    temp->data =0;
                    toAdd=1;
                    temp=temp->next; //0 0 2
                }
                else
                {
                    //value=6 
                    temp->data=value;
                    break;
                    //value=toadd;
                    //value 6+1=7
                }
            }
            Node *prevptr2 = NULL;
            Node *currptr2 = head;
            Node *nextptr2 = NULL;

            while (currptr2 != NULL)
            {
                nextptr2 = currptr2->next;
                currptr2->next = prevptr2;

                prevptr2 = currptr2;
                currptr2 = nextptr2;
            }
            head = prevptr2;
            if(head->data==0){
                Node *addToFirst=new Node(1);
                addToFirst->next=head;
                head=addToFirst;
            }
        }
        
        void mohitBhai() 
        {
            Node *newList = NULL;
            Node *temp = head;
            while(temp != NULL) 
            {
                Node *toCopy = new Node(temp->data);
                if(newList == NULL) {
                    newList = toCopy;
                } else {
                    //.
                    toCopy->next = newList;

                    
                    newList = toCopy;
                }
                temp = temp->next;
            }

            Node *temp1 = newList;
            while(temp1 != NULL) {
                cout << temp1->data << " ";
                temp1 = temp1->next;
            }
            cout << endl;

        

        }

        void segregateevenodd()
        {

            Node *even_start = NULL;
            Node *even_end = NULL;

            Node *odd_start = NULL;
            Node *odd_end = NULL;

            Node *temp = head;

            while (temp != NULL)
            {
                int value = temp->data;
                if (value % 2 == 0)
                {
                    if (even_start == NULL)
                    {
                        even_start = temp;
                        even_end = even_start;
                    }
                    else
                    {
                        even_end->next = temp;
                        even_end = even_end->next;
                    }
                }

                else
                {
                    if (odd_start == NULL)
                    {
                        odd_start = temp;
                        odd_end = odd_start;
                    }
                    else
                    {
                        odd_end->next = temp;
                        odd_end = odd_end->next;
                    }
                }
                temp = temp->next;
            }
            if (even_start == NULL || odd_start == NULL)
            {
                return;
            }
            even_end->next = odd_start;
            odd_end->next = NULL;
            temp = even_start;


        }

        long long listToInteger()
        {
            long long count = 0;
            Node *temp = head;
            while (temp != NULL)
            {
                count = (count * 10 + temp->data) % 1000000007;
                temp = temp->next;
            }
            return count;
        }
};

int main()
{
//
    //List l;
    //for(int i=1;i<=10;i++)
    //{
    //    l.addLast(i);
    //}



    //l.printList();
    //for (int i = 11; i <= 20; i++)
    //{
    //    l.addFirst(i);
    //}
    //l.printList();
    //for (int i = 11; i <= 20; i++)
    //{
    //    l.addFirst(i);
    //}
    //
    List ri;
    
    // for (int i = 1; i <= 10; i++)
    // {
    //     ri.addLast(i);
    //     // ri.addLastatFirst();
    // }
    // ri.lastAtFirst();
    // ri.printList();

    //for (int i = 1; i <= 10; i++)
    //{
    //    ri.addLast(i);
    //    // ri.addLastatFirst();
    //}
    //ri.printList();
    //ri.reverselinkedlist();
    //ri.printList();

    // for (int i = 6; i<=9;  i++)
    // {
    //     ri.addLast(i);
    //     // ri.addLastatFirst();
    // }
    ri.addLast(1);
    ri.addLast(2);
    ri.addLast(3);
    ri.addLast(4);
    ri.addLast(6);
    //ri.addOneToList();
    // ri.segregateevenodd();
    cout << ri.listToInteger() << endl;
    // ri.printList();

    //cout << "Last 2nd value is : " << ri.getNthFromLast(2) << endl;

    //ri.mohitBhai();

    //cout<<"list length:"<<l.listLength()<<endl;
    
    
    return 0;
}