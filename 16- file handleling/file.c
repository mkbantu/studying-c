#include <stdio.h>

typedef struct {
    int Empid;
    char Lname[20];
    char Fname[20];
    int Age;
    char Sex;
    float Salary;
    float Weight;
}Employee;

int main() {
    FILE *fp;
    Employee Emp;
    int i;
    int n;

    fp = fopen("employee.txt", "w");
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter Employee %d Details:\n", i);

        printf("Empid: ");
        scanf("%d", &Emp.Empid);

        printf("Last Name: ");
        scanf("%s", Emp.Lname);

        printf("First Name: ");
        scanf("%s", Emp.Fname);

        printf("Age: ");
        scanf("%d", &Emp.Age);

        printf("Sex(M/F): ");
        scanf(" %c", &Emp.Sex);

        printf("Salary: ");
        scanf("%f", &Emp.Salary);

        printf("Weight: ");
        scanf("%f", &Emp.Weight);

        fprintf(fp, "%d %s %s %d %c %.2f %.2f\n",
                Emp.Empid, Emp.Lname, Emp.Fname,
                Emp.Age, Emp.Sex, Emp.Salary, Emp.Weight);
    }

    fclose(fp);

    fp = fopen("employee.txt", "r");

    printf("\nEmployee Records:\n");

    while(fscanf(fp, "%d %s %s %d %c %f %f",
                 &Emp.Empid, Emp.Lname, Emp.Fname,
                 &Emp.Age, &Emp.Sex,
                 &Emp.Salary, &Emp.Weight) != EOF) {

        printf("%d %s %s %d %c %.2f %.2f\n",
               Emp.Empid, Emp.Lname, Emp.Fname,
               Emp.Age, Emp.Sex, Emp.Salary, Emp.Weight);
    }

    fclose(fp);

    return 0;
}