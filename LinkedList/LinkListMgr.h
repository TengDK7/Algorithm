#pragma once
#include"Node.h"

class LinkListMgr
{
private:
	LinkListMgr();
public:
	static LinkListMgr GetInst();
	void Reverse(LinkList head);
	void RemoveDup(LinkList head);
	LinkList Add(LinkList h1, LinkList h2);
	void ReOrder(LinkList head);
	LinkList FindLastK(LinkList head, int k);
};

