function interpret(instructions) {
    let variables = {}
    for (let i = 0; i < instructions.length; i++) {
        let parsed = instructions[i].split(' ');
        if (parsed[0] == "mov") variables[parsed[1]] = variables[parsed[2]] == undefined ? Number(parsed[2]) : variables[parsed[2]];
        if (parsed[0] == "inc") variables[parsed[1]]++;
        if (parsed[0] == "dec") variables[parsed[1]]--;
        if (parsed[0] == "jnz" && variables[parsed[1]] != 0) i += (Number(parsed[2]) - 1);
    }
    return variables;
}

console.log(interpret(['mov a -10','mov b a','inc a','dec b','jnz a -2']))