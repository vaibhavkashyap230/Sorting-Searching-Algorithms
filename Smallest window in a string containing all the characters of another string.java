// https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string/0

import java.util.*;

class GFG
 {
    private static boolean check(int t[],int w[])
    {		
        for(int i=0;i<26;i++)
        {
            if(t[i]>w[i])
                return false;
        }
        return true;
    }
    
	public static void main (String[] args)
	{
     	Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            String s=sc.next(),t=sc.next();
            int tc[] = new int[26];
            int wc[] = new int[26];
            for(int i=0;i<t.length();i++)
            {
                tc[t.charAt(i)-'a']+=1;
            }
            String res="";
            int i=0,j=0;
            wc[s.charAt(0)-'a']+=1;
            while(i<=j)
            {
                if(check(tc,wc))
                {
                    if(res.length()==0)
                        res = s.substring(i,j+1);
                    else if(j-i+1<res.length())
                    {
                        res = s.substring(i,j+1);
                    }
                    
                    if(i==s.length()-1)
                    	break;
                    wc[s.charAt(i)-'a']-=1;
                    i+=1;
                }
                else
                {
                	if(j==s.length()-1)
                		break;
                	j+=1;
                    wc[s.charAt(j)-'a']+=1;
                }
            }
            if(res.length()==0)
                System.out.println(-1);
            else
                System.out.println(res);
        }
        sc.close();
	 }
}
