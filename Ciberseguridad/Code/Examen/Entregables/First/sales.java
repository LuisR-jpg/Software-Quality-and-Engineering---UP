/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package uno;

// Java implementation to store
// blocks in an ArrayList

import java.util.ArrayList;

public class sales {

    public static ArrayList<Block> blockchain = new ArrayList<>();
    public static void main(String[] args) {
        blockchain.add(new Block("1000", ""));
        for(int i = 1; i <= 10; i++){
            blockchain.add(new Block(Integer.toString(i), blockchain.get(blockchain.size() - 1).hash));
        }

    	System.out.println(BlockChain.isChainValid());
    }
}
