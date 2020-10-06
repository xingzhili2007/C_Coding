//
//  main.cpp
//  FBI序列
//
//  Created by 李行之 on 2020/10/3.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

char s[2005];
int len;
int cnt_F, cnt_I;
int ans;

int main()
{
    scanf("%s", s);
    len = strlen(s);
    for( int i = 0; i < len; ++i)
    {
        if(s[i] == 'I') ++cnt_I;
    }
    for( int i = 0; i < len; ++i)
    {
        if(s[i] == 'B') ans += cnt_F * cnt_I;
        else if(s[i] == 'F') ++cnt_F;
        else if(s[i] == 'I') --cnt_I;
    }
    printf("%d", ans);
}
