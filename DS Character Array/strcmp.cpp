#include<iostream>
#include<cstring>

using namespace std;

//Function to compare our strings
bool strcompare(char str1[], char str2[])
	{
		//Check if the strin length is the same if not return false
		if(strlen(str1) != strlen(str2)) return false;
		
		//Compare each char of str1 to char of str2
		//To do this we have to iterate through the str
		for(int i = 0; i < strlen(str1); i++)
		//You can also use str[i] != '\0' 
			{
				if(str1[i] != str2[i])
					{
						return false;
					}
			}
		return true;
	}
	
//	Lets test 
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
		
		//Print out weather the two values are equal or not
		cout<<strcompare(string1,string2)<<endl;
		
		/* Check using the inbuilt function
			Note: The inbult function will retun 0 if strings are the same
				  And any number if the strings are not the same.	
		*/
		cout<<"If the output is 0 then both strings are the same"<<endl;
		cout<<"Inbuilt comparison: "<<strcmp(string1,string2)<<endl;
		
	return 0;
	}
