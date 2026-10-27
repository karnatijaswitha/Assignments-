#include <stdio.h>
void  main()
{
 int userId,password;
 printf("Enter User ID:");
 scanf("%d",&userId);
 printf("Enter Password:");
 scanf("%d",&password);
     if (userId != 101) 
        printf("User not found\n");
     else 
        if (password == 4321) 
            printf("Login successful\n");
         else 
            printf("Incorrect password\n");
}
      