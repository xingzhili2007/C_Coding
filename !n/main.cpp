//
//  main.cpp
//  !n
//
//  Created by 李行之 on 2020/5/16.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
int a[2000000];
int main()
{
    
    int n,i,j,k=1;
    cin>>n;
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
        a[j]*=i;
        for(j=0;j<k;j++){
            if(a[j]>=10)
            {
                a[j+1]+=a[j]/10;
                a[j]%=10;
            }
        if(k-j==1&&a[j+1]!=0) k++;
        }
    }
    for(j=k-1;j>=0;j--) cout<<a[j];
    cout<<"\n";
    return 0;
}

