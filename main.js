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
