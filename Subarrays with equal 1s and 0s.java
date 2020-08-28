// https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1/

class countsubArray
{
    static int countSubarrWithEqualZeroAndOne(int arr[], int N)
    {
        HashMap<Integer,Integer> hm = new HashMap<Integer,Integer>();
        int count[] = new int[2];
        int result = 0;
        hm.put(0,1);
        for(int i=0;i<N;i++)
        {
            count[arr[i]]+=1;
            int dif = count[0]-count[1];
            if(hm.containsKey(dif))
            {
                result+=hm.get(dif);
                hm.put(dif,hm.get(dif)+1);
            }
            else
                hm.put(dif,1);
        }
        return result;
    }
}
