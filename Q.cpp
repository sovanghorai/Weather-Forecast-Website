#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==1){
        return 1;
    }
    else{
        if(n%2==0){
            return fib(n%2);
        }
        else{
            return fib(n*3)+1;
        }
    }
}
int main()
{
    int n;
    cout<<fib(3);
    return 0;
}