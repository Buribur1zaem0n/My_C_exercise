//give a non-negative floating point number "celsius" rounded to two decimal places, representing temperature in celsius, convert it to Kelvin and Fahrenheit. return an array "ans = [kelvin, fahrenheit]"
//Kelvin = celsius + 273.15
//Fahrenheit = celsius * 1.80 + 32.00

double* convertTemperature(double celsius, int* returnSize)
{
    double * ans = (double*)malloc(2*sizeof(double));
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return ans;
}
