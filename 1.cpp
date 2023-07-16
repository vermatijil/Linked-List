#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> ans;
        int e;
        cin >> e;
        ans.push_back(e);
        for (int i = 0; i < ans.size(); i++)
        {
            cin >> e;
            if (e == -1)
            {
                break;
            }
            ans.push_back(e);
        }
        cout << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}