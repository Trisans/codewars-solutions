// function greedy_thief(_items, cap) {
//     let answer = []
//     let items = _items

//     for (let i = 0; i < items.length; i++) {
//         items[i].ratio = items[i].price / items[i].weight
//     }
//     let weight = 0
//     while (weight <= cap) {
//         // best_option_index = get_best_option(items)
//         let best_option_index = -1
//         let maximum_ratio = 0
//         for (let i = 0; i < items.length; i++) {
//             if (items[i].ratio > maximum_ratio && ((items[i].weight + weight) <= cap)) {
//                 maximum_ratio = items[i].ratio
//                 best_option_index = i
//             }
//         }

//         if (best_option_index == -1) return answer
//         delete items[best_option_index].ratio
//         answer.push(items[best_option_index])
//         weight += items[best_option_index].weight
//         items.splice(best_option_index, 1)
//     }
// }

function max(a, b) {
    return (a > b) ? a : b
}

function greedy_thief(items, cap, n = items.length) {
    let len = items.length
    if (len == 0 || cap == 0) return 0

    if (items[n - 1].weight > cap)
        return greedy_thief(items, cap, n - 1)
    else return max(
        items[n - 1].value 
            + greedy_thief(items, cap - items[n - 1].weight, n - 1),
            greedy_thief(items, cap, n - 1)
    )
}

let items2 = [
    {"weight":5,"price":88},{"weight":20,"price":40},{"weight":4,"price":4},{"weight":6,"price":71},{"weight":18,"price":72},{"weight":8,"price":37},{"weight":18,"price":80},{"weight":15,"price":87},{"weight":3,"price":92},{"weight":20,"price":87},{"weight":10,"price":69},{"weight":19,"price":100},{"weight":19,"price":40},{"weight":2,"price":97},{"weight":9,"price":84},{"weight":11,"price":56},{"weight":17,"price":79},{"weight":9,"price":95},{"weight":13,"price":92},{"weight":20,"price":96},{"weight":20,"price":30},{"weight":18,"price":13},{"weight":17,"price":37},{"weight":5,"price":70},{"weight":9,"price":28},{"weight":17,"price":10},{"weight":10,"price":36},{"weight":20,"price":100},{"weight":1,"price":15},{"weight":9,"price":27},{"weight":17,"price":40},{"weight":13,"price":18},{"weight":18,"price":41},{"weight":19,"price":73},{"weight":0,"price":93},{"weight":17,"price":6},{"weight":1,"price":96},{"weight":13,"price":78},{"weight":19,"price":30},{"weight":11,"price":0},{"weight":6,"price":5},{"weight":9,"price":83},{"weight":7,"price":46},{"weight":1,"price":41},{"weight":12,"price":46},{"weight":14,"price":59},{"weight":1,"price":66},{"weight":13,"price":75},{"weight":10,"price":53}
]

let items = [
    {weight: 1, price: 6},
    {weight: 1, price: 3},
    {weight: 2, price: 3},
    {weight: 7, price: 15},
    {weight: 5, price: 4},
    {weight: 4, price: 6},
    {weight: 2, price: 4}

]
let cap = 10

console.log(`The thief can only steal up to ${cap} pounds of items`)
console.log("----------------------------------------------------------------")
console.log("The thief should steal:")
let results = greedy_thief(items, cap)
console.dir(results)
let total_price = 0
let total_weight = 0
let result_keys = Object.keys(results)
for (let i = 0; i < result_keys.length; i++) {
    total_price += results[result_keys[i]].price
}
for (let i = 0; i < result_keys.length; i++) {
    total_weight += results[result_keys[i]].weight
}
console.log(total_weight)
console.log(total_price)