//�����ýṹ�������˫forѭ�������ܻ����һ�㣬��������ô��û���κ�����
//�ýṹ��ʵ���ϻ�������hashmap��˼�밡�����Ǽ�ֵ��

#include <iostream>

using namespace std;

int main()
{
    int n,m;                          //n�����룬m�ǲ�ѯ
    int test[1001], real[1001];
    long long num[1001];
    int require[1001];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>num[i]>>test[i]>>real[i];
    }
    cin>>m;
    for(int i = 0; i<m; i++){
        cin>>require[i];
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(require[i] == test[j]){
                cout<<num[j]<<" "<<real[j]<<endl;
                break;
            }
        }
    }

    return 0;

}
