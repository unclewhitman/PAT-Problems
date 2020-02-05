#include <iostream>

using namespace std;

//测试点3过不去？为啥？没懂？我觉得我写的没问题

//题意是b进制的N是不是回文数，给出的N是十进制表示的
int main()
{
    int N,b;        //N is number ; b is base;
    cin>>N>>b;
    int num[40];    //装转换进制后的数,每一位存一个

    /*还是用除基取余法*/
    int i = 0;      //i表示第几位
    do{
        num[i] = N % b;
        N = N / b;
        i ++;
    }while(N!=0);
    int temp = i - 1;
    int j;
    //判断是不是回文
    if(temp % 2 == 0){     //表示奇数位
        for(j = 0; j!=temp; j++){
            if(num[temp] != num[j]) {
                cout<<"No"<<endl;
                break;
            }
            else{
                temp--;
                continue;
            }
        }
        if(temp == j)
            cout<<"Yes"<<endl;
    }else{
        for(j = 0; temp-j>1; j++){
            if(num[temp] != num[j]) {
                cout<<"No"<<endl;
                break;
            }
            else{
                temp--;
                continue;
            }
        }
        if(num[temp] == num[j])
            cout<<"Yes"<<endl;
    }

    for(int j=i-1; j>=0; j--){
        cout<<num[j];
        if(j!=0) cout<<" ";
    }
    return 0;
}


//#include<cstdio>
//#include<cstring>
//#include<iostream>
//using namespace std;
//bool Judge(int z[], int num) {
//    for(int i = 0; i <= num / 2; i++) {
//        if(z[i] != z[num - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//int main() {
//    int n, b, z[40], num = 0;
//    scanf("%d %d", &n, &b);
//    do {
//        z[num++] = n % b;
//        n /= b;
//    }while(n != 0);
//    bool flag = Judge(z, num);
//    if(flag) {
//        printf("Yes\n");
//    } else {
//        printf("No\n");
//    }
//    for(int i = num - 1; i >= 0; i--) {
//        printf("%d", z[i]);
//        if(i != 0) {
//            printf(" ");
//        }
//    }
//    return 0;
//}
