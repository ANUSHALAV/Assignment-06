//wap a menu driven program with following option
        //a-addtion  b-subtration c-multiplication d-division
        
main()
{
	int o,f,s;
	printf("\nchoose one option.....\n 1-Addtion \n 2-Subtration \n 3-Multiplication \n 4-Division");
	printf("\n---------------------------------------------------------------------------");
	printf("\n\n enter your choise = ");
	scanf("%d",&o);
	switch(o)
	{
		case 1:
			printf("\n\n\t\t\tAddtion :\n\n");
			printf("enter the first number = ");
			scanf("%d",&f);
			printf("ente the second number = ");
			scanf("%d",&s);
			printf("sum = %d",f+=s);
			break;
		case 2:
			printf("\n\n\t\t\tSubtration :\n\n");
			printf("enter the first number = ");
			scanf("%d",&f);
			printf("ente the second number = ");
			scanf("%d",&s);
			printf("sub = %d",f-=s);
			break;
		case 3:
			printf("\n\n\t\t\tMultiplication :\n\n");
			printf("enter the first number = ");
			scanf("%d",&f);
			printf("ente the second number = ");
			scanf("%d",&s);
			printf("multiplication = %d",f*=s);
			break;
		case 4:
			printf("\n\n\t\t\tDivision :\n\n");
			printf("enter the first number = ");
			scanf("%d",&f);
			printf("ente the second number = ");
			scanf("%d",&s);
			printf("sum = %d",f/=s);
			break;
		default:
			printf("Invalid choice");
	};	
getch();
}
