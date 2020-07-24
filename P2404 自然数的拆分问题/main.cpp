//
//  main.cpp
//  P2404 自然数的拆分问题
//
//  Created by 李行之 on 2020/7/22.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n,cnt,a[10010]={1};
inline void print(int t)
{
    for(int i=1;i<=t-1;i++)//输出一种拆分方案
        cout<<a[i]<<"+";
    cout<<a[t]<<endl;
    return;
}
int disapart(int s,int t)
{
    for(int i=a[t-1];i<=s;i++)
        if (i<n)
        {
            a[t]=i;
            s-=i;
            if(s==0) print(t);
            else disapart(s,t+1);
            s+=i;
        }
    
    return 0;
}
int main(int argc, const char * argv[]) {
    cin>>n;
    disapart(n,1);
    return 0;
}
