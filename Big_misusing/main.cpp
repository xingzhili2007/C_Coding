//
//  main.cpp
//  Big_misusing
//
//  Created by 李行之 on 2020/5/1.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char a1[10003],b1[10003];1
int a[100003],b[100003],ans[100010],outcount=0;
int mxlen;
int main() {
    memset (a,0,sizeof(a));
    memset (b,0,sizeof(b));
    memset(ans, 0, sizeof(ans));
    cin>>a1>>b1;
    int lena,lenb;
    int mxlen=max(lena=strlen(a1),lenb=strlen(b1));
    if (lena<lenb||(lena==lenb&&strcmp(a1,b1)<0))
    {
        cout<<'-';
        swap(lena,lenb);
        char c[100003];
        memset(c,0,sizeof(c));
        strcpy(c,a1);
        strcpy(a1,b1);
        strcpy(b1,c);
    }
    for(int i=0;i<lena;i++) a[lena-i-1]=a1[i]-48;
    for(int i=0;i<lenb;i++) b[lenb-i-1]=b1[i]-48;
    int i=0;
    while(i<lena)
    {
        if (a[i]<b[i])
        {
            a[i]+=10;
            a[i+1]--;
        }
        ans[i]=a[i]-b[i];
        i++;
    }
    int lenans=i;
    while(ans[lenans-1]==0&&(lenans>1)) lenans--;
    for(int i=lenans-1;i>=0;i--) cout<<ans[i];
    cout<<endl;
    return 0;
}
