#include<bits/stdc++.h>
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

bool vowelOrNot(char c)
{    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' );
}
int main()
{
    op();
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        string temp = s;
        reverse(temp.begin(), temp.end());

        if(temp==s) cout<< "Yes"<<endl;
        else cout<< "No"<<endl;
    }
    return 0;
}


