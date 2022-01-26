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


//......................//


vector<int> printTreeLevelWise(Node *root)
{
    if (root == NULL)
    {
        return vector<int>();
    }

    vector<int> res;
    queue<Node *> queueOfNodes;
    queueOfNodes.push(root);

    while(!queueOfNodes.empty())
    {
        Node *topNode = queueOfNodes.front();
        
        queueOfNodes.pop();

        res.push_back(topNode->data);

        //        cout << topNode->data << ":";
        if (topNode->left != NULL)
        {
            //            cout << "L-" << topNode->left->data << ", ";
            queueOfNodes.push(topNode->left);
        }
        if (topNode->right != NULL)
        {
            //            cout << "R-" << topNode->right->data;
            queueOfNodes.push(topNode->right);
        }
    } 

    return res;

}
//......................//





//......................//

int height(struct Node* root)
    {
        // code here
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            return max(height(root->left),height(root->right))+1;
        }
    }
//......................//




vector<int> reverseLevelOrder(Node *root)
    
    {
       if (root == NULL)
       {
           return vector<int>();
       }
       vector<int>result;
       queue<Node*>q;
       stack<Node*> s;
       q.push(root);

       while(q.empty()==false)
       {
           Node *topNode=q.front();
           q.pop();
           s.push(topNode);
           if(topNode->left != NULL)
           {
             q.push(topNode->left);  
           }
           if(topNode->right != NULL)
           {
             q.push(topNode->right);  
           }
        }
       while(s.empty()==false)
       {   
           result.push_back(s.top()->data);
           s.pop();
       }
       return result;
    }



//......................//


/*this is to find the diameter of node in O(n) time complexity */
int res=0;
int height(Node *root)
{
    if(root==NULL) return 0;

    int left_height=height(root->left);
    
    int right_height=height(root->right);
    
    //Diamter is (left height +right height +1) and the diameterof each node 
    //is saved in res and it will check for every node and the node with
    // biggest res value is the diamter of the tree hence saved in res
    res=max( res ,left_height + right_height + 1);
    
    return 1+max(left_height ,right_height); 


}
//this function is used to call the diameter as in height function to 
//reduce complexity we  have find the height and diameter of each node
// at the same time so to call the diamter another func diameter is made.
int diameter(Node *root) 
{
    height(root);
    return res;
}


//......................//




//......................//



void mirror(Node* root)
    {
        // code here
        //vector<int> mirror1;
        //height(root);
        
        if (root==NULL)
        {
            return ;
        }
        //Node *temp;
        Node *temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        
        mirror(root->left);
        mirror(root->right);
    }








//......................//

//iterative solution to inorder traversal
vector<int> inOrder(Node* root)
    {
        //code here
        // left root right
        vector<int>res;
        if(root==NULL)return vector<int>();
        Node*curr=root;
        stack<Node*>s;
        while(s.empty()==false || curr !=NULL)
        {
            while(curr !=NULL)
            {
                s.push(curr);
                curr=curr->left; 
            }
            curr=s.top();
            s.pop();
            //int curr_1=curr;
            res.push_back(curr->data);
            curr=curr->right;
        }
        return res;
    }

//......................//







//......................//


//iterative solution to preorder traversal
vector<int> preOrder(Node* root)
    {
        //code here

        //preorder is root left right
        if(root==NULL)return vector<int>();
        vector<int>res;
        stack<Node*>st;
        st.push(root);
        while(st.empty()==false)
        {
            Node *top_node=st.top();
            st.pop();
            res.push_back(top_node->data);
            
            //acc too preorder left should be traversed first but
            //right node is traversed first because it is a stack that
            //says LIFO=Last In First Out
            
            //preorder is root left right



            
            if(top_node->right !=NULL)
            {
                st.push(top_node->right);
            }
            if(top_node->left !=NULL)
            {
                st.push(top_node->left);
            }
        
        }
        return res;
    
    }

//..............//





//..............//

//Function to check whether a binary tree is balanced or not.
    
    int height(struct Node* root)
    {
        // code here
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            return max(height(root->left),height(root->right))+1;
        }
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL)return true;
        int lh=height(root->left);
        int rh=height(root->right);
        
        return abs(lh-rh)<=1 && isBalanced(root->left) &&isBalanced(root->right);
    }
//.......................


