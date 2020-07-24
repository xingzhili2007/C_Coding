//
//  main.cpp
//  big_yz
//
//  Created by 李行之 on 2020/5/30.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
#define ul unsigned long
using namespace std;
int a[33],y;string s;
ul l;
bool none=true;
int main(){
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++) a[i]=s[l-i-1]-48; //String to Int
        for(int i=2;i<10;i++) //"已知正整数k满足2<=k<=9"
        {
            y=0;
            for(ul j=l;j>0;j--)
            {
                y=y*10+a[j-1]; //余数和下一位结合
                y%=i; //算余数
            }
            if(!y) {none=false;cout<<i<<' ';}//如果是因子输出 none为假
        }
    if(none) cout<<"none";//如果none为真（没因子）输出“none”
    cout<<endl;
    return 0;
}
