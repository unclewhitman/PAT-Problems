#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

//���������⣬��֪���Ĵ���
//int main()
//{
//    char sentence[81];          //����
//    for(int i=0; sentence[i] != '\0'; i++){      //�ַ������һλ��\0������������ⲻ֪���ܳ��ȵ����
//        scanf("%c",&sentence[i]);
//    }
//    int len = strlen(sentence);                 //���ַ�����ĳ���
//    int count_char = 0;                         //ͳ�Ƶ��ʳ���
//    char word[80] = {};                         //��ÿ������
//    for(int i = len-1 ; i>0; i--){
//        if(sentence[i] == ' '){
//            for(int j = count_char; j>0; j--){
//                cout<<word[j];
//            }
//            cout<<" ";
//            count_char = 0;
//            word[80] = {};
//            continue;
//        }
//        word[count_char] = sentence[i];
//        count_char ++;
//    }
//    for(int j = count_char; j>0; j--){
//        cout<<word[j];
//    }
//    return 0;
//}

int main(){
    char str[90];
    gets(str);                                      //��gets���룿����������

    //cin.getline(str,90);           PAT��֧��gets��������������Ա���

    int len = strlen(str), r=0, h=0;                //rΪ�У�hΪ��
    char ans[90][90];                               //ans[0]-ans[r]��ŵ���

    //�ö�ά��������ŵ��ʣ��
    for(int i = 0; i<len; i++){
        if(str[i] != ' '){
            //������ǿո�������ans[r][h]������h++
            ans[r][h++] = str[i];
        }else{
            //����ǿո�˵��һ�����ʽ�������r����1����h�ָ�0
            ans[r][h] = '\0';
            r++;
            h = 0;
        }
    }
    for(int i = r; i>=0; i--){
        printf("%s",ans[i]);
        if(i>0) printf(" ");
    }

    return 0;
}

