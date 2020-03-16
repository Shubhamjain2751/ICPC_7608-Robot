#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	string instruct;
	int m,n,i,no ,dir =1,x=0,y=0;
	cin>>m>>n;
	for(i=0;i<n;i++)
	{
		cin>>instruct>>no;
		
		if(instruct=="MOVE"){
		switch(dir){
				
			case 1:
				x=x+no;
			break;
			case 2:
				y=y+no;
			break;
			case 3:
				x=x-no;
			break;
			case 4:
				y=y-no;
			break;
			}	
		
		}
		
		else//TURN
		{
			switch(no){
			
				case 0://left
					switch(dir){
						case 1:
							dir=2;
						break;
						case 2:
							dir=3;
						break;
						case 3:
							dir=4;
						break;
						case 4:
							dir=1;
						break;
					
					}	
				break;
				case 1://right
					switch(dir){
						case 1:
							dir=4;
						break;
						case 2:
							dir=1;
						break;
						case 3:
							dir=2;
						break;
						case 4:
							dir=3;
						break;
					
					}
				break;
					 
			}
				
		}//else
			if(x<0 || x>m || y<0 || y>m)
            {
                printf("-1");
                return 0;
            }	
	
	
	}
			printf("\nX=%d   Y=%d",x,y);
}