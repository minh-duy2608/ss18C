#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien students[5];
    
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1;
        
        printf("Nhap ten sinh vien %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Nhap tuoi sinh vien %d: ", i + 1);
        scanf("%d", &students[i].age);
        getchar();
        
        printf("Nhap so dien thoai sinh vien %d: ", i + 1);
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        
        printf("\n");
    }

    int idToSearch;
    printf("Nhap id sinh vien can sua thong tin: ");
    scanf("%d", &idToSearch);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToSearch) {
            found = 1;
            printf("Sinh vien tim thay: \n");
            printf("Ten: %s", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s", students[i].phoneNumber);
            
            printf("\nNhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            getchar();
            
            printf("Thong tin sinh vien sau khi sua:\n");
            printf("Ten: %s", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s", students[i].phoneNumber);
            printf("\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien voi ID %d.\n", idToSearch);
    }

    printf("\nThong tin toan bo sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
