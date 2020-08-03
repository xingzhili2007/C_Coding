//
//  main.cpp
//  表达式括号匹配plus(with "[")--stack
//
//  Created by 李行之 on 2020/8/1.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <iostream>
using namespace std;
char S[100010];
int top=0;
inline void push(char c) {S[++top]=c;}
inline char pop() {return S[top--];}

int main(int argc, const char * argv[])
{
    char in;
    while(1)
    {
        cin>>in;
        if(in=='@') break;
        if(in=='(' || in=='[') push(in);
        if(in==')')
        {
            char out=pop();
            if(out == '(') continue;
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
        }
        if(in==']')
        {
            char out=pop();
            if(out == '[') continue;
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            
        }
    }
    if(top!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
