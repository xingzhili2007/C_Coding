//
//  main.cpp
//  nearest fengshu
//
//  Created by 李行之 on 2020/6/21.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
double a,b,c,d,i,j,MxFengshu=0;
int main()
{
    int n;
    cin>>n>>a>>b;
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
            if(i/j<a/b && i/j>MxFengshu)
            {
            MxFengshu=i/j;
            c=i;
            d=j;
        }
    }
    cout<<c<<" "<<d<<endl;;
}
