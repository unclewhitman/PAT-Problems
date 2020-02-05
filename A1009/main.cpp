/*这题有点东西的，没想到好办法解决乘法问题*/
#include <iostream>
#include <cstdio>
using namespace std;

struct Poly{
    int exp;
    double cof;
}poly[1001] ;               //第一个多项式

double ans[2001];           //存放结果

int main()
{
    int n,m,number = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>poly[i].exp>>poly[i].cof;             //读第一个多项式的非0的指数和系数
    }
    cin>>m;
    for(int i = 0; i<m; i++){
        int exp;
        double cof;
        cin>>exp>>cof;                             //读第二个多项式的非0的指数和系数
        //必须要O(n^2)吗？
        for(int j = 0; j<n; j++){
            ans[exp+poly[j].exp] += (cof*poly[j].cof);
        }
    }

    for(int i = 0; i<=2000; i++){
        if(ans[i] != 0.0) number ++;          //统计非0项的项数
    }

    cout<<number;
    for(int i = 2000; i>=0 ; i--){
        if(ans[i] != 0.0) printf(" %d %.1f", i,ans[i]);
    }

    return 0;

}
