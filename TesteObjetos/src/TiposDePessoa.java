
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * 
 * @author cuki
 */
public class TiposDePessoa {

	/**
	 * @param args
	 *            the command line arguments
	 */
	public static void main(String[] args) {

		Funcionario f = new Funcionario("Mauricio", 15, 5559858, Raca.NEGRA,
				25, RegimeContratacao.HORISTA, "Bombril");
		Pessoa p = new Pessoa("Cuki", 19, 88997744, Raca.COCASIANA);

//		Pessoa p1 = f;

		// p1.imprimeDados();

//		Pessoa[] array = new Pessoa[3];
//
//		array[0] = p;
//		array[1] = f;
//		array[2] = p1;
//
//		for (int i = 0; i < array.length; i++) {
//			array[i].imprimeDados();
//
//		}
		
		System.out.println(f.getMinhaAtividade());
	}
}
