#include<stdio.h>

int linear_search( int A[], int n, int x);

int main ()

{
				int arr[10];
				
				int i,num,res;
				for (i = 0; i<10; i++){
										scanf("%d",&arr[i]);
				}
				
				scanf("%d",&num);
				
				res = linear_search(arr, 10, num);
				
				if(res==-1)
							printf("Number not found\n");
				else 
					printf("%d\n",arr[res]);
					
				return 0;
				
			
}
int linear_search( int A[], int n, int x){
	
											int i;
											
											for (i = 0; i < n; i++){
																	
																	if (A[i] == x){
																					return i;
																	}
											
											}
											i = -1;
											return i;
											
	
}
