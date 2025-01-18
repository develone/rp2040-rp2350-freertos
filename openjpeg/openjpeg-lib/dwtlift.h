#ifndef	DWTLIFT_H
#define	DWTLIFT_H

double memory;
 
int loop, decomp, encode;
struct timeval currentTime,start,end;
 
long mtime, seconds, useconds;

int da_x0, int da_y0, int da_x1, int da_y1, const char *input_file;

int x0, int y0, int x1, int y1, char *ff_in;

extern double sqrt(double x);
 
extern void lift_config(int dec, int enc, int TCP_DISTORATIO, int FILTER,  int CR, int flg, int bp, long imgsz,long him,long wim, int *bufferptr);

 

typedef int int32;

extern RGB** createMatrix();

extern RGB** loadImage(FILE *arq, RGB** Matrix);

extern void Wr_p_matrix(RGB** Matrix,char *r,char *g,char *b);

extern void Wr_pp_matrix(RGB** Matrix,char *r,char *g,char *b);

extern void p_matrix(RGB** Matrix,char *r,char *g,char *b);

extern void pp_matrix(RGB** Matrix,char *r,char *g,char *b);

extern INFOHEADER readInfo(FILE *arq);

extern void writeImage(FILE *arqw, RGB** Matrix);

void writeInfo(FILE *arqw,INFOHEADER infowrite);

void isBMP(FILE* arq, INFOHEADER info);

extern static int infile_format(const char *fname);

extern int get_file_format(const char *filename);

extern int decompress(int da_x0, int da_y0, int da_x1, int da_y1, const char *input_file);
extern void decom_test(int x0, int y0, int x1, int y1, char *ff_in);

#endif