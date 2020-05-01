https://classroom.codingninjas.com/app/classroom/me/1108/content/28754/offering/300162/problem/1756

import java.util.Scanner;

public class Main
{
    private static int[] sumOfSmaller(int a[],long total[])
	{
		if(a.length==1)
			return a;
		
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
		left = sumOfSmaller(left,total);
		right = sumOfSmaller(right,total);
		int ans[] = new int[a.length];
		int i=0,j=0,cur=0;
		while(i<left.length && j<right.length)
		{
			if(left[i]>=right[j])
			{
				ans[cur] = right[j];
				cur+=1;
				j+=1;
			}
			else
			{
				total[0]+=left[i]*(right.length-j);
				ans[cur] = left[i];
				cur+=1;
				i+=1;
			}
		}
		while(j<right.length)
		{
			ans[cur] = right[j];
			cur+=1;
			j+=1;
		}
		while(i<left.length)
		{
			ans[cur] = left[i];
			cur+=1;
			i+=1;
		}
		return ans;
	}
	public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        int tests = s.nextInt();
        while(tests-->0)
        {
            int n = s.nextInt();
            int a[] = new int[n];
            for(int i=0;i<n;i++)
            {
                a[i] = s.nextInt();
            }
     		long t[] = new long[1];
    		sumOfSmaller(a,t);
    		System.out.println(t[0]);       
        }
        s.close();
	}
}