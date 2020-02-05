#include <iostream>
#include <string>
using namespace std;

int main()
{
    int max_g=0, min_g=100;
    string max_index,min_index,max_name,min_name;
    int n;
    cin>>n;
    string name[n];
    string number[n];
    int score[n];
    for(int i=0; i<n; i++){
        cin>>name[i]>>number[i]>>score[i];
        if(score[i] >= max_g){
            max_g = score[i];
            max_name = name[i];
            max_index = number[i];
        }
        if(score[i] <= min_g){
            min_g = score[i];
            min_name = name[i];
            min_index = number[i];
        }
    }

    cout<<max_name<<" "<<max_index<<endl;
    cout<<min_name<<" "<<min_index<<endl;

    return 0;
}
