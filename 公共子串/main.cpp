//
//  main.cpp
//  公共子串
//
//  Created by 李行之 on 2020/10/3.
//  Copyright © 2020 李行之. All rights reserved.
//


#include<bits/stdc++.h>

using namespace std;
int f[4003][4003];
string s,t;
int main()
{
    cin>>s>>t;
    int ls=s.size();
    int lt=t.size();
    int maxn=0;
    for(int i=1;i<=ls;i++)
    {
        for(int j=1;j<=lt;j++)
        {
            if(s[i-1]==t[j-1])
            {
                f[i][j]=f[i-1][j-1]+1;
                if(maxn<f[i][j]) maxn=f[i][j];
            }
            else f[i][j]=0;
        }
    }
    cout<<maxn<<endl;
    return 0;
}
