//
//  main.cpp
//  Eat-Candies
//
//  Created by 李行之 on 2020/6/21.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int a[1010];
int remain=0;
//an=n*(n-1)/2+1=(n^2-n+2)/2
int app(int n)
{
    
    if (n==0) return 0;
    else if(n==1) return 1;
    else if (n==2) return 2;
    else return app(n-1)+app(n-2)+app(n-3);
}
int main() {
    int cad=0,cc=0;
    while(true)
    {
        cin>>cad;
        if (cad==0) break;
        a[++cc]=cad;
//        cout<<cc<<':'<<cad<<endl;
    }
//    cout<<"end";
    for (int i=1;i<=cc;i++) cout<<app(a[i])<<endl;
    return 0;
}
