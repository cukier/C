/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package janela;

import javax.swing.JFrame;

/**
 *
 * @author cuki
 */
public class Janela extends JFrame {

    /**
     * @param args the command line arguments
     */
    public Janela() {
        super("Janela");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(275, 100);
        setVisible(true);
    }

    public static void main(String[] args) {
        // TODO code application logic here
        Janela novaJanela = new Janela();
    }
}
