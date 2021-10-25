/* type declarations */
struct Stats
{
  float average;
  float min;
  float max;
};

/* function declarations */
struct Stats compute_statistics(const float* numberset, int setlength);
float* num_sort(float* data, int length);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

/* extern variable declarations */
extern int emailAlertCallCount;
extern int ledAlertCallCount;
