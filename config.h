/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int barpading  = 0;
static const unsigned int gappx     = 6;        /* gaps between windows */
static const unsigned int snap      = 16;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
#define STATUSBAR "dwmblocks"
/* static const int user_bh            = 16;      */  /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */ 
static const char *fonts[]          = { "monospace:size=10",
	"Symbols Nerd Font:pixelsize=24:antialias=true:autohint=true",
	"Noto Color Emoji:pixelsize=12:antialias=true:autohint=true" };
static const char dmenufont[]       = "monospace:size=10";
#include "colours.c"
/*
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#005577";
static const char col_white[]       = "#ffffff";
static const char col_pink[]        = "#f5a9b8";
static const char col_pink2[]       = "#f890a5";
static const char col_blue[]        = "#00365f";
static const char col_purple[]      = "#3c325f";
static const char col_purple2[]     = "#8167da";
static const char col_darkblue[]    = "#1E242D";
//static const char col_darkishblue[] = "#243143";
static const char col_darkishblue[] = "#161b23";
static const char col_lightblue[] = "#d5e5fe";

//static const char *colors[][3]      = { */
	/*               fg         bg         border   */

	//[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
//	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	//[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
//	[SchemeSel]  = { col_gray4, col_purple, col_purple2  },
//	[SchemeHid]  = { col_cyan,  col_gray1, col_cyan  },
//};
/* 
static const char *colors[][3]      = {
	//               fg         bg         border   
//	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
//	[SchemeNorm] = { col_gray3, col_darkishblue, col_darkishblue },
//	[SchemeNorm] = { col_lightblue, col_darkishblue, col_darkishblue },
	[SchemeNorm] = { col_lightblue, col_darkishblue, col_darkblue },
	[SchemeSel]  = { col_gray4, col_purple, col_purple  },
}; */


/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const Rule rules[] = {
        /* xprop(1):
         *      WM_CLASS(STRING) = instance, class
         *      WM_NAME(STRING) = title
         */
 	/* class      instance    title       tags mask     isfloating   monitor    scratch  */
	{ "Gimp",     NULL,       NULL,       0,            0,           -1,       },// 0  },
	{ "steam",   "steam",   "Steam",      9,            0,           -1,       },// 0  },
	{ "Nyrna",    NULL,       NULL,       0,            1,           -1,       },//'m' },
	{ NULL,       NULL,   "scratchpad",   0,            1,           -1,       },//'s' },     
	{ "terminal-scratchpad",  NULL,  NULL, 0,            1,           -1,       },//'s' },     
	{ NULL,  "dwmtabbed",     NULL,       0,            1,           -1,       },//'n' },     
	{ NULL,  "discordtabbed", NULL,       0,            1,           -1,       },//'d' },     
	{ NULL,       NULL,   "splistbinds",  0,            1,           -1,       },//'l' },    
	{ "Mullvad VPN", NULL,    NULL,       0,            1,           -1,       },//'r' },    
	{ "spcmus",   NULL,      NULL,        0,            1,           -1,       },//'c' },
	{ "spncmpcpp",   NULL,      NULL,        0,            1,           -1,       },//'c' },
	{ "spncspot", NULL,      NULL,        0,            1,           -1,       },//'w' },
	{ "sppod",    NULL,      NULL,        0,            1,           -1,       },//'a' },
	{ "WebCord",  NULL,      NULL,        0,            1,           -1,       },//0 },

	{ "discord",  NULL,      "Discord Updater",  0,     1,           -1,       },// 0 }, 
	/* steam fixes */
/*	{ "Steam",    NULL,       NULL,       0,            1,           -1,       'z' }, */
//	{ "Steam",    NULL,       NULL,       0,            1,           -1,        0 }, 
//	{ "Steam",    NULL,     "Steam",      0,            0,           -1,       'z' }, 
//	{ "Steam",    NULL,     "Steam Dialog", ~0,          1,           -1,        0  }, 
//	{ "Steam",    NULL,     "-",    ~0,           1,           -1,        0  }, 
//	{ "Steam",    NULL,     "Updating",    ~0,           1,           -1,        0  }, 
//	{ "Steam",    NULL,     "Ready",    ~0,           1,           -1,        0  }, 
 	{ NULL,	     "keepassxc", NULL,	       0,	    1,           -1,       },//'x' },
 /*	{ NULL,	     "Modded Slay the Spire", NULL,	    0,	    1,           -1,       0 }, */
	/* class      instance    title       tags mask     isfloating   monitor */
/*  	{ "Gimp",     NULL,       NULL,           0,            1,           -1 },
 *	{ panel[1],   NULL,       NULL,       (1 << 9) - 1,     0,           -1 },
 *	{ NULL,	     "spterm",	  NULL,      SPTAG(0),	        1,	     -1 },
 *	{ NULL,	     "spfm",	  NULL,	     SPTAG(1),	        1,	     -1 },
 *	{ NULL,	     "keepassxc", NULL,	     SPTAG(2),	        1,           -1 },
 *	{ NULL,	     "spncspot",  NULL,	     SPTAG(3),	        1,           -1 },
 *	{ NULL,      "spcmus",    NULL,      SPTAG(4),          1,           -1 },
 *	{ NULL,      "Steam",     NULL,      SPTAG(5),          0,           -1 }, 
 *	{ NULL,      "spcastero", NULL,      SPTAG(6),          1,           -1 },
 *  	{ NULL,      "listbinds", NULL,      SPTAG(7),          1,           -1 }, */
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 0; /* 1 will force focus on the fullscreen window */


static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define ALTMODKEY Mod1Mask
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },


