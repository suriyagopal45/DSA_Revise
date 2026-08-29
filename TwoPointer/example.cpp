#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Hello World";

    int temp;
    cin >> temp;
    cout << endl
         << temp + 45 << endl;

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        if ((temp & 1) == 0)
        {
            cout << arr[i] << " ";
        }
    }
}