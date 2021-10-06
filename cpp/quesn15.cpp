#include <bits/stdc++.h>

using namespace std;

#define ll long long  

void sum(string s1,string s2)
{
    ll int num1=0;
    ll int num2=0;
    int i;
    int n=s1.size();
    for(i=0;i<n;i++)
    {
        num1=num1+(s1[i]-48)*pow(10,n-i-1);
    }
    n=s2.size();
    for(i=0;i<n;i++)
    {
        num2=num2+(s2[i]-48)*pow(10,n-i-1);
    }
    cout<<"Sum : "<<num1+num2<<endl;
}

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    sum(s1,s2);
    return 0;
}
