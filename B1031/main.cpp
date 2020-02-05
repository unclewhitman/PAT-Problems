#include <iostream>

using namespace std;

char compare[] = {'1','0','X','9','8','7','6','5','4','3','2'};
int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

int main()
{
    int n;                          //输入身份证号的个数
    cin>>n;
    int flag = 1;
//    char id_num[n][18];             //怎么规避这个n，目前没想到什么好方法;;;;不用数组存，直接每次输入就判断即可
    char id_num[20];

    for(int i = 0; i < n; i++){
        cin>>id_num;
        int j, sum = 0;

        //注意判断非数字的情况
        for(j = 0; j<17; j++){
            if(!(id_num[j] >= '0' && id_num[j] <= '9')) break;
            sum = sum + (id_num[j] - '0') * weight[j];              //注意ASCII码
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
//    for(int i=0;i<n;i++) //逐条输入
//        cin>>a[i];
//    for(int i=0;i<n;i++)//逐条检验
//    {
//        int sum=0;
//        int j=0;
//        for(j=0;j<a[i].length()-1;j++)
//        {
//            int temp=a[i][j]-'0';
//            sum=sum+temp*weight[j];
//        }
//        char s=M[sum%11];
//        if(a[i][j]!=s)//检查最后一个字符，检查不对,直接输出
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
