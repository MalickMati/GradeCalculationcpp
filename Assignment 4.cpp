#include<iostream>
using namespace std;

class student{
	protected:
		string name;
		char gender;
		int roll_number;
	public:
	void setvalue(){
		cout<<"Enter the Name of student"<<endl;
		cin>>name;
		cout<<"Enter the gender of the student"<<endl;
		cin>>gender;
		cout<<"Enter the roll number of the student"<<endl;
		cin>>roll_number;
		system("cls");
	}
	void getvalue(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll Number: "<<roll_number<<endl;
		cout<<"Gender: "<<gender<<endl;
	}
};
class Marks{
	protected:
		int m1, m2, m3;
	public:
		void setmarks(){
			cout<<"Enter obtained marks in 1st subject: ";
			cin>>m1;
			cout<<"Enter obtained marks in 2nd subject: ";
			cin>>m2;
			cout<<"Enter obtained marks in 3rd subject: ";
			cin>>m3;
			system("cls");
		}
		void getmarks(){
			cout<<"Obtained marks in 1st subject are: "<<m1<<endl;
			cout<<"Obtained marks in 2nd subject are: "<<m2<<endl;
			cout<<"Obtained marks in 3rd subject are: "<<m3<<endl;
		}	
};
class Result:public student, public Marks{

	public:
		void grade(){
			system("cls");
			{if (m1>=90)
				{cout<<"The grades of "<<name<<" in first subject is: (A)"<<endl;}
			else if (m1>=80)
				{cout<<"The grades of "<<name<<" in first subject is: (B)"<<endl;}
			else if (m1>=70)
				{cout<<"The grades of "<<name<<" in first subject is: (C)"<<endl;}
			else if (m1>=60)
				{cout<<"The grades of "<<name<<" in first subject is: (D)"<<endl;}
			else if (m1>=50)
				{cout<<"The grades of "<<name<<" in first subject is: (E)"<<endl;}
			else if (m1<=49)
				{cout<<"The grades of "<<name<<" in first subject is: (F)"<<endl;}
			else
				cout<<"ERROR IN 1st"<<endl;
			}
			{if (m2>=90)
				{cout<<"The grades of "<<name<<" in second subject is: (A)"<<endl;}
			else if (m2>=80)
				{cout<<"The grades of "<<name<<" in second subject is: (B)"<<endl;}
			else if (m2>=70)
				{cout<<"The grades of "<<name<<" in second subject is: (C)"<<endl;}
			else if (m2>=60)
				{cout<<"The grades of "<<name<<" in second subject is: (D)"<<endl;}
			else if (m2>=50)
				{cout<<"The grades of "<<name<<" in second subject is: (E)"<<endl;}
			else if (m2<=49)
				{cout<<"The grades of "<<name<<" in second subject is: (F)"<<endl;}
			else
				cout<<"ERROR IN 2nd"<<endl;
			}
			{if (m3>=90)
				{cout<<"The grades of "<<name<<" in third subject is: (A)"<<endl;}
			else if (m3>=80)
				{cout<<"The grades of "<<name<<" in third subject is: (B)"<<endl;}
			else if (m3>=70)
				{cout<<"The grades of "<<name<<" in third subject is: (C)"<<endl;}
			else if (m3>=60)
				{cout<<"The grades of "<<name<<" in third subject is: (D)"<<endl;}
			else if (m3>=50)
				{cout<<"The grades of "<<name<<" in third subject is: (E)"<<endl;}
			else if (m3<=49)
				{cout<<"The grades of "<<name<<" in third subject is: (F)"<<endl;}
			else
				cout<<"ERROR IN 3rd"<<endl;
			}
		}
		void com(){
			setvalue();
			getvalue();
			setmarks();
			getmarks();
			grade();
		}
};
int main(){
	Result s1;
	s1.com();
}
