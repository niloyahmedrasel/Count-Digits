class Solution{
public:
    int evenlyDivides(int N){
        int reminder;
        int count = 0;
        int storeInput = N;
        
        while(N>0){
            reminder = N%10;
            N = N/10;
            if(reminder != 0 && storeInput%reminder == 0){
                count++;
            }
        }
        return count;
    }
};
