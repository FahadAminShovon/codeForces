#include <bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long int ll;

using namespace std;

int main()
{
    int x;
    sc("%d",&x);
    getchar();

    string str;
    cin>>str;

    ll xx=0,yy=0;
    int sz= str.size();
    for(ll i=0;i<sz;i++){
        if((str[i]-'0')%2==0){
            xx++;
            yy+=i;
        }
    }

    cout<<xx+yy<<endl;


    return 0;
}