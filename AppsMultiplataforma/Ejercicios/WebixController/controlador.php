<?php
    if($_POST['Accion'] == 'Guardar'){
        $mysqli = new mysqli("localhost", "alumnos", "app.2023", "lalito");
        $sentencia = $mysqli -> prepare("INSERT INTO Peliculas (Id, Nivel, Titulo, Ao, Votos) VALUES (0, ?, ?, ?, ?)");
        // isii: integer, string, integer, integer
        $sentencia -> bind_param("isii", $_POST['Nivel'], $_POST['Titulo'], $_POST['Ao'], $_POST['Votos']);
        $sentencia -> execute();
    }
    else if($_POST['Accion'] == 'Borrar'){
        $ids = $_POST['Id'];
        // "[4,5,6]"        
        $ids = str_replace("[", "", $ids);
        $ids = str_replace("]", "", $ids);
        $mysqli = new mysqli("localhost", "alumnos", "app.2023", "lalito");
        $sentencia = $mysqli -> prepare("delete from Peliculas where id in (?)");
        $id = explode(",", $ids);
        foreach($id as &$valor) {
            $sentencia -> bind_param("i", $valor);
            $sentencia -> execute();
        }
    }
    else if($_POST['Accion'] == 'Modificar'){
        $mysqli = new mysqli("localhost", "alumnos", "app.2023", "lalito");
        $sentencia = $mysqli->prepare("update Peliculas set Nivel = ?, Titulo = ?, Ao = ?, Votos = ? where id = ?");        
        $sentencia->bind_param("isiii", $_POST['Nivel'], $_POST['Titulo'], $_POST['Ao'], $_POST['Votos'], $_POST['id']);
        $sentencia->execute();
    }
?>