// S. Max Split
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string word ;     cin>>word ;
	char arr[1000][1000];
	int row=0 , column=0 , r=0, l =0, counter=0;
	for(int i =0 ; i<word.size() ; i++)
	{
		if(word[i]=='R')
		{
			arr[row][column]=word[i];
			r++;
		}
		else
		{
			arr[row][column]=word[i];
			l++;
		}
		column++;

		if(l == r && r>0)
		{
			row++;
			column=0;
			counter++;
			r=0 , l =0 ;
		}
	}
	cout<<counter<<endl;

	for(int i =0 ; i<1000 ; i++)
	{
		if(arr[i][0] != 'R'  && arr[i][0] != 'L')
		{
			continue;
		}
		cout<<arr[i]<<endl;
	}

	return 0;
}