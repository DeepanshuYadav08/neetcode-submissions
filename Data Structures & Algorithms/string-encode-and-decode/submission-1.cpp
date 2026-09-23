class Solution {
public:

    string encode(vector<string>& strs) {
        string s1 = "";
         for(string s : strs){
            int x = s.length();
            s1 +=  to_string(x) + '#' + s;
         }
         return s1;
    }


    vector<string> decode(string s) {
              int i = 0;
              vector<string> ans;
            while(i < s.length()){
              int newLength = 0;
              while(s[i] != '#'){
                  newLength = (newLength * 10) + (s[i] - '0');
                  i++;
              }
              i++;


              string word = "";
              for(int j = 0; j < newLength ;j++){
                word += s[i];
                i++;
              }
              ans.push_back(word);
            }
          return ans;
    }

};
