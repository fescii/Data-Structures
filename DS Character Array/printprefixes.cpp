#include<iostream>
#include<cstring>

using namespace std;

//Function to print all Prefixes
void printAllPrefixes(char str[])
	{
		//Create and loop through strarting point s and ending point e 
		for(int e = 0; str[e] != '\0'; e++)
			{
				for(int s = 0; s<=e; s++)
				
					{
						cout<<str[s];
					}
				cout<<endl;
			}
	}


//Function to print all Sufixes
void printAllSuffix(char str[])
	{
		//Create and loop through strarting point s and ending point e 
		for(int e = strlen(str); e >=0 ; e--)
			{
				for(int s = strlen(str); s>=e; s--)
				
					{
						cout<<str[s];
					}
				cout<<endl;
			}
	}
	
//Test
int main()
	{
		char str1[100];
		cout<<"Enter String: ";
		cin.getline(str1,100);
		cout<<endl;
		
		printAllPrefixes(str1);
		
		//For suffixes
		cout<<"Suffixes:"<<endl;
		printAllSuffix(str1);
		
	return 0;	
	}
