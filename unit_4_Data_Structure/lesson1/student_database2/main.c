/*
 * main.c
 *
 *  Created on: Aug 21, 2023
 *      Author: abdul
 */
int Null;
struct Sdata
{
	int ID;
	char name[40];
	float height;
};

struct SStudent
{
	struct Sdata Student;
	struct SStudent*PNextStudent;

};
//null not being named
struct SStudent* gpFirstStudent =Null;
void fill_the_record(struct SStudent*new_student)
{
	char temp_text[40];

  DPRINTF("\n Enter the ID:");
  gets (temp_text);
  new_student->Student.ID = atoi(temp_text);

  DPRINTF("\n Enter student full name:");
  gets (new_student->Student.name);

  DPRINTF("\n Enter height:");
  gets (temp_text);
  new_student->Student.height = atof(temp_text);


}

void AddStudent(){

	struct SStudent *pLastStudent;
	struct SStudent *pNewStudent;

	if(gpFirstStudent== Null)
	{
		pNewStudent = (struct SStudent* )malloc(sizeof(struct SStdudent));

		gpFirstStudent = pNewStudent;
	}
	else{
		pLastStudent= gpFirstStudent;
		while(pLastStudent->PNextStudent)
			pLastStudent = pLastStudent->PNextStudent;

		pNewStudent = (struct SStudent* )malloc(sizeof(struct SStdudent));
		pLastStudent->PNextStudent = pNewStudent;
	}

	fill_the_record(pNewStudent);
	pNewStudent->PNextStudent=Null;

}

int Delete_Student(){

	char temp_text[40];
	int i, selected_id;

	DPRINTF("\n Enter student Id to be deleted: ");
	gets(temp_text);
	selected_id =atoi(temp_text);

	if(gpFirstStudent)
	{
		struct SStudent*pPreviousStudent=Null;
		struct SStudent*pSelectedStudent=gpFirstStudent;

		while(pSelectedStudent){
			if(pSelectedStudent->Student.ID==selected_id)
			{
				if(pPreviousStudent)
				{
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;

				}
				else{
					gpFirstStudent = pSelectedStudent->PNextStudent;

				}
				free(pSelectedStudent);
				return 1;

			}
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->PNextStudent;
		}

	}

	DPRINTF("\n cannot find student Id");
	return 0;


}



void view_students(){
	int count =0;
	struct SStudent*pCurrentStudent= gpFirstStudent;
	if(gpFirstStudent==Null)
		DPRINTF("\n Empty list");

	while(pCurrentStudent){
	DPRINTF("\Record number %d",count+1);
	DPRINTF("\ ID %d",pCurrentStudent->Student.ID);
	DPRINTF("\Name %s",pCurrentStudent->Student.name);
	DPRINTF("\ Height %f",pCurrentStudent->Student.height);
	pCurrentStudent= pCurrentStudent->PNextStudent;
	count ++;

	}
}


void DeleteAll(){
	struct SStudent*pCurrentStudent= gpFirstStudent;
	if(gpFirstStudent==Null)
		DPRINF("\nEmpty list");
	while (pCurrentStudent)
	{
		struct SStudent*pTemptStudent = pCurrentStudent;
		pCurrentStudent = pCurrentStudent->PNextStudent;
		free(pTemptStudent);

	}
	gpFirstStudent=Null;
}


void main()
{
	char temp_text[400];
	while(1)
{
	DPRINTF("\n ====================");
	DPRINTF("\n \t choose one of the following options: \n");
	DPRINTF("\n 1: Add student ");
	DPRINTF("\n 2: Delete student ");
	DPRINTF("\n 3: view student ");
	DPRINTF("\n 2: Delete all");
	DPRINTF("\n Enter option number");


	gets (temp_text);
	DPRINTF("\n ===================");
	switch(atoi(temp_text))
	{
	case 1:
	    AddStudent();
	    break;
    case 2:
    	Delete_Student();
	    break;
	case 3:
		view_students();
		break;
	case 4:
		DeleteAll();
		break;
	default:
		DPRINTF("Wrong option");
		break;

		}
 	 }

}




