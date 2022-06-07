void
show(const Arg *arg)
{
	if (!selmon->sel)
		return;

	//XMapWindow(dpy, selmon->sel->win);
	setclientstate(selmon->sel, NormalState);
	//arrange(selmon->sel->mon);
}


