/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package uno;

// Java implementation for creating
// a block in a Blockchain

import java.util.Date;

public class Block {

	// Every block contains
	// a hash, previous hash and
	// data of the transaction made
	public String hash;
	public String previousHash;
	private String data;
	private long timeStamp;

	// Constructor for the block
	public Block(String data,
				String previousHash)
	{
		this.data = data;
		this.previousHash
			= previousHash;
		this.timeStamp
			= new Date().getTime();
		this.hash
			= calculateHash();
	}

	// Function to calculate the hash
	public String calculateHash()
	{
		// Calling the "crypt" class
		// to calculate the hash
		// by using the previous hash,
		// timestamp and the data
		String calculatedhash
			= crypt.sha256(
				previousHash
				+ Long.toString(timeStamp)
				+ data);

		return calculatedhash;
	}

    public void setData(String data) {
        this.data = data;
        this.hash = calculateHash();
    }

    @Override
    public String toString() {
        return "Block{" + "data=" + data + ", hash=" + hash + ", previousHash=" + previousHash + ", timeStamp=" + timeStamp + '}';
    }
        
        
}
