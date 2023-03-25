#include<iostream>
using namespace std;
int main(){
    int testcase, sum, diff, p, q;
    cin>>testcase;

    for(int i=0; i<testcase; i++){
        cin>>sum>>diff;
        if(sum < diff){
            cout<<"impossible"<<endl;
            continue;
        }
        int tmp = sum + diff;
        p = tmp / 2;
        q = sum - p;

        if(abs(p - q) != diff){
            cout<<"impossible"<<endl;
        }
        else{
            cout<<max(p, q)<<" "<<min(p, q)<<endl;
        }
    }
}
