#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	
	char user;
	while(true)
	{
		cout<<"enter 1 to make cpp file\nenter 2 to make ppt\nenter 3 to make docx\nenter 4 to sign out\n enter 5 to restart      ";
		cin>>user;
		if(user =='1')
		{
			system("C:\\WINDOWS\\System32\\notepad programgenereta.cpp");
			system("\n");
		}
		else if(user == '2')
		{
			system("C:\\WINDOWS\\System32\\notepad programgenereta.ppt");
			system("\n");
		}
		else if(user == '3')
		{
			system("C:\\WINDOWS\\System32\\notepad programgenereta.docx");
			system("\n");
		}
		else if(user == '4')
		{	
			system("C:\\WINDOWS\\System32\\shutdown -L -t 2");
		}
		else if(user == '5')
		{
			system("C:\\WINDOWS\\System32\\shutdown -r -t 2");
		}
		system("cls");
	}
		
	
	
	
}
