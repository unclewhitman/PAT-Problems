#include <iostream>

using namespace std;

int main()
{
    //long long �ķ�Χ��[-2^63,2^63)������������Ӻܿ��ܻ����
    //Ҫ�ֶ�������жϣ�������������
    int n;
    long long a[11],b[11],c[11];
    bool flag;                         //����ж�
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i = 0; i<n; i++){
        long long res = a[i] + b[i];                            //res���a+b�Ľ��
        if(a[i] > 0 && b[i] >0 && res < 0) flag = true;         //�����
        else if(a[i] <0 && b[i] < 0 && res >= 0) flag = false;       //�����
        else if(res > c[i]) flag = true;
        else flag = false;
        if(flag) cout<<"Case #"<<i+1<<": true"<<endl;
        else cout<<"Case #"<<i+1<<": false"<<endl;
    }
    return 0;
}
