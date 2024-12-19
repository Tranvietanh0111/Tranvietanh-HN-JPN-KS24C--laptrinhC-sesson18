#include<stdio.h>

int main(){
	struct Student{
		char fullName[50];
		int age;
		char phone[11];
	};
	struct Student user1={"tran viet anh",18,"0975933423"};
	printf("in thong tin sinh vien:\n");
	printf("%s\n",user1.fullName);
	printf("%d\n",user1.age);
	printf("%s\n",user1.phone);

	return 0;
}



