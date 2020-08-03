//
//  main.cpp
//  P2058 海港
//
//  Created by 李行之 on 2020/8/2.
//  Copyright © 2020 李行之. All rights reserved.
//


#include<iostream>
using namespace std;
typedef long long ll;
int ans,n,k,r,sums[100001],tm[300002],cont[300002];
ll t;
int main(int argc, const char * argv[]){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>t>>k;
        for(int j=1;j<=k;j++)
        {
            cont[++r]=t;
            cin>>tm[r];
            if(!sums[tm[r]])ans++;
            sums[tm[r]]++;
        }
        while(t-cont[i]>=86400)
            if(!--sums[tm[i++]]) ans--;
        cout<<ans<<endl;
    }
    return 0;
}
