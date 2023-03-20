#include<stdio.h>
#include<stdlib.h>// for clear screen function.
#include<unistd.h>// for using sleep function.
#include<time.h>// FOR THE NOTING OF TIME.
// BACKGROUND OF PAGE 
void black_background()
{printf("\e[40m");}
// FUCTIONS FOR COLOUR.
void blackbold() {
  printf("\033[1;30m");}
void redbold() {
  printf("\033[1;31m");}
void red() {
  printf("\033[0;31m");}
void yellowbold(){
  printf("\033[1;33m");}
void yellow(){
  printf("\033[0;33m");}
void bluebold() {
  printf("\033[1;34m");}
void purplebold() {
  printf("\033[1;35m");}
void purple() {
  printf("\033[0;35m");}
void whitebold() {
  printf("\033[1;37m");}
void cyan() {
  printf("\033[1;36m");}
void greenbold() {
  printf("\033[1;32m");}
void green() {
  printf("\033[0;32m");}
void reset() {
  printf("\033[0m");}

   // fuction for the background PATTERN page 1.
  void background(){
  whitebold();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=77;e++){
      printf("%c",4);}}
// FUCTION FOR BACKGROUND  PATTERNOF PAGE 2.
 void background2(){
    purplebold();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=80;e++){
      printf("%c",249);}
      reset();
 }
  // fuction for the background PATTERN of loading page .
  void background3()
  {
       bluebold();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=77;e++){
      printf("%c",3);}

  }
   // fuction for the background effect of number game menu .
  void background4()
  {
       cyan();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=85;e++){
      printf("%c",6);}

  }
   // fuction for the background effect of instruction .
  void background5()
  {
       cyan();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=85;e++){
      printf("%c",240);}

  }
   // fuction for the background effect of PLAY NO. GAME.
  void background6()
  {
       whitebold();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=85;e++){
      printf("%c",219);}
  }
  // BACKGROND EFFECT OF THE QUIZ GAME.
  void background7()
  {
       cyan();
  printf("\n\t\t\t\t ");
    for(int e=0;e<=47;e++){
      printf("%c ",16);}
  }
// fuction for the background PATTERN TIC TAC TOE.
  void background8(){
  purplebold();
  printf("\n\t\t\t\t\t");
    for(int e=0;e<=77;e++){
      printf("%c",176);}}

//.........................................ALL FUCTION IN THE GAME.........................................................
     int page1();
     int page2();
     int guess_game_menu();
     int question_game();
     int TIC_TAC_TOE();

//............................................................DRIVING CODE...................................................................................

int main(){
    page1();
    page2();
      
      return 0;
  }

//.........................................................LOADING PAGE.............................................................................................

    void load(){
      system("cls");
    black_background();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    printf("\n\t\t\t\t\t\t");
    cyan();
    black_background();
    printf("\n\t\t\t\t\t\t\t\t");
    printf("     ");
    printf(" LOADING ",254);
       redbold();
      sleep(1);// delay in time.
      printf("%c %c ",254,254);
      yellowbold();
      sleep(1);// delay in time.
      printf("%c %c ",254,254);
      greenbold();
      sleep(1);// delay in time.
      printf("%c %c     \n",254,254);
      background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    background3();
    reset();
    sleep(1);
    system("cls");
    
    
    }

//............................................................PAGE 1.................................................................................................
  int page1(){
      system("cls");
      black_background();
      background();
      background();
      // intro
      printf("\n\t\t\t\t\t\t\t\t\t");
      purplebold();
      printf("   WELCOME   ");
      background();
      background();
      background();
      purplebold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      printf("     TO     ");

      // MAKING THE TITTLE OF THE GAME.
      background();
      background();
      background();
      redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for upper line of playtime
      {printf("%c",254);}

      cyan();
      printf("\n\t\t\t\t\t\t");
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}

      yellowbold();
    printf("   PLAY TIME  ");
      cyan();
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}

      redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for lower line of playtime.
      { printf("%c",254);}
      reset();
      black_background();
      // qoate+information.
      background();
      background();
      printf("\n\t\t\t\t\t\t\t\t");
      purplebold();
      printf("     THE WORLD OF ENJOYMENT   ");
      yellowbold();
      printf("%c  ",2);
      background();
      background();
      background();
      printf("\n\t\t\t\t\t\t\t\t\t\t");
      yellow();
      black_background();
    printf("  %c CREATED BY : ACE OF GAMES  %c  ",3,3);
    background();
    background();
    background();
      cyan();
      printf("\n\t\t\t\t\t\t\t\t\t");
      printf("  LOADING ");
        redbold();
        sleep(1);// delay in time.
        printf("%c %c ",254,254);
        yellowbold();
        sleep(1);// delay in time.
        printf("%c %c ",254,254);
        greenbold();
        sleep(1);// delay in time.
        printf("%c %c  ",254,254);
        background();
        background();
        background();
        printf("\n\t\t\t\t\t\t\t\t\t\t\t");
        greenbold();
        printf("    PRESS %c TO CONTINUE:",49);
        int d ;
        scanf("%d",&d);
        reset();
        if(d==1){
          system("cls");
        }

    }

