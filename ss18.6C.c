#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien students[50] = {
        {1, "Nguyen Anh Tuan", 16, "0123456789"},
        {2, "Tran Minh Tu", 17, "0987654321"},
        {3, "Le Quang Hieu", 21, "0234567890"},
        {4, "Pham Hoang Anh", 18, "0345678901"},
        {5, "Ngo Thi Lan", 19, "0456789012"}
    };

    int currentSize = 5;

    struct SinhVien newStudent;
    printf("Nhap thong tin sinh vien can them:\n");

    newStudent.id = currentSize + 1;
    printf("Ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    
    printf("Tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();
    
    printf("So dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);

    students[currentSize] = newStudent;
    currentSize++;

    printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

