#include <bits/stdc++.h>
using namespace std;
void func(int index, int size, vector<int> &arr, vector<int> &dp)
{

    if (dp.size() == 3)
    {

        for (auto i : dp)
        {
            cout << i << " ";
        }
        cout << endl;

        return;
    }
    dp.push_back(arr[i]);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> dp;

    int start = 0;
    func(0, size, arr, dp);
}