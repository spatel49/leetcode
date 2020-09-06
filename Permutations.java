class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> finalList = new ArrayList<>();
        backtracking(finalList, new ArrayList<>(), nums);
        return finalList;
    }

    private void backtracking(List<List<Integer>> finalList, List<Integer> tempList, int [] nums){
       if(tempList.size() == nums.length){
          finalList.add(new ArrayList<>(tempList));
       } else{
          for(int i = 0; i < nums.length; i++){ 
             if(!tempList.contains(nums[i])){
                tempList.add(nums[i]);
                backtracking(finalList, tempList, nums);
                tempList.remove(tempList.size() - 1);
             }
          }
       }
    } 
}
