/* employee2.h */

#ifndef EMPLOYEE2_H
#define EMPLOYEE2_H

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

/* Create a new Employee (caller may pass string literals) */
struct Employee* createEmployee(const char* last, const char* first, const char* title, int salary);

/* Accessors return pointers to internal buffers; treat as read-only */
const char* getLast(struct Employee* p);
const char* getFirst(struct Employee* p);
const char* getTitle(struct Employee* p);
int getSalary(struct Employee* p);

/* Mutators accept const char* for source strings */
void setLast(struct Employee* p, const char* last);
void setFirst(struct Employee* p, const char* first);
void setTitle(struct Employee* p, const char* title);
void setSalary(struct Employee* p, int salary);

/* Print an employee to stdout */
void printEmployee(struct Employee* p);

#endif
