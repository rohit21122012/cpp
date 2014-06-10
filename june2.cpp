/*
Purpose : June Challenge 

Topic : Probability calculation

Explanation :
	Case1: Even + Odd = Odd
	Case2: Even + EVen = Even
	Case3: Odd + Odd = Even     

	To find prob of getting a sum as odd (AliceChoice is odd and BobChoice is even or AliceChoice is even and that of Bob is odd)
		prob = n(evenAliceChoices)*n(oddBobChoices) + n(oddAliceChoices)*n(evenBobChoices)
	writing the probability in least divisible fraction
		using HCF
	Do not use file io for test case rather redirect cin and cout using "test.exe < in.txt > out.txt"
*/
#include <iostream>
	#include <math.h>
using namespace std;

double HCF(double a, double b)
{
	double c;
	while(a!=0)
	{
		c = fmod(a,b);
		b = a;
		a = c;
	}
	return b;
}


int main()
{
	cout.setf(ios::fixed);
	cout.precision(0);
	double testCases, AliceChoices, BobChoices, AliceEven, BobEven,  hcf;	
	double numOfFavourableCases, numOfTotalCases;
	cin>>testCases;

	while(testCases)
	{
		cin>>AliceChoices>>BobChoices;
		AliceEven = (int)AliceChoices/2;
		cout<<"------------------AliceEven"<<AliceEven<<endl;
		BobEven = (int)BobChoices/2;
		numOfFavourableCases = AliceEven*(BobChoices-BobEven) + (AliceChoices-AliceEven)*BobEven;
		numOfTotalCases = AliceChoices*BobChoices;
		hcf = HCF(numOfFavourableCases, numOfTotalCases);
		/*cout<<"------------------------numOfTotalCases"<<numOfTotalCases<<endl;
		cout<<"------------------------numOfFavourableCases"<<numOfFavourableCases<<endl;
		cout<<"------------------------hcf"<<hcf<<endl<<endl;*/
		cout<<(int)(numOfFavourableCases/hcf)<<"/"<<(int)(numOfTotalCases/hcf)<<endl;
		
		testCases--;
	}
	return(0);
}

