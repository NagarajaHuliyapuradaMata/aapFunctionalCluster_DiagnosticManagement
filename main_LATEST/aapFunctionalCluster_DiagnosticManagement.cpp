/******************************************************************************/
/* File   : aapFunctionalCluster_DiagnosticManagement.cpp                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_DiagnosticManagement_Conversation.hpp"
#include "interface_DiagnosticManagement_DTCInformation.hpp"
#include "interface_DiagnosticManagement_CancellationHandler.hpp"
#include "interface_DiagnosticManagement_MetaInfo.hpp"
#include "interface_DiagnosticManagement_Condition.hpp"
#include "interface_DiagnosticManagement_OperationCycle.hpp"
#include "interface_DiagnosticManagement_Indicator.hpp"
#include "interface_DiagnosticManagement_Monitor.hpp"
#include "interface_DiagnosticManagement_Event.hpp"
#include "interface_DiagnosticManagement_MultipleCondition.hpp"
#include "interface_DiagnosticManagement_MultipleEvent.hpp"
#include "interface_DiagnosticManagement_MultipleMonitor.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_DiagnosticManagement:
      public interface_DiagnosticManagement_Conversation
   ,  public interface_DiagnosticManagement_DTCInformation
   ,  public interface_DiagnosticManagement_CancellationHandler
   ,  public interface_DiagnosticManagement_MetaInfo
   ,  public interface_DiagnosticManagement_Condition
   ,  public interface_DiagnosticManagement_OperationCycle
   ,  public interface_DiagnosticManagement_Indicator
   ,  public interface_DiagnosticManagement_Monitor
   ,  public interface_DiagnosticManagement_Event
   ,  public interface_DiagnosticManagement_MultipleCondition
   ,  public interface_DiagnosticManagement_MultipleEvent
   ,  public interface_DiagnosticManagement_MultipleMonitor
{
   public:
      void         GetActivityStatus                   (void);
      void         GetAllConversations                 (void);
      Conversation GetConversation                     (void);
      void         GetConversationIdentifier           (void);
      void         GetCurrentActiveConversations       (void);
      void         GetDiagnosticSecurityLevel          (void);
      void         GetDiagnosticSecurityLevelShortName (void);
      void         GetDiagnosticSession                (void);
      void         GetDiagnosticSessionShortName       (void);
      void         ResetToDefaultSession               (void);
      void         SetActivityNotifier                 (void);
      void         SetDiagnosticSessionNotifier        (void);
      void         SetSecurityLevelNotifier            (void);

      void         Clear                               (void);
      void         EnableControlDtc                    (void);
      void         GetControlDTCStatus                 (void);
      void         GetCurrentStatus                    (void);
      void         GetEventMemoryOverflow              (void);
      void         GetNumberOfStoredEntries            (void);
      void         SetControlDtcStatusNotifier         (void);
      void         SetDTCStatusChangedNotifier         (void);
      void         SetEventMemoryOverflowNotifier      (void);
      void         SetNumberOfStoredEntriesNotifier    (void);
      void         SetSnapshotRecordUpdatedNotifier    (void);

      void         IsCanceled                          (void);
      void         SetNotifier                         (void);

      void         GetContext                          (void);
      void         GetValue                            (void);

      void         GetCondition                        (void);
      void         SetCondition                        (void);

      void         GetOperationCycle                   (void);
//    void         SetNotifier                         (void);
      void         SetOperationCycle                   (void);

      void         GetIndicator                        (void);
//    void         SetNotifier                         (void);

      void         Offer                               (void);
      void         ReportMonitorAction                 (void);
      void         StopOffer                           (void);

      void         GetDebouncingStatus                 (void);
      void         GetDTCNumber                        (void);
      void         GetEventStatus                      (void);
      void         GetFaultDetectionCounter            (void);
      void         GetLatchedWIRStatus                 (void);
      void         GetTestComplete                     (void);
      void         SetEventStatusChangedNotifier       (void);
      void         SetLatchedWIRStatus                 (void);

//    void         GetCondition                        (void);
//    void         SetCondition                        (void);

//    void         GetDebouncingStatus                 (void);
//    void         GetDTCNumber                        (void);
//    void         GetEventStatus                      (void);
//    void         GetFaultDetectionCounter            (void);
//    void         SetEventStatusChangedNotifier       (void);

      void         ConfigureMonitor                    (void);
//    void         Offer                               (void);
//    void         ReportMonitorAction                 (void);
//    void         StopOffer                           (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_DiagnosticManagement::GetActivityStatus(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetAllConversations(void){
}

Conversation aapFunctionalCluster_DiagnosticManagement::GetConversation(void){
   return 0;
}

void aapFunctionalCluster_DiagnosticManagement::GetConversationIdentifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetCurrentActiveConversations(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetDiagnosticSecurityLevel(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetDiagnosticSecurityLevelShortName(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetDiagnosticSession(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetDiagnosticSessionShortName(void){
}

void aapFunctionalCluster_DiagnosticManagement::ResetToDefaultSession(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetActivityNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetDiagnosticSessionNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetSecurityLevelNotifier(void){
}


void aapFunctionalCluster_DiagnosticManagement::Clear(void){
}

void aapFunctionalCluster_DiagnosticManagement::EnableControlDtc(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetControlDTCStatus(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetCurrentStatus(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetEventMemoryOverflow(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetNumberOfStoredEntries(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetControlDtcStatusNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetDTCStatusChangedNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetEventMemoryOverflowNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetNumberOfStoredEntriesNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetSnapshotRecordUpdatedNotifier(void){
}


void aapFunctionalCluster_DiagnosticManagement::IsCanceled(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetNotifier(void){
}


void aapFunctionalCluster_DiagnosticManagement::GetContext(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetValue(void){
}


void aapFunctionalCluster_DiagnosticManagement::GetCondition(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetCondition(void){
}


void aapFunctionalCluster_DiagnosticManagement::GetOperationCycle(void){
}

//void aapFunctionalCluster_DiagnosticManagement::SetNotifier(void){
//}

void aapFunctionalCluster_DiagnosticManagement::SetOperationCycle(void){
}


void aapFunctionalCluster_DiagnosticManagement::GetIndicator(void){
}

//void aapFunctionalCluster_DiagnosticManagement::SetNotifier(void){
//}

void aapFunctionalCluster_DiagnosticManagement::Offer(void){
}

void aapFunctionalCluster_DiagnosticManagement::ReportMonitorAction(void){
}

void aapFunctionalCluster_DiagnosticManagement::StopOffer(void){
}


void aapFunctionalCluster_DiagnosticManagement::GetDebouncingStatus(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetDTCNumber(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetEventStatus(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetFaultDetectionCounter(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetLatchedWIRStatus(void){
}

void aapFunctionalCluster_DiagnosticManagement::GetTestComplete(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetEventStatusChangedNotifier(void){
}

void aapFunctionalCluster_DiagnosticManagement::SetLatchedWIRStatus(void){
}


//void aapFunctionalCluster_DiagnosticManagement::GetCondition(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::SetCondition(void){
//}


//void aapFunctionalCluster_DiagnosticManagement::GetDebouncingStatus(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::GetDTCNumber(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::GetEventStatus(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::GetFaultDetectionCounter(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::SetEventStatusChangedNotifier(void){
//}


void aapFunctionalCluster_DiagnosticManagement::ConfigureMonitor(void){
}

//void aapFunctionalCluster_DiagnosticManagement::Offer(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::ReportMonitorAction(void){
//}

//void aapFunctionalCluster_DiagnosticManagement::StopOffer(void){
//}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
