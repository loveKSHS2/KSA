#include "student.h"

void menu() {

    printf("KSA ���ż��� ���� �л� ���� �ý���\n");
    printf("(�˻��� ���Ͻô� �޴� ��ȣ�� �Է����ּ���)\n");
    printf("1.����\n");
    printf("2.����\n");
    printf("3.�������\n");
    printf("4.�̸���\n");
    printf("5.����\n");
    printf("6.��ȭ��ȣ\n");
    printf("7.����\n");


    printf("�޴��� �Է����ּ���.");
    printf("");

    return;

}

void readfile(struct profile* tmp, FILE *fp) {

    int i = 0;
    char name[1024];
    char sex[1024];
    char birthday[1024];
    char major[1024];
    char mentor[1024];
    char phone[1024];
    char mail[1024];

    fp = fopen("C:/Users/seung/source/repos/Project4/Project4/profile.csv", "r");

    if (fp != NULL)
    {
        while ((getc(fp)) != EOF) {
            fseek(fp, -1, SEEK_CUR);
            char buff[1024];
            fgets(buff, 1024, (FILE*)fp);

            sscanf(buff, "%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n]", mentor, name, sex, phone, mail, birthday, major); //�̸�, ����, �������, �̸���,//  ���� ���� ��ȭ��ȣ

            i++;

            if (i == 25) {
                break;
            }

            strcpy((tmp + i)->mentor, mentor);
            strcpy((tmp + i)->name, name);
            strcpy((tmp + i)->sex, sex);
            strcpy((tmp + i)->birthday, birthday);
            strcpy((tmp + i)->major, major);
            strcpy((tmp + i)->mail, mail);
            strcpy((tmp + i)->phone, phone);


        }

    }
    else {
        printf("������ ���� ���մϴ�.");
    }

    return;
}

void search_student(struct profile* tmp) {

    
    char input[1024];
    int flag = 1;
    int menu;
    scanf("%d", &menu);

    switch (menu)
    {   
        //cnt = 0;
        case 1:

            system("cls");
            printf("������ �Է����ּ���.");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->name, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag=0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);

                }

            }
            if (flag==1) { printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        case 2:

            system("cls");
            printf("������ �Է����ּ���.(����/����)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->sex, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag = 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }
            if (flag==1) { printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        case 3:

            system("cls");
            printf("������ϸ� �Է����ּ���.(910906)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->birthday, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag = 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }

            }
            if (flag == 1) { printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        case 4:

            system("cls");
            printf("�̸����� �Է����ּ���.(hongildong20@naver.com)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->birthday, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag = 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }
            if (flag==1 ){ printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        case 5:

            system("cls");
            printf("���並 �Է����ּ���.");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->mentor, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag == 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }

            if (flag == 1) { printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        case 6: 

            system("cls");
            printf("��ȭ��ȣ�� �Է����ּ���. (010-xxxx-xxxx)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->phone, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag =0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }
            if (flag==1) { printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        case 7:

            system("cls");
            printf("������ �Է����ּ���. (�����а�)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->major, input) == 0) {
                    //printf("�˻� �Ϸ�!\n");
                    flag=0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }

            }
            if (flag==1) { printf("�ش絥���Ͱ� �����ϴ�."); };
            break;

        default:
            break;
    }

    return;
}

void print_form() {

    printf("------------------------------------------------------------------------------------\n");
    printf("�̸�%s����%s����%s����%s����%s������%s�ڵ���\n", " ", " ", " ", " ", " ", " ");
    printf("------------------------------------------------------------------------------------\n");


}