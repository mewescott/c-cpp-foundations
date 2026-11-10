/* employee2.cpp - simple Employee helpers */
#include "employee2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void copy_to_buf(char* dest, const char* src, size_t n) {
    if (dest == NULL) return;
    if (src == NULL) src = "";
    size_t len = strlen(src);
    if (len >= n) len = n - 1;
    if (len > 0) memcpy(dest, src, len);
    dest[len] = '\0';
}

struct Employee* createEmployee(const char* last, const char* first, const char* title, int salary) {
    struct Employee* p = (struct Employee*)malloc(sizeof(struct Employee));
    if (p != NULL) {
        copy_to_buf(p->last, last, sizeof(p->last));
        copy_to_buf(p->first, first, sizeof(p->first));
        copy_to_buf(p->title, title, sizeof(p->title));
        p->salary = salary;
    }
    return p;
}

const char* getLast(struct Employee* p) {
    return p ? p->last : NULL;
}

const char* getFirst(struct Employee* p) {
    return p ? p->first : NULL;
}

const char* getTitle(struct Employee* p) {
    return p ? p->title : NULL;
}

int getSalary(struct Employee* p) {
    return p ? p->salary : 0;
}

void setLast(struct Employee* p, const char* last) {
    if (p != NULL) {
        size_t n = sizeof(p->last);
        if (last == NULL) last = "";
        size_t len = strlen(last);
        if (len >= n) len = n - 1;
        if (len > 0) memcpy(p->last, last, len);
        p->last[len] = '\0';
    }
}

void setFirst(struct Employee* p, const char* first) {
    if (p != NULL) {
        size_t n = sizeof(p->first);
        if (first == NULL) first = "";
        size_t len = strlen(first);
        if (len >= n) len = n - 1;
        if (len > 0) memcpy(p->first, first, len);
        p->first[len] = '\0';
    }
}

void setTitle(struct Employee* p, const char* title) {
    if (p != NULL) {
        size_t n = sizeof(p->title);
        if (title == NULL) title = "";
        size_t len = strlen(title);
        if (len >= n) len = n - 1;
        if (len > 0) memcpy(p->title, title, len);
        p->title[len] = '\0';
    }
}

void setSalary(struct Employee* p, int salary) {
    if (p != NULL) p->salary = salary;
}

void printEmployee(struct Employee* p) {
    putchar('{');
    if (p != NULL) {
        printf("%s,%s,%s,%d",
               p->last,
               p->first,
               p->title,
               p->salary);
    }
    putchar('}');
}
