// assignment aptech 11
w
		int bn,sa,st;
		float na;
		printf("Enter bill no. and sales amount");
		scanf("%d%d",&bn,&sa);
		if(sa<=5000)
		    printf("sales tax is 5 and net amount is %f",sa-sa*0.05);
		else
		    printf("sales tax is 10 and net amount is %f",sa-sa*0.1);
		
		return 0;
}
