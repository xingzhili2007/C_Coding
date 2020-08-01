//
//  main.cpp
//  P1043 数字游戏
//
//  Created by 李行之 on 2020/8/1.
//  Copyright © 2020 李行之. All rights reserved.
//


#include<bits/stdc++.h>
using namespace std;
int a[110],Fmx[110][110][15],Fmn[110][110][15],n,m,sum[110];
int absmod(int i){return i>=0 ? i%10 : (10-(abs(i)%10));}
void dp()
{
    for(int i=1;i<=n+n;i++)
        for(int j=i;j<=n+n;j++)
            Fmn[i][j][1]=Fmx[i][j][1]=absmod(sum[j]-sum[i-1]);
    for(int k=2;k<=m;k++)
    for(int len=k;len<=n;len++)
    {
        for(int l=1,r=l+len-1;r<=2*n;l++,r++)
        {
            for(int j=l+k-2;j<r;j++)
            {
                Fmx[l][r][k]=max(Fmx[l][j][k-1]*Fmx[j+1][r][1],Fmx[l][r][k]);
                Fmn[l][r][k]=min(Fmn[l][j][k-1]*Fmn[j+1][r][1],Fmn[l][r][k]);
                
            }
        }
    }
    
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        cin>>a[i];a[i+n]=a[i];
    }
    for(int i=1;i<=2*n;i++) sum[i]=sum[i-1]+a[i];
    memset(Fmn,127,sizeof(Fmn));
    
    int ans1=0,ans2=0x3f3f3f3f;
    dp();
    for(int l=1,r=l+n-1;r<=2*n;l++,r++)
    {
        ans1=max(ans1,Fmx[l][r][m]);
        ans2=min(ans2,Fmn[l][r][m]);
        
    }
    
    cout<<ans2<<endl<<ans1<<endl;
    return 0;
}
