#include "student.h"

void menu() {

    printf("KSA 혁신성장 과정 학생 정보 시스템\n");
    printf("(검색을 원하시는 메뉴 번호를 입력해주세요)\n");
    printf("1.성명\n");
    printf("2.성별\n");
    printf("3.생년월일\n");
    printf("4.이메일\n");
    printf("5.멘토\n");
    printf("6.전화번호\n");
    printf("7.전공\n");


    printf("메뉴를 입력해주세요.");
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

            sscanf(buff, "%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n],%[^,\n]", mentor, name, sex, phone, mail, birthday, major); //이름, 성별, 생년월일, 이메일,//  멘토 전공 전화번호

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
        printf("파일을 읽지 못합니다.");
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
            printf("성명을 입력해주세요.");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->name, input) == 0) {
                    //printf("검색 완료!\n");
                    flag=0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);

                }

            }
            if (flag==1) { printf("해당데이터가 없습니다."); };
            break;

        case 2:

            system("cls");
            printf("성별을 입력해주세요.(남자/여자)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->sex, input) == 0) {
                    //printf("검색 완료!\n");
                    flag = 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }
            if (flag==1) { printf("해당데이터가 없습니다."); };
            break;

        case 3:

            system("cls");
            printf("생년월일를 입력해주세요.(910906)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->birthday, input) == 0) {
                    //printf("검색 완료!\n");
                    flag = 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }

            }
            if (flag == 1) { printf("해당데이터가 없습니다."); };
            break;

        case 4:

            system("cls");
            printf("이메일을 입력해주세요.(hongildong20@naver.com)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->birthday, input) == 0) {
                    //printf("검색 완료!\n");
                    flag = 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }
            if (flag==1 ){ printf("해당데이터가 없습니다."); };
            break;

        case 5:

            system("cls");
            printf("멘토를 입력해주세요.");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->mentor, input) == 0) {
                    //printf("검색 완료!\n");
                    flag == 0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }

            if (flag == 1) { printf("해당데이터가 없습니다."); };
            break;

        case 6: 

            system("cls");
            printf("전화번호를 입력해주세요. (010-xxxx-xxxx)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->phone, input) == 0) {
                    //printf("검색 완료!\n");
                    flag =0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }
            }
            if (flag==1) { printf("해당데이터가 없습니다."); };
            break;

        case 7:

            system("cls");
            printf("전공을 입력해주세요. (ㅇㅇ학과)");
            scanf("%s", input);
            print_form();
            for (int i = 0; i < 25; i++) {
                if (strcmp((tmp + i)->major, input) == 0) {
                    //printf("검색 완료!\n");
                    flag=0;
                    printf("%s %s %s %s %s %s %s\n", (tmp + i)->name, (tmp + i)->sex, (tmp + i)->birthday, (tmp + i)->major, (tmp + i)->mail, (tmp + i)->mentor, (tmp + i)->phone);
                }

            }
            if (flag==1) { printf("해당데이터가 없습니다."); };
            break;

        default:
            break;
    }

    return;
}

void print_form() {

    printf("------------------------------------------------------------------------------------\n");
    printf("이름%s성별%s생일%s전공%s메일%s멘토기업%s핸드폰\n", " ", " ", " ", " ", " ", " ");
    printf("------------------------------------------------------------------------------------\n");


}