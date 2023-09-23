const {MongoClient} = require('mongodb');
const express = require('express');
const app = express();
var cors = require('cors');
const port = 8532;
const bodyParser = require('body-parser');

const uri = "mongodb://localhost:27017";
const cliente = new MongoClient(uri);

async function insertar(datos, res) {
    try {
        await cliente.connect();
        const coleccion = cliente.db("lalito").collection("post");
        await coleccion.insertOne(datos);
        return res.status(201).json({ success: true });
    } catch (error) {
        return res.status(400).json({ success: error, error })
    } finally { await cliente.close(); }
}

async function modificar(datosBusqueda, datos, res) {
    try {
        await cliente.connect();
        const coleccion = cliente.db("lalito").collection("post");
        await coleccion.updateMany(datosBusqueda, {$set:datos});
        return res.status(201).json({ success: true });
    } catch (error) {
        return res.status(400).json({ success: error, error })
    } finally { await cliente.close(); }
}

async function eliminar(datosBusqueda, res) {
    try {
        await cliente.connect();
        const coleccion = cliente.db("lalito").collection("post");
        await coleccion.deleteMany(datosBusqueda);
        return res.status(201).json({ success: true });
    } catch (error) {
        return res.status(400).json({ success: error, error })
    } finally { await cliente.close(); }
}

async function buscar(datosBusqueda, res) {
    try {
        await cliente.connect();
        const coleccion = cliente.db("lalito").collection("post");
        const resultados = await coleccion.find(datosBusqueda).toArray();
        console.log(resultados);
        res.send(resultados)
    }
    catch(error){
        return res.status(400).json({success: false,error});
    }
    finally {
        await cliente.close();
    }
}


app.use(cors());
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

app.use(express.urlencoded({
    extended:true
}));

app.post('/guardar', (req, res) => {
    console.log(req.body);
    insertar(req.body.datos, res);
});
app.post('/borrar', (req, res) => {
    console.log(req.body);
    eliminar(req.body.datosBusqueda, res);
});
app.post('/modificar', (req, res) => {
    console.log(req.body);
    modificar(req.body.datosBusqueda, req.body.datos. res);
});
app.post('/buscar', (req, res) => {
    console.log(req.body);
    buscar(req.body.datosBusqueda, res);
});
app.get('/buscar', (req, res) => {
    console.log(req.body);
    buscar({}, res);
});
    
app.get('/', (req, res) => {
    console.log(req.body);
    res.send('Hola');
});

app.listen(port, () => {
    console.log(`Holahola. My app listening on port ${port}`);
})