//#include <iostream>
//#include <iomanip>
//#include <cstring>
//using namespace std;
//
////�еĲ�������ͨ��������֪��Ϊʲô�����ǳ����
////д���е���������ˣ�����ô�����飬��һ��Ӧ�þ͹���
//
//int main()
//{
//    int expo1[1001];                    //�������ָ��
//    memset(expo1,-1,sizeof(expo1));
//    double coeff1[1001];                //�������ϵ��
//    int expo2[1001];                    //�������ָ��
//    memset(expo2,-1,sizeof(expo2));
//    double coeff2[1001];                //�������ϵ��
//
//    int out_expo[1001];                 //�������ָ��
//    double out_coeff[1001];             //�������ϵ��
//
//    int k1,k2,k;                          //�ж��ٸ���0��
//    int a = 0, b = 0;                            //ָ������ָ����Ա�
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

//�����Ҳ����һ��Ͷ��ȡ�ɰ���������hashmap��˼�룬�൱�ڴ��ֵ���ˣ������е���˼����

#include<cstdio>
#include<iostream>
using namespace std;
const int maxn = 1111;
double p[maxn] = {};
int main() {
    int k, n, count = 0;                        //count��ʾ��0��ĸ���
    double a;
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%d %lf", &n, &a);
        p[n] += a;                              //p�����ʾϵ������
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
