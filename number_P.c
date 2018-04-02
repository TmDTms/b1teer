#include <stdio.h>

int main()
{
	int n;
	int i, j;
	int pramid[500][500];
	
	scanf("%d",&n);
	for(i = 0; i < n; i++) {
		for(j = 0; j < i+1; j++)
			scanf("%d",&pramid[i][j]);
	}
	
	for(i = n-2; i >= 0; i--) {
		for(j = 0; j < i+1; j++) {
			if(pramid[i+1][j] > pramid[i+1][j+1])
				pramid[i][j] += pramid[i+1][j];
			else
				pramid[i][j] += pramid[i+1][j+1];
		}
	}
	printf("%d\n",pramid[0][0]);
}
