function search_horizontal(row, player, board) { // PROBABLY FIXED
    let keys = Object.keys(board);
    let count = 0;
    for (let i = 0; i < 7; i++) {
        if (board[keys[i]][row] == player) count++;
        else count = 0;
        if (count == 4) return player;
    }
}

function search_vertical(slot, player, board) { // FIXED
    let count = 0;
    for (let i = 0; i < 6; i++) {
        if (board[slot][i] == player) count++;
        else count = 0;
        if (count == 4) return player;
    }
}

function search_diagonal(slot, row, player, board) {
    // positive diagonal
    let keys = Object.keys(board);
    let min = Math.min(keys.indexOf(slot), row);
    let count = 0;
    let j = row - min;
    for (let i = keys.indexOf(slot) - min; i < 7 && j < 6; i++) {
        if (board[keys[i]][j] == player) count++;
        else count = 0;
        j++;
        if (count == 4) return player;
    }
    // negative diagonal
    count = 0;
    j = keys.indexOf(slot) + min;
    for (let i = row - min; i < 7 && j >= 0; i++) {
        if (board[keys[i]][j] == player) count++;
        else count = 0;
        j--;
        if (count == 4) return player;
    }
}