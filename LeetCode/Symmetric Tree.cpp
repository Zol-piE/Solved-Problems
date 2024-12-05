#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val),left(NULL),right(NULL) {};
};
vector<int> inorder(TreeNode *root)
{

    stack<TreeNode*> st;
    vector<int> vect;
    TreeNode *temp = root;
    while(temp!=NULL || !st.empty())
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->left;
        }
        else
        {
            vect.push_back(INT_MIN);
            temp = st.top(); st.pop();
            vect.push_back(temp->val);
            temp= temp->right;
        }
    }
    return vect;
}
vector<int> inorder2(TreeNode* temp)
{
    stack<TreeNode*> st;
    vector<int> vect;
    while(temp!=NULL || !st.empty())
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->right;
        }
        else
        {
            vect.push_back(INT_MIN);
            temp = st.top();
            st.pop();
            vect.push_back(temp->val);
            temp=temp->left;
        }
    }
    return vect;
}
int main()
{

    TreeNode *root =  new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);
    vector<int>vec1,vec2;
    vec1 = inorder(root->left);
    for(auto x : vec1) cout<<x<<" ";
    cout<<endl;
    vec2 = inorder2(root->right);
    for(auto x : vec2) cout<<x<<" ";
    cout<<endl;
    return 0;
}
