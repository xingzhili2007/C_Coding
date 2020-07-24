//
//  main.cpp
//  林达学数学
//
//  Created by 李行之 on 2020/6/7.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
struct Lint
{
    int num[7];
}a[20];
int getNum(int n)
{
    int NumArea=n/5+1;
    int NumNo=n%5;
    int Num=a[NumArea].num[NumNo];
    return Num;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    return 0;
}
