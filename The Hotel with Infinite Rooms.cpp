#include<iostream>
using namespace std;
int main()
{
    long long int p, d;
    while(cin>>p>>d)
    {
        d -= p;
        if(d < 0)
        {
            cout<<p<<endl;
            continue;
        }
        p++;
        while(d > 0)
        {
            d -= p;
            p++;
        }
        cout<<--p<<endl;
    }
}
