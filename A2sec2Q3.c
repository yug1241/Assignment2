/* (A2.sec2.Q3): Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables
DeptNo  DeptName         DsgnCode        Designation
10      Marketing       'M'              Manager   
20      Management      'S'              Supervisor
30      Sales           's'              Security Officer
40      Designing       'C'              Clerk
Example:
If input given is
Employee Id: 101
Dept No: 30
Designation Code: M
Then output should be:Employee with employee id 101 is working in "Sales" department as "Manager". */



#include<stdio.h>

int main()
{
	int emp_id,dept_no;
	char des_no;
	printf("Enter the Employee ID  : ");
	scanf("%d",&emp_id);
	printf("Enter Department No   : " );
	scanf("%d",&dept_no);
	printf("Enter Designation Code    : ");
	getchar();
	des_no = getchar();

	switch(dept_no)
	{
		case 10 :printf("Employee With Employee ID : %d Is Working In a Marketing Department ",emp_id);
			     break;

		case 20 :printf("Employee With Employee ID : %d Is Working In a Management Department ",emp_id);
			     break;

		case 30 :printf("Employee With Employee ID : %d Is Working In a Sales Department ",emp_id);
			     break;

		case 40 :printf("Employee With Employee ID : %d Is Working In a Designing Department ",emp_id);
			     break;
	}
	switch(des_no)
	{
		case 'M' :printf("as Manager \n");
				  break;

		case 'S' :printf("as Supervisor \n");
				  break;

		case 's' :printf("as Security Officer \n");
				  break;

		case 'C' :printf("as Clerk \n");
				  break;
	}
	return 0;
	}
