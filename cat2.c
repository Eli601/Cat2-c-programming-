#include<stdio.h>
#include<string.h>

  struct employee {
  char name[25];
  char email[50];
  char department[20];
  int id;
  float salary;
  } employee;
  
  int main()
  {
     strcpy(employee.email,"John.doe@company.com");
     strcpy(employee.department,"human resources");
     strcpy(employee.name,"John doe");
     employee.salary=55000.50;
     employee.id=12345;
     
     printf("name:%s\n", employee.name);
     printf("email:%s\n", employee.email);
     printf ("department:%s\n", employee.department);
     printf("id:%d\n", employee.id);
     printf ("salary:%f\n", employee.salary);
     
     return 0;
     }