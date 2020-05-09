// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0

import java.util.*;

class GFG
{
	public static void main (String[] args)
	{
	    Scanner s = new Scanner(System.in);
	    int test = s.nextInt();
	    while(test-->0)
	    {
	    	int sb = s.nextInt(),ss = s.nextInt();
	    	int ba[] = new int[sb];
	    	int sa[] = new int[ss];
	    	HashMap<Integer,Integer> hb = new HashMap<Integer,Integer>();
	    	HashMap<Integer,Integer> hs = new HashMap<Integer,Integer>();
	    	for(int i=0;i<sb;i++)
	    	{
	    		ba[i] = s.nextInt();
	    		if(hb.containsKey(ba[i]))
	    		{
	    			hb.put(ba[i],hb.get(ba[i])+1);
	    		}
	    		else
	    		{
	    			hb.put(ba[i],1);
	    		}
	    	}
	    	for(int i=0;i<ss;i++)
	    	{
	    		sa[i] = s.nextInt();
	    		if(hs.containsKey(sa[i]))
	    		{
	    			hs.put(sa[i],hs.get(sa[i])+1);
	    		}
	    		else
	    		{
	    			hs.put(sa[i],1);
	    		}
	    	}
	    	boolean flag = true;
	    	for(int i=0;i<ss;i++)
	    	{
	    		if(!hb.containsKey(sa[i]))
	    		{
	    			System.out.println("No");
	    			flag = false;
	    			break;
	    		}
	    		if(hb.get(sa[i])<hs.get(sa[i]))
	    		{
	    			System.out.println("No");
	    			flag = false;
	    			break;
	    		}
	    	}
	    	if(flag)
	    	{
	    		System.out.println("Yes");
	    	}
	    }
	    s.close();
	}
}