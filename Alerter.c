#include "Alerter.h"
#include "stats.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  int i;
  int func_cntr = 2;
  // check if threshold mac value is breached
  if(computedStats.max >  maxThreshold)
  {
    for(i=0; i < func_cntr; i++)
    {
      // alerters are updated
      (*alerters[i])();
    }
  }
  else
  {
    // no functionality
  }
}

/* increment the email alert */
void emailAlerter()
{
  ++emailAlertCallCount;
}

/* Update led alert */
void ledAlerter()
{
  ++ledAlertCallCount;
}
