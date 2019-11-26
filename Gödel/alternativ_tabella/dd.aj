privileged aspect dd{



    before (Csapat csapat, Csapat a) : target(csapat) &&
             execution (int compareTo (Csapat))  && args(a)
            {
               System.out.println("Az összehasonlítandó csapat neve: "+csapat.nev);
               System.out.println("Az összehasonlítandó csapat értéke: "+csapat.ertek);
                System.out.println("Az összehasonlító csapat neve: "+a.nev);
                System.out.println("Az összehasonlító csapat értéke: "+a.ertek);

            }
}