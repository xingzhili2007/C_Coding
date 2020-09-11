//
//  main.cpp
//  T146767 芩仟玩游戏
//
//  Created by 李行之 on 2020/9/6.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int n,m,nm,ans;
int a[200005];
int zf[200005];
int kinds[200005];

//struct node
//{
//    int kind,no;
//}kinds[200005];
//inline void add(int point)
//{
//    kinds[point].kind++;
//    kinds[point].no=point;
//}

/*
 n=6 m=3 n/m=2
    3 2 0 6 10 12
 %m 0 2 0 0 1 0
        +1 +1 +1 +1
          0  1  2
 kinds :  4  1  1
 |-n/m|:  2  -1 -1 --sort--> -1 -1 2
*/
int main(int argc, const char * argv[]) {
    cin>>n>>m;
    nm=n/m;
    for(int i=1;i<=n;i++)
    {
        int in;
        cin>>in;
        a[i]=in;
        kinds[in%m]++;
    }
    for(int i=0;i<m;i++)
    {
        int now=kinds[i];
        if(now>nm) zf[i]=1;
        else if(now==nm)  zf[i]=-1;
    }
    for(int i=0;i<m;i++)
    {
        if(zf[i]==0)
        {
            int cc=nm-kinds[i];
            int num=i;
            while(cc)
            {
                num--;
                if (num<0) num=m+num;
                if (zf[num]==1)
                {
                    ans+=abs(i-num);
                    kinds[i]++;
                    kinds[num]--;
                    if(kinds[num]==nm) zf[num]=-1;
                    if(kinds[i]==nm) zf[i]=-1;
                    cc--;
                    num=i;
                }
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