//............................................................PAGE 2..................................................................................................

    int page2(){
       system("cls");
    black_background();
    // PAGE 2ND OF GAME.
    // MAKING TITTLE.
     redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      printf("%c",254);
      for(int i=0;i<=15;i++)// for upper line of playtime
      {printf("%c",254);}

      cyan();
      printf("\n\t\t\t\t\t\t");
      for(int a=0;a<=24;a++)// for diamond line across playtime.
      {printf("%c",4);}
      yellowbold();

    printf("   PLAY TIME   ");
      cyan();
      for(int a=0;a<=24;a++)// for diamond line across playtime.
      {printf("%c",4);}

      redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      printf("%c",254);
      for(int i=0;i<=15;i++)// for lower line of playtime.
      { printf("%c",254);}
      reset();

      black_background();
      // BACKGROUND EFFECT.
      background2();
      black_background();
      background2();
      black_background();
      background2();
      black_background();
      background2();
      black_background();
      background2();
      black_background();
        //MAKING THE MENU.
        yellowbold();
        printf("\n\t\t\t\t\t\t\t\t\t");
        printf("  %c MAIN MENU %c  ",4,4);
        reset();
        black_background();
         // BACKGROUND EFFECT.
        background2();
        black_background();
        background2();
        black_background();
        background2();
        black_background();
        background2();
        black_background();
        background2();
        black_background();

         // LINE CONTAINING THE GAME NAME AND CODE=(_)
         red();
         black_background();
        printf("\n\t\t\t\t\t\t\t\t    %c ",4);
        black_background();
        yellowbold();
        printf("GAME NAME    :   (CODE=_) ");
        red();
        black_background();
        printf("%c ",4);

        // MAKING THE BOX BELOW GAME NAME AND CODE=(_).
        purplebold();
        black_background();
        printf("\n\t\t\t\t\t\t\t\t");
        printf(" %c ",4);
        whitebold();
        black_background();
        for(int b=0;b<=29;b++)
        {printf("%c",254);}
        purplebold();
        black_background();
        printf(" %c",4);
        black_background();
        whitebold();
        printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line
        //NUMBER GAME.
        black_background();
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        black_background();
        redbold();
        printf("NUMBER GUESS ");
        whitebold();
        printf(": ");
        cyan();
        printf("   CODE=1");
        reset();
        black_background();
        printf("    %c",219);// last box of the line number ganme and code=1.
        // QUIZ GAME.
        printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        redbold();
        printf("OUICK  QUIZ ");
        whitebold();
        printf(" : ");
        cyan();
        printf("   CODE=2");
        reset();
        black_background();
        printf("    %c",219);// last box of the line quiz game and code=2.
           // TIC TAC TOE
         printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        redbold();
        printf("TIC TAC TOE  ");
        whitebold();
        printf(": ");
        cyan();
        printf("   CODE=3");
        reset();
        black_background();
        printf("    %c",219);// last box of the line   game and code=3.
          // BACK
         printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        redbold();
        printf("  BACK      ");
        whitebold();
        printf(" : ");
        cyan();
        printf("   CODE=0");
        reset();
        black_background();
        printf("    %c",219);// last box of the line BACK and code=0.

        // LAST LINE OF THE BOX.
        purplebold();
        printf("\n\t\t\t\t\t\t\t\t");
        printf(" %c ",4);
        whitebold();
        for(int b=0;b<=29;b++)
        {printf("%c",254);}
        purplebold();
        printf(" %c",4);
        reset();
        black_background();
       // LINE BELOW THE BOX.
       background2();
       black_background();
       background2();
       black_background();
       while (1){
       printf("\n\t\t\t\t\t\t\t\t     ");
       printf("PLEASE ENTER THE DESIRED CODE :");
       int a;
       scanf("%d",&a);
       if(a==1){
         system("cls");
         load();
        guess_game_menu();
        
         break;
        }
       else if(a==2){
          system("cls");
          load();
          question_game();
         break;
         }
       else if(a==3){
          system("cls");
          load();
         TIC_TAC_TOE();
          break;

       }
       else if(a==0){
          system("cls");
          main();
         break;
       }
       else{
         background2();
         black_background();
         yellowbold();
         printf("\n\t\t\t\t\t\t\t\t     ");
         printf("PLEASE ENTER VALID CODE:-\n");
         reset();
         black_background();
         continue;
       }
       }
    }

 //............................................................GAME-1..............................................................................................
 //......................................................PLAY IN GUESS GAME........................................................................................
