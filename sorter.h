#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <glob.h>
#include <unistd.h>
#include <math.h>

typedef struct Records{

char color[50];
char director_name[50];
int num_critic_for_reviews;
int duration;
int director_facebook_likes;
int actor_3_facebook_likes;
char actor_2_name[50];
int actor_1_facebook_likes;
int gross;
char genres[100];
char actor_1_name[50];
char movie_title[100];
int num_voted_users;
int cast_total_facebook_likes;
char actor_3_name[50];
int facenumber_in_poster;
char plot_keywords[100];
char movie_imdb_link[50];
int num_user_for_reviews;
char language[50];
char country[100];
char content_rating[50];
int budget;
int title_year;
int actor_2_facebook_likes;
int imdb_score;
int aspect_ratio;
int movie_facebook_likes;

}Records;
