// https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0

import java.util.*;

public class Solution
{
	public static void main(String args[])
    {
	    Scanner sc = new Scanner(System.in);
	    int test = sc.nextInt();
	    while(test-->0)
	    {
	        int n = sc.nextInt();
	        int a[] = new int[n];
	        for(int i=0;i<n;i++)
	        {
	            a[i] = sc.nextInt();
	        }
	        int s=0,e=n-1;
	        while(s<=e)
	        {
	            int mid = (s+e)/2;
	            boolean l,r;
	            if(mid-1<0)
	            {
	            	l = true;
	            }
	            else if(mid-1>=0 && a[mid]!=a[mid-1])
	            {
	            	l = true;
	            }
	            else
	            {
	            	l = false;
	            }
	            
	            if(mid+1>=n)
	            {
	            	r = true;
	            }
	            else if(mid+1<n && a[mid]!=a[mid+1])
	            {
	            	r = true;
	            }
	            else
	            {
	            	r = false;
	            }
	            
	            if(l&r)
	            {
	            	System.out.println(a[mid]);
	            	break;
	            }
	            
	            if(mid%2==1)
	            {
	            	if(a[mid-1]==a[mid])
	            	{
	            		s = mid+1;
	            	}
	            	else
	            	{
	            		e = mid-1;
	            	}
	            }
	            else
	            {
	            	if(a[mid-1]==a[mid])
	            	{
	            		e = mid-2;
	            	}
	            	else
	            	{
	            		s = mid+1;
	            	}
	            }
	        }
	    }
	    sc.close();
    }
}
