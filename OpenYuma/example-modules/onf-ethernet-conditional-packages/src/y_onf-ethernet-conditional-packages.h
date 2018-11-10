
#ifndef _H_y_onf_ethernet_conditional_packages
#define _H_y_onf_ethernet_conditional_packages
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    Yuma SIL header
    module onf-ethernet-conditional-packages
    revision 2017-04-02
    namespace urn:onf:params:xml:ns:yang:onf-ethernet-conditional-packages
    organization ONF (Open Networking Foundation) Open Transport Working Group - Wireless Transport Project

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_onf_ethernet_conditional_packages_M_onf_ethernet_conditional_packages (const xmlChar *)"onf-ethernet-conditional-packages"
#define y_onf_ethernet_conditional_packages_R_onf_ethernet_conditional_packages (const xmlChar *)"2017-04-02"

#define y_onf_ethernet_conditional_packages_N_ethernet_capability (const xmlChar *)"ethernet-capability"
#define y_onf_ethernet_conditional_packages_N_ethernet_configuration (const xmlChar *)"ethernet-configuration"
#define y_onf_ethernet_conditional_packages_N_ethernet_current_performance (const xmlChar *)"ethernet-current-performance"
#define y_onf_ethernet_conditional_packages_N_ethernet_current_problems (const xmlChar *)"ethernet-current-problems"
#define y_onf_ethernet_conditional_packages_N_ethernet_historical_performances (const xmlChar *)"ethernet-historical-performances"
#define y_onf_ethernet_conditional_packages_N_ethernet_pac (const xmlChar *)"ethernet-pac"
#define y_onf_ethernet_conditional_packages_N_ethernet_status (const xmlChar *)"ethernet-status"
#define y_onf_ethernet_conditional_packages_N_layer_protocol (const xmlChar *)"layer-protocol"
#define y_onf_ethernet_conditional_packages_N_vlan_id (const xmlChar *)"vlan-id"
/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_init
* 
* initialize the onf-ethernet-conditional-packages server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_onf_ethernet_conditional_packages_init (
    const xmlChar *modname,
    const xmlChar *revision);

/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_onf_ethernet_conditional_packages_init2 (void);

/********************************************************************
* FUNCTION y_onf_ethernet_conditional_packages_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_onf_ethernet_conditional_packages_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif