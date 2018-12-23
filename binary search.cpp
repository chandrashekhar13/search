#include<iostream>

using namespace std;

#define SZ 10

int binary_search (int A[], int n, int x);

int main ()
{
	int arr[SZ];
	int i,res,num;
	
	for(i = 0; i<SZ; i++){
							
							cin>>arr[i];
	}
	
	cin >> num;
	
	res = binary_search(arr, SZ, num);
	
	
	if (res == -1)
				cout<<"NUmber is not in the list/array"<<endl;
	
	else
		cout<<arr[res]<<endl;
		
	return 0;
	
	
	
}

int binary_search (int A [], int n, int x){
	
											int left, right, mid;
											left = 0;
											right = n - 1;
											
											while (left <= right){
														
														mid = (left+right)/2;
														
													     	if (A[mid]== x )
																		return mid;
														
														    if (A[mid] < x)
														 				left= mid+1;
													    	if (A[mid]> x)
														 				right = mid-1; 
														
														 }
														 
														 return -1;
											}

