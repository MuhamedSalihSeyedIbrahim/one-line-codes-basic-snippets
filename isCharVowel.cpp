//check whether passed variable is vowel if yes return 1
// takes a character

bool isCharVowel(char c){
    int isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'),
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        return 1;
    else
        return 0;
    return 0;
}
    
