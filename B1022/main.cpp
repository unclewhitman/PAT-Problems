#include <iostream>

using namespace std;

//十进制转其他进制，用除基取余法,注意最后输出是高位到低位，要反过来
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
