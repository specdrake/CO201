# Creating Student Class
class Student:
    def __init__(self, name, s_1, s_2, s_3, s_4, s_5):
        self.name = name
        self.s1 = s_1
        self.s2 = s_2
        self.s3 = s_3
        self.s4 = s_4
        self.s5 = s_5
        self.avg = (s_1 + s_2 + s_3 + s_4 + s_5) / 5
    
    def display(self):
        return([self.name, self.s1, self.s2, self.s3, self.s4, self.s5, self.avg]) 
# Creating Array for the Student objects
Class_List = []

# Defining functions to access data stored in Array
def Create_Student(name, s1, s2 ,s3, s4, s5):
    student = Student(name, s1, s2, s3, s4, s5)
    Class_List.append(student)
    
def Show_Res():

    n = len(Class_List)
    s1_tot = s2_tot = s3_tot = s4_tot = s5_tot = 0
    
    for i in range(n):
        s1_tot += Class_List[i].display()[1]
        s2_tot += Class_List[i].display()[2]
        s3_tot += Class_List[i].display()[3]
        s4_tot += Class_List[i].display()[4]
        s5_tot += Class_List[i].display()[5]
    
    Res = []
    for item in Class_List:
        Res.append(item.display())
        
    return(Res, ['Class Average', s1_tot/n, s2_tot/n, s3_tot/n, s4_tot/n, s5_tot/n])
        
def Search(i):
    def Delete(i):
        if i > 0 and i <= len(Class_List):
            return(Class_List[i - 1].display())
        else:
            return('>>> Wrong Input')

def Delete(i):
    if i > 0 and i <= len(Class_List):
        Class_List.pop(i - 1)
    else:
        yield('>>> Wrong Input')


