#include<stdio.h>
#include<stdlib.h>
#include "functions.h"



int main()

{




    int option,int_float_sum,i,power,first_int_number,second_int_number;
    float float_option,base,float_power,value ;
    float first_float_number,second_float_number,float_sum;
    double result;

    int x=1;
    while (x=1) //To repeat the calculator program until the user gives exit (0)
    {


        //Ask for opinion :

        printf("\n Welcome to calculator here you can do: \n 1) Addition \n 2) Subtraction \n 3) Multiplication \n 4) Division \n 5) Square (x^2) \n 6) Cubic (x^3) \n 7) Calculate power (x^y) \n 8) Calculate mod (x%%y) \n 9) Convert to int from decimal \n 10) Find Inverse (1\\x) \n 11) Find 10^x of any number \n 12) Change Sign of a number \n 13) Calculate Factorial \n 14) Calculate EXP (x*10^y) \n 15) Calculate Percentage \n 0) To Exit \n ");
        printf("\nWhich option do you want to use? (1 to 15 'decimal values will be ignored')\n");
        scanf("%f", &float_option);
        option =float_option; //to eliminate the decimal value


        {
            system("cls"); //To clear the screen of options
            if (option==0) break; //the exit code

            else if(option == 1) //Addition



            {
                printf ("Please input first number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&first_float_number);
                printf ("Please input second number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&second_float_number);


                if(first_float_number <=1000000 && first_float_number>=-1000000 )

                {


                    if(second_float_number <=1000000 && second_float_number >= -1000000)
                    {
                        float_sum = add(first_float_number,second_float_number);
                        printf("\nThe sum of two number %0.3f and %0.3f is : %0.3f (3D.P.) \n",first_float_number,second_float_number,float_sum);
                    }
                    else
                    {
                        printf("\nInvalid input, please check the range and try again\n");
                    }
                }
                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }
            }



            else if(option == 2) //Subtraction
            {
                {
                    printf ("Please input first number (-1,000,000 to 1,000,000) : ");
                    scanf("%f",&first_float_number);
                    printf ("Please input second number (-1,000,000 to 1,000,000) : ");
                    scanf("%f",&second_float_number);


                    if(first_float_number <=1000000 && first_float_number >= -1000000 )
                    {


                        if(second_float_number <=1000000 && second_float_number >= -1000000)
                        {
                            float_sum = sub(first_float_number,second_float_number);
                            printf("\nThe subtraction of %0.3f and %0.3f is : %0.3f (3D.P)\n",first_float_number,second_float_number,float_sum);
                        }
                        else
                        {
                            printf("\nInvalid input, please check the range and try again\n");
                        }
                    }
                    else
                    {
                        printf("\nInvalid input, please check the range and try again\n");
                    }
                }

            }


            else if(option == 3) //Multiplication
            {
                {
                    printf ("Please input first number (-40,000 to 40,000) : ");
                    scanf("%f",&first_float_number);
                    printf ("Please input second number (-40,000 to 40,000) : ");
                    scanf("%f",&second_float_number);


                    if(first_float_number <=40000 && first_float_number >= -40000)
                    {


                        if(second_float_number <=40000 && second_float_number >= -40000)
                        {
                            float_sum = mult(first_float_number,second_float_number);
                            printf("\nThe Multiplication of %0.3f and %0.3f : %0.3f (3D.P) \n",first_float_number,second_float_number,float_sum);
                        }
                        else
                        {
                            printf("\nInvalid input, please check the range and try again\n");
                        }
                    }
                    else
                    {
                        printf("\nInvalid input, please check the range and try again\n");
                    }
                }

            }



            else if(option == 4) //Division
            {
                {
                    printf ("Please input first number (-1,000,000 to 1,000,000) : ");
                    scanf("%f",&first_float_number);
                    printf ("Please input second number (-1,000,000 to 1,000,000) : ");
                    scanf("%f",&second_float_number);


                    if(first_float_number <=1000000 && first_float_number >= -1000000 )
                    {


                        if(second_float_number <=1000000 && second_float_number >= -1000000)
                        {
                            float_sum = divi(first_float_number,second_float_number);
                            printf("\nThe Division of %0.3f by %0.3f is : %0.3f (3D.P) \n",first_float_number,second_float_number,float_sum);
                        }
                        else
                        {
                            printf("\nInvalid input, please check the range and try again\n");
                        }
                    }
                    else
                    {
                        printf("\nInvalid input, please check the range and try again\n");
                    }
                }

            }


            else if (option == 5) //Square (x^2)
            {
                printf("Please input the number (-40,000 to 40,000) : ");
                scanf("%f",&first_float_number);
                if(first_float_number <=40000 && first_float_number >= -40000 )
                {
                    float_sum = sq(first_float_number);
                    printf("\nThe square of %0.3f is : %0.3f (3D.P)\n",first_float_number,float_sum);

                }
                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }

            }


            else if(option == 6) //Cubic (x^3)
            {
                printf("Please input the number: (-1,000 to 1,000) : ");
                scanf("%f",&first_float_number);
                if(first_float_number <=1000 && first_float_number >= -1000 )
                {
                    float_sum = cb(first_float_number);
                    printf("\nThe Cubic of %0.3f is : %0.3f (3D.P) \n",first_float_number,float_sum);

                }
                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }

            }


            else if(option==7) //Calculate power (x^y)
            {
                result =1; //this is also helpful when the power value if given 0
                printf("Please input the base value (-1,000,000 to 1,000,000) : ");
                scanf("%f",&base);
                printf("Please input the power value (Integer from -9 to 9) : ");
                scanf("%f",&float_power);

                power = float_power;

                if(base>=-1000000 && base <= 1000000 && power == float_power && power >=-9 && power <=9) //power == float power to check if the user did give an floating power input
                {


                    result = x_power_y(base,power);
                    printf("\nThe value of (%0.3f)^%d is : %0.3lf (3D.P)\n", base,power,result);


                }
                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }
            }



            else if(option==8) //Calculate Mod
            {
                printf ("Please input first integer number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&first_float_number);
                printf ("Please input second integer number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&second_float_number);

                first_int_number = first_float_number;
                second_int_number = second_float_number;

                if ( first_float_number == first_int_number && second_float_number==second_int_number && first_int_number >= -1000000 && first_int_number<=1000000 && second_int_number >= -1000000 && second_int_number <=1000000)
                {
                    result = mod(first_int_number,second_int_number);
                    printf("\nThe mod(remainder) of %d by %d is : %0.0f\n",first_int_number,second_int_number,result);
                }

                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }

            }


            else if(option ==9) //Convert to integer from decimal
            {
                printf ("Please input a decimal number (-1,000,000.000000 to 1,000,000.000000 values after 6th decimal will be rounded up) : ");
                scanf("%f",&first_float_number);

                first_int_number = first_float_number; //There is no need to use any function here as this process for checking if the input is integer or not already solves the problem

                if(first_float_number != first_int_number && first_int_number >= -1000000 && first_int_number<=1000000 )
                {
                    printf("\nThe integer of %f  is : %d\n", first_float_number,first_int_number);

                }

                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }


            }



            else if(option==10)//Inverse (1/x)
            {
                printf ("Please input first integer number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&first_float_number);

                if(first_float_number >= -1000000 && first_float_number<=1000000 )
                {
                    result = inv(first_float_number);
                    printf("\nThe inverse of %0.3f is : %lf (6D.P)\n",first_float_number,result);

                }

                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }

            }



            else if(option==11)//10^x
            {
                printf("Please input the power value of 10 (Integer from -20 to 20) : ");
                scanf("%f", &float_power);
                power = float_power; // To proof that the user input is integer or decimal

                if(power>=-20 && power<=20 && power == float_power )
                {
                    result = pow_x(power);
                    printf("\nThe value of 10^%d is : %0.20lf \n",power,result);
                }

                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }



            }


            else if(option == 12) //change sign

            {
                printf ("Please input the number (-1000000 to 1000000) : ");
                scanf("%f",&first_float_number);

                if(first_float_number >= -1000000 && first_float_number<=1000000 )
                {
                    result = sc (first_float_number);

                    printf("\nThe input value was %0.3lf and the result is : %0.3lf (3D.P)\n", first_float_number,result);

                }

                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }

            }


            else if(option==13) //factorial
            {

                printf("Please input the integer number: (0 to 100) : ");
                scanf("%f",&first_float_number);
                first_int_number = first_float_number;
                if(first_int_number <=100 && first_int_number >=0 && first_int_number == first_float_number )
                {
                    result = factorial(first_int_number);
                    printf("\nThe factorial of number %d is : %0.0lf\n",first_int_number,result);

                }

                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }


            }



            else if(option ==14) //EXP (x*10^y)
            {
                printf ("Please input the base number x (-1000000 to 1000000) : ");
                scanf("%f",&first_float_number);
                printf("Please input the power value of 10 (Integer from -15 to 15) : ");
                scanf("%f", &float_power);
                power = float_power;

                if(power ==float_power && first_float_number >= -1000000 && first_float_number <= 1000000)
                {
                    result = x_10_pow_y (power,first_float_number);

                    printf("\nThe value of %0.3f*10^%d is : %0.10lf \n",first_float_number,power,result);

                }


                else
                {
                    printf("\nInvalid input, please check the range and try again\n");
                }

            }


            else if(option==15)//Percentage
            {

                printf ("Please input first number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&first_float_number);
                printf ("Please input second number (-1,000,000 to 1,000,000) : ");
                scanf("%f",&second_float_number);


                if(first_float_number <=1000000 && first_float_number >= -1000000 )
                {


                    if(second_float_number <=1000000 && second_float_number >= -1000000)
                    {
                        float_sum = perc(first_float_number,second_float_number);
                        printf("\nThe Percentage of %0.3f in %0.3f is : %0.3f (3D.P) \n",first_float_number,second_float_number,float_sum);
                    }
                    else
                    {
                        printf("\nInvalid input, please check the range and try again\n");
                    }
                }


                else if(option==15)//Percentage
                {

                    printf ("Please input first number (-1,000,000 to 1,000,000) : ");
                    scanf("%f",&first_float_number);
                    printf ("Please input second number (-1,000,000 to 1,000,000) : ");
                    scanf("%f",&second_float_number);


                    if(first_float_number <=1000000 && first_float_number >= -1000000 )
                    {


                        if(second_float_number <=1000000 && second_float_number >= -1000000)
                        {
                            float_sum = perc(first_float_number,second_float_number);
                            printf("\nThe Percentage of %0.3f in %0.3f is : %0.3f%% (3D.P) \n",first_float_number,second_float_number,float_sum);
                        }
                        else
                        {
                            printf("\nInvalid input, please check the range and try again\n");
                        }
                    }


                }







                else
                {
                    printf("\nInvalid input please see the list of options available and try again.\n");

                }



            }

        }
    }
}
