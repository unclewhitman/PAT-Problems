#include <iostream>

using namespace std;

int main()
{
    //long long 的范围是[-2^63,2^63)，所以两数相加很可能会溢出
    //要手动做溢出判断！！！！！！！
    int n;
    long long a[11],b[11],c[11];
    bool flag;                         //溢出判断
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i = 0; i<n; i++){
        long long res = a[i] + b[i];                            //res存放a+b的结果
        if(a[i] > 0 && b[i] >0 && res < 0) flag = true;         //正溢出
        else if(a[i] <0 && b[i] < 0 && res >= 0) flag = false;       //负溢出
        else if(res > c[i]) flag = true;
        else flag = false;
        if(flag) cout<<"Case #"<<i+1<<": true"<<endl;
        else cout<<"Case #"<<i+1<<": false"<<endl;
    }
    return 0;
}
