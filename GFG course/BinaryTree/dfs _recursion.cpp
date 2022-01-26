#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
        
    }
};


// void inorder(Node* root)
// {
//     if ( root !=NULL)
//     {
//         inorder(root->left);
//         cout<<(root->data)<<" ";
//         inorder(root->right);
//     }
// }

// void preorder(Node *root)
// {
//     if (root != NULL)
//     {
//         cout << (root->data) << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     else
//         {

//             postorder(root->left);
//             postorder(root->right); 
//             cout << (root->data) << " ";
//         }
// }
void printList(Node *node)
{
    Node *prev = NULL;
    while(node!=NULL)
    {
        cout<< node->data << " ";
        prev = Node;
        node = node->right;  
    }
    couut<<endl;

}
// void traverse(Node* r,Node* &head,Node* &prev){
    // if(r==NULL) return;
    // traverse(r->left,head,prev);
    // if(head==NULL){
        // head=r;
        // prev=r;
    // }
    // else{
        // r->left=prev;
        // prev->right=r;
        // prev=r;
    // }
    // traverse(r->right,head,prev);
// }
// Node * bToDLL(Node *root)
// {
    // Node* head=NULL;
    // Node* prev=NULL;
    // traverse(root,head,prev);
    // return head;
// }


int main()
{

    //Node *root=new Node(20);
    //root->left = new Node(10);
    //root->right= new Node(40);
    //root->left->left= new Node(60);
    //inorder(root);
   // cout<<endl;
   // preorder(root);
    //cout << endl;
    //postorder( root);
    //return 0;
}