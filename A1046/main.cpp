#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*��ν����ʱ�����ǹؼ�
    �˴�����һ��dis_pp[i]�����ʾ1�Žڵ㰴˳ʱ�뷽�򵽴i�Žڵ�˳ʱ�뷽�����һ���ڵ㡱�ľ���
    �������Ķ�������Լ����ⶨ�壬�����������ʱ�临�Ӷȵ�˼����Ҫ�μǣ�����ĺ��
    ���������ľ����ʱ����Լ���һ��forѭ����ʱ�临�Ӷ�O(n^2)------>O(n) !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

int main()
{
    int n,m;          //�м����ڵ�,�м��Բ��Խڵ�
    int dis[100010] = {0};
    int test_a[10010] = {0};       //����a�ڵ�
    int test_b[10010] = {0};       //����b�ڵ�
    int sum = 0;                   //ͳ��һ�¾����
    int dis_pp[100010],dis_p,dis_n;
    cin>>n;
    for(int i = 1; i<=n; i++){        // ����ĳ�i=1��ʼѭ����ԭ����Ҫ��֤dis_pp�����i���ʾ1��i+1�Ľڵ����
        cin>>dis[i];
        sum = sum + dis[i];
        dis_pp[i] = sum;
    }
    cin>>m;
    for(int i = 0; i<m; i++){
        cin>>test_a[i]>>test_b[i];
    }

    //������룬�Ƚϴ�С����
    for(int i = 0; i<m; i++){
        dis_p = 0;
        dis_n = 0;
        if(test_a[i] > test_b[i]) dis_p = dis_pp[test_a[i]-1] - dis_pp[test_b[i]-1];
        else dis_p = dis_pp[test_b[i]-1] - dis_pp[test_a[i]-1];
        dis_n = sum - dis_p;
        if(dis_n > dis_p) cout<<dis_p<<endl;
        else cout<<dis_n<<endl;
    }
    return 0;
}
