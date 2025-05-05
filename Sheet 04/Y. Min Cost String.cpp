// Y. Min Cost String
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include <limits.h>
using namespace std;
int  main()
{
	string word ;               cin >> word ; 
	int cost[26] ;        // the number of all alphapetic such as a =2 , b=9 c=7 ,d=8    .....etc 
	
	for(int i = 0 ; i < 26 ; i++)
	{ 
		cin>>cost[i];
	}

	int size = word.size();
	int counter = 0;         // store the number of     (?) 
	/*     the place the (?)  in the string =====> first , middel , last ====>(All Cases To Solve This Problem)
		??abcd
		ab??cd
		abcd??
	*/

	for(int i=0 ; i < size ; i++)
	{ 
	 
		counter = 0;

		if(word[i] == '?')
		{ 
			// check for the count of (?) in the string 
			for(int z = i ;z < size; z++)
			{ 
				if(word[z] == '?')
				{
					counter++;
				} 
				else 
				{
					break;
				}
			}
			// ??????????     ====> (All elemnet in string  == ???? )====> cout<<"a ";
			if(counter == size)
			{
				cout<<"0"<<endl;

				for(int z = 0 ; z < size ; z++)
				{
					cout<<"a";         // a is the smallest letter in  alphabatic 
				}

				return 0;
			} 

			else
			{
				if(i == 0)        // the (?)  in the start of string
				{ 
					int ma = INT_MAX;             //! big number store in c++   ====> use it to compare between the other numbers;
					int index;
				    
					for(int z = 0;z < word[counter]-97+1 ; z++)    // we used -97 because in ASSCI CODE ===> a ==97  the first char in alphabetic;
					{ 
						int mycost=abs(cost[word[counter]- 97] - cost[z]);
						
						if(mycost < ma)
						{
							ma = mycost;
							index = z; 
						}
					}
					char c = index+97;
					for(int z=0 ; z< counter ;z++)
					{ 
						word[z] =c;
					}
					i+=counter; 
				} 

				else if (i+counter == size)       // the (?)  in the end of string 
				{
					int ma = INT_MAX ;      //! big number store in c++   ====> use it to compare between the other numbers;
					int index;
				    
					for(int z = 0 ;z<word[i-1]-97+1 ; z++)     // we used -97 because in ASSCI CODE ===> a ==97  the first char in alphabetic;
					{ 
						int mycost=abs(cost[word[i-1]- 97] - cost[z]);

						if(mycost < ma)
						{
							ma = mycost;
							index = z; 
						}
					}
					char c = index+97 ;
				    
					
					for(int z=i ; z < size ; z++)
					{ 
						word[z] =c;
					}
					
					break;
				} 

				else           // the (?)  in the middle of string 
				{

					int ma = INT_MAX ;         //! big number store in c++   ====> use it to compare between the other numbers;
					int  index ;
					for(int z = 0 ; z < 26; z++)
					{ 
					
						int mycost = abs(cost[word[i-1] - 97] - cost[z]) +
						             abs(cost[z] - cost[word[i+counter] -97]);
						if(mycost < ma)
						{
							ma = mycost;
							index = z; 
						}
					}

					char c = index+97 ;

					for(int z = i ;z <i+counter ; z++)
					{ 
						word[z] =c;
					}
					i+=counter;
				}
			}
		}
	}
	
	long long finalCost = 0;

	for(int i =0 ;i < size - 1 ; i++)         // size -1  ===> if we use size+1  ===> we exit value of string (max of string)===> string = 11char ...if we use size+1 .... we make it 12 char ;
	{ 
		finalCost += abs(cost[word[i] - 97] - cost[word[i+1] - 97]);
	}

	cout<<finalCost<<endl;
	cout<<word<<endl;
	
	return 0;
}

/*

  *************************   NOTE THAT *************************


ASCII - Binary Character Table
Letter	ASCII Code	Binary	Letter	ASCII Code	Binary
a	097	01100001	A	065	01000001
b	098	01100010	B	066	01000010
c	099	01100011	C	067	01000011
d	100	01100100	D	068	01000100
e	101	01100101	E	069	01000101
f	102	01100110	F	070	01000110
g	103	01100111	G	071	01000111
h	104	01101000	H	072	01001000
i	105	01101001	I	073	01001001
j	106	01101010	J	074	01001010
k	107	01101011	K	075	01001011
l	108	01101100	L	076	01001100
m	109	01101101	M	077	01001101
n	110	01101110	N	078	01001110
o	111	01101111	O	079	01001111
p	112	01110000	P	080	01010000
q	113	01110001	Q	081	01010001
r	114	01110010	R	082	01010010
s	115	01110011	S	083	01010011
t	116	01110100	T	084	01010100
u	117	01110101	U	085	01010101
v	118	01110110	V	086	01010110
w	119	01110111	W	087	01010111
x	120	01111000	X	088	01011000
y	121	01111001	Y	089	01011001
z	122	01111010	Z	090	01011010


*/