/* #define BrightDown	0x1008ff03
#define BrightUp	0x1008ff02
#define AudioPlay	0x1008ff14
#define AudioNext	0x1008ff17
#define AudioPrev	0x1008ff16
#define AudioMute	0x1008ff12
#define AudioDown	0x1008ff11
#define AudioUp		0x1008ff13
#define Print		0xff61 */
#include <X11/XF86keysym.h>


/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_darkishblue, "-nf", col_lightblue, "-sb", col_purple, "-sf", col_gray4, NULL };
//static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
static const char *termcmd[]  = { "kitty", NULL };

/* mercy cmds */
/* rofi/dmenu */
static const char *i3dmenucmd[] = { "i3-dmenu-desktop", NULL };
/* static const char *powercmd[] = { "rofi-power-menu", NULL }; */
/* static const char *bluecmd[] = {"rofi-bluetooth", NULL }; */
static const char *dmenutraycmd[]  = { "dmenu-tray.sh", NULL };
/* programs */
/* static const char *steamcmd[] = { "steam", NULL }; */
static const char *rofisteamcmd[] = { "rofi-steam.sh", NULL }; 

/* static const char *webcmd[] = {"qutebrowser", NULL };
 * static const char *secwebcmd[] = {"firefox", NULL }; */

static const char *secwebcmd[] = {"qutebrowser", NULL };
static const char *webcmd[] = {"firefox", NULL };

/* static const char *nyrna[] = {"nyrna", NULL }; */
static const char *lockcmd[] = {"manlock.sh", NULL };

/* Control Media Players */
static const char *medplaypausecmd[] = { "playerctl", "play-pause", NULL };
static const char *mednextcmd[] = { "playerctl", "next", NULL };
static const char *medprevcmd[] = { "playerctl", "previous", NULL };


