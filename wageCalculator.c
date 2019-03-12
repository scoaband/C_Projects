#include <stdio.h>

int main(void) {

    int hourlyWage;
    int weeklyHours;
    int weeklySalary;
    int overtimeHours;
    int hoursWorked;
    int temp;
    int net;
    int gross;
    const int WEEKLY_LIMIT = 40;

    printf("\n");
    printf(" Enter hourly wage: ");
    scanf("%d", &hourlyWage);

    printf(" Enter hours Worked: ");
    scanf("%d", &hoursWorked);


   // FIXME: Get user input value for weeklyHours
    weeklyHours = hoursWorked;


    if (weeklyHours <= WEEKLY_LIMIT) {
      weeklySalary = weeklyHours * hourlyWage;
    }
    else {
      overtimeHours = weeklyHours - WEEKLY_LIMIT;
      weeklySalary = (int)((hourlyWage * WEEKLY_LIMIT) +
                           (hourlyWage * overtimeHours * 1.5));
    }

    printf("\n");
    printf(" Weekly salary is: %d\n", weeklySalary);

    temp = weeklySalary - (weeklySalary * 0.06);

    printf(" Weekly salary after tax is: %d\n", temp);

    net = temp * 4 * 12;
    printf(" Annual Net Income: %d\n", net);

    gross = weeklySalary * 4 * 12;
    printf(" Annual Gross Income: %d\n", gross);

   return 0;
}
