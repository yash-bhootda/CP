class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n =digits.size();
        int count =0;
        int flag=0;
        vector<int> a;
        for(int i =n-1;i>=0;i--)
        {
            int k = digits[i];
            cout<<k;
            if(k==9)
            {
                cout<<"Reached";
                count++;
                flag=1;
                digits[i]=0;
                if(count==n)
                {
                    
                    a.push_back(1);
                    int t=n;
                    while(t>0)
                    {
                        a.push_back(0);
                        t--;
                    }
                    return a;
                 
                }
            }
            else
            {
                if (flag==1)
                {
                    digits[i]=digits[i]+1;
                    return
                }
                flag=0;
                digits[i]=digits[i]+1;
            
                return digits;
            
                
            }

        }
        return digits;
      
        
    }
};