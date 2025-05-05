// R. String Score
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size , score =0 ;   cin>>size;
	string word ;    cin>>word ;
	for(int i =0 ; i<word.size() ; i++)
	{
		char zzz = word[i] ;
		switch(zzz)
		{
			case 'V' :
				score+=5;
				break;

			case 'W':
				score+=2;
				break;

			case 'X':
				if (i != word.size() - 1)
				{
					word[i+1]='0';    // ignore the value and put  ====> '0'   =====> in this value 
				}
				break;


			case 'Y' :
				if (i != word.size() - 1)
				{
					word.push_back(word[i+1]);
					word[i+1]='0';    // ignore the value and put  ====> '0'   =====> in this value 
				}
				break;

			case 'Z' :
				if(i != word.size()-1)
				{
					if(word[i+1] == 'W')
					{
						score/=2;
						word[i+1]='0';    // ignore the value and put  ====> '0'   =====> in this value 
					}
					else if (word[i+1] == 'V')
					{
						score/=5;
						word[i+1]='0';    // ignore the value and put  ====> '0'   =====> in this value 
					}
				}
						
		}

	}

	cout<<score<<endl;


	return 0;
}