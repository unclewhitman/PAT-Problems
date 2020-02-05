#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

//输入有问题，不知道哪错了
//int main()
//{
//    char sentence[81];          //输入
//    for(int i=0; sentence[i] != '\0'; i++){      //字符串最后一位是\0，这样输入避免不知道总长度的情况
//        scanf("%c",&sentence[i]);
//    }
//    int len = strlen(sentence);                 //求字符数组的长度
//    int count_char = 0;                         //统计单词长度
//    char word[80] = {};                         //存每个单词
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
    gets(str);                                      //用gets输入？？？！！！

    //cin.getline(str,90);           PAT不支持gets，用这个方法可以避免

    int len = strlen(str), r=0, h=0;                //r为行，h为列
    char ans[90][90];                               //ans[0]-ans[r]存放单词

    //用二维数组来存放单词，妙啊
    for(int i = 0; i<len; i++){
        if(str[i] != ' '){
            //如果不是空格，则存放至ans[r][h]，并令h++
            ans[r][h++] = str[i];
        }else{
            //如果是空格，说明一个单词结束，行r增加1，列h恢复0
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

