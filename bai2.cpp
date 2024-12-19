#include<stdio.h>

int main(){
	struct Student{
		char fullName[50];
		int age;
		char phone[11];
	};
	struct Student user1;
	printf("nhap ten sinh vien:");
	fgets(user1.fullName, sizeof(user1.fullName),stdin);
	printf("nhap tuoi sinh vien:");
	scanf("%d",&user1.age);
	fflush(stdin);
	printf("nhap sdt sinh vien:");
	fgets(user1.phone, sizeof(user1.phone),stdin);
	printf("in thong tin sinh vien:\n");
	printf("%s\n",user1.fullName);
	printf("%d\n",user1.age);
	printf("%s\n",user1.phone);

	return 0;
}



