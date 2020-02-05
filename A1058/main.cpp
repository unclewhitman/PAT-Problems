#include <iostream>
#include <cstdio>

using namespace std;

//1 Gallon 17 Sickle;  1 Sickle 29 Knut
int main()
{
    int a1,b1,c1;                   //ÊäÈëA
    int a2,b2,c2;                   //ÊäÈëB
    scanf("%d.%d.%d",&a1,&b1,&c1);
    scanf("%d.%d.%d",&a2,&b2,&c2);
    int temp_Gallon = a1 + a2;
    int temp_Sickle = b1 + b2;
    int temp_Knut = c1 + c2;
    int temp;
    if(temp_Knut >= 29){
        temp = 0;
        temp = temp_Knut / 29;
        temp_Knut = temp_Knut % 29;
        temp_Sickle += temp;
    }
    if(temp_Sickle >= 17){
        temp = 0;
        temp = temp_Sickle / 17;
        temp_Sickle = temp_Sickle % 17;
        temp_Gallon += temp;
    }

    cout<<temp_Gallon<<"."<<temp_Sickle<<"."<<temp_Knut<<endl;

    return 0;
}
