#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int> :: iterator it;
    it=v.begin();
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            v.erase(v.begin()+i);
        }
    }
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<* it<<" ";
    }
}