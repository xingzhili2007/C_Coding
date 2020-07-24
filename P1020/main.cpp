//
//  main.cpp
//  P1020
//
//  Created by 李行之 on 2020/6/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
#define I int
//#define M(a,b) max(a,b)
#define LL long long
using namespace std;
const int N=100010;
int a[N],n,ans1,ans2;
I d1[N];

int main(int argc, const char * argv[]) {
   while(~scanf("%d",&a[++n]));
   // int b;
    //cin>>b;
    //for(int i=1;i<=b;i++) cin>>a[b];
   // n=b-1;
   n--;
    for (I i=n;i>=1;i--)
    {
        d1[i]=1;
        for (I j=1+i;j<=n;j++)
            if(a[j]<=a[i])
                d1[i]=max(d1[i],d1[j]+1);
        ans1=max(ans1,d1[i]);
    
    }
    for (I i=1;i<=n;i++)
    {
        d1[i]=1;
        for (int j=1;j<i;j++)
            if (a[j]<a[i])
                d1[i]=max(d1[i],d1[i]+1);
        ans2=max(ans2,d1[i]);
    }
    cout<<ans1<<endl<<ans2<<endl;
    return 0;
}
