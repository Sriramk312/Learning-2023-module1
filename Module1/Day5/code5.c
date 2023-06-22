#include <stdio.h>
#include <string.h>
struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};
// Function to swap the fields of two structures using pointers
void swapStructures(struct Student *s1, struct Student *s2) 
{
    // Swap the name field
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);
    // Swap the rollNumber field
    int tempRollNumber = s1->rollNumber;
    s1->rollNumber = s2->rollNumber;
    s2->rollNumber = tempRollNumber;
    // Swap the marks field
    float tempMarks = s1->marks;
    s1->marks = s2->marks;
    s2->marks = tempMarks;
}
int main() 
{
    struct Student student1 = { "John", 123, 85.5 };
    struct Student student2 = { "Jane", 456, 92.0 };
    printf("Before swapping:\n");
    printf("Student 1: Name=%s, Roll Number=%d, Marks=%.2f\n", student1.name, student1.rollNumber, student1.marks);
    printf("Student 2: Name=%s, Roll Number=%d, Marks=%.2f\n", student2.name, student2.rollNumber, student2.marks);
    // Swap the fields of the two structures
    swapStructures(&student1, &student2);
    printf("\nAfter swapping:\n");
    printf("Student 1: Name=%s, Roll Number=%d, Marks=%.2f\n", student1.name, student1.rollNumber, student1.marks);
    printf("Student 2: Name=%s, Roll Number=%d, Marks=%.2f\n", student2.name, student2.rollNumber, student2.marks);
    return 0;
}
