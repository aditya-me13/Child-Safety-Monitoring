/* Include files */

#include "sending_app1_cgxe.h"
#include "m_39dYKqcIOj3tuPvS2vxNOH.h"
#include "m_xdwqvjc2V7LaCE05bRJYlC.h"
#include "m_1RwBF9z9PNZV0OWrc7avoE.h"
#include "m_qJo9cy3En3W2FoRCrT1BKC.h"
#include "m_jqQlM94CMO87LGlwjb1OO.h"
#include "m_BEVhzztUAu7LIJpT1x8IZC.h"
#include "m_fRmvTxZe2uD9E1EgoghCq.h"

unsigned int cgxe_sending_app1_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 440995751 &&
      ssGetChecksum1(S) == 2488759570 &&
      ssGetChecksum2(S) == 2932061745 &&
      ssGetChecksum3(S) == 3636523466) {
    method_dispatcher_39dYKqcIOj3tuPvS2vxNOH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1997034900 &&
      ssGetChecksum1(S) == 821610272 &&
      ssGetChecksum2(S) == 1822307796 &&
      ssGetChecksum3(S) == 3607696420) {
    method_dispatcher_xdwqvjc2V7LaCE05bRJYlC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2437186796 &&
      ssGetChecksum1(S) == 707103942 &&
      ssGetChecksum2(S) == 2509350854 &&
      ssGetChecksum3(S) == 4027154143) {
    method_dispatcher_1RwBF9z9PNZV0OWrc7avoE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2665859946 &&
      ssGetChecksum1(S) == 2591674463 &&
      ssGetChecksum2(S) == 2491365990 &&
      ssGetChecksum3(S) == 4141790941) {
    method_dispatcher_qJo9cy3En3W2FoRCrT1BKC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3520242848 &&
      ssGetChecksum1(S) == 3095280894 &&
      ssGetChecksum2(S) == 3153224288 &&
      ssGetChecksum3(S) == 1936219861) {
    method_dispatcher_jqQlM94CMO87LGlwjb1OO(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3667844067 &&
      ssGetChecksum1(S) == 1338069608 &&
      ssGetChecksum2(S) == 2746548706 &&
      ssGetChecksum3(S) == 2989072507) {
    method_dispatcher_BEVhzztUAu7LIJpT1x8IZC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4219020053 &&
      ssGetChecksum1(S) == 79991297 &&
      ssGetChecksum2(S) == 2573369578 &&
      ssGetChecksum3(S) == 717666244) {
    method_dispatcher_fRmvTxZe2uD9E1EgoghCq(S, method, data);
    return 1;
  }

  return 0;
}
