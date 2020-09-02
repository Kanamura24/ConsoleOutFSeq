// -*- C++ -*-
/*!
 * @file  ConsoleOutFSeq.cpp
 * @brief Console Out Component (TimedFloatSeq)
 * @date $Date$
 *
 * $Id$
 */

#include "ConsoleOutFSeq.h"

// Module specification
// <rtc-template block="module_spec">
static const char* consoleoutfseq_spec[] =
  {
    "implementation_id", "ConsoleOutFSeq",
    "type_name",         "ConsoleOutFSeq",
    "description",       "Console Out Component (TimedFloatSeq)",
    "version",           "1.0.0",
    "vendor",            "kanamura",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
ConsoleOutFSeq::ConsoleOutFSeq(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_inIn("in", m_in)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
ConsoleOutFSeq::~ConsoleOutFSeq()
{
}



RTC::ReturnCode_t ConsoleOutFSeq::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("in", m_inIn);
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ConsoleOutFSeq::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleOutFSeq::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleOutFSeq::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t ConsoleOutFSeq::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t ConsoleOutFSeq::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ConsoleOutFSeq::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleOutFSeq::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t ConsoleOutFSeq::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ConsoleOutFSeq::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleOutFSeq::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t ConsoleOutFSeq::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void ConsoleOutFSeqInit(RTC::Manager* manager)
  {
    coil::Properties profile(consoleoutfseq_spec);
    manager->registerFactory(profile,
                             RTC::Create<ConsoleOutFSeq>,
                             RTC::Delete<ConsoleOutFSeq>);
  }
  
};


