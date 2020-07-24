//
//  main.cpp
//  汉诺塔问题
//
//  Created by 李行之 on 2020/6/21.
//  Copyright © 2020 李行之. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
void move(int n,char a,char b,char c)
{
    if (n==1) printf("%c->%d->%c\n",a,n,b);
    else
    {
        move(n-1,a,c,b);
        printf("%c->%d->%c\n",a,n,b);
        move(n-1,c,b,a);
    }
}
int main(){

    char a,b,c;
    int n;
    cin>>n>>a>>b>>c;
    move(n,a,b,c);
}
