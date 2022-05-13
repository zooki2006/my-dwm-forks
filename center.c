//static void
//pushup(const Arg *arg) {
//	focus(sel);
//	arrange(selmon);
//}
void
center(const Arg *arg){
	Client *c = selmon->sel;
	if(!c)
		return;
	if (c->isfloating)
	{
		c->x = c->mon->mx + (c->mon->mw - WIDTH(c)) / 2;
		c->y = c->mon->my + (c->mon->mh - HEIGHT(c)) / 2;
	}
	XMoveWindow(dpy, c->win, c->x, c->y);
}
