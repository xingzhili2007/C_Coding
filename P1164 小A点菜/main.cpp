//
//  main.cpp
//  P1164 小A点菜
//
//  Created by 李行之 on 2020/7/20.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>

using namespace std;
int n,m,a[110],f[10010];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    f[0]=1;
    for(int i=1;i<=n;i++)
        for(int j=m;j>=a[i];j--)
            f[j]=f[j]+f[j-a[i]];
    cout<<f[m];
    return 0;
}
