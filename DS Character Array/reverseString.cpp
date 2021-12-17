#include<iostream>
using namespace std;

//Function to output the length of charracter array
int length(char input[])
	{
		int count = 0;
		for(int i=0; input[i] != '\0';i++)
			{
				//increment counter
				count++;
			}
		return count;
	}

//Function to reverse char array (String)
void reverse(char input[])
	{
		int s = 0;
		int e = length(input) -1;
		
		while(s < e)
			{
				swap(input[s], input[e]);
				s++;
				e--;
			}
	}	

int main()
{
	//Something nice
	char name[100];
	cout<<"Enter your name: ";   
	cin.getline(name,100);
	
	cout<<"Your name is: "<<name<<endl;
	
	//Reversing the name
	reverse(name);
	
	//Printing reversed name
	cout<<"Your reversed name is: "<<name;
	
	
	return 0;
}
