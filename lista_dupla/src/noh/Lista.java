package noh;

public class Lista {
	
	private Noh prim = null;
//	private Noh ultm = null;
	
	void imprimeNoh () {
		for (Noh aux = this.prim; aux != null;
				aux = aux.getProx()) {
			System.out.println(aux.getInfo());
		}
	}
	
	public void criaNoh (int info) {
		Noh novo = new Noh ();
		novo.setInfo(info);
		this.addCrescente(novo);
	}

	private void addCrescente (Noh novo) {
		if (this.prim == null) {
			novo.setAnt(null);
			novo.setProx(null);
			this.prim = novo;
//			this.ultm = novo;
		}
		else if (this.prim.getProx() == null) {
			if (novo.getInfo() < this.prim.getInfo()) {
				novo.setProx(this.prim);
				novo.setAnt(null);
				this.prim = novo;
			}
			else {
				novo.setProx(null);
				novo.setAnt(this.prim);
				this.prim.setProx(novo);
//				this.ultm = novo;
			}
		}
		else {
			Noh aux;
			for (aux = this.prim; aux.getInfo() < novo.getInfo()
				&& aux.getProx() != null; aux = aux.getProx()) ;
			if (aux.getProx() == null) {
				novo.setProx(null);
				novo.setAnt(aux);
				aux.setProx(novo);
//				this.ultm = novo;
			}
			else if (aux.getAnt() == null) {
				novo.setProx(prim);
				novo.setAnt(null);
				prim = novo;
			}
			else {
				Noh aux2;
				aux2 = aux.getAnt();
				novo.setProx(aux);
				novo.setAnt(aux2);
				aux.setAnt(novo);
				aux2.setProx(novo);
			}
		}
	}
}
