/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package uno;

// Java implementation for creating
// a block in a Blockchain

import java.util.Date;

public class myBlock {

	// Every block contains
	// a hash, previous hash and
	// data of the transaction made
	public String hash;
	public String previousHash;
	private double total;
	private String data;
	private long timeStamp;

	// Constructor for the block
	public myBlock(String data,
				String previousHash, double total)
	{
		this.data = data;
		this.previousHash
			= previousHash;
		this.timeStamp
			= new Date().getTime();
		this.hash
			= calculateHash();
		this.total = total;
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
				+ data
				+ Double.toString(total)
				);

		return calculatedhash;
	}

    public void setData(String data) {
        this.data = data;
        this.hash = calculateHash();
    }

	public double getTotal(){
		return this.total;
	}

    @Override
    public String toString() {
        return "Block{" + "data=" + data + ", hash=" + hash + ", previousHash=" + previousHash + ", timeStamp=" + timeStamp + '}';
    }
        
        
}
