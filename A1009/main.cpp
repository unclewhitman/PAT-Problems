/*�����е㶫���ģ�û�뵽�ð취����˷�����*/
#include <iostream>
#include <cstdio>
using namespace std;

struct Poly{
    int exp;
    double cof;
}poly[1001] ;               //��һ������ʽ

double ans[2001];           //��Ž��

int main()
{
    int n,m,number = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>poly[i].exp>>poly[i].cof;             //����һ������ʽ�ķ�0��ָ����ϵ��
    }
    cin>>m;
    for(int i = 0; i<m; i++){
        int exp;
        double cof;
        cin>>exp>>cof;                             //���ڶ�������ʽ�ķ�0��ָ����ϵ��
        //����ҪO(n^2)��
        for(int j = 0; j<n; j++){
            ans[exp+poly[j].exp] += (cof*poly[j].cof);
        }
    }

    for(int i = 0; i<=2000; i++){
        if(ans[i] != 0.0) number ++;          //ͳ�Ʒ�0�������
    }

    cout<<number;
    for(int i = 2000; i>=0 ; i--){
        if(ans[i] != 0.0) printf(" %d %.1f", i,ans[i]);
    }

    return 0;

}
