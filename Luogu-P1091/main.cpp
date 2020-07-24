//
//  main.cpp
//  Luogu-P1091
//
//  Created by 李行之 on 2020/5/31.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
int n,t[1000100],a[1000100],b[1000100],fa[1000100],fb[1000100],topa=1,topb=1,l,r,ans;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>t[i];
    a[1]=t[1];b[1]=t[n];
    fa[1] = fb[n] = 1;
    for(int i=2;i<=n;i++){
        if(t[i]>a[topa]){
            a[++topa]=t[i];
            fa[i] = topa;
            continue;
        }
        l = lower_bound(a+1,a+topa+1,t[i]) - a;
        a[l]=t[i];
        fa[i]=l;
    }
    for(int i=n-1;i>=1;i--){
        if(t[i]>b[topb]){
            b[++topb]=t[i];
            fb[i] = topb;
            continue;
        }
        l = lower_bound(b+1,b+topb+1,t[i]) - b;
        b[l]=t[i];
        fb[i]=l;
    }
    for(int i=1;i<=n;i++)
        ans=max(ans,fa[i]+fb[i]-1);
    cout<<n-ans;
    return 0;
}
