/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return root;
        }
        queue<Node*> q;
        vector<Node*> v;
        q.push(root);
        while(!q.empty()){
            Node* top = q.front();
            q.pop();
            if(!top->left && !top->right){
                continue;
            }
            if(top->left != NULL){
                q.push(top->left);
                v.push_back(top->left);
            }
            if(top->right != NULL){
                q.push(top->right);
                v.push_back(top->right);
            }
        }
        int target = 2;
        int counter = 1;
        if(!v.size()){
            return root;
        }
        for(int i=0;i<v.size()-1;i++){
            
            if(counter == target){
                counter = 1;
                target *= 2;
                continue;
            }
            v[i]->next = v[i+1];
            counter++;
        }
        return root;
    }
};
