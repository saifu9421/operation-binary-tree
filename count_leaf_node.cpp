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

        Node* input_tree(){
                int val; cin>>val;
                Node*root;
                  queue<Node *> q;
                   if(val == -1) root = NULL;
                     root = new Node(val);
                    if(root) q.push(root);
                    while (!q.empty())
                    { 
                        Node *p = q.front();
                        q.pop();
                         int l,r;cin>>l>>r;
                          Node *left;
                          Node*right;
                           if(l == -1)  left = NULL;
                           else left  = new Node(l);
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
        
        //  10 20 50 30 90 70 60 -1 -1 -1 -1 -1 80 -1 -1 -1 -1

    int countLeftNode(Node *root){ 
       if(root == NULL) return 0;
        if(root->left== NULL && root->right == NULL)return 1;
        else{
              int l = countLeftNode(root->left);
               int r =  countLeftNode(root->right); 
               return l+r;
        };
    };
         
 int main(){
      Node *root = input_tree();
           cout<<countLeftNode(root);
     return 0;
 }