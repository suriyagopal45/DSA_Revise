#include <bits/stdc++.h>
using namespace std;

void func(int size, vector<int> &digits, int numbers, int freq[], bool haveElemets[])
{
    if (size == 3)
    {
        if (numbers > 99 && numbers % 2 == 0)
        {
            haveElemets[numbers] = 1;
        }
        return;
    }

    for (int i = 0; i < digits.size(); i++)
    {
        if (!freq[i])
        {
            freq[i] = 1;
            func(size + 1, digits, numbers * 10 + digits[i], freq, haveElemets);

            freq[i] = 0;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size;
    cin >> size;
    vector<int> digits(size);
    for (int i = 0; i < size; i++)
    {
        cin >> digits[i];
    }

    int numbers = 0;

    int freq[size];
    for (int i = 0; i < size; i++)
    {
        freq[i] = 0;
    }

    int count = 0;
    bool haveElements[1000] = {0};

    func(0, digits, numbers, freq, haveElements);

    for (int i = 0; i < 1000; i++)
    {
        if (haveElements[i] == 1)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl
         << count;
}