import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class LZWBinFaTest {
    LZWBinFa binFa = new LZWBinFa();
    String fa = "01111001001001000111";
    double melyseg = 4.0;
    double szoras = 0.957427;
    @Test
    public void bitFeldolg() {
        for (char b : fa.toCharArray()) {
            binFa.egyBitFeldolg(b);
        }
        assertEquals(melyseg, binFa.getMelyseg(), 0.0);
        assertEquals(szoras, binFa.getSzoras(), 0.0001);
    }
}
