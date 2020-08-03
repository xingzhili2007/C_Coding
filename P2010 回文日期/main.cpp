//
//  main.cpp
//  P2010 回文日期
//
//  Created by 李行之 on 2020/8/2.
//  Copyright © 2020 李行之. All rights reserved.
//
#include<bits/stdc++.h>
using namespace std;
int n,m,cc,ans;
int a[10],b[10];
int monthDay[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
    cin>>n>>m;
    for(int i=1;i<=12;i++)
        for(int j=1;j<=monthDay[i];j++){
            ans=(i*100+j)+(i/10)*10000+(i%10)*100000+(j/10)*1000000+(j%10)*10000000;
            if(ans<n||ans>m) continue;
            cc++;
        }
    cout<<cc;
    return 0;
}

