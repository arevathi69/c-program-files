#include<iostream.h>
#include<conio.h>
int main()
  {
    int a[5];
      cout << "Enter elements;
       for(int i=0;i<5;++i)
        cin >> a[i];
      cout << "You entered:";
         for(int i=0;i<5;++i)
       cout << *(a+i);
 return 0 ;
  }
