// N. Convert to Base
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

long long num(char c)            // convert from normal number to  char
{ 
	if(c >= '0' && c <= '9')
	{ 
		return c - '0';           // 0 == 0 ====> ( normal number )  &&& '0' == 48    ,,,,   '0' =====> char 
	} 
	else 
	{  
		return c - 'A' + 10;        // look down at ascii code ===> A= 65 && B=66 && C=67    
		// add 10 because in the description of the  problem  he said that A= 10 , B= 11 ,C=12 , D=13 , ......etc

	}
}

char reNum(long long num)               // convert from char to normal number 
{ 
	if(num >= 0 && num <= 9)
	{ 
		return num + '0';               // 0 == 0 ====> ( normal number )  &&& '0' == 48    ,,,,   '0' =====> char
	} 
	else 
	{  
		return num + 'A' - 10;          // look down at ascii code ===> A= 65 && B=66 && c=67 
	}
}

// converting function  to_decimal 
long long to_decimal(char* value , long long base)
{ 
	long long size = strlen(value) ;
	long long power = 1 ; 
	long long result = 0 ;

	for(int i = size - 1 ; i>=0 ; i--)                // we start from the end of string   ===>   so that we say i =size -1 ;
	{ 
		result += num(value[i]) * power;  
		power *= base ;
	}

	return result ;
}

// converting function  from_decimal 
char * from_decimal(char res[] , long long base , long long number)
{
	int index= 0 ; 
	while(number > 0)
	{
		res[index] = reNum(number % base) ;           
		number /= base ;
		index++;         // we use insted of index++;       ====>           res[index++] = reNum(number % base);

	} 
	res[index] = '\0' ; 
	reverse(res,res+index) ;
	return res ;
}

int main() 
{
	
	
	int cases;               cin>>cases;              // 1 or 2 only 

	if(cases == 1)         // we use to_decimal function
	{
		char arr[35] ={""};      	cin>> arr;        //   arr[35] = {""}  =====>    given ======>     look at description in the problem
		long long base;           cin>> base;
		
		cout<<to_decimal(arr , base) ;
	}
	 else                  // we use from_decimal function
	{
		long long number , base;
		cin>> number >> base;
		char res[100];              //    res [100]  =====> (100) ====>    given ======>     look at description in the problem

		cout<<from_decimal(res , base , number) ;
	}

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


