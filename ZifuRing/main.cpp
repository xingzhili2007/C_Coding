//
//  main.cpp
//  ZifuRing
//
//  Created by 李行之 on 2020/4/4.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char a[10010],b[10010],lena,lenb;
int main() {
    cin>>a>>b;
    if (strlen(a)<strlen(b)) swap(a,b);
    int k=strlen(a);
    strcat(a,a);
    strcat(b,b);
    lena=strlen(a);
    lenb=strlen(b);
    for(int i=k;i>=1;i--)
        for(int j=0;j<lena-i;j++)
                for(int k=0;k<=lenb-i;k++)
                        if(strncmp(a+j,b+k,i)==0) {cout<<i<<endl;return 0;}
    cout<<endl;
    return 0;
}
