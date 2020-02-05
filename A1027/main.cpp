#include <iostream>

using namespace std;

struct num{
    int temp;
    char c;
}color[2];

int main()
{
    int r,g,b;
    cin>>r>>g>>b;       //输入rgb颜色

    cout<<'#';

    int num[3] = {r,g,b};
    int i;

    //13进制
    for(int j = 0; j<3; j++){
        i = 0;
        do{
            if(num[j] % 13 < 10){
                color[i].temp = num[j] % 13;
                color[i].c = 'z';
            }
            else{
                if(num[j] % 13 == 10) {color[i].c = 'A'; color[i].temp = -1;}
                if(num[j] % 13 == 11) {color[i].c = 'B'; color[i].temp = -1;}
                if(num[j] % 13 == 12) {color[i].c = 'C'; color[i].temp = -1;}
            }
            num[j] = num[j] / 13;
            i++;
        }while(num[j] != 0);
        if(i != 2){
            color[1].c = 'z';
            color[1].temp = 0;
        }
        if(color[1].temp != -1) cout<<color[1].temp;
        if(color[1].c != 'z') cout<<color[1].c;
        if(color[0].temp != -1) cout<<color[0].temp;
        if(color[0].c != 'z') cout<<color[0].c;
    }

    return 0;
}
