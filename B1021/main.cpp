#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //1000位，不能用int输入，太大了
    //用string类型可以！

    int num[10] = {};
    string a;     //string数组
    int temp = 0;
    int i = 0;
    cin>>a;
    do{
        temp = a[i] - '0';              //C语言是ascii码转化,重点！！！！！！！！！！！
        num[temp]++;
        i++;
    }while(a[i] != '\0');

    for(int j = 0; j<10; j++){
        if(num[j] != 0){
            cout<<j<<':'<<num[j]<<endl;
        }
    }

    return 0;
}
