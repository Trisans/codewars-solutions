let adjacent_keys = {
    '1': ['1', '2', '4'],
    '2': ['1', '2', '3', '5'],
    '3': ['2', '3', '6'],
    '4': ['4', '5', '7'],
    '5': ['2', '4', '5', '6', '8'],
    '6': ['3', '5', '6', '9'],
    '7': ['4', '7', '8'],
    '8': ['5', '7', '8', '9', '0'],
    '9': ['6', '8', '9'],
    '0': ['0', '8']
};

function get_pin(pin) {
    let possible = [];
    for (let i = 0; i < pin.length; i++) {
        possible.push(adjacent_keys[pin[i]]);
    }
    console.log(possible);
}

console.log(get_pin('1537'));