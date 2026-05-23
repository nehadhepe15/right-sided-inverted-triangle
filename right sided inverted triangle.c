/*Name - Neha N. Dhepe
  PRN No - 2503033111378UD007
  Branch - VlSI
  Batch - B
  Date - 07/05/2026
*/
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=3;i++)//controls no of rows
	{
		for(j=0;j<i;j++) //space before star in respective row
		{
			printf("   ");
		}
		for(k=3;k>=i;k--)//prints star in respective columns
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
