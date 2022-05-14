//void
//ogshow(const Arg *arg)
//{
//	//if (selmon->hidsel)
//	//	selmon->hidsel = 0;
//	showwin(selmon->sel);
//}

void
show(const Arg *arg)
{
	if (!selmon->sel)
		return;

	//XMapWindow(dpy, selmon->sel->win);
	setclientstate(selmon->sel, NormalState);
	//arrange(selmon->sel->mon);
}
//void
//showwin(Client *c)
//{
//	if (!c)
//		return;
//
//	//XMapWindow(dpy, c->win);
//	setclientstate(c, NormalState);
//	//arrange(c->mon);
//}

