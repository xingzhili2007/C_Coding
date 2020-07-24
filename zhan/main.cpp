//
//  main.cpp
//  zhan
//
//  Created by 李行之 on 2020/5/30.
//  Copyright © 2020 李行之. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
//stack <int> s;

/*
int main(int argc, const char * argv[]) {
    int t;
    for (int i=1;i<=3;i++)
    {
        cin>>t;
        s.push(t);
    }
    for (int i=1;i<=3;i++)
    {
        int a=s.top();
        cout<<a<<" ";
        s.pop();
    }

    
    return 0;
}
*/
struct MyStack{
    int data[10010];
    int top;
};
void push(MyStack S,int data)
{
    S.data[S.top++]=data;
}
int pop(MyStack S)
{
//    int t=S.data[S.--top];
    return S.data[--S.top];
}

//void Reset(MyStack &S)
//{
//    S.top=0;
//    for (int i=1;i<10000;i++)
//    {
//        S.data[i]=0;
//    }
//}
int main(int argc, const char * argv[])
{
    MyStack S;
//    Reset(S);
    S.top=0;
    int t;
    for (int i=1;i<=3;i++)
    {
        cin>>t;
        push(S,t);
        cout<<pop(S)<<" ";
    }
//    for (int i=1;i<=3;i++)
//    {
//        //int a=top(S);
//
//
//    }
    return 0;
}
