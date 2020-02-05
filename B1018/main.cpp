#include <iostream>

using namespace std;

char maxnum(int a, int b, int c){
    if(a > b){
        if(a > c) return 'B';
        else if (a == c) return 'B';
        else return 'J';
    }else if (a==b){
        if(b > c) return 'B';
        else if (b < c) return 'J';
        else return 'B';
    }else{
        if(b>=c) return 'C';
        else return 'J';
    }
}

int main()
{
    int n;
    int win = 0, tie = 0, lose = 0;        //只计甲的，乙倒过来即可
    int awin_b=0, awin_c=0, awin_j=0;
    int bwin_b=0, bwin_c=0, bwin_j=0;
    char a_cal,b_cal;
    char a[100010];
    char b[100010];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i] == 'B' && b[i] == 'C'){
            awin_b ++;
            win++;
        }
        if(a[i] == 'B' && b[i] == 'B'){
            tie++;
        }
        if(a[i] == 'B' && b[i] == 'J'){
            bwin_j++;
            lose++;
        }
        if(a[i] == 'C' && b[i] == 'C'){
            tie++;
        }
        if(a[i] == 'C' && b[i] == 'B'){
            bwin_b++;
            lose++;
        }
        if(a[i] == 'C' && b[i] == 'J'){
            awin_c++;
            win++;
        }
        if(a[i] == 'J' && b[i] == 'C'){
            bwin_c++;
            lose++;
        }
        if(a[i] == 'J' && b[i] == 'B'){
            awin_j++;
            win++;
        }
        if(a[i] == 'J' && b[i] == 'J'){
            tie++;
        }
    }
    cout<<win<<" "<<tie<<" "<<lose<<endl;
    cout<<lose<<" "<<tie<<" "<<win<<endl;
    a_cal = maxnum(awin_b,awin_c,awin_j);
    b_cal = maxnum(bwin_b,bwin_c,bwin_j);
    if(awin_b==0&&awin_c==0&&awin_j==0) a_cal = 'B';
    if(bwin_b==0&&bwin_c==0&&bwin_j==0) b_cal = 'B';
    cout<<a_cal<<" "<<b_cal;
    return 0;
}
