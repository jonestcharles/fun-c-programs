#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
void copyStr(struct student * destPtr, char string[]);

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

void freeStudents(struct student *start) {
    struct student * temp;
    while (start != NULL) {
        temp = start->next;
        free(start);
        start = temp;
    }
}

void printStudents(struct student *start) {
    struct student * ptr = start;
    while(ptr != NULL) {
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}

struct student *append(struct student * end, struct student * newStudptr) {
    end->next = newStudptr; // update current last item next attribute to be the new end
    end = newStudptr; // new end of linked list is the newly appended point
    return end;
}

void copyStr(struct student * destPtr, char string[]) {
    int i = 0;
    while (string[i] != '\0') {
        destPtr->name[i] = string[i];
        i++;
    }
}

struct student *createStudent(char studentName[], int studentAge) {
    struct student * ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(ptr, studentName);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}
