#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
int h,m,s,a,err;
err=a=0;
while(err==0)
{
    cout<<"Enter hour : "<<endl;
    cin>>h;
    cout<<"Enter minutes : "<<endl;
    cin>>m;
    cout<<"Enter secods : "<<endl;
    cin>>s;
    if(h>=12&&m>60&&s>60)
    {
        err++;
    } 
    else
    {
        system("cls");
    }
    while(a==0)
    {
        system("cls");
        cout<<"clock is work !!! :  "<<endl;
        cout<<h<<" : "<<m<<" : "<<s<<endl;
        cout<<" "<<endl;
        cout<<"ok its work"<<endl;
        Sleep(1000);
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>12)
        {
            h=0;
        }

    }
}

    return 0;
}