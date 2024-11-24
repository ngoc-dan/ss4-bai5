#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap cac so a,b,c ");
	scanf("%d""%d""%d" , &a,&b,&c);
	if(a<c && c<b || b<c&& c< a){
		printf("c nam giua a va b");
	}
	else{
	    printf("c kh nam giua a va b");
    }
	return 0;
}
