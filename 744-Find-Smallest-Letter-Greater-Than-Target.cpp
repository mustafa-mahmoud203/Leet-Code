class Solution {
public:
     void solve(vector<char>& v, char& c, int l,int r,char &res){
        int n=v.size();
        int mid=0;
         
        if(l>r){
            cout<<"(l>r)"<<endl;
            res=v[l%n];
            return ;
            }
        mid=l+(r-l)/2;
       
        if(v[mid]>c)solve(v,c,l,mid-1,res);
        
        else solve(v,c,mid+1,r,res); 
      
     }

    char nextGreatestLetter(vector<char>& letters, char target) {
       int l=0,r=letters.size()-1;
       char res='a';
      solve(letters,target,l,r,res);
       return res;

    }
};