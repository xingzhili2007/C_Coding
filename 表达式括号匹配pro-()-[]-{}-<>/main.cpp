//
//  main.cpp
//  表达式括号匹配pro-()-[]-{}-<>
//
//  Created by 李行之 on 2020/8/1.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int S[100010];
int top=0,n,turns=1;
char fc[8]=
    {'{','[','(','<','}',']',')','>'};
inline void push(char c) {S[++top]=c;}
inline char pop() {return S[top--];}
bool juedge(char *a)
{
    top=0;
    unsigned long len=strlen(a);
    for (int i = 0; i < len; i++)
        for (int j = 0; j < 8; j++)
            if (a[i] == fc[j])
                {a[i] = j; break;}
    for (int i = 0; i < len; i++)
    {
        if (a[i] <= 3)
        {
            if (a[i] >= S[top] || top == 0)
                push(a[i]);
            else return false;
        }
        else
        {
            if (S[top] + 4 == a[i] && top > 0) top--;
            else return false;
        }
    }
    if (top == 0)
        return true;
    else
        return false;
}
    


int main(int argc, const char * argv[])
{
    
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char in[10010];
        cin>>in;
        if(juedge(in)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
