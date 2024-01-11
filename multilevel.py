class Grandfather:
    def __init__(self):
        self._gfname = "Ram Naresh"
        self._surname = " Pandey"

        self._gfinherited = 1000000000
        self._gfassetworth = 20000000
        
        
    
    
class Father(Grandfather):
    def __init__(self):
        super().__init__()
        self._fname = " Praveen " + self._gfname 

        self._finherited = self._gfinherited
        self._fassetworth = 200000000 + self._gfassetworth

    
class Child(Father):
    def __init__(self):
        super().__init__()
        self.cname = input("Enter your first name : ")
        self.cname += self._fname + self._surname

        self.cinherited = self._finherited
        self.cassetworth = self._fassetworth

    def getdata(self):
        
        print(f"\n\nHey {self.cname}, \n\tYour Total asset :\n\t\tInherited : {self.cinherited}\n\t\tPurchased : {self.cassetworth}")

    


a = Child()
a.getdata()
