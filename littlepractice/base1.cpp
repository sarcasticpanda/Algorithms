#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> number1;
    number1.push_back(5);
    number1.push_back(10);
    number1.push_back(11);
    vector<int> track(3);
    for(int i=0;i<3;i++)
    {
        cout<<"enter the no : "<<i+1<<" "<<endl;
        cin>>track[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<"value of vector numbers is : " << number1[i]<<" and "<<i+1<<" value of track is "<<track[i]<<endl;
    }
    vector<int> ittr={12,23,34,54,56,21};
    vector<int>:: iterator it;
    for(it=ittr.begin();it!=ittr.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; 
    vector<int>:: reverse_iterator xyz;
    for(xyz=ittr.rbegin();xyz!=ittr.rend();xyz++)
    {
        cout<<* xyz<<" ";
    } 
}