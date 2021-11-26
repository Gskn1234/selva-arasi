#include<iostream>
int main()
{
      //Variable declarations
      int a,b;
      
      //Intput values
      Printf("enter the value of a":);
      Scanf("%d"&a);
      Printf("enter the value of b":);
      Scanf("%d"&b);
 
      //Numbers before swapping
      Printf("before swapping...a:%d,b:%d/n",a,b);

     //Swapping numbers
      a=a+b;         //step1
      b=a-b;         //step2
      a=a-b;         //step3
 
    //Numbers after swapping
    Printf("after swapping...a:%d,b:%d\n',a,b")
  
    return 0;
 }
