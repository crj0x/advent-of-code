#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll count = 0;
    ll num = 50;
    char dir;
    ll step_size;
    while (cin >> dir >> step_size)
    {
        if (dir == 'L')
        {
            if (step_size >= num && num != 0)
            {
                count++;
            }
            num -= step_size;
        }
        else
        {
            num += step_size;
        }
        ll num_of_occurences = abs(num / 100);
        count += num_of_occurences;
        num = ((num % 100) + 100) % 100;
    }
    cout << count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
