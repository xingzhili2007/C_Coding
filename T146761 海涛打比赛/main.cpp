//
//  main.cpp
//  T146761 海涛打比赛
//
//  Created by 李行之 on 2020/9/6.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int n,N,k,frt=1,bck,flag=false;
int ans;
int a[1000];
int main(int argc, const char * argv[]) {
    cin>>n>>k;
        N=bck=n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    while(n)
    {
        if(a[frt]<=k)
            {n--;frt++;}
        else if(a[bck]<=k)
            {n--;bck--;}
        else break;
        
    }
    cout<<N-n<<endl;
    return 0;
}
