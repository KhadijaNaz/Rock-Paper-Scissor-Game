#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void func1()
 {
 	cout<<"Rock smashes the scissor\n";
 	cout<<"Hence Rock wins.\n";
 }
 //==============================================================
 void func2()
 {
 	cout<<"Scissor cuts paper\n";
 	cout<<"Hence Scissor wins.\n";
 }
 //===============================================================
 void func3()
 {
 	cout<<"Paper wraps rock\n";
 	cout<<"Hence Paper wins.\n";
 }
 //================================================================
   int main()
{   
    srand(time(0));
	int computer_choice=(rand()%3)+1;
    int choice;
    do
	{

    cout<<"1.\tRocks\n2.\tPaper\n3.\tscissor\n\n\n";
	cout<<"Enter your choice:  ";
    cin>>choice;
    cout<<"computer_choice:  "<<computer_choice<<endl;
    if((computer_choice==1&&choice==3)||(computer_choice==3&&choice==1))
    {
       func1();	
	}
    else if((computer_choice==3&&choice==2)||(computer_choice==2&&choice==3))
    {
     func3();	
	}
	else if((computer_choice==2&&choice==1)||(computer_choice==1&&choice==2))
	{
	  func3();	
	}
}
while(computer_choice==choice);
	system("pause");
}

