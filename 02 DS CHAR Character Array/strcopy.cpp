#include<iostream>
#include<cstring>

using namespace std;

//Function to copy content of one string into another
void strcopy(char str1[], char str2[])
	{
		//Itrate ove the str2 and copy its content to str1
		for(int i = 0; i <= strlen(str2); i++)//This conditon allow us to copy the null character also
			{
				str1[i] = str2[i];
			}
	}
	
//Testing
int main()
	{
		char string1[100];
		char string2[100];
		
		cout<<"Enter The first String: ";
		cin.getline(string1,100);
		cout<<endl;
		cout<<"Enter the second string: ";
		cin.getline(string2,100);
		cout<<endl;
		
		//Copy the content of String2 into String1
		strcopy(string1,string2);
		
		//Print out the String1 to check weather it has been compared
		cout<<"New value of String1 is: "<<string1<<endl;
		
		/* Check using the inbuilt function.	
		*/
		strcpy(string1,string2);
		cout<<"Inbuilt comparison: "<<string1<<endl;
		
	return 0;
	}
