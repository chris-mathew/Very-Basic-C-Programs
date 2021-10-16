#include <stdio.h>
int daynumber(int d, int m)
{
    if(d >= 1 && d <= 31 && m <= 12 && m >= 1)
    {
    int a, q = 0, b, w;
    if(m == 1 || m == 2) {
        q = 1;
    }
    a = ((m+9)%12) + 1;
    b = (2.6*a - 0.2) - q;
    w = (d + b +5)%7;
    return w;
    }
    else {
        return -1;
    }
}
void dayname(int number)
{
    switch(number)
    {
    case -1:
        printf("ERROR");
        break;
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    }
}
int main(void)
{
    int date, month, day;
    printf("Enter the date: ");
    scanf("%d", &date);
    printf("Enter the month: ");
    scanf("%d", &month);
    day = daynumber(date, month); //A third variable is used to make the program look cleaner, however date/month could be reused instead of day
    dayname(day);
    return 0;
}
