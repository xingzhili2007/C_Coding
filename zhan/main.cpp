//
//  main.cpp
//  zhan
//
//  Created by 李行之 on 2020/5/30.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int S[10005];

int top=-1;
void push1(int n)
{
    S[++top]=n;
}
int pop1()
{
    return S[top--];
}
int main()
{
    memset(S,0,sizeof(S));
    int a;
    for(int i=1;i<=4;i++)
    {
        cin>>a;
        push1(a);
    }
    for(int i=1;i<=4;i++)
        cout<<pop1()<<endl;
}
