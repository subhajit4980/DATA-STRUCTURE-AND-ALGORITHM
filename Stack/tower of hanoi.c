#include <stdio.h>


void tower(int n, char A, char B, char C) 
{ 
    if (n == 1) 
    { 
    	printf(" No 1 disk move from %c to %c\n",A,C);
        return; 
    } 
    tower(n-1, A, C, B); 
        	printf(" No %d disk move from %c to %c\n",n,A,C);

    tower(n-1, B, A, C); 
}
	
int main() {
	
	int n = 3; 
    
    tower(n, 'A', 'B', 'C'); 
	
	return 0;
}
