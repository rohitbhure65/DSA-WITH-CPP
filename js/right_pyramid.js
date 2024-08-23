function printstar(row){
    for(let i = 0; i < row; i++){
        let pattern = "";
        for(let j = 0; j < i; j++){
            pattern += "* ";
        }
        console.log(pattern)
    }
}

let row = parseInt(prompt("Enter a no"))
printstar(row);