int play(){
     system("cls");
   // NOTING THE START TIME OF THE GAME.
      time_t start =time(0);
  black_background();
    // CREATING THE HEAd LINE= NUMBER GUESS.
   redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    yellowbold();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf(" NUMBER GUESS ");
   reset();
   black_background();
    yellowbold();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();

    // GENERATIN A RANDOM NO.
    black_background();
    background6();
    background6();
    purplebold();
    printf("\n\t\t\t\t\t\t\t\t\t  ");
    printf("* SYSTEM IS GENERATING A RANDOM NO.: ");
    redbold();
    black_background();
    sleep(2);
    printf("%c %c ",254,254);
    yellowbold();
    black_background();
    sleep(1);
    printf("%c %c ",254,254);
    greenbold();
    black_background();
    sleep(1);
    printf("%c %c",254,254);
    sleep(1);

    system("cls");
     // CREATING THE HEAd LINE= NUMBER GUESS.
   redbold();
   black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    yellowbold();
    black_background();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf(" NUMBER GUESS ");
   reset();
    yellowbold();
    black_background();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();

    //RANDOM NO. GENERATED .
    black_background();
    background6();
    background6();
    bluebold();
    printf("\n\t\t\t\t\t\t\t\t\t  ");
    printf("* RANDOM NUMBER GENERATED SUCCESSFULLY : ");
    greenbold();
    black_background();
    printf("%c %c %c %c %c %c ",254,254,254,254,254,254);
    reset();
    // GENERATING A RANDOM NO. ACTUAL PROCESS 
    srand(time(0));
    int random_num;
    random_num=rand()%100+1; // CONDITION SO THAT OUR RANDOM NO. IS IN BETWEEN 1 TO 100
    int y,count=0;
    black_background();
    while(y!=random_num){
      count++;
     
    // ENTER UR NO.
     black_background();
     background6();
     background6();
     background6();
     purplebold();
    printf("\n\t\t\t\t\t\t\t");
    printf(" %c ENTER YOUR GUESSED NUMBER :",4);
    scanf("%d",&y);
    redbold();
     black_background();
    printf("\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("    ATTEMP NO.:%d ",count);
    if(y>random_num){
      background6();
      background6();
      printf("\n\t\t\t\t\t\t\t");
      greenbold();
       black_background();
      printf("* HINT:");
      printf("PLEASE ENTER A NO. LESS THEN YOUR PREVIOUS GUESS");
    }
    else if(y<random_num){
      background6();
      background6();
       printf("\n\t\t\t\t\t\t\t");
       greenbold();
        black_background();
      printf("* HINT:");
      printf("PLEASE ENTER A NO. GREATER THEN YOUR PREVIOUS GUESS");
    }
    }
    time_t end= time(0);// NOTING THE END TIME OF THE GAME.
    int time=(end-start)-5;

     black_background();
     background6();
     background6();
     yellowbold();
    printf("\n\t\t\t\t\t\t\t\t");
    printf("    %c %c %c CONGRATULATION %c %c %c ",1,1,1,1,1,1);
    background6();
    yellowbold();
    printf("\n\t\t\t\t\t\t\t\t");
    printf("      %c YOU WON THE GAME %c",4,4);
    redbold();
     black_background();
    printf("\n\t\t\t\t");
    printf("    %c TOTAL ATTEMPS TAKEN :%d %c",4,count,4);
     printf("\t\t\t\t\t %c TOTAL TIME TAKEN :%d SECOND %c",4,time,4);

      // MAKING BACK.
      yellowbold();
     printf("\n\n\n\t\t\t\t\t\t\t\t");
     printf("         PRESS 0 TO GO BACK:");
     int g;
     scanf("%d",&g);
     if(g==0){
       main();
     }
      reset();

    return 0;
  }

 //...................................................INSTRUCTION IN GUESS GAME...................................................................................

int instruction(){
     system("cls");
    // CREATING THE HEAd LINE= NUMBER GUESS.
   redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    yellowbold();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf(" NUMBER GUESS ");
   reset();
    yellowbold();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();

    black_background();
    background5();
    background5();
    background5();
     redbold();
    printf("\n\t\t\t\t\t\t\t\t\t  ");
    printf("* INSTRUCTIONS:-");
    reset();
    yellowbold();
    black_background();
    printf("\n\n\t\t\t\t\t");
    printf("%c SYSTEM WILL GENERATE A RANDOM NUMBER.",4);
    printf("\n\n\t\t\t\t\t");
    printf("%c YOU HAVE TO ENTER YOUR GUESS NUMBER.",4);
    printf("\n\n\t\t\t\t\t");
    printf("%c IF YOUR GUESS NUMBER IS EQUAL TO THE RANDOM NUMBER THEN  YOU WIN THE GAME.",4);
    printf("\n\n\t\t\t\t\t");
    printf("%c IF YOUR GUESS NUMBER IS NOT EQUAL TO THE RANDOM NUMBER THEN  YOU WILL GET A HINT.\n",4);
    black_background();
    background5();
    background5();
    background5();
    background5();
    background5();
    black_background();
    greenbold();
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t");
    printf("  PRESS 0 TO GO BACK:");
    int x;
    scanf("%d",&x);
    if(x==0){
        main();
    }

    return 0;
  }

//.........................................................GUESS GAME MENU.......................................................................................

 int guess_game_menu(){
    system("cls");
  // CREATING THE HEAd LINE= NUMBER GUESS.
   redbold();
   black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    yellowbold();
    black_background();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf(" NUMBER GUESS ");
   reset();
    yellowbold();
    black_background();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();
      // UPPER LINE OF THE BOX.
      black_background();
      background4();
      background4();
      background4();
      background4();
     purplebold();
        black_background();
        printf("\n\t\t\t\t\t\t\t\t");
        printf(" %c ",4);
        whitebold();
        black_background();
        for(int b=0;b<=29;b++)
        {printf("%c",254);}
        purplebold();
        black_background();
        printf(" %c",4);
        black_background();
        whitebold();
        printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line

          //PLAY.
        black_background();
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        black_background();
        redbold();
        printf("    PLAY     ");
        whitebold();
        printf(": ");
        cyan();
        printf("   CODE=1");
        reset();
        black_background();
        printf("    %c",219);// last box of the line number ganme and code=1.
        printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line
         //INSTRUCTIONS.
        black_background();
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        black_background();
        redbold();
        printf(" INSTUCTIONS ");
        whitebold();
        printf(": ");
        cyan();
        printf("   CODE=2");
        reset();
        black_background();
        printf("    %c",219);// last box of the line number ganme and code=2.
        printf("\n\t\t\t\t\t\t\t\t %c                                %c",219,219);// 2 boxes of the line next to the above line
        // BACK.
        black_background();
        printf("\n\t\t\t\t\t\t\t\t %c  * ",219);
        black_background();
        redbold();
        printf("    BACK     ");
        whitebold();
        printf(": ");
        cyan();
        printf("   CODE=0");
        reset();
        black_background();
        printf("    %c",219);// last box of the line number ganme and code=3.
        printf("\n\t\t\t\t\t\t\t\t %c                                %c\n",219,219);// 2 boxes of the line next to the above line

         // LOWER LINE OF THE BOX.
     purplebold();
        black_background();
        printf("\t\t\t\t\t\t\t\t");
        printf(" %c ",4);
        whitebold();
        black_background();
        for(int b=0;b<=29;b++)
        {printf("%c",254);}
        purplebold();
        black_background();
        printf(" %c",4);
        black_background();
        whitebold();
        
         // LINE BELOW THE BOX.
        background4();
       background4();
       black_background();
       background4();
       black_background();
       while (1){
       printf("\n\t\t\t\t\t\t\t\t     ");
       yellowbold();
       printf("PLEASE ENTER THE DESIRED CODE :");
       int a;
       scanf("%d",&a);
       if(a==1){
         system("cls");
         play();
         break;}
         else if(a==2){
          system("cls");
         instruction();
         break;
         }
         else if(a==0){
           system("cls");
           main();
           break;
         }
          else{
         background4();
         black_background();
         yellowbold();
         printf("\n\t\t\t\t\t\t\t\t     ");
         printf("PLEASE ENTER VALID CODE:-\n");
         reset();
         black_background();
         continue;
       }
       }
         
    reset();
    return 0;
 }

//..............................................................GAME-2...........................................................................................

//.............................................FUCTION FOR THE QUESTION IN THE QUESTION GAME...................................................................

void question(char *p,char *opt_a,char *opt_b,char *opt_c,char *opt_d,int *t,int corr_opt,int count)
  {
     system("cls");
      // MAKING THE HEADING.
      redbold();
   black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    purplebold();
    black_background();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf("  QUIZ~~GAME  ");
   reset();
    purplebold();
    black_background();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();
    black_background();
    background7();
    background7();
    background7();
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
    int e=0;
    redbold();
    printf(" %c POINTS : %d ",4,*t);
    time_t begin=time(0);// counting the time of answering the question
    // WRITING THE QUESTION.
    printf("\n\n\t\t\t\t\t\t");
    cyan();
    printf("* QUES %d)  ",count);
    yellowbold();
    printf("%s \n",p);
    // WRITING THE OPTIONS.
    redbold();
    printf("\n\n\t\t\t\t\t\t\t");
    printf(" (1)%s",opt_a);
    printf("\t\t\t\t");
    printf(" (2)%s",opt_b);
     redbold();
    printf("\n\n\t\t\t\t\t\t\t");
    printf(" (3)%s",opt_c);
    printf("\t\t\t\t");
    printf(" (4)%s\n",opt_d);
    // WRITING PLZ ENTER YOUR ANSWER.
    int j;
    printf("\n\t\t\t\t\t\t\t");
    yellowbold();
    printf("%c PLEASE ENTER YOUR SELECTED OPTION : ",4);
    scanf("%d",&j);
     time_t end=time(0);
     int g=end-begin;

    if(j==corr_opt){
        greenbold();
        printf("\n\n\t\t\t\t\t\t\t\t");
        printf("     CONGRATULATION %c   ",1);
        printf("\n\t\t\t\t\t\t\t\t");
        printf(" YOUR ANSWER IS CORRECT ");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t");
        purplebold();
        printf("TIME TAKEN TO ANSWER : %d SECONDS",g);
        if(g<=10){
          *t=*t+15;
           printf("\n\n\t\t\t\t\t\t\t\t\t");
           redbold();
          printf("POINTS : %d",*t);
        }
        else{
           *t=*t+10;
           printf("\n\n\t\t\t\t\t\t\t\t\t\t\t");
           redbold();
          printf("POINTS : %d",*t);
        }
    }
    else{
         *t=*t+0;
        redbold();
        printf("\n\n\t\t\t\t\t\t\t\t\t");
        printf("SORRY");
        printf("\n\t\t\t\t\t\t\t\t");
        printf("YOUR ANSWER IS WRONG");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t");
        purplebold();
        printf("TIME TAKEN TO ANSWER : %d SECONDS ",g);
         printf("\n\n\t\t\t\t\t\t\t\t\t ");
           redbold();
          printf(" POINTS : %d  ",*t);
    }
    background7();
    background7();
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf(" PLEASE PRESS 1 FOR NEXT QUESTION : ");
    int r;
    scanf("%d",&r);
    if(r==1){
      system("cls");
      }
  }

// ................................................MAIN FUNCTION FOR THE QUESTION GAME.......................................................................
int question_game(){
        system("cls");
  // CREATING THE HEAd LINE= quiz game .
   redbold();
   black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    purplebold();
    black_background();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf("  QUIZ~~GAME  ");
   reset();
    purplebold();
    black_background();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();

// MAKING THE INSTRUCTION LINE.
    black_background();
    background7();
    background7();
    background7();
    printf("\n\t\t\t\t\t\t\t\t\t");
    whitebold();
    printf("   %c",4);
    redbold();
    printf(" NOTE:-   ");
    printf("\n\n\t\t\t\t\t\t\t\t ");
    greenbold();
    printf("%c YOU WILL GET 10 POINTS FOR EACH CORECT ANS. ",249);
    printf("\n\n\t\t\t\t\t ");
    printf("%c ALSO THE TIME WILL BE NOTED IF YOU ANSWER IN LESS THAN 10 SEC YOU WILL GET EXTRA 5 POINTS. ",249);
    printf("\n\n\t\t\t\t\t\t\t\t\t ");
    printf("%c NO NEGATIVE MARKING. \n",249);
    reset();
    // MAKING THE PLAY LINE.
    black_background();
    background7();
    background7();
    printf("\n\n\t\t\t\t\t\t\t\t ");
    yellowbold();
    printf("%c PRESS 1 TO START THE GAME:",4);
    int f;
    scanf("%d",&f);
    background7();
    background7();
    background7();
    background7();
    background7();
    sleep(2);

    if(f==1)
    {system("cls");}
    // INITIALLY OUT POINTS =0.
     int point=0;
       int *y;// MAKING POINTER FOR POINT AS WE HAVE TO SWAP ITS VALUE EACH TIME IN FUNCTION
       y=&point;
       

      char *question1="NAME A COUNTRY WHERE YOU CAN NOT BUY COCA COLA ?";
      char *opt_11=" SOMALIA ";
      char *opt_21=" BRUNEI ";
      char *opt_31=" CUBA ";
      char *opt_41=" CZECH ";
      //CORRECT_OPT=3;
      question(question1,opt_11,opt_21,opt_31,opt_41,&point,3,1);
    
    //QUESTION NO.2
     char *question2="WHICH IS THE MOST VISITED COUNTRY IN THE WORLD ?";
      char *opt_12=" FRANCE ";
      char *opt_22=" CANADA ";
      char *opt_32=" LONDON ";
      char *opt_42=" INDIA ";
      //CORRECT_OPT=1;
      question(question2,opt_12,opt_22,opt_32,opt_42,&point,1,2);
      
      //QUESTION NO.3
     char *question3="WHAT IS THE NAME OF MICKY MOUSE PET AND IT IS A PLATENT ALSO ?";
      char *opt_13=" VENUS ";
      char *opt_23=" PLUTO ";
      char *opt_33=" NEPTUN ";
      char *opt_43=" MARS ";
      //CORRECT_OPT=2;
      question(question3,opt_13,opt_23,opt_33,opt_43,&point,2,3);

        //QUESTION NO.4
     char *question4="WHICH COLOUR DO YOU MIX TO BLUE TO GET GREEN COLOUR ?";
      char *opt_14=" RED ";
      char *opt_24=" PINK ";
      char *opt_34=" YELLOW ";
      char *opt_44=" MUSTARD ";
      //CORRECT_OPT=3;
      question(question4,opt_14,opt_24,opt_34,opt_44,&point,3,4);

        //QUESTION NO.5
     char *question5="HOW MANY HEARTS DO THE OCTOPLUS HAVE  ?";
      char *opt_15=" THREE ";
      char *opt_25=" FOUR ";
      char *opt_35=" TWO ";
      char *opt_45=" ONE ";
      //CORRECT_OPT=1;
      question(question5,opt_15,opt_25,opt_35,opt_45,&point,1,5);

        //QUESTION NO.6
     char *question6="IN WHICH COUNTRY IS THE WORLDS QUIETEST ROOM LOCATED ?";
      char *opt_16=" CHINA ";
      char *opt_26=" RUSSIA ";
      char *opt_36=" AMERICA ";
      char *opt_46=" SOUTH KOREA ";
      //CORRECT_OPT=3;
      question(question6,opt_16,opt_26,opt_36,opt_46,&point,3,6);

      //QUESTION NO.7
     char *question7="EARTHS OZONE LAYER WILL MAKE FULL RECOVERY IN HOW MANY YEARS ?";
      char *opt_17=" 20 YEARS ";
      char *opt_27=" 10 YEARS ";
      char *opt_37=" 60 YAESR ";
      char *opt_47=" 50 YEARS ";
      //CORRECT_OPT=4;
      question(question7,opt_17,opt_27,opt_37,opt_47,&point,4,7);

      //QUESTION NO.8
     char *question8="MOST EARTH QUAKE PRONE COUNTRY IN THE WORLD IS ?";
      char *opt_18=" JAPAN ";
      char *opt_28=" AUSTRALIA ";
      char *opt_38=" HAWAI ";
      char *opt_48=" NEPAL ";
      //CORRECT_OPT=1;
      question(question8,opt_18,opt_28,opt_38,opt_48,&point,1,8);

      //QUESTION NO.9
     char *question9="WHAT IS THE MOST POPULAR NAME IN THE WORLD ?";
      char *opt_19=" JAMES ";
      char *opt_29=" RAHUL ";
      char *opt_39=" MUHAMMAD ";
      char *opt_49=" PETER ";
      //CORRECT_OPT=3;
      question(question9,opt_19,opt_29,opt_39,opt_49,&point,3,9);

      //QUESTION NO.10
     char *question10="WHICH AGENCY WAS FORMED IN 1914 BY LEGAL PROFESSIONALS OF 24 COUNTRIES TO CATCH CRIMINALS ?";
      char *opt_110=" MI6 ";
      char *opt_210=" INTERPOL ";
      char *opt_310=" CIA ";
      char *opt_410=" RAW ";
      //CORRECT_OPT=2;
      question(question10,opt_110,opt_210,opt_310,opt_410,&point,2,10);

      //................. MAKING THE FINAL PAGE...................................................................
      
      // MAKING THE HEADING.
      redbold();
   black_background();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for upper line of playtime
    {printf("%c",4);}

    purplebold();
    black_background();
    printf("\n\t\t\t\t\t\t");
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    cyan();
    black_background();
   printf("  QUIZ~~GAME  ");
   reset();
    purplebold();
    black_background();
    for(int a=0;a<=23;a++)// for diamond line across playtime.
    {printf("%c",4);}

    redbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    for(int i=0;i<=13;i++)// for lower line of playtime.
    { printf("%c",4);}
    reset();
    black_background();
    background7();
    background7();
    background7();

    yellowbold();
    printf("\n\t\t\t\t\t\t\t\t\t");
    printf(" %c YOUR TOTAL POINTS : %d %c ",4,point,4);
    if (point>=100)
    { greenbold();
      printf("\n\n\t\t\t\t\t\t\t");
      printf(" %c KEEP IT UP %c YOU HAVE A HIGH IQ %c ",4,1,4);
    }
    else{
      redbold();
      printf("\n\n\t\t\t\t\t\t\t\t");
      printf(" %c YOU NEED TO WORK ON YOUR GERNAL KNOWLEDGE AND SPEED %c ",4,4);
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t ");
    printf(" %c THANKS FOR PLAYING %c  ",3,3);
    printf("\n\n\t\t\t\t\t\t\t\t");
    printf(" %c PRESS 0 TO GO BACK : ",4);
    int o;
    scanf("%d",&o);
    if(o==0){
      main();
    }

    return 0;
}

//...............................................................GAME-3..........................................................................................
//................................................MAKING THE TIC TAC TOE GAME fuction.......................................................................
      char board[3][3];
      const char PLAYER = 'X';// MAKING A  GLOBAL VARIABLE
      const char COMPUTER = 'O';// MAKING A GLOBAL VARIABLE
      // FUCTION FOR FILLING THE ELEMENT INSIDE THE 2D ARRAY INITIALLY WITH NO ITEM.
       void printWinner(char winner)
{
   if(winner == PLAYER)// IF THE CHAR STORED IN THE WINNER IS EQUAL TO THE CHAR STORED IN THE PLAYER [X].
   {  black_background();
       whitebold();
       printf("\n\t\t\t\t\t\t\t\t\t");
      printf(" %c YOU WIN %c ",4,4);
   }
   else if(winner == COMPUTER)// IF THE CHAR STORED IN THE WINNER IS EQUAL TO THE CHAR STORED IN THE PLAYER [O].
   {black_background();
       whitebold();
       printf("\n\t\t\t\t\t\t\t\t\t");
      printf(" %c YOU LOSS %c ",4,4);
   }
   else{
      black_background();
       whitebold();
       printf("\n\t\t\t\t\t\t\t\t\t");
      printf(" %c IT'S A TIE %c ",4,4);
   }
}
      void resetBoard()
         {
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         board[i][j] = ' ';
      }
   }
}
      void printBoard(){
        black_background();
        cyan();
        printf("\n\n\t\t\t\t\t\t\t\t\t ");
        printf(" %c | %c | %c  ", board[0][0], board[0][1], board[0][2]);
        printf("\n\t\t\t\t\t\t\t\t\t ");
        printf("---|---|--- ");
        printf("\n\t\t\t\t\t\t\t\t\t ");
        printf(" %c | %c | %c  ", board[1][0], board[1][1], board[1][2]);
        printf("\n\t\t\t\t\t\t\t\t\t ");
        printf("---|---|--- ");
        printf("\n\t\t\t\t\t\t\t\t\t ");
        printf(" %c | %c | %c  ", board[2][0], board[2][1], board[2][2]);
        printf("\n");
      }
      int checkFreeSpaces()
{
   int freeSpaces = 9;

   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         if(board[i][j] != ' ')
         {
            freeSpaces--;
         }
      }
   }
   return freeSpaces;
}
      void playerMove()
{
   int x;
   int y;

   do
   {  black_background();
   printf("\n");
      redbold();
      printf("\t\t\t\t\t\t\t\t\t ");
      printf("%c ENTER THE ROW NO. : ",4);
      scanf("%d", &x);
      x--;
      printf("\t\t\t\t\t\t\t\t\t");
      printf(" %c ENTER THE COLOUM NO. : ",4);
      scanf("%d", &y);
      y--;
      reset();
      if(board[x][y] != ' ')// IF THE ENTERED SPACE IS PREOCCUPIED.
      { 
        black_background();
        redbold();
        printf("\n\t\t\t\t\t\t\t\t\t ");
        printf("%c Invalid move! \n",4);
      }
      else
      {
         board[x][y] = PLAYER;
         break;
      }
   } while (1);//board[x][y] != ' '
   
}
      void computerMove()
{
   //creates a seed based on current time
   srand(time(0));
   int x;
   int y;

   if(checkFreeSpaces() > 0)
   {
      do
      {
         x = rand() % 3;
         y = rand() % 3;
      } while (board[x][y] != ' ');
      
      board[x][y] = COMPUTER;
   }
   else
   {
      printWinner(' ');
   }
}
      char checkWinner()
{
   //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];// ARE FUNCTION WILL GIVE IT AS THE OUTPUT
      }
   }
   //check columns
   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];// ARE FUNCTION WILL GIVE IT AS THE OUTPUT
      }
   }
   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];// ARE FUNCTION WILL GIVE IT AS THE OUTPUT
   }

   return ' ';// IF NO ABOVE CONTION GET SATISFIED THEN OUR FUNCTION WILL GIVE A RETURN OF NO ONE IS THE WINNER 
}
     

