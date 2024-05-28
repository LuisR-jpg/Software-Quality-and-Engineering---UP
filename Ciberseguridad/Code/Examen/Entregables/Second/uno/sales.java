/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package uno;

// Java implementation to store
// blocks in an ArrayList

import java.util.ArrayList;

public class sales {

    public static ArrayList<myBlock> blockchain = new ArrayList<>();
    public static void main(String[] args) {
        // El total es manejado como un atributo extra para que se pueda compartir la informacion entre bloques,
        // sin embargo no se pierde seguridad porque cada valor unico sigue siendo hasheado junto con el total.
        // Conocer el total entre bloques no es informacion suficiente para hacer un nuevo hash.
        blockchain.add(new myBlock("1000", "", 1000.0));
        for(int i = 1; i <= 10; i++){
            blockchain.add(new myBlock(
                Integer.toString(i),
                blockchain.get(blockchain.size() - 1).hash,
                blockchain.get(blockchain.size() - 1).getTotal() + Double.valueOf(i)
            ));
        }

    	System.out.println(BlockChain.isChainValid());
        System.out.print("Grand total is: ");
        System.out.println(blockchain.get(blockchain.size() - 1).getTotal());
    }
}
