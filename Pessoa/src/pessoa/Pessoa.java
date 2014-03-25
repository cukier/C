/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pessoa;

/**
 *
 * @author cuki
 */
public class Pessoa extends Thread {
        
        private String texto;
        private int prioridade;
 
        public Pessoa(String texto, int prioridade) {
                super();
                this.texto = texto;
                this.prioridade = prioridade;                           
        }
        
        public synchronized void run(){
 
                this.setPriority(this.prioridade);
                
                System.out.println(this.texto + " - Prioridae: " + this.getPriority());
                
        }
 
 
       
        public static void main(String[] args){
                
                Pessoa p1 = new Pessoa("A", 10);
//                p1.start();
                
                Pessoa p2 = new Pessoa("B", 10);
//                p2.yield();
//                p2.start();
                
                Pessoa p3 = new Pessoa("C", 1);
//                p3.yield();
//                p3.start();
                
        }
 
}
