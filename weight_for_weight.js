// /*
// 1. create a list to store the [original, modified] pairs
// 2. parse the input string to fill each pair. push the pair into the list
// 3. sort pairs by modified weight from least to greatest
// 4. push the first element of each pair to the return string
// */

// function reorder(nums) {
//     let ordered = [];
//     for (let i = 0; i < nums.length; i++) {
//         let pair = [0, 0]; 
//         let parsedInt = "";
//         let j;
//         for (j = i; j < nums.length && nums[j] != ' '; j++) {
//             pair[1] += Number(nums[j]);
//             parsedInt += nums[j];
//         }
//         i = j;
//         pair[0] = Number(parsedInt);
//         ordered.push(pair);
//     }

//     for (let i = 0; i < ordered.length; i++) {
//         for (let j = i + 1; j < ordered.length; j++) {
//             if (ordered[j][1] < ordered[i][1] || 
//                 (ordered[j][1] == ordered[i][1] && String(ordered[j][0]) < String(ordered[i][0]))) {               
//                 let temp = ordered[i];
//                 ordered[i] = ordered[j];
//                 ordered[j] = temp;
//             } 
//         }
//     }

//     let _orderedStr = '';
//     for (let i = 0; i < ordered.length; i++) {
//         _orderedStr += ordered[i][0] + ' ';
//     }
//     return _orderedStr.substring(0, _orderedStr.length - 1);
// }

// console.log(reorder('56 65 74 100 99 68 86 180 90'))

function improvedReorder(nums) {
    let ordered = [[9999999, 9999999]];
    let fOrdered = [9999999];
    for (let i = 0; i < nums.length; i++) {
        let pair = [0, 0];
        let parsedInt = '';
        let j;
        for (j = i; j < nums.length && nums[j] != ' '; j++) {
            pair[1] += Number(nums[j]);
            parsedInt += nums[j];
        }
        i = j;
        pair[0] = Number(parsedInt);
        
        for (let j = 0; j < ordered.length; j++) {
            if (pair[1] < ordered[j][1] || (pair[1] == ordered[j][1] && String(pair[0]) < String(ordered[j][0]))) {
                ordered.splice(j, 0, pair);
                fOrdered.splice(j, 0, pair[0]);
                break;
            }
        }
    }
    return fOrdered.join(' ').substring(0, fOrdered.length - 7);
}
console.log(improvedReorder('56 65 74 100 99 68 86 180 90'))