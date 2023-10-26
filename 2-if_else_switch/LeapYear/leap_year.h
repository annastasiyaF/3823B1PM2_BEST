int LeapYear(int year){
    if (year % 4 == 0)
        return 1;
    if (year % 4 != 0)
        return 0;
}