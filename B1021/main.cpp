#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //1000λ��������int���룬̫����
    //��string���Ϳ��ԣ�

    int num[10] = {};
    string a;     //string����
    int temp = 0;
    int i = 0;
    cin>>a;
    do{
        temp = a[i] - '0';              //C������ascii��ת��,�ص㣡��������������������
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
