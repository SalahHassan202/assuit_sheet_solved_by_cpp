// O. Five in One
#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
bool palindrome (int number)
{
	int temp = number  , degit=0 , sum =0 ;
	while(number>0)
	{
		degit =number %10 ;
		sum = (sum*10) +degit;
		number/=10 ;
	}
	if(sum == temp)
	{
		return true;   // the number is palindrome
	}
	else
	{
		return false ; 
	}
}

int divisor (int number)
{
	int counter = 0  , n = number/2; 
	for(int j =1 ; j<=n ; j++)
	{
		if(number % j == 0 )
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	int size;      cin>>size;
	int arr[size];
	for(int i =0 ; i<size ; i++)
	{
		cin>>arr[i];
	}

	sort(arr , arr+size);
	
	cout<<"The maximum number : "<<arr[size-1]<<endl;
	cout<<"The minimum number : "<<arr[0]<<endl;
	int flag =0 ;
	int countPrime =0 , countpalindrome =0 ;

	for(int i =0 ; i<size ;i++)
	{
		int m = arr[i] / 2; 
		int flag = 0;
		for(int z = 2;z<= m;z++)
		{
			if(arr[i] % z == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0 && arr[i] != 1)  
		{
			countPrime++;
		}
	}

	cout<<"The number of prime numbers : "<<countPrime<<endl;
	for(int i =0 ; i<size ;i++)
	{
		if(palindrome(arr[i] ))
		{
			countpalindrome++;
		}
	}
	cout<<"The number of palindrome numbers : "<<countpalindrome<<endl;

	int x , max  , index ;
	for(int i =0 ; i <size ; i++)
	{
		x = divisor(arr[i]);
		
		if( i ==0 )
		{
			max =x;
			index = i;
		}
		else
		{
			if(x>=max)
			{
				max =x ; 
				index =i;
			}
		}
	}
cout<<"The number that has the maximum number of divisors : "<<arr[index] <<endl;

	return 0;
	
}