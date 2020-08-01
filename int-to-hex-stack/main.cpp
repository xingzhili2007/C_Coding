//
//  main.cpp
//  int-to-hex-stack
//
//  Created by 李行之 on 2020/8/1.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <iostream>
using namespace std;
int myStack[10005];
int top=-1,n=0,ans=0;

char myhex[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
//0 1 2 3 4 5 6 7 8 9 a b c d e f
void push(int n)
    {myStack[++top]=n;}
int pop()
    {return myStack[top--];}
int main(int argc, const char * argv[]) {
    cin>>n;
    while(n)
    {
        int Mod=n%16;
        n/=16;
        push(Mod);
    }
    while(top!=-1)
    {
        cout<<myhex[pop()];
    }
    cout<<endl;
    return 0;
}
