// https://practice.geeksforgeeks.org/problems/inversion-of-array/0/

import java.util.*;

class GFG
{
    private static int[] inversions(int a[],long count[])
	{
		if(a.length==1)	//base case
			return a;
		
		// dividing
		int mid = a.length/2;
		int left[] = new int[mid];
		for(int i=0;i<mid;i++)
		{
			left[i] = a[i];
		}
		int right[] = new int[a.length-mid];
		for(int i=mid;i<a.length;i++)
		{
			right[i-mid] = a[i];
		}
		left = inversions(left,count);
		right = inversions(right,count);
		//conquer
		int ans[] = new int[a.length];
		int i=0,j=0,cur=0;
		while(i<left.length && j<right.length)
		{
			if(left[i]<=right[j])
			{
				ans[cur] = left[i];
				i+=1;
				cur+=1;
			}
			else
			{
				count[0]+=left.length-i;
				ans[cur] = right[j];
				j+=1;
				cur+=1;
			}
		}
		while(i<left.length)
		{
			ans[cur] = left[i];
			i+=1;
			cur+=1;
		}
		while(j<right.length)
		{
			ans[cur] = right[j];
			j+=1;
			cur+=1;
		}
		return ans;
	}
	public static void main (String[] args)
	{
	    Scanner s = new Scanner(System.in);
	    int test = s.nextInt();
	    while(test-->0)
	    {
	        int n = s.nextInt();
	        int a[] = new int[n];
	        for(int i=0;i<n;i++)
	        {
	            a[i] = s.nextInt();
	        }
    	    long c[] = new long[1];
    	    inversions(a,c);
    	    System.out.println(c[0]);
	    }
	}
}