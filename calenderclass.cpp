#include<iostream>
using namespace std;
class calendar{
    private:
    int date=24;
    int month=8;
    int year=2023;
    int bdate;
    int bmonth;
    int byear;
    public:
    calendar(){
        cout<<"enter date of birth:"<<endl;
        cin>>bdate;
        cout<<"enter birth month:"<<endl;
        cin>>bmonth;
        cout<<"enter bitrh year:"<<endl;
        cin>>byear;
    } 
    void dateprt(){
        cout<<"date is-"<<date<<"."<<month<<"."<<year<<endl;
    }
    void datechk(){
        if((year%4==0 & year%100!=0) | year%400==0){
            cout<<"it is a leap year"<<endl;
        }
        else{
            cout<<"not a leap year"<<endl;
        }
    }
    void ageprt(){
        if(bmonth>month){
            year=year-1;
            cout<<"the age is "<<(year-byear)<<"years "<<(bmonth-month)<<"months"<<(date-bdate)<<"days"<<endl;
        }
        else if(bdate>date){
            cout<<"the age is "<<(year-byear)<<"years "<<(month-bmonth)<<"months"<<(bdate-date)<<"days"<<endl;
        }
        else if(bmonth>month & bdate>date){
            cout<<"the age is "<<(year-byear)<<"years "<<(bmonth-month)<<"months"<<(bdate-date)<<"days"<<endl;
        }
        else{
            cout<<"the age is "<<(year-byear)<<"years "<<(month-bmonth)<<"months"<<(date-bdate)<<"days"<<endl;
        }
    }


};
int main(){
    calendar cl1;
    cl1.dateprt();
    cl1.datechk();
    cl1.ageprt();

}