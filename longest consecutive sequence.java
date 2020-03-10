// https://classroom.codingninjas.com/app/classroom/me/1108/content/29633/offering/311490/problem/623

import java.util.*;

public class Solution
{
	public static ArrayList<Integer> longestConsecutiveIncreasingSequence(int[] a)
    {
        HashMap<Integer,Boolean> hm = new HashMap<Integer,Boolean>();
        for(int i : a)
        {
            hm.put(i,true);
        }
        ArrayList<Integer> r = new ArrayList<Integer>();
        for(int i=0;i<a.length;i++)
        {
            if(hm.get(a[i])==false)
            {
                continue;
            }
            
            ArrayList<Integer> d = new ArrayList<Integer>();
            d.add(a[i]);
            hm.put(a[i],false);
            for(int j=1;;j++)
            {
                if(hm.containsKey(a[i]-j))
                {
                    d.add(0,a[i]-j);
                    hm.put(a[i]-j,false);
                }
                else
                {
                    break;
                }
            }
            for(int j=1;;j++)
            {
                if(hm.containsKey(a[i]+j))
                {
                    d.add(a[i]+j);
                    hm.put(a[i]+j,false);
                }
                else
                {
                    break;
                }
            }
            if(d.size()>r.size())
            {
                r=d;
            }
        }
        return r;
	}
}