#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int p, q;
    while(cin>>p>>q)
    {
        vector<int> vec;
        bool check = false;
        if(p == 0 || q == 0 || p < q || q == 1){
            cout<<"Boring!"<<endl;
            continue;
        }

        while(p > 1)
        {
            vec.push_back(p);
            if(p % q != 0)
            {
                check = true;
                break;
            }
            p /= q;
        }

        if(check==true)
        {
            cout<<"Boring!"<<endl;
        }
        else
        {
            vec.push_back(1);
            for(int i=0; i<vec.size()-1; i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<vec[vec.size()-1]<<endl;
        }

    }
}
