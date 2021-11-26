//wap a which take day number of a weak and display unique greting massege for the day..

main()
{
	int n;
	printf("enter the day number of weak = ");
	scanf("%d",&n);
	printf("\n");
	switch(n)
	{
		case 1:
			printf("Sunday..This is holy day");
			break;
		case 2:
			printf("Monday...This is first day of your success");
			break;
		case 3:
			printf("Tuesday...focus on one things");
			break;
		case 4:
			printf("Wednesday..practice make oure success");
		    break;
		case 5:
			printf("Thursday..per day  learn one things");
			break;
		case 6:
			printf("Friday...Always be positive");
			break;
		case 7:
			printf("Suturday");
			break;
			default:
			printf("Invalid choise");
		    };
		getch();
}
