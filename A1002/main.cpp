//#include <iostream>
//#include <iomanip>
//#include <cstring>
//using namespace std;
//
////有的测试样例通不过？不知道为什么？？非常奇怪
////写的有点过于冗杂了，别开那么多数组，有一个应该就够了
//
//int main()
//{
//    int expo1[1001];                    //存输入的指数
//    memset(expo1,-1,sizeof(expo1));
//    double coeff1[1001];                //存输入的系数
//    int expo2[1001];                    //存输入的指数
//    memset(expo2,-1,sizeof(expo2));
//    double coeff2[1001];                //存输入的系数
//
//    int out_expo[1001];                 //存输出的指数
//    double out_coeff[1001];             //存输出的系数
//
//    int k1,k2,k;                          //有多少个非0项
//    int a = 0, b = 0;                            //指向两个指数项对比
//    cin>>k1;
//    for(int i = 0; i<k1; i++){
//        cin>>expo1[i]>>coeff1[i];
//    }
//    cin>>k2;
//    for(int i = 0; i<k2; i++){
//        cin>>expo2[i]>>coeff2[i];
//    }
//
//    if(k1>=k2) k = k1;
//    else k = k2;
//
//    for(int i = 0; ; i++){
//        if(expo1[a] == -1 && expo2[b] == -1) break;
//        if(expo1[a] == -1 && expo2[b] != -1){
//            out_expo[i] = expo2[b];
//            out_coeff[i] = coeff2[b];
//            b += 1;
//        }
//        if(expo1[a] != -1 && expo2[b] == -1){
//            out_expo[i] = expo1[a];
//            out_coeff[i] = coeff1[a];
//            a += 1;
//        }
//        if(expo1[a] != -1 && expo2[b] != -1){
//            if(expo1[a] > expo2[b]){
//                out_expo[i] = expo1[a];
//                out_coeff[i] = coeff1[a];
//                a += 1;
//            }
//            else if(expo1[a] == expo2[b]){
//                out_expo[i] = expo1[a];
//                out_coeff[i] = coeff1[a] + coeff2[b];
//                a += 1;
//                b += 1;
//            }
//            else{
//                out_expo[i] = expo2[b];
//                out_coeff[i] = coeff2[b];
//                b += 1;
//            }
//        }
//    }
//
//    if(a>=b) k = a;
//    else k = b;
//
//    cout<<k+1<<" ";
//
//    for(int i=0; i<k+1; i++){
//        cout<<out_expo[i]<<" "<<fixed<<setprecision(1)<<out_coeff[i];
//        if(i!=k) cout<<" ";
//    }
//
//    return 0;
//}

//它这个也是有一点投机取巧啊，类似于hashmap的思想，相当于存键值对了！！！有点意思啊！

#include<cstdio>
#include<iostream>
using namespace std;
const int maxn = 1111;
double p[maxn] = {};
int main() {
    int k, n, count = 0;                        //count表示非0项的个数
    double a;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;                              //p数组表示系数数组
    }
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;
    }
    for(int i = 0; i < maxn; i++) {
        if(p[i] != 0) {
            count++;
        }
    }
    printf("%d", count);
    for(int i = maxn; i >= 0; i--) {
        if(p[i] != 0) {
            printf(" %d %.1f", i, p[i]);
        }
    }
    return 0;
}
