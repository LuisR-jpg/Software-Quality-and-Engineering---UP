/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package uno;

// Java implementation to store
// blocks in an ArrayList

import java.util.ArrayList;

public class GFG {

    // ArrayList to store the blocks
    public static ArrayList<Block> blockchain = new ArrayList<>();

    // Driver code
    public static void main(String[] args) {

        // Adding the data to the ArrayList
        blockchain.add(new Block(
                "First block", ""));


        blockchain.add(new Block(
                "Second block",
                blockchain
                        .get(blockchain.size() - 1)
                        .hash));

        blockchain.add(new Block(
                "Third block",
                blockchain
                        .get(blockchain.size() - 1)
                        .hash));

        blockchain.add(new Block(
                "Fourth block",
                blockchain
                        .get(blockchain.size() - 1)
                        .hash));

        blockchain.add(new Block(
                "Fifth block",
                blockchain
                        .get(blockchain.size() - 1)
                        .hash));

	System.out.println(BlockChain.isChainValid());
        
        for (int i=6; i<=80;i++) {
            blockchain.add(new Block(
                    i+" block",
                    blockchain
                            .get(blockchain.size() - 1)
                            .hash));
        }   
        System.out.println("\n\n" +BlockChain.isChainValid());
        blockchain.get(9).setData("Te engañe");
        System.out.println("\n\n" +BlockChain.isChainValid());
    }
    
        
}
