#include <iostream>

using namespace std;

int main()
{
    //B代表百，S代表十
    int num;
    cin>>num;
    int a,b,c;
    a = num/100;
    b = (num%100)/10;
    c = num%10;
    int j = 1;
    for(int i = a ; i>0; i--){
        cout<<'B';
    }
    for(int i = b; i>0; i--){
        cout<<'S';
    }
    for(int i = c; i>0; i--){
        cout<<j++;
    }
    cout<<endl;

    return 0;
}
