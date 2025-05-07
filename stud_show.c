#include"header.c"
void stud_show(ST *ptr)
{
	if(ptr==0)
	{
		printf("Records are Empty..\n");
		return;
	}


    	printf("---------------------------------------------\n");
	printf("| Roll No | Name                  | Percent |\n");
    	printf("---------------------------------------------\n");
	while(ptr != 0)
	{
		printf("|  %-6d |  %-20s |  %-6.2f |\n", ptr->rollno,ptr->name,ptr->percent);
		ptr = ptr->next;
	}
    	printf("---------------------------------------------\n");
}

// A Sa 12.63 A Sunil 56.66 A Krihsna 26.666 A Kabil 36.36 A selva 54.5263
