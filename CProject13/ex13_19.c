#include<stdio.h>

typedef struct point {
	int xpos;
	int ypos;

}Point;

void ShowPosition(Point pos)
{
	printf("[%d,%d]", pos.xpos, pos.ypos);
}

void OrgSymTrans(Point* ptr)
{
	ptr->xpos = ptr->xpos * -1;
	ptr->ypos = ptr->ypos * -1;
}

int main()
{
	Point pos = { 7,-5 };
	OrgSymTrans(&pos);
	ShowPosition(pos); // -7  5

	OrgSymTrans(&pos);
	ShowPosition(pos); // 7  -5

	Point pos2 = pos;

	OrgSymTrans(&pos2);
	ShowPosition(pos2); // -7  5

	OrgSymTrans(&pos2);
	ShowPosition(pos2); // 7  -5

	return 0;
}