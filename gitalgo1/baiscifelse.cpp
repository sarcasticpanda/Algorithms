#include<bits/stdc++.h>
using namespace std;
void checkage(int n)
{
    if(n>0 && n<18)
    {
        cout<<"Not elegible to vote "<< endl;
    }
    else if(n>=18)
    {
        cout<<"Elegible to vote !! "<< endl;
    }
    else
    {
        cout<<"Enter a valid age"<< endl;
    }
}
void gradechecker(int marks)
{
    if(marks<25)
    {
        cout<<"Grade : F "<< endl;
    }
    else if(marks>=25 && marks<=44)
    {
        cout<<"Grade : E +"<< endl;
    }
    else if(marks>=45 && marks<=54)
    {
        cout<<"Grade : E "<< endl;
    }
    else if(marks>=55 && marks<=64)
    {
        cout<<"Grade : D "<< endl;
    }
    else if(marks>=65 && marks<=74)
    {
        cout<<"Grade : C "<< endl;
    }
    else if(marks>=75 && marks<=84)
    {
        cout<<"Grade : B "<< endl;
    }else if(marks>=85)
    {
        cout<<"Grade : A "<< endl;
    }
    else
    {
        cout<<"Invalid marks gardenot alloted !!  ";
    }
}
void jobseeker(int n)
{
  if(n>0 && n<18)
    {
        cout<<"Age not enough"<< endl;
    }
    else if(n>=18 && n<55)
    {
        cout<<"Elegible to do a job!! "<< endl;
    }
    else if(n>=55 && n <= 57)
    {
        cout<<"NO promotion there boss!"<< endl;
    }  
    else
    {
        cout<<"Age limit reached "<< endl;
    }   
}
int main()
{
   checkage(23);
   jobseeker(25);
   gradechecker(85);
}