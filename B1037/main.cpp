#include <iostream>
#include <cstdio>
using namespace std;

//�ǶԵģ�����Ҳ̫tm�����˰�
//�𰸵�˼·����ȫ����knut���㣬Ȼ�����ת������

const int galleon = 17 *29;
const int sickle = 29;

int main(){
    int Sickle[2],Knut[2];
    int Galleon[2];
    int temp1,temp2,temp3;
    scanf("%d.%d.%d %d.%d.%d",&Galleon[0],&Sickle[0],&Knut[0],&Galleon[1],&Sickle[1],&Knut[1]);
    int price = Galleon[0] * galleon + Sickle[0] * sickle + Knut[0];
    int money = Galleon[1] * galleon + Sickle[1] * sickle + Knut[1];
    int change = money - price;
    if(change < 0){
        cout<<"-";
        change = -change;
    }
    printf("%d.%d.%d",change/galleon,change%galleon/sickle,change%sickle); //�
    return 0;
}


//int main(){
//
//}
//
//    //0��Ӧ����1��ʵ��
//    int Sickle[2],Knut[2];
//    int Galleon[2];
//    int temp1,temp2,temp3;
//    scanf("%d.%d.%d %d.%d.%d",&Galleon[0],&Sickle[0],&Knut[0],&Galleon[1],&Sickle[1],&Knut[1]);
//    if(Galleon[0] < Galleon[1]){
//        //ʵ������Ӧ��
//        if(Knut[1] < Knut[0]){
//            temp3 = Knut[1] + 29 - Knut[0];
//            Sickle[1]--;
//        }else{temp3 = Knut[1] - Knut[0];}
//
//        if(Sickle[1] < Sickle[0]){
//            temp2 = Sickle[1] + 17 - Sickle[0];
//            Galleon[1] -- ;
//        }else{temp2 = Sickle[1] - Sickle[0];}
//        temp1 = Galleon[1] - Galleon[0];
//        cout<<temp1<<"."<<temp2<<"."<<temp3;
//
//    }else if(Galleon[0] == Galleon[1]){
//        if(Sickle[0] < Sickle[1]){
//            //same
//            if(Knut[1] < Knut[0]){
//                temp3 = Knut[1] + 29 - Knut[0];
//                Sickle[1]--;
//            }else{temp3 = Knut[1] - Knut[0];}
//
//            temp2 = Sickle[1] - Sickle[0];
//
//            temp1 = Galleon[1] - Galleon[0];
//            cout<<temp1<<"."<<temp2<<"."<<temp3;
//
//        }else if(Sickle[0] == Sickle[1]){
//            if(Knut[0] < Knut[1]){
//                //same
//                temp3 = Knut[1] - Knut[0];
//                temp2 = Sickle[1] - Sickle[0];
//                temp1 = Galleon[1] - Galleon[0];
//                cout<<temp1<<"."<<temp2<<"."<<temp3;
//            }else if(Knut[0] == Knut[1]){
//                temp3 = Knut[1] - Knut[0];
//                temp2 = Sickle[1] - Sickle[0];
//                temp1 = Galleon[1] - Galleon[0];
//                cout<<temp1<<"."<<temp2<<"."<<temp3;
//            }else{
//                cout<<"-";
//                temp3 = Knut[0] - Knut[1];
//                temp2 = Sickle[1] - Sickle[0];
//                temp1 = Galleon[1] - Galleon[0];
//                cout<<temp1<<"."<<temp2<<"."<<temp3;
//            }
//
//        }else{
//            cout<<"-";
//            if(Knut[0] < Knut[1]){
//                temp3 = Knut[0] + 29 - Knut[1];
//                Sickle[0]--;
//            }else{temp3 = Knut[0] - Knut[1];}
//            temp2 = Sickle[0] - Sickle[1];
//            temp1 = Galleon[1] - Galleon[0];
//            cout<<temp1<<"."<<temp2<<"."<<temp3;
//        }
//    }else{
//        //ʵ��С��Ӧ��
//        cout<<"-";
//        if(Knut[0] < Knut[1]){
//            temp3 = Knut[0] + 29 - Knut[1];
//            Sickle[0]--;
//        }else{temp3 = Knut[0] - Knut[1];}
//
//        if(Sickle[0] < Sickle[1]){
//            temp2 = Sickle[0] + 17 - Sickle[1];
//            Galleon[0] -- ;
//        }else{temp2 = Sickle[0] - Sickle[1];}
//        temp1 = Galleon[0] - Galleon[1];
//        cout<<temp1<<"."<<temp2<<"."<<temp3;
//    }
//
//    return 0;
//}
