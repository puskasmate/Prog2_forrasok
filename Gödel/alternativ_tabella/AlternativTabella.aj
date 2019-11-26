

public  aspect AlternativTabella {


    before (Csapat.compareTo(Csapat f) ) : call (public void kiir(Csapat f)) && args (f) {
            System.out.println(csapat.nev);
            System.out.println(csapat.ertek);
        }
    }







