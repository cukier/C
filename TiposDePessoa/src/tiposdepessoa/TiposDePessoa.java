/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package tiposdepessoa;

/**
 *
 * @author cuki
 */
public class TiposDePessoa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        Funcionario f = new Funcionario("Cuki", 29, 5559858, Raca.NEGRA, 25, RegimeContratacao.HORISTA, "Bombril");
        Pessoa p = new Pessoa("Cuki", 19, 88997744, Raca.COCASIANA);

        Pessoa p1 = f;

        p1.imprimeDados();
    }
}
