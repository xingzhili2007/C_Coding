//
//  main.cpp
//  Luogu_P1265
//
//  Created by 李行之 on 2020/5/5.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
const int maxn=5010;
int n;
double x[maxn],y[maxn],d[maxn],ans=0;
bool vis[maxn]={false,true};
inline double cal(int i,int j)
    {return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));}
void prim()
{
    int Dis=0x7fffffff,p=0;
    for (int i=1;i<=n;i++) d[i]=cal(1,i);
    for(int k=1;k<n;k++)
    {
        for (int i=1;i<=n;i++) if (!vis[i]&&Dis>d[i]) p=i,Dis=d[i];
        vis[p]=true;
        ans+=d[p];
        for (int i=1;i<=n;i++)
            if(!vis[i] && d[i]>cal(i,p))
                d[i]=cal(i,p);
        Dis=0x7fffffff;
    }
    
}
          
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
    prim();
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}
