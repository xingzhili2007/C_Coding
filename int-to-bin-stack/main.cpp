//
//  main.cpp
//  int-to-bin-stack
//
//  Created by 李行之 on 2020/8/1.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <iostream>
using namespace std;
bool myStack[10005];
int top=-1;
int n=0;
int ans=0;
void push(bool n)
    {myStack[++top]=n;}
bool pop()
    {return myStack[top--];}
int main(int argc, const char * argv[]) {
    cin>>n;
    while(n)
    {
        int Mod=n%2;
        n/=2;
        push(Mod);
    }
    while(top!=-1)
    {
        cout<<pop();
    }
    cout<<endl;
    return 0;
}
