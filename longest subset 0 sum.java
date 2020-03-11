// https://classroom.codingninjas.com/app/classroom/me/1108/content/29633/offering/311490/problem/750

import java.util.*;

/*
	- You are given an integer array containing positive and negative numbers.
	- Your task is to find out the length of the longest continuous subset of this array whose elements add upto zero.
*/

public class solution 
{
    public static int lengthOfLongestSubsetWithZeroSum(ArrayList<Integer> a) 
   	{
        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
        hm.put(0,-1);
        int s=0,ml=0;
        for(int i=0;i<a.size();i++)
        {
            s+=a.get(i);
            if(hm.containsKey(s))
            {
                int d = i-hm.get(s);
                if(d>ml)
                {
                    ml=d;
                }
            }
            else
            {
                hm.put(s,i);
            }
        }
        return ml;
	}
}