#include<stdio.h>
int main(){
struct SinhVien{
	char fullName[50];
	int age;
	char phoneNumber[15];
};
	struct SinhVien std1={"Nguyen Minh Duy","18","0965098989"};
	printf("ten sinh vien la : %s \n",std1.fullName);
	printf("tuoi cua sinh vien la : %s \n",std1.age);
	printf("so dien thoai cua sinh vien la: %s \n",std1.phoneNumber);

   return 0;
}

