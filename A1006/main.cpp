#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//居然可以直接00和01比较大小，属实牛批

struct person{
    int HH_in, MM_in, SS_in;
    int HH_out, MM_out, SS_out;
    char id[20];
}first, last, temp;

int main()
{
    int n;                                      //输入的行数
    cin>>n;
    last.HH_out = 00;
    last.MM_out = 00;
    last.SS_out = 00;
    first.HH_in = 23;
    first.MM_in = 59;
    first.SS_in = 59;
    for(int i=0; i<n; i++){
        scanf("%s %d:%d:%d %d:%d:%d",temp.id,&temp.HH_in,&temp.MM_in,&temp.SS_in,&temp.HH_out,&temp.MM_out,&temp.SS_out);
        if(temp.HH_in < first.HH_in){
            first.HH_in = temp.HH_in;
            first.MM_in = temp.MM_in;
            first.SS_in = temp.SS_in;
            strcpy(first.id,temp.id);
        }else if(temp.HH_in == first.HH_in){
            if(temp.MM_in < first.MM_in){
                first.MM_in = temp.MM_in;
                first.SS_in = temp.SS_in;
                strcpy(first.id,temp.id);
            }else if(temp.MM_in = first.MM_in){
                if(temp.SS_in < first.SS_in){
                    first.SS_in = temp.SS_in;
                    strcpy(first.id,temp.id);
                }else if(temp.SS_in == first.SS_in){
                    strcpy(first.id,temp.id);
                }
            }
        }

        if(temp.HH_out > last.HH_out){
            last.HH_out = temp.HH_out;
            last.MM_out = temp.MM_out;
            last.SS_out = temp.SS_out;
            strcpy(last.id,temp.id);
        }else if(temp.HH_out == last.HH_out){
            if(temp.MM_out > last.MM_out){
                last.MM_out = temp.MM_out;
                last.SS_out = temp.SS_out;
                strcpy(last.id,temp.id);
            }else if(temp.MM_out = last.MM_out){
                if(temp.SS_out > last.SS_out){
                    last.SS_out = temp.SS_out;
                    strcpy(last.id,temp.id);
                }else if(temp.SS_out == last.SS_out){
                    strcpy(last.id,temp.id);
                }
            }
        }
    }

    cout<<first.id<<" "<<last.id;

    return 0;
}
