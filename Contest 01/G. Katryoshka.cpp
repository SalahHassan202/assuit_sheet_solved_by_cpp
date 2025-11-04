//  G. Katryoshka

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

/*
 1. Two eyes and one body.
 2. Two eyes, one mouth, and one body.      
 3. One eye, one mouth, and one body.

 i don't use it ( 2. Two eyes, one mouth, and one body.)   but use this (3. One eye, one mouth, and one body.)
 because this is the same statement with difference in eyes 

*/
ll e , m ,b;   // e ==> eyes   ,   m==> mouths   ,   b ==> bodys
cin>>e>>m>>b ;
ll  res =0;  
ll x = min ({e ,m,b});       

res+=x ; 

e-=x;    
m-=x;   
b-=x;    
x=min(e/2 , b);
res+=x;   

cout<<res<<endl;

}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}



