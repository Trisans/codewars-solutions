function convertQueryToMap(query) {
    if (query == '') return {};
    let base = {};
    for (let v = 0; v < query.split('&').length; v++) {
        let temp_dir = query.split('&')[v].split('=')[0].split('.');
        let dir = base;
        for (let i = 0; i < temp_dir.length; i++) {
            if (!(dir[temp_dir[i]])) dir[temp_dir[i]] = {};
            if (i < temp_dir.length - 1) dir = dir[temp_dir[i]];
            else dir[temp_dir[i]] = query.split('&')[v].split('=')[1].replace(/%20/g, ' ').replace(/%26/g, '&').replace(/%3D/g, '=').replace(/%3F/g, '?');
        }
    }
    return base; 
}

console.dir(convertQueryToMap("user.name.firstname=Bob&user.name.lastname=Smith&user.favoritecolor=Light%20Blue"))