#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int a[1010] = {0},n;
    int temp = 0, num = 0, maxn = 0;
    int a1=0,a2=0,a3=0;
    double a4 = 0;
    int flag1 = -1,flag2=-1,flag3=-1,flag4=-1,flag5=-1;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i] %5 == 0 && a[i]%2 == 0){
            a1 += a[i];
            flag1 = 0;
        }
        if(a[i] %5 == 1){
            a2 += a[i] * pow(-1,temp);
            temp += 1;
            flag2 = 0;
        }
        if(a[i]%5 == 2){
            a3 += 1;
            flag3 = 0;
        }
        if(a[i]%5 == 3){
            a4 += a[i];
            num += 1;
            flag4 = 0;
        }
        if(a[i]%5 == 4){
            if(a[i] > maxn) maxn = a[i];
            flag5 = 0;
        }
    }
    if(flag1 == 0)printf("%d ",a1);
    else printf("N ");
    if(flag2 == 0)printf("%d ",a2);
    else printf("N ");
    if(flag3 == 0)printf("%d ",a3);
    else printf("N ");
    if(flag4 == 0)printf("%.1f ",a4/num);
    else printf("N ");
    if(flag5 == 0)printf("%d",maxn);
    else printf("N");

}
