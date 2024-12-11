/******************************************************************************/
/* File   : aapFunctionalCluster_DiagnosticManagement.cpp                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "TypesStd.hpp"

#include "infClientSwcServiceDcm.hpp"
#include "infClientSwcServiceEcuM.hpp"
#include "infClientSwcServiceEthTp.hpp"

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
      public infClientSwcServiceDcm
   ,  public interface_DiagnosticManagement_Conversation
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
   private:
      uint8 au8Request  [1024];
      uint8 au8Response [1024];

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

      void         vInitFunction                       (void);
      void         vProcessRequest                     (void);
      void         vMainFunction                       (void);
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
aapFunctionalCluster_DiagnosticManagement DiagnosticManagement;
infClientSwcServiceDcm* const             cpstinfClientSwcServiceDcm = &DiagnosticManagement;

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

void aapFunctionalCluster_DiagnosticManagement::vInitFunction(void){
}

typedef enum{
      Dem_eCodeResponseNegative_RejectGeneral                           = 0x10
   ,  Dem_eCodeResponseNegative_NotSupportedService                     = 0x11
   ,  Dem_eCodeResponseNegative_NotSupportedFunctionSub                 = 0x12
   ,  Dem_eCodeResponseNegative_LengthMessageIncorrectOrFormatInvalid   = 0x13
   ,  Dem_eCodeResponseNegative_TooLongResponse                         = 0x14
   ,  Dem_eCodeResponseNegative_BusyRepeatRequest                       = 0x21
   ,  Dem_eCodeResponseNegative_NotCorrectConditions                    = 0x22
   ,  Dem_eCodeResponseNegative_ErrorSequenceRequest                    = 0x24
   ,  Dem_eCodeResponseNegative_OutOfRangeRequest                       = 0x31
   ,  Dem_eCodeResponseNegative_AccessDeniedSecurity                    = 0x33
   ,  Dem_eCodeResponseNegative_InvalidKey                              = 0x35
   ,  Dem_eCodeResponseNegative_NumberAttemptsExceed                    = 0x36
   ,  Dem_eCodeResponseNegative_NotExpiredDelayTimeRequired             = 0x37
   ,  Dem_eCodeResponseNegative_NotAcceptedUploadDownload               = 0x70
   ,  Dem_eCodeResponseNegative_SuspendedTransferData                   = 0x71
   ,  Dem_eCodeResponseNegative_FailureProgrammingGeneral               = 0x72
   ,  Dem_eCodeResponseNegative_WrongCounterSequenceBlock               = 0x73
   ,  Dem_eCodeResponseNegative_ResponsePendingRequestReceivedCorrectly = 0x78
   ,  Dem_eCodeResponseNegative_NotSupportedInActiveSessionSubFunction  = 0x7E
   ,  Dem_eCodeResponseNegative_NotSupportedInActiveSessionService      = 0x7F
   ,  Dem_eCodeResponseNegative_TooHighRpm                              = 0x81
   ,  Dem_eCodeResponseNegative_TooLowRpm                               = 0x82
   ,  Dem_eCodeResponseNegative_RunningEngine                           = 0x83
   ,  Dem_eCodeResponseNegative_RunningEngineNot                        = 0x84
   ,  Dem_eCodeResponseNegative_TimeRunEngineTooLow                     = 0x85
   ,  Dem_eCodeResponseNegative_TooHighTemperature                      = 0x86
   ,  Dem_eCodeResponseNegative_TooLowTemperature                       = 0x87
   ,  Dem_eCodeResponseNegative_TooHighSpeedVehicle                     = 0x88
   ,  Dem_eCodeResponseNegative_TooLowSpeedVehicle                      = 0x89
   ,  Dem_eCodeResponseNegative_TooHighPedalThrottle                    = 0x8A
   ,  Dem_eCodeResponseNegative_TooLowPedalThrottle                     = 0x8B
   ,  Dem_eCodeResponseNegative_RangeTransmissionNotInNeutral           = 0x8C
   ,  Dem_eCodeResponseNegative_RangeTransmissionNotInGear              = 0x8D
   ,  Dem_eCodeResponseNegative_PedalNotPressedBrake                    = 0x8F
   ,  Dem_eCodeResponseNegative_LeverShifterNotInPark                   = 0x90
   ,  Dem_eCodeResponseNegative_ClutchLockedTorqueConverter             = 0x91
   ,  Dem_eCodeResponseNegative_TooHighVoltage                          = 0x92
   ,  Dem_eCodeResponseNegative_TooLowVoltage                           = 0x93
}Dem_eCodeResponseNegative;

void vBuildNACK(
            uint8* lpu8Response
   ,  const uint8  lcu8SID
   ,  const uint8  lcu8NACK
){
   lpu8Response[0] = 0x03;
   lpu8Response[1] = 0x7F;
   lpu8Response[2] = lcu8SID;
   lpu8Response[3] = lcu8NACK;
}

typedef struct{
   uint8 bSupport : 1;
   uint8 bPadding : 7;
}Type_stBitFieldsService;

typedef struct{
   uint8                   u8SID;
   Type_stBitFieldsService stBitFields;
   void                    (*vfptrHandle)(const uint8* pu8Request, uint8* pu8Response);
}Type_stTableElementSID;

void vHandler_SID_DiagnosticSessionControl(const uint8* pu8Request, uint8* pu8Response){}

void vHandler_SID_ECUReset(
      const uint8* lpcu8Request
   ,        uint8* lpu8Response
){
   if(0x01 != lpcu8Request[2]){
      vBuildNACK(
            lpu8Response
         ,  lpcu8Request[1]
         ,  Dem_eCodeResponseNegative_LengthMessageIncorrectOrFormatInvalid
      );
   }
   else{
      SwcServiceEcuM.vSetRequestShutdown(TRUE);
      lpu8Response[0] = 0x02;
      lpu8Response[1] = lpcu8Request[1] + 0x40;
      lpu8Response[2] = lpcu8Request[2];
   }
}

void vHandler_SID_ClearDiagnosticInformation      (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_ReadDTCInformation              (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_ReadDataByIdentifier            (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_SecurityAccess                  (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_CommunicationControl            (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_Authentication                  (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_ReadDataByPeriodicIdentifier    (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_DynamicallyDefineDataIdentifier (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_WriteDataByIdentifier           (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_RoutineControl                  (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_RequestDownload                 (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_RequestUpload                   (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_TransferData                    (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_RequestTransferExit             (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_RequestFileTransfer             (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_TesterPresent                   (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_ControlDTCSetting               (const uint8* pu8Request, uint8* pu8Response){}
void vHandler_SID_ResponseOnEvent                 (const uint8* pu8Request, uint8* pu8Response){}

const Type_stTableElementSID gastTableSID[] = {
      {0x10, {0, 0}, vHandler_SID_DiagnosticSessionControl        }
   ,  {0x11, {1, 0}, vHandler_SID_ECUReset                        }
   ,  {0x14, {0, 0}, vHandler_SID_ClearDiagnosticInformation      }
   ,  {0x19, {0, 0}, vHandler_SID_ReadDTCInformation              }
   ,  {0x22, {0, 0}, vHandler_SID_ReadDataByIdentifier            }
   ,  {0x27, {0, 0}, vHandler_SID_SecurityAccess                  }
   ,  {0x28, {0, 0}, vHandler_SID_CommunicationControl            }
   ,  {0x29, {0, 0}, vHandler_SID_Authentication                  }
   ,  {0x2A, {0, 0}, vHandler_SID_ReadDataByPeriodicIdentifier    }
   ,  {0x2C, {0, 0}, vHandler_SID_DynamicallyDefineDataIdentifier }
   ,  {0x2E, {0, 0}, vHandler_SID_WriteDataByIdentifier           }
   ,  {0x31, {0, 0}, vHandler_SID_RoutineControl                  }
   ,  {0x34, {0, 0}, vHandler_SID_RequestDownload                 }
   ,  {0x35, {0, 0}, vHandler_SID_RequestUpload                   }
   ,  {0x36, {0, 0}, vHandler_SID_TransferData                    }
   ,  {0x37, {0, 0}, vHandler_SID_RequestTransferExit             }
   ,  {0x38, {0, 0}, vHandler_SID_RequestFileTransfer             }
   ,  {0x3E, {0, 0}, vHandler_SID_TesterPresent                   }
   ,  {0x85, {0, 0}, vHandler_SID_ControlDTCSetting               }
   ,  {0x86, {0, 0}, vHandler_SID_ResponseOnEvent                 }
};

void aapFunctionalCluster_DiagnosticManagement::vProcessRequest(void){
   uint8 u8Index;
   for(
      u8Index = 0;
      u8Index < (sizeof(gastTableSID)/sizeof(Type_stTableElementSID));
      u8Index ++
   ){
      if(this->au8Request[1] == gastTableSID[u8Index].u8SID){
         if(TRUE != gastTableSID[u8Index].stBitFields.bSupport){
            vBuildNACK(
                  this->au8Response
               ,  this->au8Request[1]
               ,  Dem_eCodeResponseNegative_NotSupportedService
            );
         }
         else{
            (*gastTableSID[u8Index].vfptrHandle)(
                  this->au8Request
               ,  this->au8Response
            );
         }
         break;
      }
   }
   if(u8Index >= (sizeof(gastTableSID)/sizeof(Type_stTableElementSID))){
      vBuildNACK(
            this->au8Response
         ,  this->au8Request[1]
         ,  Dem_eCodeResponseNegative_NotSupportedService
      );
   }
}

void aapFunctionalCluster_DiagnosticManagement::vMainFunction(void){
   cpstinfClientSwcServiceEthTp->vRead(
         this->au8Request
      ,  1024
   );
   this->vProcessRequest();
   cpstinfClientSwcServiceEthTp->vWrite(
         this->au8Response
      ,  1024
   );
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
