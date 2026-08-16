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

let array =[];
let n=Number(prompt("Enter the number of elements:"));

for(i=0;i<=n;i++){
    let num = Number(prompt("Enter  a element:"));
    array.push(num);
};
array.forEach((num) => {
    console.log(num*num);
});
 
