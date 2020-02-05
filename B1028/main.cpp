#include <iostream>
#include <cstdio>
using namespace std;

//struct结构体内部变量的设计也是关键
//这道题的输入输出是难点啊，首先他这个日期的格式需要注意，其次日期的比较需要注意，再次日期字符串和数值之间的转换怎么去做也是关键

struct person{
    char name[10];
    int yy, mm, dd;
}oldest, youngest, left_p, right_p, temp;             //分别存的是最年长，最年轻，日期左边界，日期右边界，temp存临时的比较变量

bool LessEqu(person a,person b){
    //如果a的日期小于等于b，返回true
    if(a.yy != b.yy) return a.yy <= b.yy;
    else if(a.mm != b.mm) return a.mm <= b.mm;
    else return a.dd <= b.dd;
}

bool MoreEqu(person a, person b){
    //如果a的日期大于等于b，返回true
    if(a.yy != b.yy) return a.yy >= b.yy;
    else if(a.mm != b.mm) return a.mm >= b.mm;
    else return a.dd >= b.dd;
}

void init(){
    //youngest和left为1814.9.6，oldest和right为2014.9.6
    youngest.yy = left_p.yy = 1814;
    oldest.yy = right_p.yy = 2014;
    youngest.mm = oldest.mm = left_p.mm = right_p.mm = 9;
    youngest.dd = oldest.dd = left_p.dd = right_p.dd = 6;
}


int main()
{
    init();      //先初始化
    int n;
    int count_valid = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>temp.name;
        scanf("%d/%d/%d",&temp.yy,&temp.mm,&temp.dd);
        if(MoreEqu(temp,left_p) && LessEqu(temp,right_p)){
            //日期合法
            count_valid++;
            if(LessEqu(temp,oldest)) oldest = temp; //更新oldest
            if(MoreEqu(temp,youngest)) youngest = temp;
        }
    }
    if(count_valid == 0) cout<<"0"<<endl;
    else cout<<count_valid<<" "<<oldest.name<<" "<<youngest.name;
    return 0;
}
