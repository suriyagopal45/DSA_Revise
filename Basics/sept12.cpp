#include <bits/stdc++.h>
using namespace std;

vector<int> result;
int maxWeight = 0;

bool comp(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

void func(int index,
          int size,
          vector<tuple<int, int>> &dp,
          vector<vector<int>> &intervals,
          int sum)
{
    // Base case
    if (index == size)
    {
        for (auto i : dp)
        {
            auto [endTime, originalIndex] = i;

            cout << endTime << " " << originalIndex << ", ";
        }

        cout << "    " << sum << endl;

        // Update maximum
        if (sum > maxWeight)
        {
            maxWeight = sum;

            result.clear();

            for (auto i : dp)
            {
                auto [endTime, originalIndex] = i;

                result.push_back(originalIndex);
            }
        }

        return;
    }

    // Take current interval
    if ((dp.empty() ||
         get<0>(dp.back()) <= intervals[index][0]) &&
        dp.size() < 4)
    {
        dp.push_back({
            intervals[index][1], // end time
            intervals[index][3]  // original index
        });

        func(index + 1,
             size,
             dp,
             intervals,
             sum + intervals[index][2]);

        dp.pop_back();
    }

    // Don't take current interval
    func(index + 1,
         size,
         dp,
         intervals,
         sum);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size;
    cin >> size;

    vector<vector<int>> intervals;

    for (int i = 0; i < size; i++)
    {
        int startTime, endTime, weight;

        cin >> startTime >> endTime >> weight;

        intervals.push_back({startTime,
                             endTime,
                             weight,
                             i});
    }

    sort(intervals.begin(), intervals.end(), comp);

    vector<tuple<int, int>> dp;

    func(0, size, dp, intervals, 0);

    cout << "\nMaximum Weight: " << maxWeight << endl;

    cout << "Indices: ";

    for (int index : result)
    {
        cout << index << " ";
    }
}