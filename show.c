void
show(const Arg *arg)
{
//	if (selmon->hidsel)
//		selmon->hidsel = 0;
	showwin(selmon->sel);
}

void
showwin(Client *c)
{
	if (!c)
		return;

	XMapWindow(dpy, c->win);
	setclientstate(c, NormalState);
	arrange(c->mon);
}

