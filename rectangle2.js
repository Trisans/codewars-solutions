function rectangleRotation(a, b) {
    return Math.floor(a / Math.sqrt(2)) * Math.floor(b / Math.sqrt(2)) + 
    (Math.floor(a / Math.sqrt(2)) + 1) * (Math.floor(b / Math.sqrt(2)) + 1)
}

console.log(rectangleRotation(8, 6));