#include <iostream>

using namespace std;

char compare[] = {'1','0','X','9','8','7','6','5','4','3','2'};
int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

int main()
{
    int n;                          //�������֤�ŵĸ���
    cin>>n;
    int flag = 1;
//    char id_num[n][18];             //��ô������n��Ŀǰû�뵽ʲô�÷���;;;;��������棬ֱ��ÿ��������жϼ���
    char id_num[20];

    for(int i = 0; i < n; i++){
        cin>>id_num;
        int j, sum = 0;

        //ע���жϷ����ֵ����
        for(j = 0; j<17; j++){
            if(!(id_num[j] >= '0' && id_num[j] <= '9')) break;
            sum = sum + (id_num[j] - '0') * weight[j];              //ע��ASCII��
        }

        if(j < 17){
            flag = 0;
            cout<<id_num<<endl;
        }else{
            if(compare[sum % 11] != id_num[17]){
                flag = 0;
                cout<<id_num<<endl;
            }
        }
    }

    if(flag == 1) cout<<"All passed"<<endl;

    return 0;
}


//int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
//int count=0;
//int main()
//{
//    int n;
//    cin>>n;
//    string a[n];
//    for(int i=0;i<n;i++) //��������
//        cin>>a[i];
//    for(int i=0;i<n;i++)//��������
//    {
//        int sum=0;
//        int j=0;
//        for(j=0;j<a[i].length()-1;j++)
//        {
//            int temp=a[i][j]-'0';
//            sum=sum+temp*weight[j];
//        }
//        char s=M[sum%11];
//        if(a[i][j]!=s)//������һ���ַ�����鲻��,ֱ�����
//        {
//            cout<<a[i]<<endl;
//            count++;
//        }
//    }
//    if(count==0)
//    {
//        cout<<"All passed";
//    }
//    return 0;
//}