/* scratchpads sh */
static const char *scratchpad[] = { "Scratchpad.sh", "class", "terminal-scratchpad", "st", "-c", "terminal-scratchpad", "-g", "120x34", NULL };
//static const char *cmuspad[] = { "Scratchpad.sh", "class", "spcmus", "st", "-c", "spcmus", "-g", "120x34", "-e", "cmus", NULL };
static const char *mpcpppad[] = { "Scratchpad.sh", "class", "spncmpcpp", "st", "-c", "spncmpcpp", "-g", "120x34", "-e", "ncmpcpp", NULL };
static const char *spotpad[] = { "Scratchpad.sh", "class", "spncspot", "st", "-c", "spncspot", "-g", "120x34", "-e", "ncspot", NULL };
static const char *podpad[] = { "Scratchpad.sh", "class", "sppod", "st", "-c", "sppod", "-g", "120x34", "-e", "castero", NULL };
static const char *nyrnapad[] = { "Scratchpadmutifile.sh", "class", "Nyrna", "nyrna", NULL };
static const char *keepassxcpad[] = { "Scratchpad.sh", "title", "keepassxc", "keepassxc", NULL };
static const char *webdispad[] = { "Scratchpad.sh", "class", "WebCord", "webcord", NULL };
static const char *dispad[] = {"Scratchpad.sh", "title", "discordtabbed", "discordtabbed.sh", NULL };
//static const char *steampad[] = { "Scratchpadmutifile.sh", "class", "Steam", "steam", NULL };
static const char *steampad[] = { "Scratchpad2.sh", "Steam", "Steam", "steam", NULL };
static const char *mullpad[] = { "ScratchpadMULL.sh", NULL };
static const char *tabbedpad[] = {"Scratchpad.sh", "title", "dwmtabbed", "tabc.sh", "autoadd", "-n", "dwmtabbed", NULL };

static const char *dynamicinpad[] = {"Scratchpadfiledynamic.sh", "1", NULL };
static const char *dynamicoutpad[] = {"Scratchpadfiledynamic.sh", "0", NULL };
static const char *dynamicnamecmd[] = {"Scratchpaddynamiclist.sh"};

/* scratchpads */
/*First arg only serves to match against key in rules*/
//static const char *scratchpadcmd[] = {"s", "st", "-t", "scratchpad", NULL}; 
//static const char *listcmd[] = {"l", "st", "-t", "splistbinds", "-e", "binds.sh", NULL }; 
//static const char *cmuscmd[] = {"c", "st", "-c", "spcmus", "-g", "120x34", "-e", "cmus", NULL };
//static const char *podcmd[] = {"a", "st", "-c", "sppod", "-g", "120x34", "-e", "castero", NULL }; 
//static const char *ncspotcmd[] = {"w", "st", "-c", "spncspot", "-g", "120x34", "-e", "ncspot", NULL }; 
//static const char *steamcmd[] = {"z", "steam", NULL }; 
//static const char *keycmd[] = {"x", "keepassxc", NULL }; 
//static const char *nyrnacmd[] = {"m", "nyrna", NULL };
//static const char *mullvadcmd[] = {"r", "mullvad-vpn", NULL };
//static const char *tabbedcmd[] = {"n", "tabc.sh", "autoadd", "-n", "dwmtabbed", NULL };
//static const char *discordcmd[] = {"d", "discordtabbed.sh", NULL };
//static const char *firefox[] = {"x", "keepassxc", NULL }; 
//static const char *noisecmd[] = {"x", "noisetorch", NULL }; 

#include "push.c"
#include "center.c"
#include "show.c"
static Key keys[] = {
	/* modifier                     iey        function        argument */
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_d,      spawn,          SHCMD("sleep 3 && uptray.sh") }, 
	{ MODKEY,                       XK_y,      spawn,          {.v = scratchpad } },
	//{ MODKEY,                       XK_a,      spawn,          {.v = cmuspad } },
	{ MODKEY,                       XK_a,      spawn,          {.v = mpcpppad } },
	{ MODKEY|ShiftMask,             XK_a,      spawn,          {.v = spotpad } },
	{ MODKEY|ControlMask,           XK_a,      spawn,          {.v = podpad } },
	{ MODKEY|ShiftMask,             XK_m,      spawn,          {.v = nyrnapad } },
	{ MODKEY,                       XK_w,      spawn,          {.v = dispad } },
	{ MODKEY,                       XK_x,      spawn,          {.v = keepassxcpad } },
	{ MODKEY,                       XK_z,      spawn,          {.v = steampad } },
	{ MODKEY,                       XK_grave,  spawn,          {.v = dynamicinpad } },
	{ MODKEY|ShiftMask,             XK_grave,  spawn,          {.v = dynamicoutpad } },
	{ MODKEY|ControlMask,           XK_grave,  spawn,          {.v = dynamicnamecmd } },
	{ MODKEY|ShiftMask,             XK_z,      spawn,          {.v = rofisteamcmd } },
	{ MODKEY,                       XK_bracketleft, spawn,     {.v = mullpad } },
