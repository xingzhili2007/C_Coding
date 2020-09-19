//
//  main.cpp
//  T146764 林达的神秘字符串
//
//  Created by 李行之 on 2020/9/6.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char s[1005];
int n;
int main(int argc, const char * argv[]) {
    scanf("%d",&n);
    scanf("%s",s+1);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            reverse(s+1, s+i+1);
    }
    printf("%s\n",s+1);
}
