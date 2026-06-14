//give two integer n and start,
//the array nums is defined as : nums[i] = start + 2 * i (0-indexed) and n = nums.length,
//return the result of bitwise XOR of all elements in nums.

int xorOperation(int n, int start) 
{
    int i = 0;
    int sum = 0;
    for (;i<n;i++)
    {
        sum = sum ^ start + 2 * i;
    }
    return sum;
}
