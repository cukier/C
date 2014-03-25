package tiposdepessoa;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author cuki
 */
public final class Funcionario extends Pessoa {

    private double salarioFuncionario;
    private RegimeContratacao tipoSalario;
    private String funcao;

//    private Funcionario() {
//    }
    public Funcionario(String nome, int idade, int telefone, Raca tipo,
            double salario, RegimeContratacao tipoSalario, String funcao) {
        super(nome, idade, telefone, tipo);
        this.salarioFuncionario = salario;
        this.tipoSalario = tipoSalario;
        this.funcao = funcao;
    }

    @Override
    public void imprimeDados() {
        super.imprimeDados();
        System.out.println("==========FUNCIONARIO========");
        System.out.println("Salario: " + this.salarioFuncionario);
        System.out.println("Regime de Contrato: " + this.tipoSalario);
        System.out.println("Funcão: " + this.funcao);
        System.out.println("=============================");
        System.out.println();
    }

    public String getFuncao() {
        return funcao;
    }

    public double getSalarioFuncionario() {
        return salarioFuncionario;
    }

    public RegimeContratacao getTipoSalario() {
        return tipoSalario;
    }
}
