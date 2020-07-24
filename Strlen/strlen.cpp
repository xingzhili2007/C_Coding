//
//  main.cpp
//  C_Coding
//
//  Created by 李行之 on 2020/3/28.
//  Copyright © 2020 李行之. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[103];
    gets(a);
    int cc=0;
    for(int i=0;i<strlen(a);i++)
        if (a[i]!=' '&&a[i]!='\0') cc++;
    cout<<cc<<endl;
    return 0;
}
    
