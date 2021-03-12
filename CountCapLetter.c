
/*
    Problem statement : Accept tring from user and return the number of capital characters from that string.
    
 Input : "Hello"
 Output : 1

 Input : "Hello World"
 Output : 2
 
 Input : "A"
 Output : 1
 
 Input : "India_ _IS_ _MY country"
 Output : 5

 Input : "abcdefg"
 Output : 0

 */

 #include<stdio.h>
 
 int CountCapLetter(char str[])
 {
	 int i = 0;
	 int iCount = 0;
	 
     while(str[i] != '\0')
	 {
	    if((str[i] >= 'A') && (str[i] <= 'Z'))
		{
          iCount++;
		}
		i++;
	 }	
    return iCount;	 
 }
 
 int main()
 {
   char ch[30];
   int iRet = 0;
   
   printf("Enter The String \n");
   scanf("%[^'\n']s",&ch);            // // Accept the input till user enerets enter key //not necessary to write &ch because array name consider as first index
   
   iRet = CountCapLetter(ch);
   
   printf("Capital letters are: %d\n", iRet);
 
 return 0;
 }
 
 /*
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\CountCapitalLetter>myexe
Enter The String
Hello Everyone
Capital letters are: 2

D:\ProgramTopicWise\LB\4ProblemsOnString\CountCapitalLetter>myexe
Enter The String
Nikita
Capital letters are: 1

D:\ProgramTopicWise\LB\4ProblemsOnString\CountCapitalLetter>myexe
Enter The String
raut
Capital letters are: 0

*/