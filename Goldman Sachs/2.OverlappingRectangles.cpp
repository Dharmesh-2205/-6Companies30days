class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        if(L1[0]>R2[0] || L2[0]>R1[0]){
            return 0;// Left side of The Rectangle
        }
        if (R2[1]>L1[1] || R1[1]>L2[1]){
            return 0;// Right Side of the The Rectangle
        }
        return 1;

    }    
};