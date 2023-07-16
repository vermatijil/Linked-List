#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;
    TreeNode(T data)
    {
        this->data = data;
        for (int i = 0; i < this->children.size(); i++)
        {
            children[i] = NULL;
        }
    }
};
