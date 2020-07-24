//
//  main.cpp
//  Big_Addings
//
//  Created by 李行之 on 2020/4/11.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int a[100003],b[100003],ans[100010],outcount=0;
//bool flag=true;
int mxlen;
int rd(int *a)
{
    
    int cc=0;
    int cga[100003];
    memset (cga,0,sizeof(cga));
    char in;
    do{
        in=getchar();
        cga[++cc]=int(in-'0');
        
    }while(in!=' '&&in!='\n');
//    cout<<cc<<endl;
    for(int i=1;i<=cc;i++) a[i]=cga[cc-i];
    return cc-1;
}

int main() {
    memset (a,0,sizeof(a));
    memset (b,0,sizeof(b));
    memset(ans, 0, sizeof(ans));
    int lena=rd(a),lenb=rd(b);
    int cc=0;
    mxlen=max(lena,lenb);
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
    int zerocnt=cc;
    for(int i=cc;i>=1;i--)
    {
        if(ans[i]==0&&i==zerocnt) {zerocnt--;continue;}
        outcount++;
        cout<<ans[i];
        
    }
    
    if (outcount==0) cout<<0;
    cout<<endl;
    return 0;
}
