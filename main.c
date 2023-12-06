#include <stdio.h>
#include <string.h>

struct Student {
int age;
int kurss;
char name[100];
char surname[100];
float avgrade;
int id;
};

int main() {
int numStudents;
printf("Enter the number of students: ");
scanf("%d", &numStudents);

struct Student students[numStudents];

for (int i = 0; i < numStudents; i++) {
printf("Enter data for student %d:\n", i + 1);
printf("Enter age: \n");
scanf("%d", &students[i].age);
printf("Enter kurss:\n");
scanf("%d", &students[i].kurss);
printf("Enter name: \n");
scanf("%s", students[i].name);
printf("Enter surname:\n");
scanf("%s", students[i].surname);
printf("Enter average grade\n");
scanf("%f", &students[i].avgrade);
printf("Enter unique ID:\n");
scanf("%d", &students[i].id);
}
FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
    printf("Error opening file for writing.\n");
    return 1;
    }


    fwrite(students, sizeof(struct Student), numStudents, file);

    fclose(file);

printf("3. Surname\n");
printf("4. Average grade\n");
printf("5. ID\n");
scanf("%d", &var);

if (var == 1) {
int age;
printf("Enter age to search: ");
scanf("%d", &age);

for (int i = 0; i < numStudents; i++) {
if (students[i].age == age) {
printf("Student %d:\n", i + 1);
printf("Age %d\n", students[i].age);
printf("Name: %s\n", students[i].name);
printf("Kurss: %d\n", students[i].kurss);
printf("Average grade: %f\n", students[i].avgrade);
printf("Student ID: %d\n", students[i].id);
}
}
} else if (var == 2) {
char name[100];
printf("Enter name to search: ");
scanf("%s", name);

for (int i = 0; i < numStudents; i++) {
if (strcmp(students[i].name, name) == 0) {
printf("Student %d:\n", i + 1);
printf("Age %d\n", students[i].age);
printf("Name: %s\n", students[i].name);
printf("Kurss: %d\n", students[i].kurss);
printf("Average grade: %f\n", students[i].avgrade);
printf("Student ID: %d\n", students[i].id);
}
}
} else if (var == 3) {
char surname[100];
printf("Enter surname to search:");
scanf("%s", surname);

for (int i = 0; i < numStudents; i++) {
if (strcmp(students[i].surname, surname) == 0) {
printf("Student %d:\n", i + 1);
printf("Age %d\n", students[i].age);
printf("Name: %s\n", students[i].name);
printf("Kurss: %d\n", students[i].kurss);
printf("Average grade: %f\n", students[i].avgrade);
printf("Student ID: %d\n", students[i].id);
}
}
} else if (var == 4) {
float grade;
printf("Enter average grade to search: ");
scanf("%f", &grade);

for (int i = 0; i < numStudents; i++) {
if (students[i].avgrade == grade) {
printf("Student %d:\n", i + 1);
printf("Age %d\n", students[i].age);
printf("Name: %s\n", students[i].name);
printf("Kurss: %d\n", students[i].kurss);
printf("Average grade: %f\n", students[i].avgrade);
printf("Student ID: %d\n", students[i].id);
}
}
} else if (var == 5) {
int studentid;
printf("Enter unique ID to search: ");
scanf("%d", &studentid);

for (int i = 0; i < numStudents; i++) {
if (students[i].id == studentid) {
printf("Student %d:\n", i + 1);
printf("Age %d\n", students[i].age);
printf("Name: %s\n", students[i].name);
printf("Kurss: %d\n", students[i].kurss);
printf("Average grade: %f\n", students[i].avgrade);
printf("Student ID: %d\n", students[i].id);
}
}
} else {
printf("Invalid option.\n");
}


return 0;
}