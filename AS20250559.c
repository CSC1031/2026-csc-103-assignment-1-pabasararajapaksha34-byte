#include <stdio.h>
int main () {
   
    int m1, m2,m3;
    int total;
    float average;
    char grade, result;

    printf("Enter marks of m1 subjects: ");
    scanf("%d", &m1);
    
    printf("Enter marks of m2 subjects: ");
    scanf("%d", &m2);
    
    printf("Enter marks of m3 subjects: ");
    scanf("%d", &m3);
    
    total = ( m1 + m2 + m3 );
    average = (m1 + m2 + m3) / 3.0;

    printf("Average marks: %.2f\n", average);
    printf("Total marks: %d\n", total);

    if (average >= 80 && average <= 100){
        grade = 'A';
    }
    else if (average >= 70 && average < 79){
        grade = 'B';
    }
    else if (average >=60 && average <69){
        grade = 'C';
    }
    else if (average >= 50 && average < 59){
        grade = 'D';
    }
    else{
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
        result = 'P';
    }
    else{
        result = 'F';
    }

    printf("Result: %c\n", result);

    return 0;
}
