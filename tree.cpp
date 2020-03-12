#include<iostream>
#include<stdlib>
    void preOrder(Node *root) {
if (root ==NULL)
return;
cout<<root->data<<" ";
preOrder(root->left);
preOrder(root->right);
    }
 void postOrder(Node *root) {
        if(root==NULL)
        return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";

    }
    void inOrder(Node *root) {
if(root==NULL)
return;
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
    }   
  int height(Node* root) {
        // Write your code here.
        if(root==NULL)
        return -1;
        if(root->left==NULL&&root->right==NULL)
        return 0;
        return max(height(root->left),height(root->right))+1;
    } 
 void levelOrder(Node * root) {
        Node * current;
        if(root==NULL)
        return;
        queue <Node *> q;
        q.push(root);
        while(!q.empty())
        {
            current=q.front();
            cout<<current->data<<" ";
            if(current->left!=NULL)
            q.push(current->left);
            if(current->right!=NULL)
            q.push(current->right);
            q.pop();
        }

    }
Node * insert(Node * root, int data) {
        Node *temp;
        if (root==NULL)                                                     
        {temp=new Node(data);
        return temp;}
        if(data<root->data)
        root->left=insert(root->left,data);
        if(data>root->data)
        root->right=insert(root->right,data);


        return root;
    }
