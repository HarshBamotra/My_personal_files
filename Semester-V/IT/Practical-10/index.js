const http = require('http')
const port = 10000

const server = http.createServer((req, res)=>{
    res.write('Hello World !! This is my first node js server!')
    res.end()
})
server.listen(port, (error)=>{
    if(error) console.log('something went wrong')
    else console.log('server is listening at port no :', port)
})