//....................
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>res;
   if(root==NULL)return vector<int>();
   queue<Node*>q;
   q.push(root);
   
   while(q.empty()==false)
   {
        int n=q.size();
        for(int i=0; i<n; i++)
        {
           Node *curr=q.front();
           q.pop();
           //res.push_back(topnode->data);
           
           if(i==0)
           {
             res.push_back(curr->data);  
           }
           if(curr->left !=NULL)
           {
               q.push(curr->left);
           }
           if(curr->right !=NULL)
           {
               q.push(curr->right);
           }
        }
        //return res; 
   }
   return res;
   
       
}

//.................

 vector<int> rightView(Node *root)
    {
       // Your Code here
        vector<int>res;
        if(root==NULL)return vector<int>();
        queue<Node*>q;
        q.push(root);
        while(q.empty()==false)
        {
            
            int count=q.size();
            for(int i=0; i<count; i++)
            {
                Node *curr=q.front();
                q.pop();
                // Node *last=q.back();
                // q.pop();
                if(i==0)
                {
                  res.push_back(curr->data);  
                } 
                
                
                if(curr->right !=NULL)
                {
                    q.push(curr->right);
                }
                if(curr->left !=NULL)
                {
                    q.push(curr->left);
                }
            }
        }return res;

//....................


int treesum(Node* root)
    {
        if(root==NULL)
            return 0;
        return treesum(root->left)+treesum(root->right)+root->data;
    }

    bool isSumTree(Node* root)
    {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        if(root->data!=treesum(root->left)+treesum(root->right))
            return false;
        //return isSumTree(root->left);
        //return false;
        if(isSumTree(root->left)==false)
        {
            return isSumTree(root->left);
        }
        //if(isSumTree(root->right)==false)
        //{
        //   
        //}
         return isSumTree(root->right);

    }

//................





//....... Transform to sum Tree ..........

//Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    
    int sumof_tree(Node *root)
    {
        if(root == NULL)return 0;
        
        int a=sumof_tree(root->left);
        int b=sumof_tree(root->right);
        
        
        //we have put root->data in temp because we will add values of root->left and root ->right
        //and put it on root->data but we also want the before roots value to add for the next outcome
        //below we have tried to tell why we have used temp to store data of root 
    
        
        int temp=root->data;
        root->data=a +b;
        return temp+a +b; 
         //
        //        10                    { 8-4-2+7+5+6}=20 (temp=10)
        //       /  \                         /                \
        //     -2    6     ==       8+(-4)=  4{temp=-2}  {temp=6}12=(7+5)
        //     /\    /\                      /\                 /\
        //    8 -4  7  5                    0  0               0  0
        
    }

    void toSumTree(Node *root)
    {
        // Your code here
        sumof_tree(root);
        
    }
    


//.......................

//...........zigzag traversal method 1
vector <int> zigZagTraversal(Node* root)
    {
    	// Code here

        vector<int>res;
        queue<Node*>q;
        stack<int>s;
        bool reverse = false;
        if(root==NULL)return vector<int>();
        q.push(root);
        while(q.empty()==false)
        {
            int count=q.size();
            for(int i=0; i<count; i++)
            {
                Node *curr=q.front();
                q.pop();
                if(reverse)
                {
                    s.push(curr->data);
                }
                else
                {
                    res.push_back(curr->data);
                }
                if(curr->left !=NULL){
                    q.push(curr->left);
                }
                if(curr->right !=NULL){
                    q.push(curr->right);
                }

            }
            if(reverse)
            {
                while(s.empty()==false){
                    res.push_back(s.top());
                    s.pop();
                }
            }
            reverse = !reverse;

            
        }
        return res;
        
    
    }
    
//...............


//...........zigzag traversal method 2

vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
        vector <int>res;
        if(root==NULL)return vector<int>();
        stack<Node*>s1,s2;
        s1.push(root);
        while(s1.empty()==false || s2.empty() ==false)
        {
            while(s1.empty()==false)
            {
                Node*top = s1.top();
                s1.pop();
                res.push_back(top->data);
                if(top->left!=NULL){s2.push(top->left);}
                if(top->right!=NULL){s2.push(top->right);}
            }
            while(s2.empty()==false)
            {
                Node*top = s2.top();
                s2.pop();
                res.push_back(top->data);
                if(top->right!=NULL){s1.push(top->right);}
                if(top->left!=NULL){s1.push(top->left);}
                
            }
        }
        return res; 

        
    
    }

//...............