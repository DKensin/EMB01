/**
 * Demo.c - the program demo function in my charcterLib
 */

#include <stdio.h>
#include "characterLib.h"

int main() {
    char kyTu;
    int luaChon;

    printf("=== Chuyen doi ky tu ===\n");

    // Nhập ký tự
    printf("\nNhap vao mot ky tu: ");
    scanf(" %c", &kyTu);

    do {
        // Menu
        printf("\n===== MENU =====\n");
        printf("1. Nhap ky tu khac\n");
        printf("2. Kiem tra chu cai\n");
        printf("3. Kiem tra chu so\n");
        printf("4. Kiem tra chu hoa\n");
        printf("5. Kiem tra chu thuong\n");
        printf("6. Chuyen thanh chu hoa\n");
        printf("7. Chuyen thanh chu thuong\n");
        printf("8. Xem ma ASCII\n");
        printf("0. Thoat\n");
        printf("Ban chon: ");
        scanf("%d", &luaChon);

        switch(luaChon) {
            case 1:
                printf("Nhap ky tu moi: ");
                scanf(" %c", &kyTu);
                printf("Da nhap: %c (ma ASCII: %d)\n", kyTu, kyTu);
                break;

            case 2:
                if (my_isalpha(kyTu))
                    printf("=> %c la chu cai\n", kyTu);
                else
                    printf("=> %c khong phai chu cai\n", kyTu);
                break;

            case 3:
                if (my_isdigit(kyTu))
                    printf("=> %c la chu so\n", kyTu);
                else
                    printf("=> %c khong phai chu so\n", kyTu);
                break;

            case 4:
                if (my_isupper(kyTu))
                    printf("=> %c la chu hoa\n", kyTu);
                else
                    printf("=> %c khong phai chu hoa\n", kyTu);
                break;

            case 5:
                if (my_islower(kyTu))
                    printf("=> %c la chu thuong\n", kyTu);
                else
                    printf("=> %c khong phai chu thuong\n", kyTu);
                break;

            case 6:
                printf("=> %c chuyen thanh chu hoa: %c\n",
                       kyTu, my_toupper(kyTu));
                break;

            case 7:
                printf("=> %c chuyen thanh chu thuong: %c\n",
                       kyTu, my_tolower(kyTu));
                break;

            case 8:
                printf("=> Ma ASCII cua '%c' la: %d\n", kyTu, kyTu);
                break;

            case 0:
                printf("Tam biet!\n");
                break;

            default:
                printf("Vui long chon 0-8!\n");
        }

    } while (luaChon != 0);

    return 0;
}