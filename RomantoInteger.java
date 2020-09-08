class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> roman = new HashMap<>();
        roman.put('I', 1);
        roman.put('V', 5);
        roman.put('X', 10);
        roman.put('L', 50);
        roman.put('C', 100);
        roman.put('D', 500);
        roman.put('M', 1000);
        
        char[] chars = s.toCharArray();
        
        int i = 0;
        int result = 0;
        for (; i<chars.length - 1; i++){
            if (roman.get(chars[i]) < roman.get(chars[i + 1])){
                result = result + roman.get(chars[i+1]) - roman.get(chars[i]);
                i++;
            } else {
                result += roman.get(chars[i]);
            }
        }
        if (i == chars.length - 1){
            result += roman.get(chars[i]);   
        }
        return result;
    }
}
