// https://practice.geeksforgeeks.org/problems/zero-sum-subarrays/0

import java.util.*;

class GFG
{
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
	        int count = 0, sum = 0;
	        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
	        hm.put(0,1);
	        for(int i=0;i<n;i++)
	        {
	            sum+=a[i];
	            if(hm.containsKey(sum))
	            {
	            	count+=hm.get(sum);
	            	hm.put(sum,hm.get(sum)+1);
	            }
	            else
	            {
	                hm.put(sum,1);
	            }
	        }
	        System.out.println(count);
	    }
	    s.close();
	}
}