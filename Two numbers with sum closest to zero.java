// https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1

class Sol
{
    public static int closestToZero (int a[], int n)
    {
        Arrays.sort(a);
        int res=Integer.MAX_VALUE,i=0,j=n-1;
        while(i<j)
        {
            int temp = a[i]+a[j];
            if(Math.abs(temp)<Math.abs(res))
                res=temp;
            if(temp<0)
                i++;
            else
                j--;
        }
        return res;
    }
}
