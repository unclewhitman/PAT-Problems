#include <iostream>

using namespace std;

//注意“零多项式”的指数和系数都是 0，但是表示为 0 0。(这句话什么意思?)   ---->如果求导之后没有任何非0项，就输出0 0
//注意最后的输出空格的判断，要格外小心！！

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
        if(b[0] == 0){                                    //特殊判断
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
