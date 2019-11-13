#include "Instructor.h"

using namespace std;

int main(){

   Instructor instructor1("Mayssaa", "Najjar", 'F', 2390876, "ACD324", 
  			 Course(21540, "CS211",3),Course(21541, "CS211",1),
  			 Course(21345,"CS331",3));
 instructor1.print();

  Instructor instructor2;
    instructor2.print();
    instructor2.setInstructorName("Michelle","James");
    instructor2.setInstructorGender('F');
    instructor2.setEmployeeID(2390878);
    instructor2.setOfficeNum("SBSB3024");
    instructor2.setCourses(Course(24540, "CS111", 3),Course(24541, "CS111", 1),
    Course(22275, "CS351", 3));

  instructor2.print();











  return 0;
}
