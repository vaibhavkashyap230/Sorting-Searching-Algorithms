// https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array/0

import java.util.*;

class GFG
{
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
	    int test = sc.nextInt();
	    while(test-->0)
	    {
	        int n = sc.nextInt();
	        int a[] = new int[n];
	        String s[] = new String[n];
	    	for(int i=0;i<n;i++)
	    	{
	    		s[i] = sc.next();
	    	}
	    	Arrays.sort(s,new Comparator<String>()
	    	{
	    		public int compare(String a,String b)
	    		{
	    			String opt1 = a+b,opt2 = b+a;
	    			return opt2.compareTo(opt1);
	    		}
	    	});
	    	String res="";
	    	for(String i : s)
	    	{
	    		res+=i;
	    	}
	    	System.out.println(res);
	    }
	    sc.close();
	}
}
