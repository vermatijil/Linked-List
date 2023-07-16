#include <iostream>
#include <queue>
#include "TreeNode.cpp"

using namespace std;

TreeNode<int> *TakeInput()
{
    cout << "enter the data";
    int data;
    cin >> data;
    TreeNode<int> *root = new TreeNode<int>(data);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "enter the number of children of " << front->data;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "enter the childData ";
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        int count = 0;
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data;
            if (count != front->children.size())
            {
                cout << ",";
            }
            pendingNodes.push(front->children[i]);
            count++;
        }
        cout << endl;
    }
}

int main()
{
    TreeNode<int> *root = TakeInput();
    cout << "the tree is " << endl;
    printTree(root);
    return 0;
}