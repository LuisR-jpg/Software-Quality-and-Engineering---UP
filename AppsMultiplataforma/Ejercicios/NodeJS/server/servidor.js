const mysql = require('mysql2');
const express = require('express');
const app = express();
var cors = require('cors');
const port = 8532;

app.use(cors());

app.use(express.urlencoded({
    extended:true
}));

var con = mysql.createConnection({
    host: "localhost",
    user: "alumnos",
    password: "app.2023",
    database: "lalito"
});

app.post('/servicioweb', (req, res) => {
    res.send(req.body);
});

app.get('/buscar', (req, res) => {
    con.connect(function(err){
        if(err) throw err;
        con.query("SELECT * FROM Peliculas", function (err, result, fields){
            if(err) throw err;
            res.send(result);
            console.log(result);
        });
    });
})

app.post('/guardar', (req, res) =>{
    con.connect(function(err){
        if(err) throw err;
        req.body.Nivel = req.body.Nivel ? req.body.Nivel : 0;
        req.body.Ao = req.body.Ao ? req.body.Ao : 0;
        req.body.Votos = req.body.Votos ? req.body.Votos : 0;
        con.execute("insert into Peliculas (id, nivel, titulo, ao, votos) values (0, ?, ?, ?, ?)", 
            [req.body.Nivel, req.body.Titulo, req.body.Ao, req.body.Votos],
            function(err, result, fields){
                if(err) throw err;
                res.send(req.body);
        });
    })
})

app.post('/borrar', (req, res) => {
    con.connect(function(err){
        if(err) throw err;
        con.execute("delete from Peliculas where id in (?)",
        [req.body.id],
        function(err, result, fields){
            if(err) throw err;
            res.send(req.body);
        }
        )
    })
});

app.post('/modificar', (req, res) => {
    con.connect(function(err){
        if(err) throw err;
        con.execute("update Peliculas set Nivel = ?, Titulo = ?, Ao = ?, Votos = ? where id = ?",
        [req.body.Nivel, req.body.Titulo, req.body.Ao, req.body.Votos, req.body.id],
        function(err, result, fields){
            if(err) throw err;
            res.send(req.body);
        }
        )
    })
});

app.get('/', (req, res) => {
    res.send('Hola');
});

app.listen(port, () => {
    console.log(`Holahola. My app listening on port ${port}`);
})