package noh;

public class ListaDupla {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Lista root = new Lista ();
		
		root.criaNoh(10);
		root.criaNoh(20);
		root.criaNoh(30);
		root.criaNoh(20);
		root.criaNoh(10);
		root.imprimeNoh();
	}

}
