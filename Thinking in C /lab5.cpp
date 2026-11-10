/* lab5.c */
#include <stdio.h>
#include <string.h>

#define MAXEMPS 10

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

int main() {
    struct Employee emps[10];
    int n, i;
    
    for (n = 0; n < MAXEMPS; ++n) {
        printf("Enter last: "); fflush(stdout);
        fgets(emps[n].last, sizeof(emps[n].last), stdin);
        emps[n].last[strcspn(emps[n].last, "\n")] = 0;
        if (strlen(emps[n].last) == 0)
            break;
        printf("Enter first: "); fflush(stdout);
        fgets(emps[n].first, sizeof(emps[n].first), stdin);
        emps[n].first[strcspn(emps[n].first, "\n")] = 0;
        printf("Enter title: "); fflush(stdout);
        fgets(emps[n].title, sizeof(emps[n].title), stdin);
        emps[n].title[strcspn(emps[n].title, "\n")] = 0;
        printf("Enter salary: "); fflush(stdout);
        scanf("%d", &emps[n].salary);
        getchar();  /* eat newline */
    }
    
    for (i = 0; i < n; ++i)
        printf("{%s,%s,%s,%d}\n",
               emps[i].last,
               emps[i].first,
               emps[i].title,
               emps[i].salary);
    return 0;
}