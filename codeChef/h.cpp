#include <bits/stdc++.h>
using namespace std;
struct HackNode{
    int value;
    struct HackNode *left, *right;
};
vector<int> HackTree(HackNode *root){
    queue<HackNode *> hackQueue;
    vector<int> vec;
    if (root == NULL)
        return vec;
    hackQueue.push(root);
    while (hackQueue.empty() == false){
        HackNode *hack = hackQueue.front();
        vec.push_back(hack->value);
        hackQueue.pop();

        if (hack->left != NULL)
            hackQueue.push(hack->left);

        if (hack->right != NULL)
            hackQueue.push(hack->right);
    }
    return vec;
}
int hackVal(vector<int> result, int n){
    vector<int> vec;
    while (n > 3){
        int hackVal = floor(result[n - 1] * result[n - 2] /result[n - 3]);
        vec.push_back(hackVal);
        vec[0] += result[n - 4];
        n = n - 4;
    }
    if (n == 3)
        vec.push_back(result[2] * result[1] / result[0]);
    if (n == 2)
        vec.push_back(result[1] * result[0]);
    if (n == 1)
        vec.push_back(result[0]);
    int ans = vec[0];
    for (int i = 1; i < vec.size(); i++)
        ans -= vec[i];
    return ans;
}
HackNode *newHackNode(int value){
    HackNode *hack = new HackNode;
    hack->value = value;
    hack->left = hack->right = NULL;
    return hack;
}
int main()
{   HackNode *root = newHackNode(1);
    root->left = newHackNode(2);
    root->right = newHackNode(3);
    root->left->left = newHackNode(4);
    root->left->right = newHackNode(5);
    root->right->left = newHackNode(7);
    root->right->right = newHackNode(8);
    vector<int> result;
    result = HackTree(root);
    int n = result.size();
    int answer = hackVal(result, n);
    cout << answer << "\n";
    return 0;
}