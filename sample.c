#include<stdio.h>
#include<math.h>
int main(void)
    {
        int choice, i, a, b,n;
        float x, y, result;

        do
            {
                printf("\nSelect your operation (0 to exit):\n");
                printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
                printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
                printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
                printf("12. 10 ^ X\n13. X!\n14.X %% Y %\n15. log10(x)\n16. Modulus\n");
                printf("17. Sin(X) in degree\n18. Cos(X)in degree\n19. Tan(X)\nin degree20. Cosec(X)in degree\n");
                printf("21. Cot(X)\n22. Sec(X)\n 23.find sin inverse value of x in degree \n 24. find the cos inverse value of x in degree");
                printf("25. find the tan inverse value of x in degree\n26. find the cosec inverse value of x in degree\n");
                printf("27. find the cot inverse value of x in degree\n28. finds the sec inverse value of x in degree\n");
                printf("29. finds the tan inverse value of y/x in degree\n");
                printf("31. finds the sinh value of x \n32. finds the cosh value of x\n");
                printf("33. finds the tanh value of x \n34. finds the cosech value of x \n");
                printf("35. finds the coth value of x \n36. finds the sech value of x \n");
                printf("39. finds the sin inverse value of x in radian\n40. finds the cos inverse value of x in radian\n");
                printf("41. finds the tan inverse value of x in radian\n42. finds the cosec inverse value of x in radian\n");
                printf("43. finds the cot inverse value of x in radian\n44. finds the sec inverse value of x in radian\n");
                printf("45. finds the value of x in radian from degree\n46. finds the sec value of x in degree from radian\n");
                printf("47. finds the exponential value of x\n48. finds the ln of x\n");
                printf("49. finds the log of x to the base\n");
                printf("Choice: ");
                scanf("%d", &choice);
                if(choice == 0)exit(0);
                switch(choice)
                    {
                        case 1://sum of x and y
                                printf("Enter X for sum: ");
                                scanf("%f", &x);
                                printf("\nEnter Y  for sum:");
                                scanf("%f", &y);
                                result = x + y;
                                printf("\nResult: %f", result);
                                break;
                        case 2:// subtract y from x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                printf("\nEnter Y: ");
                                scanf("%f", &y);
                                result = x - y;
                                printf("\nResult: %f", result);
                                break;
                        case 3://product of x and y
                                printf("Enter X: ");
                                scanf("%f", &x);
                                printf("\nEnter Y: ");
                                scanf("%f", &y);
                                result = x * y;
                                printf("\nResult: %f", result);
                                break;
                        case 4:// divide x by y
                                printf("Enter X: ");
                                scanf("%f", &x);
                                printf("\nEnter Y: ");
                                scanf("%f", &y);
                                result = x / y;
                                printf("\nResult: %f", result);
                                break;
                        case 5://find the sqroot
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = sqrt(x);
                                printf("\nResult: %f", result);
                                break;
                        case 6://find x to the power of y
                                printf("Enter X: ");
                                scanf("%f", &x);
                                printf("\nEnter Y: ");
                                scanf("%f", &y);
                                result = pow(x, y);
                                printf("\nResult: %f", result);
                                break;
                        case 7://finds square of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = pow(x, 2);
                                printf("\nResult: %f", result);
                                break;
                        case 8://finds cube of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = pow(x, 3);
                                printf("\nResult: %f", result);
                                break;
                        case 9://1/x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = pow(x, -1);
                                printf("\nResult: %f", result);
                                break;
                        case 10://yth root of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                printf("\nEnter Y: ");
                                scanf("%f", &y);
                                result = pow(x, (1/y));
                                printf("\nResult: %f", result);
                                break;
                        case 11://cube root
                                printf("Enter X: ");
                                scanf("%f", &x);
                                y = 3;
                                result = pow(x, (1/y));
                                printf("\nResult: %f", result);
                                break;
                        case 12://10 to the power x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = pow(10, x);
                                printf("\nResult: %f", result);
                                break;
                        case 13://factorial of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1;
                                for(i = 1; i <= x; i++)
                                    {
                                        result = result * i;
                                    }
                                printf("\nResult: %.f", result);
                                break;
                        case 14://finds the y percentage of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                printf("\nEnter Y: ");
                                scanf("%f", &y);
                                result = (x * y) / 100;
                                printf("\nResult: %.2f", result);
                                break;
                        case 15://finds log base 10 of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = log10(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 16://finds the reminder of a/b
                                printf("Enter X: ");
                                scanf("%d", &a);
                                printf("\nEnter Y: ");
                                scanf("%d", &b);
                                result = a % b;
                                printf("\nResult: %d", result);
                                break;
                        case 17://finds the sin value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = sin(x * 3.14159 / 180);
                                printf("\nResult: %.2f", result);
                                break;
                        case 18:// finds the cos value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = cos(x * 3.14159 / 180);
                                printf("\nResult: %.2f", result);
                                break;
                        case 19://finds the tan value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = tan(x * 3.14159 / 180);
                                printf("\nResult: %.2f", result);
                                break;
                        case 20://finds the cosec value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 / (sin(x * 3.14159 / 180));
                                printf("\nResult: %.2f", result);
                                break;
                        case 21://finds the cot value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 / tan(x * 3.14159 / 180);
                                printf("\nResult: %.2f", result);
                                break;
                        case 22://finds the sec value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 / cos(x * 3.14159 / 180);
                                printf("\nResult: %.2f", result);
                                break;
                        case 23://finds the sin  inverse value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = asin(x * 180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;
                        case 24:// finds the cos inverse  value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = acos(x *180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;
                        case 25://finds the tan inverse value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = atan(x * 180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;
                        case 26://finds the cosec inverse value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = asin((1/x) * 180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;
                        case 27://finds the cot inverse value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = atan((1/x)* 180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;
                        case 28://finds the sec inverse value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = acos((1/x) * 180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;
                        case 29://finds the tan inverse value of y/x in degree
                                printf("Enter X: ");
                                scanf("%f%f", &x,&y);
                                result = atan((y/x) * 180/3.14159 );
                                printf("\nResult: %.2f", result);
                                break;

                        case 31://finds the sin value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = sinh(x );
                                printf("\nResult: %.2f", result);
                                break;
                        case 32:// finds the cos value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = cosh(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 33://finds the tan value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = tanh(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 34://finds the cosec value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 /sinh(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 35://finds the cot value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result =tanh(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 36://finds the sec value of x in degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 / cosh(x);
                                printf("\nResult: %.2f", result);
                                break;

                    case 39://finds the sin value of x in radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = sin(x );
                                printf("\nResult: %.2f", result);
                                break;
                    case 40:// finds the cos value of x in radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = cos(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 41://finds the tan value of x in radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = tan(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 42://finds the cosec value of x in radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 /sin(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 43://finds the cot value of x in radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result =tan(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 44://finds the sec value of x in radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = 1 / cos(x);
                                printf("\nResult: %.2f", result);
                                break;
                        case 45://finds the value of x in radian from degree
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = x*3.14/180;
                                printf("\nResult: %.2f", result);
                                break;
                        case 46://finds the  value of x in degree from radian
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = x*180/3.14;
                                printf("\nResult: %.2f", result);
                                break;
                        case 47://finds the exponential value of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = exp(x);
                                printf("\nResult: %.2f", result);
                                break;
                         case 48://finds the ln value of x
                                printf("Enter X: ");
                                scanf("%f", &x);
                                result = log(x);
                                printf("\nResult: %.2f", result);
                                break;
                         case 49://finds the log value x to the  base y
                                printf("Enter X,Y: ");
                                scanf("%f%f", &x,&y);
                                result = log(x)/log(y);
                                printf("\nResult: %.2f", result);
                                break;




                        default:
                                printf("\nInvalid Choice!");
                        }
            }
                while(choice);
                return 0;
   }

