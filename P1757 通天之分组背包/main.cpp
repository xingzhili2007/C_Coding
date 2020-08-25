//
//  main.cpp
//  P1757 通天之分组背包
//
//  Created by 李行之 on 2020/8/10.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[1005],b[1005],c;
int dp[1005],num[105][1005];
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin>>m>>n;
    int mx=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c;
        num[c][++num[c][0]]=i;
        mx=max(mx,c);
    }
    for(int i=1;i<=mx;i++)
        for(int j=m;j>=0;j--)
            for(int k=1;k<=num[i][0];k++)
                if(j>=a[num[i][k]])
                    dp[j]=max(dp[j],dp[j-a[num[i][k]]]+b[num[i][k]]);
    cout<<dp[m]<<endl;
    
    
    return 0;
}
