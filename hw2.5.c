#include <stdio.h>
#include<math.h>
int main()
 {
	float x ; float y;
	printf ("请输入一个小于1000的正数:\n");
	scanf ("%f", &x ) ;
	while( x >=1000||x<=0 )  
	{
		printf ("请重新输入！\n");
		scanf ("%f", &x ) ;
	}
	printf ("该数的平方根是:");
    y=sqrt(x);
	printf("%.0f\n", y);
	return 0;
}
