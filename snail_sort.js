function snail_sort(unsorted) {
    let sorted = [];
    let lim = unsorted.length - 1;
    let beg = 0;
    for (let end = lim; end != beg; end--) {
        for (let xp = beg; xp < end; xp++) {
            sorted.push(unsorted[beg][xp]);
        }
        for (let yp = beg; yp < end; yp++) {
            sorted.push(unsorted[yp][end]);
        }
        for (let xm = end; xm > beg; xm--) {
            sorted.push(unsorted[end][xm]);
        }
        for (let ym = end; ym > beg; ym--) {
            sorted.push(unsorted[ym][beg]);
        }
        beg++;
    }
    if (lim % 2 == 0) sorted.push(unsorted[beg][beg]);
    return sorted;
}

let test_1 = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];
// Expected: [1, 2, 3, 6. 9. 8, 7, 4, 5]
let test_2 = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]
// Expected: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10]
console.log(snail_sort(test_1));
console.log(snail_sort(test_2));