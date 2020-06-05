class Solution {
    public String intToRoman(int num) {
        int[] numvals = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        String[] strvals = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
        StringBuilder sb = new StringBuilder();
    
        for(int i=0; i<13; i++) {
            while(num >= numvals[i]) {
                num -= numvals[i];
                sb.append(strvals[i]);
            }
        }
        return sb.toString();
    }
}
