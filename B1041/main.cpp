//书上用结构体避免了双for循环，可能会更快一点，不过我这么做没有任何问题
//用结构体实际上还是用了hashmap的思想啊，就是键值对

#include <iostream>

using namespace std;

int main()
{
    int n,m;                          //n是输入，m是查询
    int test[1001], real[1001];
    long long num[1001];
    int require[1001];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>num[i]>>test[i]>>real[i];
    }
    cin>>m;
    for(int i = 0; i<m; i++){
        cin>>require[i];
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(require[i] == test[j]){
                cout<<num[j]<<" "<<real[j]<<endl;
                break;
            }
        }
    }

    return 0;

}
