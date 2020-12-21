#include <iostream>
#include <cstdlib>
using namespace std;

class Employee  
{
private:
	
	char name[20];
	int age;
	int salary;
	char mobile[15];
	
	public:
		
		void input_date(){
			  cout<<"name:";
  cin>>name;
  cout<<"age:";
  cin>>age;
  cout<<"salary:";
  cin>>salary;
  cout<<"moblie:";
  cin>>mobile;
		}
void print_date(){


cout<<name<<endl;
cout<<age<<endl;
cout<<salary<<endl;
cout<<mobile<<endl;
}





};



int main(){


  Employee eml;
  
  cout<<"輸入員工資料"<<endl;
  eml.input_date();
  cout<<"輸入員工資料"<<endl<<endl;
  eml.print_date();
  
  system("pause");
  return 0;
}
