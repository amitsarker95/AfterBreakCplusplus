#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[200001];
    cin>>s;
    int len = strlen(s);
    int counter = 0;
    int zed = 0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='Z')
            zed = i;
    }

    for(int i=0; i<=zed; i++)
    {
        if(s[i] == 'A')
        {
            for(int j=i; j<=zed; j++)
            {
                counter++;
            }
            break;

        }

    }
    cout<<counter<<endl;

}