//................................................................game.......................................................................................
    int RUN_game(){
      char winner=' ';// initially no one is the winner thats why the char variable is empty.
      //USING A WHILE LOOP FOR FILLING THE BOARD(outer while loop)
      while(1){
         system("cls");
      //.............................. MAIN HEADING OF THE TIC TAC TOE..................................................... 
    black_background();
     redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for upper line of playtime
      {printf("%c",254);}

      cyan();
      printf("\n\t\t\t\t\t\t");
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}
      yellowbold();

    printf(" TIC  TAC  TOE ");
      cyan();
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}

      redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for lower line of playtime.
      { printf("%c",254);}
      reset();

        winner=' ';// initially no one is the winner thats why the char variable is empty.
        resetBoard();

         // CONDITION THAT NO ONE IS THE WINNER AND THE THERE ARE FREE SPACES AVAILABLE.
      while(winner == ' ' && checkFreeSpaces() != 0){
         background8();
         background8();
         background8();
         printBoard();

         playerMove();// NOTING THE PLAYER MOVE
         background8();
         background8();
         background8();
         winner = checkWinner();// CHECKING THE WINNER AFTER THE MOVE THAT THE PLAYER HAD MADE
         // CODITION THAT IF WE GOT THE WINNER OR THE FREE SPACES ARE OVER THEN PLZ END THE GAME 
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }

         // IT IS COMPUTER TURN TO MAKE A MOVE .
         computerMove();
         winner = checkWinner();// CHECKIN G THE WINNER AFTER THE COMPUTER MOVE 
         // CODITION THAT IF WE GOT THE WINNER OR THE FREE SPACES ARE OVER THEN PLZ END THE GAME
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
         system("cls");
         //.............................. MAIN HEADING OF THE TIC TAC TOE..................................................... 
    black_background();
     redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for upper line of playtime
      {printf("%c",254);}

      cyan();
      printf("\n\t\t\t\t\t\t");
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}
      yellowbold();

    printf(" TIC  TAC  TOE ");
      cyan();
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}

      redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for lower line of playtime.
      { printf("%c",254);}
      reset();
      }
       printBoard();
      printWinner(winner);
      black_background();
      yellowbold();
       printf("\n\t\t\t\t\t\t\t\t\t");
      printf(" %c THANK YOU FOR PLAYING %c ",4,4);
      black_background();
      greenbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      printf(" * TO GO BACK PRESS 1: ");
      int response;
      scanf("%d",&response);
      if(response== 1){
          main();
      }
      
   } 
   return 0;
  }

