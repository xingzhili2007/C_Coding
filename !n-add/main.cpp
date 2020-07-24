//
//  main.cpp
//  !n-add
//
//  Created by 李行之 on 2020/5/16.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int a[100003],b[100003],ans[100010],outcount=0;
int rd(int *a)
{
    int cc=0;
    int cga[100003];
    memset (cga,0,sizeof(cga));
    char in;
    do
    {
        in=getchar();
        cga[++cc]=int(in-'0');
    }while(in!=' '&&in!='\n');
    for(int i=1;i<=cc;i++) a[i]=cga[cc-i];
    return cc-1;
}
int add(int *a,int lena,int *b,int lenb,int *c)
{
    int ans[200002];
    int cc=0;
    if (lena<lenb)
    {
        swap(a,b);
        swap(lena,lenb);
    }
    int mxlen=max(lena,lenb);
    for(int i=1;i<=mxlen;i++)
    {
        cc++;
        int add=a[i]+b[i];
        ans[i]+=add;
        if(ans[i]>=10)
        {
            if(i+1>mxlen) cc++;
            ans[i+1]++;
            ans[i]%=10;
        }
    }
    int zcc=cc;
    while(a[zcc]==0)
    {
        zcc--;
    }
    if (zcc==0) zcc++;
    for(int i=zcc;i>=1;i--) c[i]=ans[i];
    
    return zcc;
}
int jc(int n,int *ans)
{
    int i,j,k=1;
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
            a[j]*=i;
        for(j=0;j<k;j++){
            if(a[j]>=10)
            {
                a[j+1]+=a[j]/10;
                a[j]%=10;
            }
            if(k-j==1&&a[j+1]!=0) k++;
        }
    }
    for(j=k-1;j>=0;j--) ans[j+1]=a[j];
    return k;
}
int main() {
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(ans,0,sizeof(ans));
    int p;
    cin>>p;
    for(int i=jc(p,ans);i>0;i--) cout<<ans[i];
    
    
   
}
