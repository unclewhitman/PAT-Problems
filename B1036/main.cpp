#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    char c;
    int length,width;
    cin>>n>>c;
    length = n;
    width = ceil(n/2);
    for(int i=0; i<length-1; i++){
        if(i==0){
            for(int j=0; j<length; j++){
                cout<<c;
            }
        }
        if(i%2==1){
            cout<<endl;
        }
        if(i%2==0 && i!=0 && i!=length-2){
            cout<<c;
            for(int j=0; j<length-2; j++) cout<<" ";
            cout<<c;
        }
        if(i == length-2){
            for(int j=0; j<length; j++){
                cout<<c;
            }
        }
    }
    return 0;
}
