#include <iostream>
#include <cstdio>
using namespace std;

//struct�ṹ���ڲ����������Ҳ�ǹؼ�
//����������������ѵ㰡��������������ڵĸ�ʽ��Ҫע�⣬������ڵıȽ���Ҫע�⣬�ٴ������ַ�������ֵ֮���ת����ôȥ��Ҳ�ǹؼ�

struct person{
    char name[10];
    int yy, mm, dd;
}oldest, youngest, left_p, right_p, temp;             //�ֱ��������곤�������ᣬ������߽磬�����ұ߽磬temp����ʱ�ıȽϱ���

bool LessEqu(person a,person b){
    //���a������С�ڵ���b������true
    if(a.yy != b.yy) return a.yy <= b.yy;
    else if(a.mm != b.mm) return a.mm <= b.mm;
    else return a.dd <= b.dd;
}

bool MoreEqu(person a, person b){
    //���a�����ڴ��ڵ���b������true
    if(a.yy != b.yy) return a.yy >= b.yy;
    else if(a.mm != b.mm) return a.mm >= b.mm;
    else return a.dd >= b.dd;
}

void init(){
    //youngest��leftΪ1814.9.6��oldest��rightΪ2014.9.6
    youngest.yy = left_p.yy = 1814;
    oldest.yy = right_p.yy = 2014;
    youngest.mm = oldest.mm = left_p.mm = right_p.mm = 9;
    youngest.dd = oldest.dd = left_p.dd = right_p.dd = 6;
}


int main()
{
    init();      //�ȳ�ʼ��
    int n;
    int count_valid = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>temp.name;
        scanf("%d/%d/%d",&temp.yy,&temp.mm,&temp.dd);
        if(MoreEqu(temp,left_p) && LessEqu(temp,right_p)){
            //���ںϷ�
            count_valid++;
            if(LessEqu(temp,oldest)) oldest = temp; //����oldest
            if(MoreEqu(temp,youngest)) youngest = temp;
        }
    }
    if(count_valid == 0) cout<<"0"<<endl;
    else cout<<count_valid<<" "<<oldest.name<<" "<<youngest.name;
    return 0;
}
