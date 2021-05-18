//function for Addition
float add(float first_add_number, float second_add_number)
{



    float add = first_add_number + second_add_number;
    return add;

}

//function for Subtraction
float sub(float first_sub_number, float second_sub_number)
{



    float sub = first_sub_number - second_sub_number;
    return sub;

}

//Function for Multiplication
float mult(float first_number, float second_number)
{



    float mult = (first_number * second_number *1.0);
    return mult;

}

//Function for Division
float divi(float first_number, float second_number)
{



    float div = ((first_number *1.0) / (second_number *1.0));
    return div;

}

//Function for Square
float sq( float first_number)
{
    float sq = first_number*first_number*1.0;
    return sq;
}


//Function for Cubic
float cb( float first_number)
{
    float cb = first_number*first_number*first_number*1.0;
    return cb;
}


//Function for power
double x_power_y (float base, int power)
{
    int i;
double    x_power_y =0;
    double result=1;

                    if (power >=0) // the purpose of putting = here is that if power is given 0 it will go inside if but not run the loop so it will print 1
                    {
                        for ( i=0; i<power ; i++)
                        {
                             result = result * base *1.0;
                        }

                       x_power_y = result;
                    }


                    else if (power <0)
                    {
                        power =-1*power; //to make the power a positive number
                        for ( i=0; i<power ; i++)
                        {
                            result = result * base *1.0;
                        }
                        result = 1.0/result;

                       x_power_y=result;

                    }
return x_power_y;
}

//Function for mod
int mod (int first_int_number , int second_int_number)
{
    int mod = first_int_number % second_int_number;
    return mod;
}

//function for inverse
double inv(float first_float_number)
{
    double inv = (1.0/first_float_number);
    return inv;
}

//function for 10^x
double pow_x (int power)
{
    double result=1 , pow_x;
int i;
                    if (power >=0) // the purpose of putting = here is that if power is given 0 it will go inside if but not run the loop so it will print 1
                    {
                        for ( i=0; i<power ; i++)
                        {
                             result = result * 10 *1.0;
                        }

                       pow_x = result;
                    }


                    else if (power <0)
                    {
                        power =-1*power; //to make the power a positive number
                        for ( i=0; i<power ; i++)
                        {
                            result = result * 10 *1.0;
                        }
                        result = 1.0/result;

                       pow_x=result;

                    }

return pow_x;
}


//function for change in sign

double sc (float first_float_number)
{
    return first_float_number = -(first_float_number);

}


//function for Factorial
double factorial(int first_int_number)
{
   double f=1;
    for (int i = 1; i <= first_int_number; i++)
    {
        f = f * i;

    }

return f;
}

//Function for x*10^Y
double x_10_pow_y (int power,float first_float_number)
{
    double result=1 , x_10_pow_y;
int i;
                    if (power >=0) // the purpose of putting = here is that if power is given 0 it will go inside if but not run the loop so it will print 1
                    {
                        for ( i=0; i<power ; i++)
                        {
                             result = result * 10 *1.0;
                        }

                       x_10_pow_y = result * first_float_number;
                    }


                    else if (power <0)
                    {
                        power =-1*power; //to make the power a positive number
                        for ( i=0; i<power ; i++)
                        {
                            result = result * 10 *1.0;
                        }
                        result = 1.0/result;
                        result = result * first_float_number;

                       x_10_pow_y=result;

                    }

return x_10_pow_y;
}


//function for percentage
float perc(float first_float_number,float second_float_number)
{
    float div = ((first_float_number *1.0) / (second_float_number *1.0));
    div=div*100;
    return div;
}
