#include<stdio.h>
struct SinhVien{
	char fullName[20];
	char age[50];
	char phoneNumber[50];
};
int main(){
	struct SinhVien sv;
	printf("moi ban nhap ten: ");
	fgets(sv.fullName,sizeof(sv.fullName),stdin);
	printf("moi ban nhap tuoi: ");
	fgets(sv.age,sizeof(sv.age),stdin);
	printf("moi ban nhap so dien thoai: ");
	fgets(sv.phoneNumber,sizeof(sv.phoneNumber),stdin);
	printf("ten cua sinh vien: %s \n",sv.fullName);
	printf("tuoi cua sinh vien: %s \n",sv.age);
	printf("so dien thoai cua sinh vien: %s \n",sv.phoneNumber);
return 0;
}

