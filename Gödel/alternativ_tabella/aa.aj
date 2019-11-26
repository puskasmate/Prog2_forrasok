public aspect aa {


    pointcut callCompareTo(Csapat a, Csapat b): call(* a.compareTo(b));

    before(): callCompareTo(Csapat a, Csapat b) {
        System.out.println("Összehasonlítandó: " + a.nev + "Összehasonlítandó érték: " + a.ertek);
        System.out.println("Összehasonlított név: " + b.nev + "Összehasonlított érték: " + b.ertek);
    }
}


