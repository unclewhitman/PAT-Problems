#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a_speak,a_show,b_speak,b_show;
    int n;           //划拳轮数
    int a_drink=0,b_drink=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a_speak>>a_show>>b_speak>>b_show;
        if(a_show == (a_speak + b_speak) && b_show != (a_speak + b_speak)) b_drink += 1;
        else if(b_show == (a_speak + b_speak) && a_show != (a_speak + b_speak)) a_drink += 1;
        else continue;
    }
    cout<<a_drink<<" "<<b_drink<<endl;
    return 0;
}
