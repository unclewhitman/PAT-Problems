#include <iostream>
#include <cstring>
using namespace std;

//�����Ŀ˵���˾��ǿ������������

//int main()
//{
//    char str[90], ans[40][40];        //�ѽ�����ڶ�λ����������ķ���
//    cin>>str;
//    int length;
//    int n1,n2,n3;
//    length = strlen(str);             //ע��strlen��sizeof���÷�����
//    n1 = (length+2)/3;                //��ȡ��,ע��+2
//    n3 = n1;
//    n2 = length + 2 - n1 - n3;
//    for (int i = 1; i<=n1; i++){
//        for(int j = 1; j<=n2; j++)
//            ans[i][j] = ' ';                  //��ʼ��
//    }
//
//    int pos = 0;
//
//    //�Ȼ�����10���ڵĹ۲�һ�¹��ɷ��֣�������⣬������n1=n2=n3��£����£ǰ����n2����£��Ż�����n1��n3
//    for(int i = 1; i<=n1; i++){
//        ans[i][1] = str[pos];
//        pos++;
//    }
//    for(int j = 2; j<=n2; j++){
//        ans[n1][j] = str[pos];                      //��ȥ�����¶�
//        pos++;
//    }
//    for(int i = n3-1; i>=1; i--){
//        ans[i][n2] = str[pos];                      //��ȥ�����¶�
//        pos++;
//    }
//    for(int i = 1; i<=n1; i++){
//        for(int j =1; j<=n2; j++){
//            cout<<ans[i][j];
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}

//��2 ��ֱ�������
int main()
{
    char str[90];
    cin>>str;
    int length;
    int n1,n2,n3;
    length = strlen(str);             //ע��strlen��sizeof���÷�����
    n1 = (length+2)/3;                //��ȡ��,ע��+2
    n3 = n1;
    n2 = length + 2 - n1 - n3;

    for(int i = 0; i<n1-1; i++){
        cout<<str[i];                   //�����ǰ�е�����ַ�
        for(int j = 0; j<n2-2; j++){
            cout<<" ";                  //���n2-2���ո�
        }
        cout<<str[length-i-1];          //������������ַ��������Ҳ��
        cout<<endl;
    }

    for(int i =0; i<n2; i++){
        cout<<str[n1+i-1];
    }

    return 0;
}
