class Lu:
    def __init__(self):
        self._sub = ["Python","Java","C++"]
        self._trainer = ["Sai Sondarkar Sir","Sumit Sir","Sheetal Ma'am"]
        self._duration = [1.0,2.0,1.5]

class ITM:
    def __init__(self):
        self._sub1 = ["Business" ,"Mba" ,"Pgdm" ]
        self._trainer1 = ["Business Mam" , "MBA Sir" , "Pgdm Mam"]
        self._duration1 = [1.0,2.0,3.0]


class Child(ITM,Lu):

    def __init__(self):
        Lu.__init__(self)
        ITM.__init__(self)
    
    def setsub(self):
        print("\n\nHey Which one of the course you want ? ","LU : ",self._sub,"ITM : ",self._sub1,sep="\n")
        self.subj = (input()).split(",")
        for i in range(0,len(self.subj)):
            a = ""
            for j in range(0,len(self.subj[i])):
                
                if(self.subj[i][j] == self.subj[i][j].upper()):
                    if(not(j == 0)):
                        a += self.subj[i][j].lower()
                    else:
                        a+= self.subj[i][j]
                else:
                    if(j == 0):
                        a += self.subj[i][j].upper()
                    else:
                        a += self.subj[i][j]
            self.subj[i] = a
            
        print(self.subj)



                    
    
    def getsub(self):
        totalhour=  0
        print("___________________________________________________\n|SUB\t       | TRAINER\t\t| DURATION|\n___________________________________________________")
        

        for i in self.subj:
            
            index = None
            if(i in self._sub ):
                index = self._sub.index(i)
                print("|" , i ,((8-len(i))*" "),"   |   " , self._trainer[index], ((17-len(self._trainer[index]))*" "), " | ",self._duration[index],"hr" , "|")
                totalhour += self._duration[index]
            else:
                index = self._sub1.index(i)
                print("|" , i ,((8-len(i))*" "),"   |   " , self._trainer1[index] ,((17-len(self._trainer1[index]))*" "), " | ",self._duration1[index],"hr", "|")
                totalhour += self._duration1[index]

        print("\n\nTotal Duration : ",totalhour)



a = Child()
a.setsub()
a.getsub()