#include <iostream>
#include <cstring>
using namespace std;

struct student{
    int grade;
    char name[15],ID[15];
    char gender;
}boy,girl,temp;

int main()
{
    int n;
    int max_girl = 0;
    int min_boy = 100;
    boy.grade = -1;
    girl.grade = -1;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp.name>>temp.gender>>temp.ID>>temp.grade;
        if(temp.gender == 'F'){
            if(temp.grade > max_girl){
                max_girl = temp.grade;
                girl.grade = temp.grade;
                strcpy(girl.name, temp.name);
                strcpy(girl.ID,temp.ID);
            }
        }
        if(temp.gender == 'M'){
            if(temp.grade < min_boy){
                min_boy = temp.grade;
                boy.grade = temp.grade;
                strcpy(boy.name, temp.name);
                strcpy(boy.ID,temp.ID);
            }
        }
    }


    if(girl.grade != -1){
        cout<<girl.name<<" "<<girl.ID<<endl;
    }else{
        cout<<"Absent"<<endl;
    }
    if(boy.grade != -1){
        cout<<boy.name<<" "<<boy.ID<<endl;
    }else{
        cout<<"Absent"<<endl;
    }
    if(girl.grade == -1 || boy.grade == -1){
        cout<<"NA"<<endl;
    }else {
        cout<<girl.grade-boy.grade<<endl;
    }


    return 0;
}
