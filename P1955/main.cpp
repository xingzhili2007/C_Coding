//
//  main.cpp
//  P1955
//
//  Created by 李行之 on 2020/4/2.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long l;
const int N=10000005;
l fa[N];
l t,n,x,y,z;
struct save
    {l x,y;}
    a[N];
//
inline l find(l x)
    {if (x==fa[x]) return x;return fa[x]=find(fa[x]);}
//
int main() {
    cin>>t;
    while(t--)
    {
        memset(fa,0,sizeof(fa));
        cin>>n;
        int tot=0;
        for(int i=1;i<N-10;i++) fa[i]=i;
        for(int i=1;i<=n;i++)
        {
            cin>>x>>y>>z;
            if (z==1) fa[find(y)]=find(x);
            else if(z==0) a[++tot].x=x,a[tot].y=y;
        }
        int fl=0;
        for (int i=1;i<=tot;i++)
        {
            int u=find(a[i].x),v=find(a[i].y);
            if (u==v) fl=1;
            
        }
        if (fl==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
