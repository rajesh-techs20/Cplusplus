let n = Number(prompt("Enter the number of marks:"));
let marks = [];

for(let i=1;i<=n;i++){
    let number = Number(prompt("Enter the numbers:"));
    marks.push(number);
}
console.log(marks);


offers on prices

let prices = [225,167,870];

for(let i=0; i<prices.length;i++){
    prices[i]=prices[i]*0.9
}
console.log(prices)


/*PUSH*/
let companies =["Googfle","Microsoft"];

companies.push("Amazon");
console.log(companies);

/*POP*/
let companies =["Googfle","Microsoft","Amazon"];
let removed = companies.pop();
console.log(companies);


/*tostring*/
let companies =["Googgle","Microsoft","Amazon"];
console.log(companies.toString());
OUTPUT Google,Microsoft,Amazon


/*concat*/
let a= [1,2,3];
let b= [4,5,6];
let c = a.concat(b);
console.log(c)
OUTPUT [1,2,3,4,5,6]

/*UNSHIFT*/
/*ADD ELEMENT AT START*/
let f =["Banana","Cherry"];
f.unshift("Apple");
console.log(f)

/*SHIFT*/
 let f =["Apple","Banana","Cherry"];
f.shift();
console.log(f)

/*SPLICE*/
 let f =["Apple","Banana","Cherry"];
f.splice(2,0,"Orange")

console.log(f)
