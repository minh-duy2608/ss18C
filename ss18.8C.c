#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien students[50] = {
        {1, "Nguyen Anh Tuan", 20, "0123456789"},
        {2, "Tran Minh Tu", 22, "0987654321"},
        {3, "Le Quang Hieu", 21, "0234567890"},
        {4, "Pham Hoang Anh", 23, "0345678901"},
        {5, "Ngo Thi Lan", 19, "0456789012"}
    };

    int currentSize = 5;
    struct SinhVien newStudent;
    int position;

    printf("Nhap vi tri can chen (0 den %d): ", currentSize);
    scanf("%d", &position);

    if (position < 0 || position > currentSize) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap thong tin sinh vien can them:\n");
    newStudent.id = currentSize + 1;
    getchar();
    
    printf("Ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    
    printf("Tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();
    
    printf("So dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);

    for (int i = currentSize; i > position; i--) {
        students[i] = students[i - 1];
    }

    students[position] = newStudent;
    currentSize++;

    printf("\nDanh sach sinh vien sau khi chen:\n");
    return 0;
}

