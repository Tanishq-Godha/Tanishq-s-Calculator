
#include <iostream>
#include <string>
using namespace std;

int main() {
int i {};
while ( i ==0) {
 cout << "======================= Welcome to Tanishq's calculator! ====================\n" << endl;
   
   cout << "This calculator can perform the following operations, which one do you want to perform ?\n" ;
   cout << " 1) Addition\n 2) Substraction\n 3) Multiplication\n 4) Division\n";
   cout << " 5) sin()\n 6) cos()\n 7) tan()\n 8) exp()\n====================\n";
   cout << "Enter the number corresponding to the operation: " ;
   
   int operation_num {};
   cin >> operation_num ;
   
   while (operation_num >8 || operation_num <1) 
   { cout << "Oops, please enter a valid integer [1,8]\n" ;
   cout << "Enter the number corresponding to the operation: " ;
   cin >> operation_num ;}
   
  double result {};
   
   if (operation_num-4 <=0 ) 
   {double num1 {} , num2 {} ;
     
    if (operation_num == 1)
    {cout << "\nSo you choose" <<" Addition"  << endl;
    cout << "Enter the first number: " ;
     cin >> num1;
     cout << "Enter the second number: " ;
     cin >> num2;
    result = num1 + num2;
    cout << "\nAddition of " << num1 << " and " << num2 << " yields " << result;}
    
    else if (operation_num == 2)
     {cout << "\nSo you choose" << " Substraction" << endl;
     cout << "Enter the first number: " ;
     cin >> num1;
     cout << "Enter the second number: " ;
     cin >> num2;
    result = num1 - num2;
    cout << "\nSubstraction of " << num1 << " and " << num2 << " yields " << result;}
    
    else if (operation_num == 3)
     {cout << "\nSo you choose" << " Multiplication" << endl;
     cout << "Enter the first number: " ;
     cin >> num1;
     cout << "Enter the second number: " ;
     cin >> num2;
    result = num1 * num2;
    cout << "\nMultiplication of " << num1 << " and " << num2 << " yields " << result;}
    
    else 
     {cout << "\nSo you choose" <<" Division"  << endl;
     cout << "Enter the first number: " ;
     cin >> num1;
     cout << "Enter the second number: " ;
     cin >> num2;
    result = num1 / num2;
    cout << "\nDivision of " << num1 << " and " << num2 << " yields " << result;}
   }


   else if (operation_num-4 >0) {
       int rad_or_degree {} ;
       double user_input{};
       
       if (operation_num==5) 
       { cout << "\nSo you choose" <<" sin()"  << endl;
       cout << "Do you want to enter in radian or degree ";
       cout << "\n1) Radian\n2) Degree\n" ;
       cout << "Enter the corresponding number (1 or 2): ";
       cin >> rad_or_degree;
       
       while (rad_or_degree!=1 && rad_or_degree!=2)
       {cout << "Oops wrong input\n" ;
        cout << "Enter the corresponding number (1 or 2): ";
       cin >> rad_or_degree; }
       
       cout << "Enter the angle: ";
       cin >> user_input;
       if (rad_or_degree==2)
       {user_input*= 3.1415926/180; }
       double x {};
       x = user_input;
       double sin_output {};
       sin_output = x - x*x*x/6 + x*x*x*x*x/120 -x*x*x*x*x*x*x/5040 ;
       cout << "\nValue of sin() is " << sin_output; }
       
       if (operation_num==6) 
       { cout << "\nSo you choose" <<" cos()"  << endl;
       cout << "Do you want to enter in radian or degree ";
       cout << "\n1) Radian\n2) Degree\n" ;
       cout << "Enter the corresponding number (1 or 2): ";
       cin >> rad_or_degree;
       
       while (rad_or_degree!=1 && rad_or_degree!=2)
       {cout << "Oops wrong input\n" ;
        cout << "Enter the corresponding number (1 or 2): ";
       cin >> rad_or_degree; }
       
       cout << "Enter the angle: ";
       cin >> user_input;
       if (rad_or_degree==2)
       {user_input*= 3.1415926/180; }
       double x {};
       x = user_input;
       double cos_output {};
       cos_output = 1 - x*x/2 + x*x*x*x/24 -x*x*x*x*x*x/720 + x*x*x*x*x*x*x*x/40320 ;
       cout << "\nValue of cos() is " << cos_output; }
       
        if (operation_num==7) 
       { cout << "\nSo you choose" <<" tan()"  << endl;
       cout << "Do you want to enter in radian or degree ";
       cout << "\n1) Radian\n2) Degree\n" ;
       cout << "Enter the corresponding number (1 or 2): ";
       cin >> rad_or_degree;
       
       while (rad_or_degree!=1 && rad_or_degree!=2)
       {cout << "Oops wrong input\n" ;
        cout << "Enter the corresponding number (1 or 2): ";
       cin >> rad_or_degree; }
       
       cout << "Enter the angle: ";
       cin >> user_input;
       if (rad_or_degree==2)
       {user_input*= 3.1415926/180; }
       double x {};
       x = user_input;
       double tan_output {};
       tan_output = x + x*x*x/3 + 2*x*x*x*x*x/15 + 17*x*x*x*x*x*x*x/315 ;
       cout << "\nValue of tan() is " << tan_output; }
       
       if (operation_num==8) 
       { cout << "\nSo you choose" <<" exp()"  << endl;
        cout << "Enter the number: ";
         cin >> user_input;
         double exp_output {};
         double x {};
         x = user_input;
         exp_output = 1 + x + x*x/2 + x*x*x/6 + x*x*x*x/24 + x*x*x*x*x/120 ;
          cout << "\nValue of exp() is " << exp_output; }
       
       

   }
   cout << "\n\nThank you for using the calculator\nDo you want to use the calculator again(Type 0 if yes): ";
   cin >> i;
   }
   
   
    }   
   