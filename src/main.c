#include <stdio.h>

	void maxNumeros()

{

	int a=0, b=0;
	printf("ingrese primer valor: ");
	scanf("%d", &a);
	printf("ingrese segundo valor: ");
	scanf("%d", &b);

	if (a>b)
	{
		printf("el mayor valor es: %d",a);	
	}	
	else
	{
	printf("el mayor numero es: %d",b);
	}
}

	void DrawLine()
{
	for (int i = 1; i <=10; i=i+1)
	{
		printf("*");
		//printf("%d", i);
	}
	
	
	}



	void DrawL()
{
	//vertical de la L
	for (int i = 1; i <=10; i=i+1)
	{
		printf("*\n");
	}
	// horizontal de la L
	for (int i = 1; i <= 8; i=i+1)
	{
		printf("* ");
}

}

	void DrawCuadradorelleno()

	{
		for (int v = 1; v<=8; v++)
		{
			for (int i=1; i <=8; i++)
		
		printf("* ");
		printf("\n");
		}
		

	
	}

	void Cuadrado()
	{
		for (int v=1; v<=8; v++)
		{
			for (int h=1; h<=8; h++)
		{
			if (v==1 || v==8 || h==1 || h==8) 
			{
				printf("* ");
				
			}
			else
			{
				printf("  ");
				
			}
			
			
		}
		printf("\n");
		}
		

	
	}

	void DrawRectangulo()
{
	int b=10, a=5;
		for (int v=1; v<=a; v++)
		{
			for (int h=1; h<=b; h++)
		{
			if (v==1 || v==a || h==1 || h==b) 
			{
				printf("* ");
				
			}
			else
			{
				printf("  ");
				
			}
			
		}
		printf("\n");
		}
		

	
	}

	void drawTrianguloRectangulo(int l)
{
    for(int i=1; i<=l; i++)
    {
        for(int j=1;j<=l;j++)
        {
            if((j==1 || i == l) || (j == i))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

	void drawLetraP(int t)
{
    t=t*2;
    for(int i=1; i<=t; i++)
    {
        for(int j=1;j<=t;j++)
        {
            if((i==1 || i == (t/2) || j==1 ) || (j == t && i <=(t/2)  ))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
    
	void letraHbytibs (int p)
{
p=p*2;
for (int i = 1; i <= p; i++)
{
	for (int j = 1; j<=p; j++)
	{
		if ( i==p/2 || j==1 || j==p )
		
			printf("*");
		else
			printf(" ");
		}

		printf("\n");
		
	}
}

  void LetraE(int p)
 { 
p=p*2;
for (int i = 1; i <= p; i++)
{
	for (int j = 1; j<=p; j++)
	{
		if ( i==p/2|| i==1 ||i==p|| j==1)
		
			printf("*");
		else
			printf(" ");
		}

		printf("\n");
		
	}
 }
	

	void PabloHidalgo(int t)
	{
 	t=t*4;
    for(int i=1; i<=t; i++)
    {
        for(int j=1;j<=t;j++)
        {
			//letra p
            if((i==1 && j<=(t/4) || i == (t/4)&& j<=(t/4) || j==1 && i<=(t/2) ) || (j == t/4 && i <=(t/4)  ))
             printf("*");
			 else
			 printf(" ");
			 // letra h
			 if (j==(t/2) && i<=(t/2)||j==3*t/4 && i<=(t/2)||i==(t/4)&& j>=(t/2)&& j<(3*t/4))
			 {
				 printf("*");
			 }
			 
		}
		printf("\n");
	}
	}
 main()
{ 
	printf("hola mundo :):");
	printf("\n\n");
	//maxNumeros( );
	//DrawLine( );
	//DrawL();
	//DrawCuadradorelleno();
	//Cuadrado();
	//DrawRectangulo();
	//drawTrianguloRectangulo(8);
	//drawLetraP (5); 
	printf("\n");
	//LetraE(5);
	printf("\n");
	//letraHbytibs(5);
	//printf("\n");

	// lo que quiero conseguir:
	//printf("drawLetraP\tletraHbytibs");
	
	PabloHidalgo(5);
	
	
	}
