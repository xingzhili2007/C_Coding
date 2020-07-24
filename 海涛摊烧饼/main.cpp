//
//  main.cpp
//  海涛摊烧饼
//
//  Created by 李行之 on 2020/6/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
double d,r,s;
const double pi=3.141593;
int main(int argc, const char * argv[]) {
    // insert code here...
    cin>>d;
    r=d/2;
    s=r*r*pi;
    cout<<fixed<<setprecision(3)<<s<<endl;
    return 0;
}
