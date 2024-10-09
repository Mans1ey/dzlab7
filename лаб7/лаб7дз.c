#include <stdio.h>
#include <locale.h>

int main() 
{
    int month, year;
    setlocale(LC_ALL, "RUS");
    printf("������� ����� ������ (1-12): ");
    scanf("%d", &month);
    printf("������� ���: ");
    scanf("%d", &year);

    int days;

    switch (month) 
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        days = 28;
        break;
    default:
        printf("������������ ����� ������.\n");
        return 1;
    }

    printf("���������� ���� � ������ %d ���� %d: %d\n", month,year,days);
    return 0;
}