#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*如何解决超时问题是关键
    此处，加一个dis_pp[i]数组表示1号节点按顺时针方向到达“i号节点顺时针方向的下一个节点”的距离
    这个数组的定义可以自己随意定义，但是这个减少时间复杂度的思想需要牢记！！真的很妙！
    这样求相距的距离的时候可以减少一个for循环，时间复杂度O(n^2)------>O(n) !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

int main()
{
    int n,m;          //有几个节点,有几对测试节点
    int dis[100010] = {0};
    int test_a[10010] = {0};       //检测的a节点
    int test_b[10010] = {0};       //检测的b节点
    int sum = 0;                   //统计一下距离和
    int dis_pp[100010],dis_p,dis_n;
    cin>>n;
    for(int i = 1; i<=n; i++){        // 这里改成i=1开始循环，原因是要保证dis_pp数组第i项表示1到i+1的节点距离
        cin>>dis[i];
        sum = sum + dis[i];
        dis_pp[i] = sum;
    }
    cin>>m;
    for(int i = 0; i<m; i++){
        cin>>test_a[i]>>test_b[i];
    }

    //计算距离，比较大小部分
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
