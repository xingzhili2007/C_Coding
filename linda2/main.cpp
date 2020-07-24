//
//  main.cpp
//  linda2
//
//  Created by 李行之 on 2020/6/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int L,R;
char c[10010];
int ans=0;
int main(int argc, const char * argv[]) {
    cin>>c;
//    cout<<c<<endl<<strlen(c)<<endl;
    cin>>L>>R;
    for(int i=L-1;i<R;i++)
    {
        ans+=c[i]-'0';
    }
    cout<<ans<<endl;
    return 0;
}
