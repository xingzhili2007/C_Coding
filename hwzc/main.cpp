//
//  main.cpp
//  Huiwenzichuan
//
//  Created by 李行之 on 2020/3/28.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char a[1010];
char c[1003];
void huiwen(int st1,int ed1)
{
    
    for (int i=0;i<1000;i++) c[i]='\0';
    int cc=0;
    for(int i=st1;i<=ed1;i++) {c[cc]=a[i];cc++;}
    int l=ed1-st1+1;
    int st=0,ed=l-1;
    do
    {
        if (c[st]!=c[ed]) return;
        st++;ed--;
    }while((st!=ed)&&(abs(st-ed)!=1));
        
    puts(c);
    cout<<" ";
    return;
    
    
}

int main() {
    
    cin>>a;
    for(int i=2;i<=strlen(a);i++)
        for(int j=0;j+i-1<=strlen(a);j++)
            huiwen(j,j+i-1);
    cout<<endl;
    return 0;
}
