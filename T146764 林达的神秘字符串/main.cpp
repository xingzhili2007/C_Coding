//
//  main.cpp
//  T146764 林达的神秘字符串
//
//  Created by 李行之 on 2020/9/6.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char s[1005];
int n;
int ys[10005];
inline int YS(int num)
{
    int cnt=0;
    int Sqrt=sqrt(num);
    for(int i=1;i<Sqrt;i++)
        if(num%i==0)
        {
            ys[++cnt]=i;
            ys[++cnt]=num/i;
        }
    
    if(num%Sqrt==0)
        ys[++cnt]=Sqrt;
    sort(ys+1,ys+cnt+1);
    return cnt;
}
inline void rev(int n)
{
    
    for(int head=1,tail=n;head<=tail;head++,tail--)
        swap(s[head],s[tail]);
}
int main(int argc, const char * argv[]) {
    scanf("%d",&n);
    scanf("%s",s+1);
    int ysn=YS(n);
    for(int i=1;i<=ysn;i++)
        rev(ys[i]);
        
    for(int i=1;i<=n;i++) cout<<s[i];
    cout<<endl;
    return 0;
}
