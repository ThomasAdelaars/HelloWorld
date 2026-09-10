#include <stdio.h>
#include <time.h>

int main()
{
       time_t t = time(NULL); // Get current time
       struct tm *currentTime = localtime(&t); // Convert to local time

       // Print the current date in the format: DD/MM/YYYY
       printf("Current Date: %02d/%02d/%04d\n", 
           currentTime->tm_mday, 
           currentTime->tm_mon + 1, // Months are 0-11
           currentTime->tm_year + 1900); // tm_year is years since 1900

	printf("Hello, Galaxy & Joan!");
	return 0;
}
