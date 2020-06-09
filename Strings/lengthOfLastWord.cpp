int Solution::lengthOfLastWord(const string A) {
    int length = 0;
    for(int i = A.size()-1; i >=0 ;i--){
        char c = A[i];
        if(isspace(c)){
            if(length!=0){
                return length;
            } else{
                length = 0;
            }
        } else{
            length++;
        }
    }
    
    return length;
}