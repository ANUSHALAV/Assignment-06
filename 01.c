//wap to take month number as a input and display number of days...


main()
{
	int m;
	printf("enter the month number = ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
			printf("31 days on january");
			break;
		case 2:
			printf("28 and 29 days on febuary");
			break;
		case 3:
			printf("31 days on march");
			break;
		case 4:
			printf("30 days on april");
		    break;
		case 5:
			printf("31 days on may");
			break;
		case 6:
			printf("30 days on jun");
		    break;
		case 7:
			printf("31 days on july");
			break;
		case 8:
			printf("31 days on aguest");
		    break;
		case 9:
			printf("30 days on september");
			break;
		case 10:
			printf("31 days on october");
		    break;
		case 11:
			printf("30 days on november");
			break;
		case 12:
			printf("31 days on december");
		    break;
		default :
		    printf("Envalid month");
	};
getch();
}
