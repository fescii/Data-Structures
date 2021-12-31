#include<iostream>
#include<cstring>

using namespace std;

//Function to copying nth chars from one string into another

//The value n specify the number of characters we want to copy
void strncopy(char str1[], char str2[], int n)
	{
		//Itrate ove the str2 and copy its content to str1
		for(int i = 0; i < n; i++)
		/*This conditon doesnt allow us to copy the null character,
		 The null chharacters are  copied only when the n > length of the str2
		*/
			{
				str1[i] = str2[i];
			}
	}
	
//Testing
int main()
	{
		char string1[100];
		char string2[100];
		int n;
		
		cout<<"Enter The first String: ";
		cin.getline(string1,100);
		cout<<endl;
		cout<<"Enter the second string: ";
		cin.getline(string2,100);
		cout<<endl;
		cout<<"Enter the number of characters to be copied: ";
		cin>>n;
		cout<<endl;
				
		//Copy the content of String2 into String1
		strncopy(string1,string2,n);
		
		//Print out the String1 to check weather it has been compared
		cout<<"New value of String1 is: "<<string1<<endl;
		
		/* Check using the inbuilt function
		Similarly.	
		*/
		strncpy(string1,string2,n);
		cout<<"Inbuilt comparison: "<<string1<<endl;
		
	return 0;
	}
