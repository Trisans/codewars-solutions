function pad(test) {
    for (let i = 0; i < test.length; i++) {
        test[i] = 'O' + test[i] + 'O'
    }
    let push = 'OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO'
    console.log(push.substring(0, test[0].length + 1))
    test.push(push.substring(0, test[0].length))
    test.unshift(push.substring(0, test[0].length))

    return test
}

function perimeter(test) {
    // Pad the plot with 0s
    test = pad(test)
    console.dir(test)
    let total_perimeter = 0
    for (let i = 1; i < test.length - 1; i++) {
        for (let j = 1; j < test[0].length - 1; j++) {
            if (test[i][j] == 'X') {
                if (test[i - 1][j] == 'O') total_perimeter++
                if (test[i][j + 1] == 'O') total_perimeter++
                if (test[i + 1][j] == 'O') total_perimeter++
                if (test[i][j - 1] == 'O') total_perimeter++
            }
        }
    }
    return total_perimeter
}


let test = ['XOOO',
'XOXO',
'XOXO',
'OOXX',
'OOOO']

console.log(perimeter(test))