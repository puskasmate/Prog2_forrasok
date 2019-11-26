public aspect jj {
    
    pointcut callCompareTo(Csapat a, Csapat b): call(int compareTo(Csapat)) && args(b) ;
    
    before() : callCompareTo(Csapat a, Csapat b) && target(a) {
        System.out.println("Osszehasonlitando: "+ a.nev);
        System.out.println("Osszehasonlitott: "+ b.nev);
    }
}
