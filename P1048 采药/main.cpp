//
//  main.cpp
//  P1048 采药
//
//  Created by 李行之 on 2020/8/10.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
const int maxn=105;
int t,m;
int tme[maxn],val[maxn],dp[maxn][1005];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin>>t>>m;
    for(int i=1;i<=m;i++)
        cin>>tme[i]>>val[i];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=t;j++)
        {
            if(j>=tme[i])
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-tme[i]]+val[i]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[m][t]<<endl;
   
    return 0;
}
