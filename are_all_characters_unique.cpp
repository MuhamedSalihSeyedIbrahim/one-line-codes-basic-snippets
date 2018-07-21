bool uniqueCharacters(string str) {
     
    // If at any time we encounter 2 ,same characters, return false
    for(int i = 0; i < str.length(); i++) {
        for(int j = i + 1; j < str.length(); j++) {
            if(str[i] == str[j]) {
                return false;
            }
        }
    }
     
    // If no duplicate characters encountered, return true 
    return true;
}
