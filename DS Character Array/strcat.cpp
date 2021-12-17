#include<iostream>
#include<cstring>

using namespace std;

//Function to concatinate two strings
void strconcat(char str1[], char str2[])
	{
		//Get the length of both strings
		int n = strlen(str1);  //Legth of the Second String
		int m = strlen(str2);  //Length of the second string
		
		//Iterate over str2 and append to str1
		for(int i = 0; i<=m; i++)
			{
				str1 [i + n] = str2[i];
			}
	}
	
//Testing	
int main()
	{
		char string1[100] = {"Hello"};
		char string2[100] = {"xyz"};
		
		strconcat(string1,string2);
		
		//Print the new values of the strings
		cout<<string1<<endl;
		
		
//Concatinating usng the inbuilt function

		cout<<"Using inbuilt function: "<<strcat(string1,string2)<<endl;
	
	return 0;	
	}
