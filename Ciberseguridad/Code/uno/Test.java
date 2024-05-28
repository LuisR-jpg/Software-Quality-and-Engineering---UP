/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package uno;

/**
 *
 * @author lelguea
 */
public class Test {
    
    public static void main(String[] adad) {
        Block genesis = new Block("Genesis", "");
        System.out.println("Este es el hash del genesis: "+genesis.hash);
        System.out.println("Este es el hash del ant genesis: "+genesis.previousHash);
        
        Block primero=new Block("Lorenzo Elguea", genesis.hash);
        System.out.println("Este es el hash del 1ro: "+primero.hash);
        System.out.println("Este es el hash del ant 1ro: "+primero.previousHash);

        Block segundo=new Block("Lorenzo Elguea", primero.hash);
        System.out.println("Este es el hash del 2do: "+segundo.hash);        
        System.out.println("Este es el hash del ant 2do: "+segundo.previousHash);
        
        Block tercero=new Block("Brenda", segundo.hash);
        System.out.println("Este es el hash del 3ro: "+tercero.hash);        
        System.out.println("Este es el hash del ant 3ro: "+tercero.previousHash);

        Block cuarto=new Block("Luis", segundo.hash);
        System.out.println("Este es el hash del 4to: "+cuarto.hash);        
        System.out.println("Este es el hash del ant 4too: "+cuarto.previousHash);
        
        tercero.setData("Vrenda");
        System.out.println("\n");

        System.out.println("Este es el hash del 3ro: "+tercero.hash);        
        System.out.println("Este es el hash del ant 3ro: "+tercero.previousHash);

        System.out.println("Este es el hash del 4to: "+cuarto.hash);        
        System.out.println("Este es el hash del ant 4to: "+cuarto.previousHash);
        
    }
    
}
