var mysql = require('mysql')

var con = mysql.createConnection({
    user: 'root',
    host: 'localhost',
    password: 'harsh'

})

con.connect(function (err) {
    if (err)
        throw err;
    var database = 'create database if not exists lab11;'
    con.query(database, function (err) {
        if (err)
            throw err;
        console.log("Database created successfully.")
    })
})
