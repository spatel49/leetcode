class Solution {
    private void backtracking(List<List<Integer>> finalList, List<Integer> tempList, int [] candidates, int tar, int start){
        if (tar == 0) {
            finalList.add(new ArrayList<>(tempList));
        } else{ 
            for(int i = start; i < candidates.length; i++){
                tempList.add(candidates[i]);
                if (tar - candidates[i] >= 0){
                    backtracking(finalList, tempList, candidates, tar - candidates[i], i);   
                }
                tempList.remove(tempList.size() - 1);
            }
        }
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> finalList = new ArrayList<>();
        backtracking(finalList, new ArrayList<>(), candidates, target, 0);
        return finalList;
    }
}
