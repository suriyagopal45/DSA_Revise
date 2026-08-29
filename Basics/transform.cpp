#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size;
    cin >> size;
    vector<string> arr;

    for (int i = 0; i < size; i++)
    {
        string temp;
        cin >> temp;

        arr.push_back(temp);

        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        cout << temp << " ";
    }

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}