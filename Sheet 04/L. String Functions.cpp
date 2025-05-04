// L. String Functions
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main ()
{
	int size , query;
	cin>> size >>query; 
	string word;
	cin>>word; 
	string qu;
	int num1,num2;

	while(query--){ 
		cin>>qu;

		if(qu == "pop_back")
		{
			word.pop_back();
		} 
		
		else if (qu == "front")
		{
			cout<<word.front()<<endl;
		} 
		
		else if (qu == "back")
		{
			cout<<word.back()<<endl;
		} 
		
		else if (qu == "sort")
		{ 
		    
			cin>>num1>>num2;  // 6 3
			sort(word.begin()+ min(num1,num2) -1   // 2
			    ,word.begin()+max(num1,num2)); // 6
		} 
		
		else if (qu == "reverse")
		{
			
			cin>>num1>>num2;  // 6 3
			reverse(word.begin()+ min(num1,num2) -1
			    ,word.begin()+max(num1,num2));
		} 
		
		else if (qu == "print"){
			
			int pos ;
			cin>>pos;
			cout<<word[pos - 1]<<endl;
		} 
		
		else if (qu == "substr")
		{
			cin>>num1>>num2; 
			for(int i = min(num1,num2) - 1;i<=max(num1,num2)-1;i++){
				cout<<word[i];
			}
			cout<<endl;
		} 

		else 
		{
			char x;
			cin>>x;
			word.push_back(x);
		}
	}


	return 0;
}