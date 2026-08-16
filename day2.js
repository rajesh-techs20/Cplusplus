/*COUNT VOWELS USING FUNCTIONS*/
function countVowels(str){
    let count = 0;
    for(let ch of str){
        if("aeiouAEIOU".includes(ch)){
            count++;
        }
    }
    return count;
}
console.log(countVowels("Rajesh"))

/*ARROW FUNCTION*/
const countVowels=(str)=>{
    let count =0;
    for(let ch of str){
        if("aeiouAEIOU".includes(ch)){
            count++;
        }
    }
    return count;

}
