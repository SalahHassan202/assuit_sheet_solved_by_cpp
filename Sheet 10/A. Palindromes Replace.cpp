// A. Palindromes Replace
#include<iostream>
#include<string>
using namespace std;
bool check(string s1)
{
	int size = s1.size() / 2 ; 
	bool result = true ;

	for(int i= 0 , j= s1.size()-1 ; i < size ; i++ , j-- )
	{
		if(s1[i] == s1[j] || (s1[i] == '?' && s1[j] !='?') || (s1[i] != '?' && s1[j] =='?') || s1 == "?")
		{
			result = true;      // palindrome
		}
		 else 
		{
			result = false;
			break;            // not palindrome
		}
	}

	return result;
}
int main()
{
	//   A palindrome is a string that reads the same forwards as backwards. 
	string s2; 
	cin>>s2; 

	int size = s2.size() / 2 ;

	if(s2 != "?")
	{ 
		if(check(s2))     //  check for palindrome or not palindrome
		{ 
			/*

			three cases 
			abb?
			?bba
			?bb?

			*/

			for(int i= 0 , j = s2.size()-1 ; i <= size ; i++ , j--)    
			{
				if(s2[i] == '?' && s2[j] != '?')
				{
					s2[i] = s2[j];
				} 

				else if (s2[i] != '?' && s2[j] == '?')
				{
					s2[j] = s2[i];
				}

				else if(s2[i] == '?' && s2[j] == '?')
				{
					s2[i] = 'a';     // given in problem ;
					s2[j] = 'a';     // given in problem ;
				}
			}
			cout<< s2 <<endl;
		} 

		else
		{
			cout<< -1 <<endl;       // given in problem ;
		}

	} 
	else      //    s2 == "?"
	{
		cout<< "a" <<endl;           // given in problem ;
	}

	return 0;
}