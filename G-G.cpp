#include<bits/stdc++.h>
using namespace std;
int main(){

long long a,b,x;
cin>>a>>b>>x;
long long ans;
    if(a > b)
    {
        cout << "0" <<endl;
        return 0;
    }
    ans = b / x - a / x;
    if(a % x == 0)
    {
        ans++;
    }
    cout << ans <<endl;
    return 0;
}
