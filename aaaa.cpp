#include <bits/stdc++.h>
using namespace std;

long solve(int &flag,int i, int oper, int n, string &s, vector<vector<vector<long>>> &dp) {
    if (oper == n - 2) {
        if (i == n - 1) {
            return s[i] - '0';
        } else if (i == n - 2) {
            int a = s[i] - '0';
            int b = s[i + 1] - '0';
            int num = a * 10 + b;
            return num;
        }
    }

    if (dp[i][oper][flag] != -1) return dp[i][oper][flag];

    long temp1 = LONG_MAX, temp2 = LONG_MAX;

    if (flag == 0 && i < n - 1) {
        int a = s[i] - '0';
        int b = s[i + 1] - '0';
        int num = a * 10 + b;
        flag = 1;
        long ans1 = solve(flag,i + 2, oper + 1, n, s, dp);
        flag = 0;
        temp1 = min(num * ans1, num + ans1);
    }

    int a = s[i] - '0';
    long ans2 = solve(flag,i + 1, oper + 1, n, s, dp);
    temp2 = min(a * ans2, a + ans2);

    return dp[i][oper][flag] = min(temp1, temp2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<vector<vector<long>>> dp(n+1,vector<vector<long>>(n, vector<long>(2,-1)));
        int flag =0;
        long result = solve(flag,0, 0, n, s, dp);
        cout << result << endl;
    }
    return 0;
}
