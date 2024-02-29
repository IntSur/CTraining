#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "FirstString";
    char string2[] = "SecondString";
    int cpm_res, len_res ;
    char *strchr_prt, *strstr_prt;

    printf("string1 = %s\n", string1);
    printf("string2 = %s\n", string2);

    strcpy(string1, string2);
    printf("after strcpy, string1 = %s, string2 = %s\n", string1, string2);

    strcat(string1, string2);
    printf("after strcat, string1 = %s, string2 = %s\n", string1, string2);

    len_res = strlen(string1);
    printf("len_res = %d\n", len_res);

    cpm_res = strcmp(string1, string2);
    printf("cpm_res = %d\n", cpm_res);

    strchr_prt = strchr(string1, 's');
    printf("strchr_prt = %p\n", strchr_prt);

    strstr_prt = strstr(string1, string2);
    printf("strstr_prt = %p\n", strstr_prt);
    return 0;
}
