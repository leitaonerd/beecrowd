#include <stdio.h>
#include <stdlib.h>

 
int main() {
int run, dist, x1, y1, x2, y2;

 	run = 1;
	 
 	while(run==1){
      	scanf("%d %d %d %d\n", &x1, &y1, &x2, &y2);
      	if((x1!=0)&&(x2!=0)&&(y1!=0)&&(y2!=0)){
           	if((x1==x2)&&(y1==y2)){
                	dist = 0;
                	printf("%d\n", dist);
           	}
           	else if((abs(x2-x1)==abs(y2-y1))||((x1==x2)||(y1==y2))){
                	dist = 1;
                	printf("%d\n", dist);
           	}
           	else{
                	dist = 2;
                	printf("%d\n", dist);
           	}    
      	}
      	else{
           	run = 0;
      	}
 	}
     	 
	return 0;
}
