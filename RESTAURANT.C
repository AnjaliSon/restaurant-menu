#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,c;
	system("color 4");
	printf("            WELCOME IN MY RESTAURANT\n  ");
	printf(" waiter: sir menu\n");
	printf(" press 1:dhosa\n press 2:chomin\n press 3:momo\n press 4:baby corn\n press 5:manchurian\n                    ohk.\n yes sir: your order\n");
	scanf("%d",&n);
//	printf("ohk.\n yes sir: your order\n");
       	switch(n)
        {
        	case 1:
        		
        
        		{
        		
					int q,dhosa=30;
        		 int total;
        		//char c;
        		printf("How many pieces\n");
        		scanf("%d",&q);
        			printf("dhosa\n");
        		printf("excuse me waiter, my bill.\n");
        	//	printf("sir , your neek name\n");
        	//	scanf("%s",&c);
        		total=q*dhosa;
              	printf("your total bill is:");
        
        		printf("%d",total);
        		
        	}
        	break;
        	case 2:
        		
        				{
					int q,chomin=25;
        		int total,c;
        		printf("How many plat \n");
        		scanf("%d",&q);
        			printf("chomin\n");
        		printf("excuse me waiter, my bill.\n");
        		printf("           sir , your neek name\n");
        		scanf("%s",&c);
        		printf("your bill is:");
        		total=q*chomin;
        		printf("total=%d",total);
        			
        		}
        		break;
        			case 3:
        				
        					{
					int q,momo=30;
        		int total,c;
        		printf("How many plat\n");
        		scanf("%d",&q);
        		printf("excuse me waiter, my bill.\n");
        		printf("           sir , your neek name\n");
        		scanf("%s",&c);
        		printf("your bill is:");
        		total=q*momo;
        		printf("total=%d",total);
        		
        	}
        	break;
				case 4:
				
						{
					int q,babycorn=100;
        		int total,c;
        		printf("How many plat\n");
        		scanf("%d",&q);
        			printf("baby corn\n");
        		printf("excuse me waiter, my bill.\n");
        		printf("           sir , your neek name\n");
        		scanf("%s",&c);
        		printf("your bill is:");
        		total=q*babycorn;
        		printf("total=%d",total);
        		
        		
        	}
        	break;
				case 5:
					
						{
					int q,manchurian=35;
        		int total,c;
        		printf("How many plat\n");
        		scanf("%d",&q);
        			printf("manchurian\n");
        		printf("excuse me waiter, my bill.\n");
        		printf("           sir , your neek name\n");
        		scanf("%s",&c);
        		printf("your bill is:");
        		total=q*manchurian;
        		printf("total=%d",total);
        }
        		break;
        		default :
        			printf("blind");
        			break;
		}
	      
	   return 0;
	   
	   
	   
	   
	   
}
