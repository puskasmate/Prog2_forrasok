privileged aspect LZWBinFaa {
	
	void around(LZWBinFa.Csomopont elem,java.io.PrintWriter os , LZWBinFa f) :
    target (f) && call (void kiir (LZWBinFa.Csomopont, java.io.PrintWriter)) && args (elem,os)
{
if (elem != null) {
      ++f.melyseg;
      for (int i = 0; i < f.melyseg; ++i) {
    
        os.print("---");
      }
      os.print(elem.getBetu());
      os.print("(");
      os.print(f.melyseg - 1);
      os.println(")");
      f.kiir(elem.egyesGyermek(), os);
      f.kiir(elem.nullasGyermek(), os);
      
    
      --f.melyseg;
    }

    }
}

