/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author cuki
 */
public class Pessoa {

    private String nomePessoa;
    private int idadePessoa;
    private int telefonePessoa;
    private Raca origemPessoa;
    static private AtividadesDeLazer minhaAtividade;

//    private Pessoa() {
//    }

    public Pessoa(String nome, int idade, int telefone, Raca tipo) {
        this.nomePessoa = nome;
        this.idadePessoa = idade;
        this.telefonePessoa = telefone;
        this.origemPessoa = tipo;
    }
    
    public Pessoa(String nome, int idade, int telefone, Raca tipo, AtividadesDeLazer atividade) {
    	this(nome, idade, telefone, tipo);
    	this.minhaAtividade = atividade;
    }
    
    public void imprimeDados () {
        System.out.println("===========PESSOA===========");
        System.out.println("Nome: " + this.nomePessoa);
        System.out.println("Idade: " + this.idadePessoa);
        System.out.println("Telefone: " + this.telefonePessoa);
        System.out.println("Raça: " + this.origemPessoa);
        System.out.println("============================");
        System.out.println();
    }

    public int getIdadePessoa() {
        return idadePessoa;
    }

    public String getNomePessoa() {
        return nomePessoa;
    }

    public Raca getOrigemPessoa() {
        return origemPessoa;
    }

    public int getTelefonePessoa() {
        return telefonePessoa;
	}

	static public AtividadesDeLazer getMinhaAtividade() {
		return minhaAtividade;
	}
    
    
}