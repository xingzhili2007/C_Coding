//
//  main.cpp
//  Luogu_P4047
//
//  Created by 李行之 on 2020/5/5.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n,k,fa[3005],cnt,tot;
double d[3005][3005];
struct Node
    {int x,y;}a[3005];
inline double cal(int xa,int ya,int xb,int yb)
    {return sqrt(1.0*((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)));}
inline int find(int x)
    {return x==fa[x]?x:fa[x]=find(fa[x]);}
int chk(double s)
{
    for (int i=1;i<=n;i++) fa[i]=i;
    tot=0;
    for(int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++)
            if (d[i][j]<=s)
            {
                int u=find(i),v=find(j);
                if(u!=v) fa[v]=u;
            }
    for (int i=1;i<=n;i++)
        if (fa[i]==i) tot++;
    return tot;
}

int main() {
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i].x>>a[i].y;
    double mxe=0;
    for (int i=0;i<=n;i++)
        for (int j=i+1;j<=n;j++)
        {
            d[i][j]=d[j][i]=cal(a[i].x,a[i].y,a[j].x,a[j].y);
            mxe=max(mxe,d[i][j]);
            
        }
    double l=0,r=mxe;
    while(r-l>0.0001)
    {
        double mid=(l+r)/2.0;
        if(chk(mid)>=k) l=mid;
        else r=mid;
    }
    cout<<fixed<<setprecision(2)<<l<<endl;
    return 0;
}
