class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int diff=0;
        
        while(true)
        {
            int q=n/m;//q=quotinent
            int n1=q*m;
            int n2 =m*n>0?(q+1)*m:(q-1)*m;
            
            if(abs(n-n1)<abs(n-n2)) return n1;
            else return n2;
        
        }
    }
};