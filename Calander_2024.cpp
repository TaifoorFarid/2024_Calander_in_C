#include<stdio.h>
#include<conio.h>
void january()
{
	printf("\tJANUARY\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 31 ; i++)
    {
	printf("%-4d", i+1);
	if((i+1) % 7 == 0)
	printf("\n");
    }
}

void february()
{
	printf("\tFEBRUARY\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 32 ; i++)
    {
    	if(i <= 2)
    	printf("    ");
    	if(i > 2)
        	printf("%-4d", i-2);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void march()
{
	printf("\tMARCH\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 35 ; i++)
    {
    	if(i <= 3)
    	printf("    ");
    	if(i > 3)
        	printf("%-4d", i-3);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void april()
{
	printf("\tAPRIL\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 30 ; i++)
    {
        	printf("%-4d", i+1);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void may()
{
	printf("\tMAY\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 33 ; i++)
    {
    	if(i <= 1)
    	printf("    ");
    	if(i > 1)
        	printf("%-4d", i-1);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void june()
{
	printf("\tJUNE\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 35 ; i++)
    {
    	if(i <= 4)
    	printf("    ");
    	if(i > 4)
        	printf("%-4d", i-4);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void july()
{
	printf("\tJULY\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 31 ; i++)
    {
        printf("%-4d", i+1);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void august()
{
	printf("\tAUGUST\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 34 ; i++)
    {
    	if(i <= 2)
    	printf("    ");
    	if(i > 2)
        	printf("%-4d", i-2);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void september()
{
	printf("\tSEPTEMBER\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 36 ; i++)
    {
    	if(i <= 5)
    	printf("    ");
    	if(i > 5)
        	printf("%-4d", i-5);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void october()
{
	printf("\tOCTOBER\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 32 ; i++)
    {
    	if(i <= 0)
    	printf("    ");
    	if(i > 0)
        	printf("%-4d", i);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void november()
{
	printf("\tNOVEMBER\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 34 ; i++)
    {
    	if(i <= 3)
    	printf("    ");
    	if(i > 3)
        	printf("%-4d", i-3);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

void december()
{
	printf("\tDECEMBER\n");
    printf("MO  TU  WE  TH  FR  SA  SU\n");
    for(int i = 0 ; i < 37 ; i++)
    {
    	if(i <= 5)
    	printf("    ");
    	if(i > 5)
        	printf("%-4d", i-5);
    	if((i+1) % 7 == 0)
        	printf("\n");
    }
}

int datefind(int month, int date)
{
	int day;
	switch(month)
	{
		case 1:
			day = date % 7;
			break;
		case 2:
			day = (date + 3) % 7;
			break;
		case 3:
			day = (date + 3) % 7;
			break;
		case 4:
			day = date % 7;
			break;
		case 5:
			day = (date + 2) % 7;
			break;
		case 6:
			day = (date + 5) % 7;
			break;
		case 7:
			day = date % 7;
			break;
		case 8:
			day = (date + 3) % 7;
			break;
		case 9:
			day = (date - 1) % 7;
			break;
		case 10:
			day = (date + 1) % 7;
			break;
		case 11:
			day = (date + 4) % 7;
			break;
		case 12:
			day = (date - 1) % 7;
			break; 
		default:
		    printf("Month does not exists.");
	}
	return day;
}

main()
{
    printf("\tCALANDER 2024\n");
	printf("Press Enter to continue\nPress 'e' to Exit.");
	while(getche() != 'e')
	{
		int choice;
	
	printf("\n\n1. Enter 1 to search for month\n");
	printf("2. Enter 2 to search for a specific date in a month\n");
	scanf("%d", &choice);
	
	if(choice == 1)
	{
		int month;
	printf("Enter month number: ");
	scanf("%d", &month);
	switch(month)
	{
		case 1:
			january();
			break;
		case 2:
			february();
			break;
		case 3:
			march();
			break;
		case 4:
			april();
			break;
		case 5:
			may();
			break;
		case 6:
			june();
			break;
		case 7:
			july();
			break;
		case 8:
			august();
			break;
		case 9:
			september();
			break;
		case 10:
			october();
			break;
		case 11:
			november();
			break;
		case 12:
			december();
			break; 
		default:
		    printf("Month does not exists.");
	}//end of switch
	}//end of if
	else if(choice == 2)
	{
		char moName[][4] = {
		"", "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
		};
		int month, date, day;
		printf("Enter month: ");
		scanf("%d", &month);
		printf("\nEnter date: ");
		scanf("%d", &date);
		if(month > 12 || month < 1){
			printf("Month does not exist");
			break;
		}
		if(date > 31 || date < 1){
			printf("Date does not exist");
			break;
		}
		
		day = datefind(month, date);
		switch(day)
		{
			case 0:
				printf("The day on %s %d will be SUNDAY", moName[month], date);
				break;
			case 1:
				printf("The day on %s %d will be MONDAY", moName[month], date);
				break;
			case 2:
				printf("The day on %s %d will be TUESDAY", moName[month], date);
				break;
			case 3:
				printf("The day on %s %d will be WEDNESDAY", moName[month], date);
				break;
			case 4:
				printf("The day on %s %d will be THURSDAY", moName[month], date);
				break;
			case 5:
				printf("The day on %s %d will be FRIDAY", moName[month], date);
				break;
			case 6:
				printf("The day on %s %d will be SATURDAY", moName[month], date);
				break;
			default:
				printf("Not found!");
		}
	}//end of else if
	else
	printf("Worng choice");
	}//end of while
}
