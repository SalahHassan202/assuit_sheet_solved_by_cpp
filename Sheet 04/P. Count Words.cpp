// P. Count Words
#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

int main()
 {

	string sen,res; 
	int counter = 0;
	getline(cin,sen);
	for(int i=0;i<sen.size();i++)
    { 
		if(sen[i] != 32& sen[i] != '!' && sen[i] != '.' && sen[i] != '?' && sen[i] != ',')
        {
			res+=sen[i];
		}
		if((sen[i] == 32 || sen[i] == '!' || sen[i] == '.' || sen[i] =='?' || sen[i] == ',' || i == sen.size() - 1)
		   && res.size() != 0)
        {
			counter++;
			res = "";
		}
	}
	cout<<counter<<endl;
    
    return 0;
}
	
	