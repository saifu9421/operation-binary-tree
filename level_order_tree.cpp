#include<bits/stdc++.h>
using namespace std;
 class Node{
     public:
       int val;
        Node *left;
         Node *right;

          Node(int val){
           this->val = val;
            this->left = NULL;
             this->right = NULL;             
          };
 };
  
   Node *input_tree(){
         int val; cin>>val;
          Node *root;
          queue<Node*> q;
              if(val == -1) root = NULL;
                 root = new Node(val);
                  if(root) q.push(root);
                  while (!q.empty())
                  {     Node  * p = q.front();
                        q.pop();
                         int l,r;
                           cin>>l>>r;
                             Node*left;
                              Node*right;
                               if(l == -1)  left = NULL;
                               else left = new Node(l);
                                if(r == -1) right = NULL;
                                else right = new Node(r);
                                p->left = left;
                                 p->right = right;
                                 if(p->left) q.push(p->left);
                                 if(p->right) q.push(p->right);
                    /* code */
                  };
                  return root;
   };
// 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
      void levelOrder(Node *root){
              if(root == NULL)  return;
                queue<Node *> q;
                 if(root) q.push(root);
                  while (!q.empty())
                  {
                        Node *p = q.front();
                         q.pop();
                          cout<<p->val<<" ";
                           if(p->left) q.push(p->left);
                            if(p->right) q.push(p->right);
                  };       
      };
       
    
 int main(){
        Node *root =  input_tree();
           levelOrder(root);
     return 0;
 }