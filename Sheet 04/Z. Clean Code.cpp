// Z. Clean Code
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	int open =1;
	
	while(getline(cin , line ))
	{
		bool flag = 0;
		if(line == " " || line.size() == 0)
		{
			continue;    // ignore this line 
		}
		for(int i =0 ; i<line.length() ; i++)
		{
			if(line[i] == '/'  && line[i+1]== '/' && open )
			{
				break;
			}
			else if (line[i] == '/'  && line[i+1]== '*')
			{
				i++;
				open =0;
			}
			else if(line[i] == '*'  && line[i+1]== '/' && !open )
			{
				i++;
				open=1;
			}
			else if(open ==1 )
			{
				cout<<line[i];
				flag =1 ;
			}
		}
		if(flag && open ==1)
		{
			cout<<endl;
		}
	}
	

	return 0;
	
}