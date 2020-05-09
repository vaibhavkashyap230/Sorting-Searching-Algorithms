// https://practice.geeksforgeeks.org/problems/row-with-max-1s/0

class GFG
{
    private static int countof1(int a[])
	{
		if(a[a.length-1]==0)
			return 0;
		
		int i=0,j=a.length-1,mid=-1;
		while(i<j)
		{
			mid = (i+j)/2;
			if(a[mid]==0)
			{
				i=mid+1;
			}
			else
			{
				j=mid;
			}
		}
		return a.length-i;
	}
	public static void main (String[] args)
	{
    	Scanner s = new Scanner(System.in);
    	int t = s.nextInt();
    	while(t-->0)
    	{
    		int m = s.nextInt();
    		int n = s.nextInt();
    		int a[][] = new int[m][n];
    		for(int i=0;i<m;i++)
    		{
    			for(int j=0;j<n;j++)
    			{
    				a[i][j]=s.nextInt();
    			}
    		}
    		int max = 0,in=0;
    		for(int i=0;i<m;i++)
    		{
    			int d = countof1(a[i]);
    			if(d>max)
    			{
    				max=d;
    				in=i;
    			}
    		}
    		System.out.println(in);
    	}
    	s.close();
	}
}
