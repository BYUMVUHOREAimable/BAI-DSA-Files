//#include <stdio.h>
//
//struct abc{
//	char a;
//	int b;
//	char c;
//};
//int main(){
//	struct abc var;
//	printf("%d",sizeof(var));//12
//	return 0;
//}

//the order of variables affect the output
#include <stdio.h>

struct abc{
	char a;
	char c;
	int b;
};
int main(){
	struct abc var;
	printf("%d",sizeof(var));//12
	return 0;
}

