#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

void vinayak()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    while (q--)
    {
        int val;
        cin >> val;
        int lo = 0;
        int hi = INT_FAST64_MAX;
        int ans = 0;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            int k = lower_bound(v.begin(), v.end(), mid) - v.begin();
            if (k < n && v[k] == mid)
                k++;
            if (mid - k >= val)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false); // don't use while debugging
    cin.tie(NULL);                    // don't use in interactive problems
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
        vinayak();
    return 0;
}
