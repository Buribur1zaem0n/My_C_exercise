//give a positive integer n , return the least common multiple of 2 and n.

int smallestEvenMultiple(int n) 
{
    return n % 2 == 0 ? n : 2 * n;
}
