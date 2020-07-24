//
//  main.cpp
//  book
//
//  Created by 李行之 on 2020/4/25.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m,mx,sm,ans,a[100005];
int jud(int x){
    int sum = 0, cnt = 1;
    for(int i = 1; i <= n; i++){
        if(sum + a[i] > x){
            cnt++;
            sum = a[i];
        }
        else
            sum += a[i];
    }
    return cnt;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        sm+=a[i];
    }
    int l = mx, r = sm;
    while(l < r){
        int mid = (l+r)/2;
        if(jud(mid) <= m) r = mid;
        else l = mid + 1;
    }
    cout<<l<<endl;
    return 0;
}

