#include<iostream>
#include<cstring>

using namespace std;

//Function to output the length of charracter array
int length(char input[])
	{
		int count = 0;
		
		//itrate over array while the value is not Equal to null character.
		for(int i=0; input[i] != '\0';i++)
			{
				//increment the  counter
				count++;
			}
		return count;
	}
	
//Testing
int main()
	{
		char input[100];
		cout<<"Input String: ";
		cin.getline(input,100);
		cout<<endl;
		
		//Print out the length of the string 
		cout<<"The length is: "<<length(input)<<endl;
		
//Getting length using an inbuilt fuction
		cout<<"Length from inbuilt function: "<<strlen(input)<<endl;
		
	return 0;
	}
