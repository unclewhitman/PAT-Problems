#include <iostream>

using namespace std;

//ʮ����ת�������ƣ��ó���ȡ�෨,ע���������Ǹ�λ����λ��Ҫ������
int main()
{
    int A,B,D,sum,arr[40];
    int temp, i = 0;
    cin>>A>>B>>D;
    sum = A + B;
    do{
        temp = sum % D;
        arr[i] = temp;
        sum = sum / D;
        i++;
    }while(sum!=0);
    i = i - 1;
    for(i;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}
