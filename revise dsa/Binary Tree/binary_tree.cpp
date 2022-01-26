#include <bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data){
            this->data=data;
            left =NULL;
            right=NULL;
    }

};

//Node *takeInput();
//void printTree(Node);

// Node *takeInput()
// {
//     int root;
//     cout << "Enter Data:";
//     cin >> root;

//     if (root == -1)
//     {
//         return NULL;
//     }
//     Node *rootNode = new Node(root);
//     Node *leftNode = takeInput();
//     Node *rightNode = takeInput();

//     rootNode->left = leftNode;
//     rootNode->right = rightNode;

//     return rootNode;
// }

// void printTree(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
  
//     cout << root->data;
//     printTree(root->left);
//     printTree(root->right);
// }


Node *takeInputLevelWise()
{
    int rootData;

    cout<<"Enter Root Data";
    cin>>rootData;

    Node *rootNode = new Node(rootData);
    queue<Node*> queueOfNodes;
    queueOfNodes.push(rootNode);

    while(!queueOfNodes.empty())
    {
        Node *topNode = queueOfNodes.front();
        queueOfNodes.pop();

        int leftData;
         cout<<"Enter value of left: "<< topNode->data <<":";
         cin>>leftData;
        
        if(leftData == -1){
            topNode->left=NULL;
        }
        else{
            Node *leftNode = new Node(leftData);
            topNode->left =leftNode; 
            queueOfNodes.push(leftNode);
        }

        int rightData;
        cout<<"Enter right value of"<<topNode->data<<":";
        cin>>rightData;

        if(rightData == -1)
        {
            topNode->right=NULL;
        }
        else
        {
            Node *rightNode = new Node(rightData);
            topNode->right = rightNode;
            queueOfNodes.push(rightNode); 
        }

        return rootNode;


    }



}





 void printTreeLevelWise(Node *root)
 {
     if(root == NULL){
         return;
     }

     queue<Node*>queueOfNodes;
     queueOfNodes.push(root);
    
     while(!queueOfNodes.empty())
     {
         Node *topNode = queueOfNodes.front();
         queueOfNodes.pop();

         cout<<"L-"<<topNode->data<<":";
         if(topNode->left !=  NULL)
         {
             cout<<"L-"<<topNode->left->data;
             queueOfNodes.push(topNode->left);
         }
         if (topNode->right != NULL)
        {
            cout << "R-" << topNode->right->data;
            queueOfNodes.push(topNode->right);
        }

     }

 }





vector<int> reverseLevelOrder(Node *root)
{
    if(root == NULL)
    {
        return vector<int>();
    }
    vector<int> result;
    queue<Node*>q;
    stack<Node*>s;
    q.push(root);

    while(q.empty())==false)
    {
        root = q.front();
        q.pop();
        s.push(root);   
        if(root->right != NULL)
        {
            q.push(root->right);
        }
        if(root->leftt != NULL)
        {
            q.push(root->left);
        }

    }
    while(s.empty())==false)
    {
        root = s.top();
        result.push_back(root);
        s.pop();
    }
    return result;
}

    


    











    int main()
{
    // Node *root =takeInput();
    // cout<<"our tree is: ";
    // printTree(root);
    // cout<<endl;

    
    Node *root = takeInputLevelWise();
    
    vector<int> tree = printTreeLevelWise(root);

    return 0;
}  




