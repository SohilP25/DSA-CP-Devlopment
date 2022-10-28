#include<bits/stdc++.h>

#define For(i,a,b) for(ll i=a;i<b;i++)

class Solution
{
public:
    int findLength(vector<int>& a, vector<int>& b)
    {
        int n = a.size();
        int m = b.size();

        int dp[n + 1][m + 1];

        For(j, 0, m + 1)
        dp[0][j] = 0;

        For(i, 0, n + 1)
        dp[i][0] = 0;

        int ans = 0;

        For(i, 1, n + 1)
        {
            For(j, 1, m + 1)
            {
                if(a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;

                else
                    dp[i][j] = 0;

                ans = max(ans, dp[i][j]);

            }

        }

        return ans;
    }
};
