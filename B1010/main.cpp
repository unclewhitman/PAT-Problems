#include <iostream>

using namespace std;

//ע�⡰�����ʽ����ָ����ϵ������ 0�����Ǳ�ʾΪ 0 0��(��仰ʲô��˼?)   ---->�����֮��û���κη�0������0 0
//ע����������ո���жϣ�Ҫ����С�ģ���

int main()
{
    int a[1001]={0},b[1001]={0};
    int count = 0;
    int a_dao,b_dao;
    for(int i = 0; ; i++){
        cin>>a[i]>>b[i];
        count += 1;
        if(cin.get() == '\n') break;
    }
    for(int i=0; i<count; i++){
        if(b[0] == 0){                                    //�����ж�
            cout<<0<<" "<<0;
            break;
        }
        a_dao = a[i] * b[i];
        b_dao = b[i] - 1;
        if(b[count-1] != 0){
            if(a_dao != 0 && b_dao != 0 && i!=count-1) cout<<a_dao<<" "<<b_dao<<" ";
            else if(a_dao != 0 && i==count-1) cout<<a_dao<<" "<<b_dao;
        }
        if(b[count-1] == 0){
            if(a_dao != 0 && i!=count-2) cout<<a_dao<<" "<<b_dao<<" ";
            else if(a_dao != 0 && i == count-2) cout<<a_dao<<" "<<b_dao;
        }
    }
    return 0;
}
