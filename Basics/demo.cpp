#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n;
    vector<string> arr;
    unordered_map<string, int> mpp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        string s = temp;

        for (char &c : temp)
        {
            c = tolower(c);
        }
        mpp[temp]++;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string temp;
        cin >> temp;
        if (mpp[temp] != 0)
        {
            count++;
            cout << temp << " ";
        }
    }
    cout << endl
         << count;
}