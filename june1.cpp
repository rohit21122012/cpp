//CODECHEF June Challenge

//Longest subArray with non zero product

//Explanation :  Array not to be used since it is better to work on the online data rather than waiting for the entire data set (blocking the final calculation)
#include <iostream>
using namespace std;

int main()
{
	int sizeOfArray, current, globalLargest = 0, localLargest = 0;
	cin>>sizeOfArray;
	//int fullArray = new Array[sizeOfArray];     
	while(sizeOfArray)
	{
		cin>>current;
		//function to update the globalLargest
		if(current != 0)
		{
			localLargest += 1;
			if(localLargest>globalLargest)
			{
				globalLargest = localLargest;
			}
		}
		else 
		{
			localLargest = 0;
		}

		sizeOfArray--;
	}
	cout<<globalLargest;
	return(0);
}
