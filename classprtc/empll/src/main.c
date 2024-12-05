#include <coomon.h>
#include <main.h>

int main()
{
	NODE *nn=NULL;
	NODE *head=NULL,*temp=NULL;
	int flag=0;
	int key=0;

	FILE *fp;
	char line[BUFF];

	fp = fopen("Employee.txt","a+");


	while(1)
	{
		switch(dispMainMenu())
		{
			case 1:
					while(fgets(line,BUFF,fp)!=NULL)
					{
						nn = createNode(nn);
						head = addNodeBeg(head,nn);
						nn->next = head;
						getDetails(nn,line);
						break;
					}
			case 2:
					while(fgets(line,BUFF,fp)!=NULL)
					{
						line[strlen(line)-1] = '\0';
						nn = createNode(nn);

						getDetails(nn,line);
						nn->next = NULL;
						head = appendNode(head, nn);
					}
					break;
			case 3:
					while(fgets(line,BUFF,fp)!=NULL)
					{
					printf("\nEnter the key of the node: ");
					scanf("%d",&key);
					delNode(head,key);
					break;
					} 

			case 4:
					printList(head);
					break;
			case 5:
					flag = 1;
					//write and exit					iget the file size
					fclose(fp);
					fopen(w+)

					fseek(fp,0L,seek_set);
					fwrite()
					flcose()
					break;
			case 6: 
				//write  to the file

			default:
					printf("\nEnter the correct Choice");
					break;
		}
		if(flag == 1)
			break;
	}
	
}
