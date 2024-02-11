bool areRotations(string s1,string s2)
    {
      
       if(s1.size()!=s2.size())return 0;
       string ans = s1+s1;
       if(ans.find(s2) != -1) return 1;
       return 0;
    }
