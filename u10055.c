#include <stdio.h>

int main(){
	double n ,m;
	while(scanf("%lf %lf" ,&n,&m)!=EOF){
		if(m>n)
			printf("%.0lf\n",m-n);
		else
			printf("%.0lf\n",n-m);
	}
	return 0;
}
