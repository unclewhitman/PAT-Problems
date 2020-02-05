#include <iostream>
#include <cstdio>
using namespace std;

int findmax(double a, double b, double c){
    if(a>b){
        if(a>c) return 1;
        else return 3;
    }
    else{
        if(b>c) return 2;
        else return 3;
    }
}

double findmaxnum(double a, double b, double c){
    if(a>b){
        if(a>c) return a;
        else return c;
    }
    else{
        if(b>c) return b;
        else return c;
    }
}

int main()
{
    double w[5],t[5],l[5];
    int a[5];
    double temp = 1.0,result;
    for(int i=0; i<3; i++){
        cin>>w[i]>>t[i]>>l[i];
        a[i] = findmax(w[i],t[i],l[i]);
        temp *= findmaxnum(w[i],t[i],l[i]);
    }
    for(int i=0; i<3; i++){
        if(a[i]==1) cout<<"W ";
        else if(a[i]==2) cout<<"T ";
        else cout<<"L ";
    }
    result = (temp*0.65-1) * 2;
    printf("%.2f",result);
    return 0;
}
