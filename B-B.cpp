#include<bits/stdc++.h>

using namespace std;

int main()
{

    int aa,bb;
    cin>>aa>>bb;

    int result = aa+bb>23 ? aa+bb-24 : aa+bb ;

    cout<<result<<endl;
    return 0;
}
