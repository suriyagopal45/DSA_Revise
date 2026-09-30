#include <bits/stdc++.h>
using namespace std;
vector<int> result;
int maxWeight = 0;
static bool comp(vector<int> &a, vector<int> &b)
{
    if (a[1] < b[1])
    {
        return true;
    }
    return false;
}
void func(int index, int size, vector<tuple<int, int>> &dp, vector<vector<int>> &intervals, int sum)
{
    if (index == size)
    {

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

    if ((dp.size() == 0 || get<0>(dp.back()) <= intervals[index][0]) && dp.size() <= 4)
    {
        dp.push_back({intervals[index][1], intervals[index][3]});
        func(index + 1, size, dp, intervals, sum + intervals[index][2]);
        dp.pop_back();
    }

    func(index + 1, size, dp, intervals, sum);

    return;
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

        intervals.push_back({startTime, endTime, weight, i});
    }

    sort(intervals.begin(), intervals.end(), comp);

    vector<tuple<int, int>> dp;

    func(0, size, dp, intervals, 0);

    for (auto i : result)
    {
        cout << i << " ";
    }
}