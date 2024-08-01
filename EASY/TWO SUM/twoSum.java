class twoSum{
    public int[] twosum(int[] nums, int target){
        for(int i=0; i<nums.length; i++){
            for(int j=i+1; j<nums.length; j++){
                if(nums[i]+nums[j]==target){
                    return new int[]{i,j};
                }
            }
        }
        return null;
    }
    public static void main(String[] args){
        twoSum ob = new twoSum();
        int[] nums = {2,7,11,15};
        int target = 9;
        int[] result = ob.twosum(nums, target);
        for(int i=0; i<result.length; i++){
            System.out.print(result[i] + ", ");
        }
    }
}