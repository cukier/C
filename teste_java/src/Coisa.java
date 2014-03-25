/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author cuki
 */
public class Coisa {

    private int coisa1;
    private int coisa2;
    
    void inicializaCoisa (int aleluia) {
        this.coisa1 = aleluia;
    }
    
    void inicializaCoisa (int aleluia, int aleluia2) {
        inicializaCoisa(aleluia);
        this.coisa2 = aleluia2;
    }

    public int getCoisa1() {
        return coisa1;
    }

    public void setCoisa1(int coisa1) {
        this.coisa1 = coisa1;
    }

    public int getCoisa2() {
        return coisa2;
    }

    public void setCoisa2(int coisa2) {
        this.coisa2 = coisa2;
    }
}
