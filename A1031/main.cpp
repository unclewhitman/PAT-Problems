#include <iostream>
#include <cstring>
using namespace std;

//这个题目说白了就是控制输出的问题

//int main()
//{
//    char str[90], ans[40][40];        //把结果存在二位数组里输出的方法
//    cin>>str;
//    int length;
//    int n1,n2,n3;
//    length = strlen(str);             //注意strlen和sizeof的用法区别
//    n1 = (length+2)/3;                //下取整,注意+2
//    n3 = n1;
//    n2 = length + 2 - n1 - n3;
//    for (int i = 1; i<=n1; i++){
//        for(int j = 1; j<=n2; j++)
//            ans[i][j] = ' ';                  //初始化
//    }
//
//    int pos = 0;
//
//    //先画几个10以内的观察一下规律发现，它这个题，会先向n1=n2=n3靠拢，靠拢前增加n2，靠拢后才会增加n1、n3
//    for(int i = 1; i<=n1; i++){
//        ans[i][1] = str[pos];
//        pos++;
//    }
//    for(int j = 2; j<=n2; j++){
//        ans[n1][j] = str[pos];                      //挖去最左下端
//        pos++;
//    }
//    for(int i = n3-1; i>=1; i--){
//        ans[i][n2] = str[pos];                      //挖去最右下端
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

//法2 ，直接输出法
int main()
{
    char str[90];
    cin>>str;
    int length;
    int n1,n2,n3;
    length = strlen(str);             //注意strlen和sizeof的用法区别
    n1 = (length+2)/3;                //下取整,注意+2
    n3 = n1;
    n2 = length + 2 - n1 - n3;

    for(int i = 0; i<n1-1; i++){
        cout<<str[i];                   //输出当前行的左侧字符
        for(int j = 0; j<n2-2; j++){
            cout<<" ";                  //输出n2-2个空格
        }
        cout<<str[length-i-1];          //反向输出最后的字符，即最右侧的
        cout<<endl;
    }

    for(int i =0; i<n2; i++){
        cout<<str[n1+i-1];
    }

    return 0;
}
