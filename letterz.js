function place(top, word) {
    let i;
    for (i = 2; i > 0; i--) {
        if (word[1] <= top[i][1]) break;
    }
    if (i != 2) top[i] = word;
    return top;
}

function topThreeWords(_text) {
    let top = [[null, 0], [null, 0], [null, 0]];
    _text = _text.toLowerCase().replace(/\s+/g,' ').trim();
    let text = ''
    let valid = "abcdefghijklmnopqrstuvwxyz' "
    for (let i = 0; i < _text.length; i++) if (valid.indexOf(_text[i]) != -1) text += _text[i];
    let text_arr = text.split(' ')
    for (let j = 0; j < text_arr.length; j++) {
        if (text_arr[j] != '') {
            let count_j = (text.match(new RegExp(text_arr[j])) || []).length;
            top = place(top, [text_arr[j], count_j]);
        }
    }
    console.log(text);
    let retrn = [];
    for (let i = 0; i < top.length; i++) {
        if (top[i][0] != null) retrn.push(top[i]);
    }
    return retrn;
}

//console.log(thing("In a village of La Mancha, the name of which I have no desire to call to mind, there lived not long since one of those gentlemen that keep a lance in the lance-rack, an old buckler, a lean hack, and a greyhound for coursing. An olla of rather more beef than mutton, a salad on most nights, scraps on Saturdays, lentils on Fridays, and a pigeon or so extra on Sundays, made away with three-quarters of his income."));
console.log(topThreeWords("a a a  b  c c  d d d d  e e e e e"));