//	{ MODKEY,                       XK_z,      spawn,          SHCMD("sleep 0.1 && xdo hide -N steam")}, 
	{ MODKEY,                       XK_Print,  spawn,          SHCMD("scrot -e 'mv $f ~/screenshot'")}, 
	{ MODKEY,                       XK_bracketright,  spawn,          SHCMD("pkill -USR1 redshift")}, 
	{ MODKEY,                       XK_r,      spawn,          SHCMD("tabc.sh autoadd -n dwmtabbed")}, 
	{ MODKEY|ShiftMask,             XK_r,      spawn,          SHCMD("tabc.sh autoremove -n dwmtabbed")}, 
//	{ MODKEY|ControlMask,           XK_r,      togglescratch,  {.v = tabbedcmd } },
	{ MODKEY|ControlMask,           XK_r,      spawn,          {.v = tabbedpad } },
	{ MODKEY,                       XK_n,      spawn,          {.v = dmenutraycmd }}, 
        { MODKEY,                       XK_F4,     spawn,          SHCMD("amixer set Capture toggle") },
        { MODKEY|ShiftMask,             XK_f,     spawn,          SHCMD("wmctrl -r ':ACTIVE:' -b toggle,fullscreen") },
	{ MODKEY|ShiftMask,             XK_d,      spawn,          {.v = i3dmenucmd } },	
	{ MODKEY,                       XK_v,      spawn,          SHCMD("dmenu_websearch")},
	{ MODKEY|ShiftMask,             XK_v,      spawn,          SHCMD("dmenu_bookmarks_menu")},
	{ MODKEY,                       XK_m,  	   spawn,          SHCMD("nyrna -t")}, 
 	{ MODKEY,                       XK_Tab,    view,           {0} },
//	{ MODKEY,                       XK_w,      togglescratch,  {.v = discordcmd } },
/*	{ MODKEY|ShiftMask,             XK_m,  	   spawn,          {.v = nyrna } }, */ 
	{ MODKEY,                       XK_e,      spawn,          {.v = webcmd } },
	{ MODKEY|ShiftMask,             XK_e,      spawn,          {.v = secwebcmd } },
	{ MODKEY,                       XK_Pause,  spawn,          {.v = lockcmd} },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
/*	{ MODKEY,                       XK_z,      spawn,          {.v = steamcmd } }, */
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,  {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,  {.i = -1 } },
//	{ MODKEY,                       XK_j,      focusstackvis,  {.i = +1 } },
//	{ MODKEY,                       XK_k,      focusstackvis,  {.i = -1 } },
//	{ MODKEY|ControlMask,           XK_j,      focusstackhid,  {.i = +1 } },
//	{ MODKEY|ControlMask,           XK_k,      focusstackhid,  {.i = -1 } },
//	{ Mod1Mask,           XK_Tab,      focusstackhid,  {.i = -1 } },
	{ ALTMODKEY,                    XK_Tab,    focusstack,     {.i = +1 } },
	{ ALTMODKEY|ShiftMask,          XK_Tab,    focusstack,     {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_j,      pushdown,       {0} },
	{ MODKEY|ShiftMask,             XK_k,      pushup,         {0} },
	{ MODKEY,                       XK_o,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_p,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,             		XK_c, 	   center,           {0} },
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY|ShiftMask,             XK_q,      killclient,     {0} },
	{ MODKEY|ShiftMask,             XK_q,      spawn,          SHCMD("sleep 3 && uptray.sh")},
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_g,      setlayout,      {.v = &layouts[2]} },

	{ MODKEY|ControlMask,           XK_s,      show,           {0} },
//	{ MODKEY,                       XK_s,      hide,           {0} },
	
