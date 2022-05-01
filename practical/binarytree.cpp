#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:

    char data;
    string sp;
    Node *left = NULL;
    Node *right = NULL;
    Node (char data, string sp)
    {
        this->data = data;
        left = NULL; 
        right = NULL;
        this ->sp  = sp; 
    }
};

bool check(Node* rootNode)
{
    if(rootNode->left != NULL &&  rootNode->right != NULL)
    {
        if(rootNode->left->sp == "Not Special" && rootNode->right->sp == " Not Special")
        {
            
            return true;
            // rootNode->sp == "special";
            // cout<< rootNode->sp << endl;
            
        }
    }
    else if(rootNode->left != NULL)
    {
        if(rootNode->left->sp == "Not Special")
        {
            
            return true;
            // rootNode->sp == "special";
            // cout<< rootNode->sp << endl;
        }
    }
        
    else if(rootNode->right != NULL)
    {
        if((rootNode->right->sp == "Not Special"))
        {
            
            return true;
            // rootNode->sp == "special";
            // cout<< rootNode->sp << endl;
        }
        
    }
    return false;
}

bool isSpecial(Node* rootNode , char d)
{
    queue<Node*>q;
    q.push(rootNode);
    while(!q.empty())
    {
        Node* start = q.front();
        q.pop();

        // checking if value is matching the desired value
        if(start->data == d)
        {
            if(check(start))
            {
                return true;
            }else {
                break;
            }
        }
        if(start->left != NULL)
        {
            q.push(start->left);
        }
        if(start->right != NULL)
        {
            q.push(start->right);
        }
        
    }
    return false;
}

int main()
{
    Node *rootNode = new Node('L', "Not Special");
    rootNode -> left = new Node('D',"Not Special");
    rootNode -> left -> left = new Node('A',"Not Special");
    rootNode -> left -> left -> right = new Node('C',"Not Special");

    rootNode -> left -> right = new Node('G',"Not Special");
    rootNode -> left -> right -> left = new Node('E',"Not Special");

    rootNode -> right = new Node('S',"Not Special");
    rootNode -> right -> left= new Node('P',"Not Special");
    rootNode -> right -> left -> left = new Node('M',"Not Special");

    rootNode -> right -> right= new Node('W',"Not Special");
    rootNode -> right -> right -> right= new Node('Z',"Not Special");

    if(isSpecial(rootNode,'D'))
    {
        cout<< "this node is a special node-->"<< endl;     
    }
    else
    {
        cout<< "this node is not a special node"<< endl;
    }

















    
}