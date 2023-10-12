/**
 * convert_day - converts a day of the month to the day of the year
 * @month: month in number format
 * @day: day of the month
 * Return: day of the year
 */
int convert_day(int month, int day)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 1; i < month; i++)
    {
        day += days_in_month[i];
    }

    return day;
}
