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
  
  cout<<"¿é¤J­û¤u¸ê®Æ"<<endl;
  eml.input_date();
  cout<<"¿é¤J­û¤u¸ê®Æ"<<endl<<endl;
  eml.print_date();
  
  system("pause");
  return 0;
}
//輸入員工資料
//name:wwww
//age:24
//salary:15566
//moblie:0917766555
//輸出員工資料

//wwww
//24
//15566
//0917766555
