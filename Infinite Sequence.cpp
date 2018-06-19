#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,count=0,flag=0;
    cin>>a>>b>>c;
    if(a>=0 && c>=0)
    {
        if(a==b)
            cout<<"YES";
        else if(a!=b && c==0)
            cout<<"NO";
        else if(b>0 && b>a)
        {
            b=b-a;
            if(b%c==0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else if(b>0 && b<a)
            cout<<"NO";
        else
            cout<<"NO";
    }
    else if(a<0 && c>=0)
    {
        if(a==b)
            cout<<"YES";
        else if(a!=b && c==0)
            cout<<"NO";
        else  if(b>a)
        {
            b=b-a;
            if(b%c==0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";

    }
    else if(a>=0 && c<0)
    {
        if(a==b)
            cout<<"YES";
        else if(a!=b && c==0)
            cout<<"NO";
        else  if(b<a)
        {
            b=b-a;
            if(b%c==0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }
    else if(a<0 && c<0)
    {
        if(a==b)
            cout<<"YES";
        else if(a!=b && c==0)
            cout<<"NO";
        else if(b<a)
        {
            b=b-a;
            if(b%c==0)
                cout<<"YES";
            else
                cout<<"NO";
        }
        else
            cout<<"NO";
    }

}
