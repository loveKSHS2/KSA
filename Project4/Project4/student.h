#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <fcntl.h>


//학생 구조체 배열 선언
struct profile
{
    char mentor[1024];
    char name[1024];
    char sex[1024];
    char birthday[1024];
    char major[1024];
    char mail[1024];
    char phone[1024];
};


void menu();
void readfile(struct profile* tmp, FILE* fp);
void search_student(struct profile* tmp);
void print_form();