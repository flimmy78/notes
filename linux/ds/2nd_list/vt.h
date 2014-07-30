#ifndef __VT_H__
#define __VT_H__

extern void gotoxy(int x, int y);
extern void move_up(int step);
extern void move_right(int step);
extern void move_down(int step);
extern void move_left(int step);
extern void putch(int fcolor, int bcolor, int c);
extern void putstr(int fcolor, int bcolor, char *s);
extern void save_cur(void);
extern void hide_cur(void);
extern void load_cur(void);
extern void show_cur(void);
extern void clean(int);
extern void draw_pixel(int x, int y, int ch, int color);
extern void draw_vline(int x, int y, int len, int border, int ch, int color);
extern void draw_rect(int x, int y, int w, int h, int color, int ch);
extern void draw_box(int x, int y, int w, int h, int color, int ch);

#endif /* __VT_H__ */
