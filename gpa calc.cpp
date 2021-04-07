#include <iostream>
#include <string>
#include<iomanip>
#include<fstream>

using namespace std;
class gpa{
private:
	int m1,m2,m3,m4,m5;
	char name[50];
	int sum;
	float average;
	int fullmarks;
	float percent;
	float GPAval;

public:
	gpa(){
	}
	void getData();
	int calc();
	void disp();


};
void gpa::getData(){
    cout<<"\t|\t\tYour Name:                |"<<endl<<" "<<setfill(' ')<<setw(23)<<" ";cin>>name;
	cout<<"\t|\tEnter your marks in Physics :     |"<<endl<<" "<<setfill(' ')<<setw(23)<<" ";cin>>m1;
	cout<<"\t|\tEnter your marks in Chemistry :   |"<<endl<<" "<<setfill(' ')<<setw(23)<<" ";cin>>m2;
	cout<<"\t|\tEnter your marks in Mathematics : |"<<endl<<" "<<setfill(' ')<<setw(23)<<" ";cin>>m3;
	cout<<"\t|\tEnter your marks in Biology :     |"<<endl<<" "<<setfill(' ')<<setw(23)<<" ";cin>>m4;
	cout<<"\t|\tEnter your marks in English :     |"<<endl<<" "<<setfill(' ')<<setw(23)<<" ";cin>>m5;
}
int gpa::calc(){
	sum=m1+m2+m3+m4+m5;
	fullmarks=500;
	percent=sum/5;
	GPAval=percent/25;
	//cout<<percent;

}
void gpa::disp(){
    cout<<setfill(' ')<<setw(23)<<"Congratulation "<<name<<" your GPA is:"<<endl;
    //cout<<"Result:";
    if(m1>40&&m2>40&&m3>40&&m4>40&&m5>40){
	if(percent>90){
		cout<<setfill(' ')<<setw(23)<<"GPA : A+("<<GPAval<<")"<<endl;
	}
	else if(percent>80&&percent<=90){
		cout<<setfill(' ')<<setw(23)<<"GPA : A("<<GPAval<<")"<<endl;
	}
	else if(percent>70&&percent<=80){
		cout<<setfill(' ')<<setw(23)<<"GPA : B+("<<GPAval<<")"<<endl;
	}
	else if(percent>60&&percent<=70){
		cout<<setfill(' ')<<setw(23)<<"GPA : B("<<GPAval<<")"<<endl;
	}
	else if(percent>50&&percent<=60){
		cout<<setfill(' ')<<setw(23)<<"GPA : C+("<<GPAval<<")"<<endl;
	}
	else if(percent>40&&percent<=50){
		cout<<setfill(' ')<<setw(23)<<"GPA : C("<<GPAval<<")"<<endl;
	}
    }
    else{
        cout<<setfill(' ')<<setw(23)<<"Fail("<<GPAval<<")"<<endl;
	}
}

int main ()
{
    fstream gpa_calc;
    gpa_calc.open("GPA",ios::app);
    if(!gpa_calc){
        cout<<"System Failed";
    }
    else{
    cout<<setfill('-')<<setw(20)<<"-"<<"GPA Calculator"<<" "<<setfill('-')<<setw(20)<<" "<<endl;
    gpa g;
    g.getData();
    g.calc();
    cout<<setfill('-')<<setw(20)<<"-"<<"YOUR RESULT IS"<<setfill('-')<<setw(20)<<"-"<<endl<<endl;
    g.disp();
    cout<<setfill('-')<<setw(54)<<"-";
    }
    gpa_calc.close();
}