//............................................................MAIN FUNCTION...................................................................................
int TIC_TAC_TOE(){
    system("cls");
    // MAIN HEADING OF THE TIC TAC TOE 
    black_background();
     redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for upper line of playtime
      {printf("%c",254);}

      cyan();
      printf("\n\t\t\t\t\t\t");
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}
      yellowbold();

    printf(" TIC  TAC  TOE ");
      cyan();
      for(int a=0;a<=23;a++)// for diamond line across playtime.
      {printf("%c",4);}

      redbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      for(int i=0;i<=13;i++)// for lower line of playtime.
      { printf("%c",254);}
      reset();
      black_background();
      background8();
      background8();
      background8();
      background8();
      // INSTRUCTION
      cyan();
      printf("\n\t\t\t\t\t\t\t ");
      printf("%c",4);
      yellowbold();
      printf(" INSTRUCTIONS : ",4);
      redbold();
      printf("THE PLAYER SIGN IS ");
      whitebold();
      printf("'X' ");
      yellowbold();
      printf("\n\t\t\t\t\t\t\t\t\t");
      printf(":");
      redbold();
      printf(" THE SYSTEM SIGN IS ");
      whitebold();
      printf("'O' ");
      background8();
      background8();
      background8();
      background8();
      background8();
      // MAKING THE NEXT PAGE LINE
      black_background();
      cyan();
       printf("\n\t\t\t\t\t\t\t\t\t ");
       printf("%c PRESS '1' FOR STARTING THE GAME : ",4);
      while(1){
       int r;
       scanf("%d",&r);
       if(r==1){
         system("cls");
         break;
       }
      }

   

      RUN_game(); 
      




    
    
    return 0;
}

