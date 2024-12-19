#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sv[50];
    
    for (int i = 0; i < 5; i++) {
        sv[i].id = i + 1;
        
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        
        printf("Ten: ");
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        
        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
        
        getchar();
        
        printf("So dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
        
        printf("\n");
    }

    printf("Thong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s", sv[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
