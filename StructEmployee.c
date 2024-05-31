#include <stdio.h>

// Define structure for address
struct Address {
    char street[50];
    char city[50];
    char state[50];
    char pincode[10];
};

// Define structure for employee
struct Employee {
    char name[50];
    int age;
    float salary;
    struct Address address;
};

int main() {
    struct Employee employees[10];

    // Input employee details
    printf("Enter details of 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i+1].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Address:\n");
        printf("Street: ");
        scanf("%s", employees[i].address.street);
        printf("City: ");
        scanf("%s", employees[i].address.city);
        printf("State: ");
        scanf("%s", employees[i].address.state);
        printf("Pincode: ");
        scanf("%s", employees[i].address.pincode);
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Address: %s, %s, %s - %s\n", employees[i].address.street, employees[i].address.city, employees[i].address.state, employees[i].address.pincode);
    }

    return 0;
}
