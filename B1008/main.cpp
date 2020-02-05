#include <iostream>
#include <cstdio>
using namespace std;

/*投机取巧大法，在输出上面动手脚*/
//int main()
//{
//    int n,m,count=0;
//    cin>>n>>m;
//    m = m%n;                 //m可能会大于n，此处修正一下
//    int a[n];
//    for(int i = 0; i<n; i++){
//        cin>>a[i];
//    }
//    for(int i = n-m; i<n; i++){
//        cout<<a[i];
//        count ++;
//        if(count<n) cout<<" ";
//    }
//    for(int i = 0; i<n-m; i++){
//        cout<<a[i];
//        count ++;
//        if(count<n) cout<<" ";
//    }
//
//    return 0;
//}


/*神奇的最大公约数方法*/
int gcd(int a, int b){  //求最大公约数
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main(){
    int a[110];
    int n, m, temp, pos, next;
    //temp为临时变量，pos为当前位置，next为下一个要处理的位置
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    m = m % n;
    if(m!=0){ //如果m==0，直接输出原数组
        int d = gcd(m,n);
        for(int i= n-m; i<n-m+d; i++){
            temp = a[i];
            pos = i;
            do{
                next = (pos-m+n) % n;
                //如果下一个位置不是初始点，那么把下一个位置的元素赋值给当前处理位置
                if(next!=i) a[pos] = a[next];
                else a[pos] = temp;       //把一开始拿走的元素赋给最后的空位
                pos = next;
            }while(pos != i);
        }
    }
    for (int i = 0; i<n; i++){
        cout<<a[i];
        if(i<n-1) cout<<" ";
    }
    return 0;
}