/*	{ MODKEY|ShiftMask,             XK_f,      fullscreen,     {0} },
	{ MODKEY,                       XK_r,      fullscreen,     {0} }, */

	{ MODKEY,                       XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	/* VOLUME */
	{0,                             XF86XK_AudioLowerVolume,	spawn,	SHCMD("volumeControl.sh down")  },
	{0,                             XF86XK_AudioRaiseVolume,	spawn,	SHCMD("volumeControl.sh up")  },
	{0,                             XF86XK_AudioMute,	spawn,	SHCMD("volumeControl.sh mute")  },
	/* Keybindings for Media play/pause/next/previous */
	{ 0, XF86XK_AudioPlay, spawn, {.v = medplaypausecmd } },
	{ 0, XF86XK_AudioNext, spawn, {.v = mednextcmd } },
	{ 0, XF86XK_AudioPrev, spawn, {.v = medprevcmd } },
//	{ MODKEY,                       XK_y,      togglescratch,  {.v = scratchpadcmd } },
//	{ MODKEY,                       XK_i,      togglescratch,  {.v = listcmd } },
//	{ MODKEY,                       XK_a,      togglescratch,  {.v = cmuscmd } },
//	{ MODKEY|ShiftMask,             XK_a,      togglescratch,  {.v = podcmd } },
//	{ MODKEY|ControlMask,           XK_a,      togglescratch,  {.v = ncspotcmd } }, 
//	{ MODKEY,                       XK_x,      togglescratch,  {.v = keycmd } },
//	{ MODKEY,                       XK_z,      togglescratch,  {.v = steamcmd } },
//	{ MODKEY|ShiftMask,             XK_m,      togglescratch,  {.v = nyrnacmd } },
//	{ MODKEY,                       XK_bracketleft,      togglescratch,  {.v = mullvadcmd } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_Escape,      quit,           {0} },
	/* old binds remove later ?*/
/*	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
 *	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
 *	{ MODKEY,                       XK_b,      togglebar,      {0} },
 *	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
 *	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
 *	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
 *	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
 * 	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
 *	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
 *	{ MODKEY|ShiftMask,             XK_j,      movestack,      {.i = +1 } },
 *	{ MODKEY|ShiftMask,             XK_k,      movestack,      {.i = -1 } },
 *	{ MODKEY,                       XK_Return, zoom,           {0} },
 *	{ MODKEY,                       XK_Tab,    view,           {0} },
 *	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
 *	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
 *	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
 *	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[2]} },
 *	{ MODKEY,                       XK_space,  setlayout,      {0} },
 *	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
 *	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
 *	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
 * 	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
 *	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
 *	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
 *	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
 *	{ MODKEY,            			XK_y,  	   togglescratch,  {.ui = 0 } },
 *	{ MODKEY,            			XK_u,	   togglescratch,  {.ui = 1 } },
 *	{ MODKEY,            			XK_x,	   togglescratch,  {.ui = 2 } },
 *	TAGKEYS(                        XK_1,                      0)
 *	TAGKEYS(                        XK_2,                      1)
 *	TAGKEYS(                        XK_3,                      2)
 *	TAGKEYS(                        XK_4,                      3)
 *	TAGKEYS(                        XK_5,                      4)
 *	TAGKEYS(                        XK_6,                      5)
 *	TAGKEYS(                        XK_7,                      6)
 *	TAGKEYS(                        XK_8,                      7)
 *	TAGKEYS(                        XK_9,                      8)
 *	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },i */
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkStatusText,        0,              Button1,        sigstatusbar,   {.i = 1} },
	{ ClkStatusText,        0,              Button2,        sigstatusbar,   {.i = 2} },
	{ ClkStatusText,        0,              Button3,        sigstatusbar,   {.i = 3} },
	{ ClkStatusText,        0,              Button4,        sigstatusbar,   {.i = 4} },
	{ ClkStatusText,        0,              Button5,        sigstatusbar,   {.i = 5} },
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
//	{ ClkWinTitle,          0,              Button1,        togglewin,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
/*	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } }, */
//	{ ClkStatusText,        0,              Button2,        spawn,          {.v = dmenutraycmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	//{ ClkClientWin,         MODKEY|ShiftMask, Button1,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY, Button3,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY|ShiftMask, Button1,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};
