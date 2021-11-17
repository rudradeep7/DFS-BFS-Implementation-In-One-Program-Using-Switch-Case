#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	int Visited[7]={0,0,0,0,0,0,0};
	int A[7][7]= {
				{0,1,1,1,0,0,0},
				{1,0,1,0,0,0,0},
				{1,1,0,1,1,0,0},
				{1,0,1,0,1,0,0},
				{0,0,1,1,0,1,1},
				{0,0,0,0,1,0,0},
				{0,0,0,0,1,0,0}
		     };

void DFS(int i){
	int j;

	printf("\n%d ",i); //print our DFS

		Visited[i]=1;
		for(j=0;j<7;j++)
		{
		   if(A[i][j]==1 && !Visited[j])
		   {
		    DFS(j);
		   }
		}

}
void main()
{
	int choice=2,Node;

	clrscr();
		printf("\n\n1.DEPTH First Search(DFS)\n\n");
		printf("2. BREADTH First Search(BFS)\n\n");
		printf("Enter Your choice: ");
		scanf("%d",&choice);

		printf("\nEnter Your First Node: ");
		scanf("%d",&Node);

	switch(choice)
	{
		case 1:
			DFS(Node);
		break;

		//BFS Is Coming Soon ('_')
	}
getch();
}

