#include <iostream>

using namespace std;

int main()
{
    int n,i,max_i;
    char c;
    cin>>n>>c;
    int temp = 0;
    int count = 1;
    for(i = 1;temp<=n;i+=2){
        if(i==1) temp += i;
        else{
            temp += i*2;
        }
    }
    i = i-4;
    max_i = i;
    temp = temp - 2*(i+2);
    temp = n - temp;
    for(i;i>1;i-=2){
        for(int j=i; j>0; j--){
            cout<<c;
        }
        cout<<endl;
        for(int j = 0; j<count; j++){
            cout<<" ";
        }
        count++;
    }
    count --;
    for(i = 1;i<=max_i;i+=2){
        for(int j = 0; j<i; j++){
            cout<<c;
        }
        cout<<endl;
        count--;
        for(int j = 0; j<count; j++){
            cout<<" ";
        }
    }
    cout<<temp;
    return 0;
}
