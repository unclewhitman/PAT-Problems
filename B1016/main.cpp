#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a;
    long long b;
    int da,db;
    int sum = 0;
    cin>>a>>da>>b>>db;
    int temp = 0;
    while(a!=0)
    {
        if(a%10 == da)
        {
            sum = sum + da * pow(10,temp);
            temp += 1;
        }
        a = a/10;
    }
    temp = 0;
    while(b!=0)
    {
        if(b%10 == db)
        {
            sum = sum + db * pow(10,temp);
            temp += 1;
        }
        b = b/10;
    }
    cout<<sum<<endl;
}
