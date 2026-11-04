// Type: ApplicationManagers.DebugConsole
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugConsole.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugConsole.cs
// --------------------------------

// ApplicationManagers.DebugConsole.LogMessage$$Initialize
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Initialize (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x182351720

void ApplicationManagers_DebugConsole_LogMessage__Initialize
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,int32_t type,
               System_String_o *stackTrace,bool isCustomLogic,MethodInfo *method)

{
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_18434795d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"<color=red>\xe2\x9c\x96</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=yellow>\xe2\x9a\xa0</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=orange>!</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=red>\xe2\x9b\x94</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=white>\xe2\x84\xb9</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434795d = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).Message = message;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Message,message);
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields).StackTrace = stackTrace;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StackTrace,stackTrace);
  (__this->fields).IsCustomLogic = isCustomLogic;
  (__this->fields).Type = type;
  (__this->fields).Count = 1;
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedFormatted,(void *)0x0);
  (__this->fields)._lastShowStackTraces = false;
  targetAddress = &(__this->fields).Prefix;
  (__this->fields)._lastCount = 0;
  if (type == 0) {
    (__this->fields).Prefix = "<color=red>\xe2\x9c\x96</color> ";
    Il2CppCodeGenWriteBarrier(targetAddress,"<color=red>\xe2\x9c\x96</color> ");
    return;
  }
  if (type == 1) {
    (__this->fields).Prefix = "<color=orange>!</color> ";
    Il2CppCodeGenWriteBarrier(targetAddress,"<color=orange>!</color> ");
    return;
  }
  if (type != 2) {
    if (type == 3) {
      (__this->fields).Prefix = "<color=white>\xe2\x84\xb9</color> ";
      Il2CppCodeGenWriteBarrier(targetAddress,"<color=white>\xe2\x84\xb9</color> ");
      return;
    }
    if (type != 4) {
      (__this->fields).Prefix = "";
      Il2CppCodeGenWriteBarrier(targetAddress,"");
      return;
    }
    (__this->fields).Prefix = "<color=red>\xe2\x9b\x94</color> ";
    Il2CppCodeGenWriteBarrier(targetAddress,"<color=red>\xe2\x9b\x94</color> ");
    return;
  }
  (__this->fields).Prefix = "<color=yellow>\xe2\x9a\xa0</color> ";
  Il2CppCodeGenWriteBarrier(targetAddress,"<color=yellow>\xe2\x9a\xa0</color> ");
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$Reset
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Reset (ApplicationManagers_DebugConsole_LogMessage_o* __this, const MethodInfo* method);
// 0x182351960

void ApplicationManagers_DebugConsole_LogMessage__Reset
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  (__this->fields).Message = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Message,(void *)0x0);
  (__this->fields).StackTrace = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StackTrace,(void *)0x0);
  (__this->fields).Prefix = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Prefix,(void *)0x0);
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedFormatted,(void *)0x0);
  (__this->fields).Count = 1;
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$GetFormattedMessage
// il2cpp: System_String_o* ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage (ApplicationManagers_DebugConsole_LogMessage_o* __this, bool showStackTraces, const MethodInfo* method);
// 0x182351610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823516aa: mov rax, qword ptr [rip + 0x1d2d877]  ; ""

System_String_o *
ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
          (ApplicationManagers_DebugConsole_LogMessage_o *__this,bool showStackTraces,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  int local_res8 [2];
  
  if (Il2CppMethodInitialized_18434795e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&" (x{0})");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434795e = '\x01';
  }
  if ((((__this->fields)._cachedFormatted == (System_String_o *)0x0) ||
      ((__this->fields)._lastShowStackTraces != showStackTraces)) ||
     ((__this->fields)._lastCount != (__this->fields).Count)) {
    iVar1 = (__this->fields).Count;
    (__this->fields)._lastShowStackTraces = showStackTraces;
    (__this->fields)._lastCount = iVar1;
    pSVar3 = "";
    if (1 < iVar1) {
      local_res8[0] = iVar1;
      arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar3 = System_String__Format(" (x{0})",arg0,(MethodInfo *)0x0);
    }
    pSVar3 = System_String__Concat_1969b70
                       ((__this->fields).Prefix,(__this->fields).Message,pSVar3,(MethodInfo *)0x0);
    if ((showStackTraces) &&
       (bVar2 = System_String__IsNullOrEmpty((__this->fields).StackTrace,(MethodInfo *)0x0), !bVar2)) {
      pSVar3 = System_String__Concat_1969b70
                         (pSVar3,"\n",(__this->fields).StackTrace,(MethodInfo *)0x0);
    }
    (__this->fields)._cachedFormatted = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedFormatted,pSVar3);
  }
  return (__this->fields)._cachedFormatted;
}


// ApplicationManagers.DebugConsole.LogMessage$$IsDuplicateOf
// il2cpp: bool ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, bool isCustomLogic, System_String_o* stackTrace, const MethodInfo* method);
// 0x1823518f0

bool ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,int32_t type,
               bool isCustomLogic,System_String_o *stackTrace,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality((__this->fields).Message,message,(MethodInfo *)0x0);
  if (((bVar1) && ((__this->fields).Type == type)) && ((__this->fields).IsCustomLogic == isCustomLogic)) {
    bVar1 = System_String__op_Equality((__this->fields).StackTrace,stackTrace,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ApplicationManagers.DebugConsole.LogMessage$$.ctor
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage___ctor (ApplicationManagers_DebugConsole_LogMessage_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_DebugConsole_LogMessage___ctor(ApplicationManagers_DebugConsole_LogMessage_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool___cctor (const MethodInfo* method);
// 0x1823514f0

void ApplicationManagers_DebugConsole_LogMessagePool___cctor(MethodInfo *method)

{
  System_Collections_Generic_Stack_DebugConsole_LogMessage__o *__this;
  System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *__this_00;
  ApplicationManagers_DebugConsole_LogMessage_o *item;
  int iVar1;
  
  if (Il2CppMethodInitialized_18434795f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage);
    Il2CppMethodInitialized_18434795f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Stack_BindingRestrictions_TestBuilder_AndNode__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage);
  System_Collections_Generic_Stack_object____ctor
            (__this_00,0x200,
             (MethodInfo_B95F40 *)MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_ctor);
  TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool =
       (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)__this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool,__this_00);
  iVar1 = 0;
  do {
    __this = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
    item = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Stack_object___Push
              ((System_Collections_Generic_Stack_object__o *)__this,(Il2CppObject *)item,
               (MethodInfo_CFD670 *)MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x200);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Get
// il2cpp: ApplicationManagers_DebugConsole_LogMessage_o* ApplicationManagers_DebugConsole_LogMessagePool__Get (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x182351170

ApplicationManagers_DebugConsole_LogMessage_o *
ApplicationManagers_DebugConsole_LogMessagePool__Get
          (System_String_o *message,int32_t type,System_String_o *stackTrace,bool isCustomLogic,
          MethodInfo *method)

{
  System_Collections_Generic_Stack_DebugConsole_LogMessage__o *pSVar1;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Pop);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_get_Count);
    Il2CppMethodInitialized_184347960 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool)
    ;
  }
  pSVar1 = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
  if (pSVar1 != (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
    if ((pSVar1->fields)._size < 1) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
      }
      pSVar1 = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
      if (pSVar1 == (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) goto label_1823513ce;
      __this = (ApplicationManagers_DebugConsole_LogMessage_o *)
               System_Collections_Generic_Stack_object___Pop
                         ((System_Collections_Generic_Stack_object__o *)pSVar1,
                          (MethodInfo_CFC370 *)
                          MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Pop);
    }
    if (__this != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
      if (Il2CppMethodInitialized_18434795d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"<color=red>\xe2\x9c\x96</color> ");
        il2cpp_codegen_initialize_runtime_metadata(&"<color=yellow>\xe2\x9a\xa0</color> ");
        il2cpp_codegen_initialize_runtime_metadata(&"<color=orange>!</color> ");
        il2cpp_codegen_initialize_runtime_metadata(&"<color=red>\xe2\x9b\x94</color> ");
        il2cpp_codegen_initialize_runtime_metadata(&"<color=white>\xe2\x84\xb9</color> ");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_18434795d = '\x01';
      }
      if (message == (System_String_o *)0x0) {
        message = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields).Message = message;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Message,message);
      if (stackTrace == (System_String_o *)0x0) {
        stackTrace = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (__this->fields).StackTrace = stackTrace;
      Il2CppCodeGenWriteBarrier(&(__this->fields).StackTrace,stackTrace);
      (__this->fields).Type = type;
      (__this->fields)._cachedFormatted = (System_String_o *)0x0;
      (__this->fields).IsCustomLogic = isCustomLogic;
      (__this->fields).Count = 1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedFormatted,(void *)0x0);
      (__this->fields)._lastShowStackTraces = false;
      (__this->fields)._lastCount = 0;
      if (type == 0) {
        (__this->fields).Prefix = "<color=red>\xe2\x9c\x96</color> ";
        value = "<color=red>\xe2\x9c\x96</color> ";
      }
      else if (type == 1) {
        (__this->fields).Prefix = "<color=orange>!</color> ";
        value = "<color=orange>!</color> ";
      }
      else if (type == 2) {
        (__this->fields).Prefix = "<color=yellow>\xe2\x9a\xa0</color> ";
        value = "<color=yellow>\xe2\x9a\xa0</color> ";
      }
      else if (type == 3) {
        (__this->fields).Prefix = "<color=white>\xe2\x84\xb9</color> ";
        value = "<color=white>\xe2\x84\xb9</color> ";
      }
      else if (type == 4) {
        (__this->fields).Prefix = "<color=red>\xe2\x9b\x94</color> ";
        value = "<color=red>\xe2\x9b\x94</color> ";
      }
      else {
        (__this->fields).Prefix = "";
        value = "";
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields).Prefix,value);
      return __this;
    }
  }
label_1823513ce:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Return
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool__Return (ApplicationManagers_DebugConsole_LogMessage_o* logMessage, const MethodInfo* method);
// 0x1823513e0

void ApplicationManagers_DebugConsole_LogMessagePool__Return
               (ApplicationManagers_DebugConsole_LogMessage_o *logMessage,MethodInfo *method)

{
  System_Collections_Generic_Stack_DebugConsole_LogMessage__o *pSVar1;
  
  if (Il2CppMethodInitialized_184347961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_get_Count);
    Il2CppMethodInitialized_184347961 = '\x01';
  }
  if (logMessage == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    return;
  }
  (logMessage->fields).Message = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(logMessage->fields).Message,(void *)0x0);
  (logMessage->fields).StackTrace = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(logMessage->fields).StackTrace,(void *)0x0);
  (logMessage->fields).Prefix = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(logMessage->fields).Prefix,(void *)0x0);
  (logMessage->fields)._cachedFormatted = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(logMessage->fields)._cachedFormatted,(void *)0x0);
  (logMessage->fields).Count = 1;
  if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool)
    ;
  }
  pSVar1 = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
  if (pSVar1 != (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
    if (0x1ff < (pSVar1->fields)._size) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
    if (pSVar1 != (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
      System_Collections_Generic_Stack_object___Push
                ((System_Collections_Generic_Stack_object__o *)pSVar1,(Il2CppObject *)logMessage,
                 (MethodInfo_CFD670 *)MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$Init
// il2cpp: void ApplicationManagers_DebugConsole__Init (const MethodInfo* method);
// 0x18234bed0

void ApplicationManagers_DebugConsole__Init(MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_DebugConsole_o *value;
  UnityEngine_Application_LogCallback_o *__this;
  
  if (Il2CppMethodInitialized_184347949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application_LogCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugConsole);
    Il2CppMethodInitialized_184347949 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugConsole);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance,value);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Application_LogCallback);
  UnityEngine_Application_LogCallback___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog,
             (MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__add_logMessageReceived(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  bVar1 = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = (uint)!bVar1 * 4;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilterTab =
       TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab;
  return;
}


// ApplicationManagers.DebugConsole$$Log
// il2cpp: void ApplicationManagers_DebugConsole__Log (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x18234c240

void ApplicationManagers_DebugConsole__Log(System_String_o *message,bool showInChat,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434794a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_18434794a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  if (showInChat) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddException(message,(MethodInfo *)0x0);
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$LogCustomLogic
// il2cpp: void ApplicationManagers_DebugConsole__LogCustomLogic (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x18234c0c0

void ApplicationManagers_DebugConsole__LogCustomLogic
               (System_String_o *message,bool showInChat,MethodInfo *method)

{
  bool bVar1;
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_18434794b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"[Custom Logic Error] ");
    Il2CppMethodInitialized_18434794b = '\x01';
  }
  message_00 = System_String__Concat_1969e50("[Custom Logic Error] ",message,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message_00,(MethodInfo *)0x0);
  if (showInChat) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddException(message,(MethodInfo *)0x0);
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$LogTimeSince
// il2cpp: void ApplicationManagers_DebugConsole__LogTimeSince (float start, System_String_o* prefix, const MethodInfo* method);
// 0x18234c1a0

void ApplicationManagers_DebugConsole__LogTimeSince(float start,System_String_o *prefix,MethodInfo *method)

{
  System_String_o *pSVar1;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_18434794c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    Il2CppMethodInitialized_18434794c = '\x01';
  }
  local_res8[0] = 0.0;
  local_res8[0] = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  local_res8[0] = local_res8[0] - start;
  pSVar1 = System_Single__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(prefix,": ",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$OnUnityDebugLog
// il2cpp: void ApplicationManagers_DebugConsole__OnUnityDebugLog (System_String_o* log, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
// 0x18234c830

void ApplicationManagers_DebugConsole__OnUnityDebugLog
               (System_String_o *log,System_String_o *stackTrace,int32_t type,MethodInfo *method)

{
  bool isCustomLogic;
  
  if (Il2CppMethodInitialized_18434794d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&"[Custom Logic Error] ");
    Il2CppMethodInitialized_18434794d = '\x01';
  }
  if (log != (System_String_o *)0x0) {
    isCustomLogic = System_String__StartsWith(log,"[Custom Logic Error] ",(MethodInfo *)0x0);
    if (isCustomLogic) {
      if ("[Custom Logic Error] " == (System_String_o *)0x0) goto label_18234c900;
      log = System_String__Substring(log,("[Custom Logic Error] "->fields)._stringLength,(MethodInfo *)0x0);
      if (type == 3) {
        type = 0;
      }
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__AddMessageBuffer(log,type,stackTrace,isCustomLogic,(MethodInfo *)0x0);
    return;
  }
label_18234c900:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$AddMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__AddMessageBuffer (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x182349180
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182349279: mov rsi, rbx
// asm:   0x18234946c: nop dword ptr [rax]

void ApplicationManagers_DebugConsole__AddMessageBuffer
               (System_String_o *message,int32_t type,System_String_o *stackTrace,bool isCustomLogic,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar2;
  System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *__this;
  Il2CppObject *pIVar3;
  ApplicationManagers_DebugConsole_StaticFields *pAVar4;
  System_Collections_Generic_LinkedList_TextCacheEntry__o *__this_00;
  bool bVar5;
  int iVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_LinkedListNode_T__o *pSVar9;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar10;
  int32_t length;
  
  if (Il2CppMethodInitialized_18434794e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedListNode_DebugConsole_LogMessage_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_First);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata(&"...");
    Il2CppMethodInitialized_18434794e = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (message != (System_String_o *)0x0) {
    pSVar7 = message;
    if (0x400 < (message->fields)._stringLength) {
      pSVar7 = System_String__Substring_1972740(message,0,0x400,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969e50(pSVar7,"...",(MethodInfo *)0x0);
    }
    iVar1 = (message->fields)._stringLength;
    iVar6 = 0x400;
    if (iVar1 < 0x400) {
      iVar6 = iVar1;
    }
    if (stackTrace != (System_String_o *)0x0) {
      iVar6 = 0x400 - iVar6;
      if (iVar6 < (stackTrace->fields)._stringLength) {
        length = 0;
        if (-1 < iVar6) {
          length = iVar6;
        }
        pSVar8 = System_String__Substring_1972740(stackTrace,0,length,(MethodInfo *)0x0);
        stackTrace = System_String__Concat_1969e50(pSVar8,"...",(MethodInfo *)0x0);
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
      if (pSVar2 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
        if (0 < (pSVar2->fields).count) {
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          __this = (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)
                   TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
          if (((__this == (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)0x0) ||
              (pSVar9 = System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree___get_Last
                                  (__this,(MethodInfo_1824E20 *)
                                          MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last
                                  ), pSVar9 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
             (pIVar3 = (pSVar9->fields).item, pIVar3 == (Il2CppObject *)0x0)) goto label_1823495c7;
          bVar5 = System_String__op_Equality((System_String_o *)pIVar3[1].klass,pSVar7,(MethodInfo *)0x0);
          if (((bVar5) && (*(int *)&pIVar3[1].monitor == type)) &&
             (((bool)*(char *)&pIVar3[2].monitor == isCustomLogic &&
              (bVar5 = System_String__op_Equality
                                 ((System_String_o *)pIVar3[3].klass,stackTrace,(MethodInfo *)0x0), bVar5))))
          {
            *(int *)&pIVar3[3].monitor = *(int *)&pIVar3[3].monitor + 1;
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
label_1823493ad:
            TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
            return;
          }
        }
        if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        }
        pAVar10 = ApplicationManagers_DebugConsole_LogMessagePool__Get
                            (pSVar7,type,stackTrace,isCustomLogic,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
        if (((pSVar2 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) &&
            (System_Collections_Generic_LinkedList_object___AddLast
                       ((System_Collections_Generic_LinkedList_T__o *)pSVar2,(Il2CppObject *)pAVar10,
                        (MethodInfo_181E600 *)
                        MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast),
            pSVar7 != (System_String_o *)0x0)) && (stackTrace != (System_String_o *)0x0)) {
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer =
               TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer +
               (stackTrace->fields)._stringLength + (pSVar7->fields)._stringLength;
          while( true ) {
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
            if (pSVar2 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
            if ((pSVar2->fields).count < 0x401) {
              if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
              }
              if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer < 0x7a121)
              {
                if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
                }
                TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
                TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
                goto label_1823493ad;
              }
            }
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            pAVar4 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            if ((((pAVar4->_messageBuffer ==
                   (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) ||
                 (pSVar9 = (pAVar4->_messageBuffer->fields).head,
                 pSVar9 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
                (pAVar10 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar9->fields).item,
                pAVar10 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
               ((pSVar7 = (pAVar10->fields).Message, pSVar7 == (System_String_o *)0x0 ||
                (pSVar8 = (pAVar10->fields).StackTrace, pSVar8 == (System_String_o *)0x0)))) break;
            pAVar4->_currentCharCountBuffer =
                 (pAVar4->_currentCharCountBuffer - (pSVar8->fields)._stringLength) -
                 (pSVar7->fields)._stringLength;
            __this_00 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)
                        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
            if (__this_00 == (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) break;
            System_Collections_Generic_LinkedList_TextCacheEntry___RemoveFirst
                      (__this_00,
                       (MethodInfo_18224E0 *)
                       MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
            if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
            }
            ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar10,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
label_1823495c7:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$AddMessage
// il2cpp: void ApplicationManagers_DebugConsole__AddMessage (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x1823495d0

void ApplicationManagers_DebugConsole__AddMessage
               (System_String_o *message,int32_t type,System_String_o *stackTrace,bool isCustomLogic,
               MethodInfo *method)

{
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar1;
  System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *__this;
  Il2CppObject *pIVar2;
  ApplicationManagers_DebugConsole_StaticFields *pAVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_LinkedList_TextCacheEntry__o *__this_00;
  bool bVar6;
  System_Collections_Generic_LinkedListNode_T__o *pSVar7;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar8;
  
  if (Il2CppMethodInitialized_18434794f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedListNode_DebugConsole_LogMessage_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_First);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    Il2CppMethodInitialized_18434794f = '\x01';
  }
  bVar6 = System_String__op_Equality
                    (message,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
  if (pSVar1 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
    if (0 < (pSVar1->fields).count) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      __this = (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)
               TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
      if (((__this == (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)0x0) ||
          (pSVar7 = System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree___get_Last
                              (__this,(MethodInfo_1824E20 *)
                                      MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last
                              ), pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
         (pIVar2 = (pSVar7->fields).item, pIVar2 == (Il2CppObject *)0x0)) goto label_182349981;
      bVar6 = System_String__op_Equality((System_String_o *)pIVar2[1].klass,message,(MethodInfo *)0x0);
      if (((bVar6) && (*(int *)&pIVar2[1].monitor == type)) &&
         (((bool)*(char *)&pIVar2[2].monitor == isCustomLogic &&
          (bVar6 = System_String__op_Equality((System_String_o *)pIVar2[3].klass,stackTrace,(MethodInfo *)0x0)
          , bVar6)))) {
        *(int *)&pIVar2[3].monitor = *(int *)&pIVar2[3].monitor + 1;
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
        return;
      }
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    pAVar8 = ApplicationManagers_DebugConsole_LogMessagePool__Get
                       (message,type,stackTrace,isCustomLogic,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (((pSVar1 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) &&
        (System_Collections_Generic_LinkedList_object___AddLast
                   ((System_Collections_Generic_LinkedList_T__o *)pSVar1,(Il2CppObject *)pAVar8,
                    (MethodInfo_181E600 *)
                    MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast),
        message != (System_String_o *)0x0)) && (stackTrace != (System_String_o *)0x0)) {
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount =
           TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount +
           (message->fields)._stringLength + (stackTrace->fields)._stringLength;
      while( true ) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
        if (pSVar1 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
        if ((pSVar1->fields).count < 0x401) {
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount < 0x7a121) {
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
            TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
            return;
          }
        }
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        if ((((pAVar3->_messages == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
             || (pSVar7 = (pAVar3->_messages->fields).head,
                pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
            (pAVar8 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
            pAVar8 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
           ((pSVar4 = (pAVar8->fields).Message, pSVar4 == (System_String_o *)0x0 ||
            (pSVar5 = (pAVar8->fields).StackTrace, pSVar5 == (System_String_o *)0x0)))) break;
        pAVar3->_currentCharCount =
             (pAVar3->_currentCharCount - (pSVar5->fields)._stringLength) - (pSVar4->fields)._stringLength;
        __this_00 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)
                    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
        if (__this_00 == (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) break;
        System_Collections_Generic_LinkedList_TextCacheEntry___RemoveFirst
                  (__this_00,
                   (MethodInfo_18224E0 *)
                   MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
        if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar8,(MethodInfo *)0x0);
      }
    }
  }
label_182349981:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$ProcessMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__ProcessMessageBuffer (const MethodInfo* method);
// 0x18234c910
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234c998: mov rax, qword ptr [rip + 0x1daed31]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x18234c99f: nop 
// asm:   0x18234cb42: mov rdx, qword ptr [rip + 0x1daeb87]  ; TypeInfo_ApplicationManagers_DebugConsole

void ApplicationManagers_DebugConsole__ProcessMessageBuffer(MethodInfo *method)

{
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar1;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar2;
  System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *__this;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  ApplicationManagers_DebugConsole_StaticFields *pAVar5;
  System_Collections_Generic_LinkedList_TextCacheEntry__o *__this_01;
  bool bVar6;
  System_Collections_Generic_LinkedListNode_T__o *pSVar7;
  int iVar8;
  
  if (Il2CppMethodInitialized_184347950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedListNode_DebugConsole_LogMessage_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_First);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    Il2CppMethodInitialized_184347950 = '\x01';
  }
  iVar8 = 0;
label_18234c9a0:
  while( true ) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
    if (pSVar1 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
    if (((pSVar1->fields).count < 1) || (0x31 < iVar8)) {
      if (0 < iVar8) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
      }
      return;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
    if ((pSVar1 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) ||
       (pSVar7 = (pSVar1->fields).head, pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0))
    break;
    pAVar2 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item;
    System_Collections_Generic_LinkedList_TextCacheEntry___RemoveFirst
              ((System_Collections_Generic_LinkedList_TextCacheEntry__o *)
               TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer,
               (MethodInfo_18224E0 *)
               MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (pSVar1 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
    if ((pSVar1->fields).count < 1) {
label_18234cb49:
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      if (((pAVar2 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar3 = (pAVar2->fields).Message, pSVar3 != (System_String_o *)0x0)) &&
         (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 != (System_String_o *)0x0)) {
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer =
             (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer -
             (pSVar4->fields)._stringLength) - (pSVar3->fields)._stringLength;
        pSVar3 = (pAVar2->fields).Message;
        if ((pSVar3 != (System_String_o *)0x0) &&
           (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 != (System_String_o *)0x0)) {
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount =
               TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount +
               (pSVar4->fields)._stringLength + (pSVar3->fields)._stringLength;
          pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
          if (pSVar1 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
            System_Collections_Generic_LinkedList_object___AddLast
                      ((System_Collections_Generic_LinkedList_T__o *)pSVar1,(Il2CppObject *)pAVar2,
                       (MethodInfo_181E600 *)
                       MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast);
            do {
              if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
              }
              pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
              if (pSVar1 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
              if ((pSVar1->fields).count < 0x401) {
                if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
                }
                if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount < 0x7a121)
                goto label_18234cd1d;
              }
              if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
              }
              pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
              if ((((pAVar5->_messages ==
                     (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) ||
                   (pSVar7 = (pAVar5->_messages->fields).head,
                   pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
                  (pAVar2 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
                  pAVar2 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
                 ((pSVar3 = (pAVar2->fields).Message, pSVar3 == (System_String_o *)0x0 ||
                  (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))) break;
              pAVar5->_currentCharCount =
                   (pAVar5->_currentCharCount - (pSVar4->fields)._stringLength) -
                   (pSVar3->fields)._stringLength;
              __this_01 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)
                          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
              if (__this_01 == (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) break;
              System_Collections_Generic_LinkedList_TextCacheEntry___RemoveFirst
                        (__this_01,
                         (MethodInfo_18224E0 *)
                         MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst)
              ;
              if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
              }
              ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar2,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      break;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    __this = (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)
             TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if ((((__this == (System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree__o *)0x0) ||
         (pSVar7 = System_Collections_Generic_LinkedList_UIRenderDevice_DeviceToFree___get_Last
                             (__this,(MethodInfo_1824E20 *)
                                     MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last
                             ), pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
        (pAVar2 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (__this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
       __this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) break;
    bVar6 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                      (__this_00,(pAVar2->fields).Message,(pAVar2->fields).Type,(pAVar2->fields).IsCustomLogic
                       ,(pAVar2->fields).StackTrace,(MethodInfo *)0x0);
    if (!bVar6) goto label_18234cb49;
    (__this_00->fields).Count = (__this_00->fields).Count + (pAVar2->fields).Count;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar3 = (pAVar2->fields).Message;
    if ((pSVar3 == (System_String_o *)0x0) ||
       (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 == (System_String_o *)0x0)) break;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer =
         (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer -
         (pSVar4->fields)._stringLength) - (pSVar3->fields)._stringLength;
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar2,(MethodInfo *)0x0);
    iVar8 = iVar8 + 1;
  }
  ThrowNullReferenceException();
label_18234cd1d:
  iVar8 = iVar8 + 1;
  goto label_18234c9a0;
}


// ApplicationManagers.DebugConsole$$UpdateFilteredMessages
// il2cpp: void ApplicationManagers_DebugConsole__UpdateFilteredMessages (const MethodInfo* method);
// 0x18234cd80
// eh: try 0x18234cf10..0x18234d0d4 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234cfd3: sete al
// asm:   0x18234d030: mov rdx, qword ptr [rip + 0x1d54e31]  ; MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
// asm:   0x18234d037: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18234d03c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18234d041: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234d046: test rcx, rcx
// asm:   0x18234d049: jne 0x18234d0d4
// asm:   0x18234d0d4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void ApplicationManagers_DebugConsole__UpdateFilteredMessages(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int iVar2;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *pSVar3;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *__this;
  Il2CppObject *pIVar4;
  bool bVar5;
  char cVar6;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_60;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_38;
  
  if (Il2CppMethodInitialized_184347951 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_Clear);
    Il2CppMethodInitialized_184347951 = '\x01';
  }
  local_60.fields._list = (System_Collections_Generic_LinkedList_T__o *)0x0;
  local_60.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._20_4_ = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_60.fields._index = 0;
  local_60.fields._36_4_ = 0;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty == false) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilterTab ==
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab) {
      return;
    }
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
  if (pSVar3 != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (__this != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                (&local_38,(System_Collections_Generic_LinkedList_T__o *)__this,
                 (MethodInfo_18201E0 *)
                 MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
      local_60.fields._list = local_38.fields._list;
      local_60.fields._node = local_38.fields._node;
      local_60.fields._version = local_38.fields._version;
      local_60.fields._20_4_ = local_38.fields._20_4_;
      local_60.fields._current = local_38.fields._current;
      local_60.fields._index = local_38.fields._index;
      local_60.fields._36_4_ = local_38.fields._36_4_;
      do {
        bVar5 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                          (&local_60,
                           (MethodInfo_1538AC0 *)
                           MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext
                          );
        pIVar4 = local_60.fields._current;
        if (!bVar5) {
          System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                     MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
                    );
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = false;
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilterTab =
               TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab;
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
          return;
        }
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        iVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab;
        if (iVar2 == 0) goto label_18234cfde;
        if (iVar2 == 1) {
          if (pIVar4 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = *(int *)&pIVar4[1].monitor == 3;
label_18234cfce:
          cVar6 = '\0';
          if (bVar5) {
            cVar6 = *(char *)&pIVar4[2].monitor == '\0';
          }
          goto label_18234cfd6;
        }
        if (iVar2 == 2) {
          if (pIVar4 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = *(int *)&pIVar4[1].monitor == 2;
          goto label_18234cfce;
        }
        if (iVar2 == 3) {
          if (pIVar4 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (*(char *)&pIVar4[2].monitor == '\0') {
            if ((*(int *)&pIVar4[1].monitor == 0) || (*(int *)&pIVar4[1].monitor == 4)) {
              cVar6 = '\x01';
            }
            else {
              cVar6 = *(int *)&pIVar4[1].monitor == 1;
            }
          }
          else {
            cVar6 = '\0';
          }
          goto label_18234cfd6;
        }
        if (iVar2 == 4) {
          if (pIVar4 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          cVar6 = *(char *)&pIVar4[2].monitor;
label_18234cfd6:
          if (cVar6 != '\0') {
label_18234cfde:
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
            if (pSVar3 == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(pSVar3,pIVar4,MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_Add
                         );
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$GetDisplayText
// il2cpp: System_String_o* ApplicationManagers_DebugConsole__GetDisplayText (const MethodInfo* method);
// 0x18234ad90

System_String_o * ApplicationManagers_DebugConsole__GetDisplayText(MethodInfo *method)

{
  System_Collections_Generic_List_DebugConsole_LogMessage__o *pSVar1;
  System_Text_StringBuilder_o *pSVar2;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  System_String_o *pSVar3;
  int index;
  
  if (Il2CppMethodInitialized_184347952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_get_Item);
    Il2CppMethodInitialized_184347952 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty == false) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
    if (pSVar1 == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) goto label_18234b0c3;
    if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilteredCount == (pSVar1->fields)._size
       ) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastShowStackTraces ==
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        return TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText;
      }
    }
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder;
  if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
    index = 0;
    while( true ) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
      if (pSVar1 == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) goto label_18234b0c3;
      if ((pSVar1->fields)._size <= index) break;
      if (0 < index) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder;
        if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto label_18234b0c3;
        System_Text_StringBuilder__Append_197e090(pSVar2,10,(MethodInfo *)0x0);
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
      if (pSVar1 == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) goto label_18234b0c3;
      pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder;
      __this = (ApplicationManagers_DebugConsole_LogMessage_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_get_Item);
      if (__this == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) goto label_18234b0c3;
      pSVar3 = ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
                         (__this,TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces,
                          (MethodInfo *)0x0);
      if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto label_18234b0c3;
      System_Text_StringBuilder__Append_197dca0(pSVar2,pSVar3,(MethodInfo *)0x0);
      index = index + 1;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder;
    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText = pSVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText,pSVar3);
      pSVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
      if (pSVar1 != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilteredCount = (pSVar1->fields)._size;
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastShowStackTraces =
             TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces;
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = false;
        return TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText;
      }
    }
  }
label_18234b0c3:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$Update
// il2cpp: void ApplicationManagers_DebugConsole__Update (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x18234d0e0

void ApplicationManagers_DebugConsole__Update(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347953 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar1 == (Settings_InputSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_GeneralInputSettings_o *)0x0)) ||
     (__this_00 = (pSVar2->fields).DebugWindow, __this_00 == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar3 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled =
         TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled == false;
  }
  bVar3 = UnityEngine_Input__GetKeyDown(0x123,(MethodInfo *)0x0);
  if (bVar3) {
    Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle((MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.DebugConsole$$OnGUI
// il2cpp: void ApplicationManagers_DebugConsole__OnGUI (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x18234c2f0

void ApplicationManagers_DebugConsole__OnGUI(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ApplicationManagers_DebugConsole_StaticFields *pAVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  UnityEngine_Color_o *pUVar11;
  UnityEngine_Texture_o *image;
  System_String_o *pSVar12;
  UnityEngine_Rect_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184347954 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347954 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled != false) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    UnityEngine_GUI__set_depth(1,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__HandleWindowInteraction((MethodInfo *)0x0);
    if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground != false) {
      if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
      }
      pUVar11 = UnityEngine_GUI__get_color((UnityEngine_Color_o *)local_58,(MethodInfo *)0x0);
      uVar6._0_4_ = (pUVar11->fields).r;
      uVar6._4_4_ = (pUVar11->fields).g;
      uVar7._0_4_ = (pUVar11->fields).b;
      uVar7._4_4_ = (pUVar11->fields).a;
      local_58[0].m_XMin = 0.15;
      local_58[0].m_YMin = 0.15;
      local_58[0].m_Width = 0.15;
      local_58[0].m_Height = 1.0;
      UnityEngine_GUI__set_color((UnityEngine_Color_o *)local_58,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      local_58[0].m_XMin = pAVar5->_windowX;
      local_58[0].m_YMin = pAVar5->_windowY;
      local_58[0].m_Width = pAVar5->_windowWidth;
      local_58[0].m_Height = pAVar5->_windowHeight;
      image = (UnityEngine_Texture_o *)UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
      UnityEngine_GUI__DrawTexture((UnityEngine_Rect_o *)local_58,image,(MethodInfo *)0x0);
      local_58[0]._0_8_ = uVar6;
      local_58[0]._8_8_ = uVar7;
      UnityEngine_GUI__set_color((UnityEngine_Color_o *)local_58,(MethodInfo *)0x0);
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    uVar8._0_4_ = pAVar5->_windowX;
    uVar8._4_4_ = pAVar5->_windowY;
    uVar9._0_4_ = pAVar5->_windowWidth;
    uVar9._4_4_ = pAVar5->_windowHeight;
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    local_58[0]._0_8_ = uVar8;
    local_58[0]._8_8_ = uVar9;
    UnityEngine_GUI__Box((UnityEngine_Rect_o *)local_58,"",(MethodInfo *)0x0);
    ApplicationManagers_DebugConsole__DrawTabs((MethodInfo *)0x0);
    if (bVar10) {
      if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
      }
      UnityEngine_GUI__set_enabled(false,(MethodInfo *)0x0);
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__DrawMessageWindow((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184347958 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
      il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
      Il2CppMethodInitialized_184347958 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    fVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight;
    fVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY;
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    UnityEngine_GUI__SetNextControlName("DebugInput",(MethodInfo *)0x0);
    pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    local_58[0].m_YMin = (float)((int)(fVar1 + fVar2) + -0x23);
    local_58[0].m_XMin = (float)((int)pAVar5->_windowX + 10);
    local_58[0].m_Height = 25.0;
    local_58[0].m_Width = (float)((int)pAVar5->_windowWidth + -0x14);
    pSVar12 = UnityEngine_GUI__TextField((UnityEngine_Rect_o *)local_58,pAVar5->_inputLine,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine = pSVar12;
    Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine,pSVar12);
    if (bVar10) {
      if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
      }
      UnityEngine_GUI__set_enabled(true,(MethodInfo *)0x0);
      pSVar12 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
      bVar10 = System_String__op_Equality(pSVar12,"DebugInput",(MethodInfo *)0x0);
      if (bVar10) {
        pSVar12 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
        }
        UnityEngine_GUI__FocusControl(pSVar12,(MethodInfo *)0x0);
      }
    }
    else {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      ApplicationManagers_DebugConsole__HandleInput((MethodInfo *)0x0);
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    if (Il2CppMethodInitialized_18434795b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
      il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x8b\xb0");
      Il2CppMethodInitialized_18434795b = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    fVar1 = pAVar5->_windowWidth;
    fVar2 = pAVar5->_windowHeight;
    fVar3 = pAVar5->_windowX;
    fVar4 = pAVar5->_windowY;
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    local_58[0].m_YMin = (fVar2 + fVar4) - 15.0;
    local_58[0].m_XMin = (fVar1 + fVar3) - 15.0;
    local_58[0].m_Width = 15.0;
    local_58[0].m_Height = 15.0;
    UnityEngine_GUI__Box((UnityEngine_Rect_o *)local_58,"\xe2\x8b\xb0",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    UnityEngine_GUI__set_depth(0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.DebugConsole$$HandleWindowInteraction
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowInteraction (const MethodInfo* method);
// 0x18234b970
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234bd7b: mov rax, qword ptr [rax + 0xb8]
// asm:   0x18234bd82: mov byte ptr [rax + 0x7c], 0
// asm:   0x18234bd86: mov rax, qword ptr [rip + 0x1daf943]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x18234bd8d: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x18234bd94: mov byte ptr [rcx + 0x7d], 0
// asm:   0x18234bd98: jmp 0x18234bcb5

void ApplicationManagers_DebugConsole__HandleWindowInteraction(MethodInfo *method)

{
  float fVar1;
  ApplicationManagers_DebugConsole_StaticFields *pAVar2;
  char cVar3;
  int32_t iVar4;
  UnityEngine_Event_o *__this;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStackX_14;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  
  if (Il2CppMethodInitialized_184347955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184347955 = '\x01';
  }
  __this = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this == (UnityEngine_Event_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar5 = UnityEngine_Event__get_mousePosition(__this,(MethodInfo *)0x0);
  fStackX_14 = UVar5.fields.y;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  fVar6 = pAVar2->_windowX;
  fVar8 = pAVar2->_windowWidth;
  fVar7 = pAVar2->_windowY;
  fVar1 = pAVar2->_windowHeight;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  local_a0 = 0x41700000;
  local_94 = pAVar2->_windowY;
  local_a8 = (fVar8 + fVar6) - 15.0;
  local_a4 = (fVar1 + fVar7) - 15.0;
  local_9c = 0x41700000;
  local_98 = pAVar2->_windowX;
  local_90 = pAVar2->_windowWidth;
  local_8c = 0x42a00000;
  local_80 = 0x43ac8000;
  local_7c = 0x41c80000;
  local_6c = 0x41c80000;
  local_88 = ((local_90 + pAVar2->_windowX) - 335.0) - 20.0;
  local_84 = local_94 + 10.0;
  local_78 = pAVar2->_windowX + 10.0;
  local_74 = pAVar2->_windowY + 20.0 + 25.0;
  local_70 = pAVar2->_windowWidth - 20.0;
  iVar4 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
  fVar6 = UVar5.fields.x;
  if ((iVar4 == 0) && (iVar4 = UnityEngine_Event__get_button(__this,(MethodInfo *)0x0), iVar4 == 0)) {
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    cVar3 = il2cpp_runtime_helper_1816e2b50(&local_a8,UVar5.fields,0);
    if (cVar3 == '\0') {
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      cVar3 = il2cpp_runtime_helper_1816e2b50(&local_98,UVar5.fields,0);
      if (cVar3 == '\0') {
        return;
      }
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      cVar3 = il2cpp_runtime_helper_1816e2b50(&local_88,UVar5.fields,0);
      if (cVar3 != '\0') {
        return;
      }
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      cVar3 = il2cpp_runtime_helper_1816e2b50(&local_78,UVar5.fields,0);
      if (cVar3 != '\0') {
        return;
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging = true;
      pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      fVar8 = pAVar2->_windowY;
      (pAVar2->_dragOffset).fields.x = fVar6 - pAVar2->_windowX;
      (pAVar2->_dragOffset).fields.y = fStackX_14 - fVar8;
    }
    else {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing = true;
      pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      fVar8 = pAVar2->_windowHeight;
      (pAVar2->_resizeStartSize).fields.x = pAVar2->_windowWidth;
      (pAVar2->_resizeStartSize).fields.y = fVar8;
      pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      (pAVar2->_resizeStartMousePos).fields.x = fVar6;
      (pAVar2->_resizeStartMousePos).fields.y = fStackX_14;
    }
  }
  else {
    iVar4 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if ((iVar4 == 1) && (iVar4 = UnityEngine_Event__get_button(__this,(MethodInfo *)0x0), iVar4 == 0)) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging = false;
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing = false;
      return;
    }
    iVar4 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if (iVar4 != 3) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging == false) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing == false) {
        return;
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      fVar8 = (pAVar2->_resizeStartMousePos).fields.y;
      fVar7 = (fVar6 - (pAVar2->_resizeStartMousePos).fields.x) + (pAVar2->_resizeStartSize).fields.x;
      fVar6 = 400.0;
      if (400.0 <= fVar7) {
        fVar6 = fVar7;
      }
      pAVar2->_windowWidth = fVar6;
      fVar8 = (fStackX_14 - fVar8) +
              (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_resizeStartSize).fields.y;
      fVar6 = 300.0;
      if (300.0 <= fVar8) {
        fVar6 = fVar8;
      }
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight = fVar6;
    }
    else {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowX =
           fVar6 - (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_dragOffset).fields.x;
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY =
           fStackX_14 - (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_dragOffset).fields.y;
    }
  }
  UnityEngine_Event__Use(__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$DrawTabs
// il2cpp: void ApplicationManagers_DebugConsole__DrawTabs (const MethodInfo* method);
// 0x18234a0d0
// eh: try 0x18234a3d0..0x18234a50f -> pad 0x183324460 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234a41c: mov rdx, qword ptr [rip + 0x1d57a45]  ; MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
// asm:   0x18234a423: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234a428: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18234a42d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18234a432: test rcx, rcx
// asm:   0x18234a435: jne 0x18234ad83
// asm:   0x18234a43b: mov r14d, dword ptr [rsp + 0x118]
// asm:   0x18234a443: mov r15d, dword ptr [rsp + 0x120]
// asm:   0x18234a44b: mov r13d, dword ptr [rsp + 0x128]
// asm:   0x18234a453: movss xmm9, dword ptr [rsp + 0x30]
// asm:   0x18234a520: mov rdx, qword ptr [rip + 0x1d57941]  ; MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
// asm:   0x18234a527: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234a52c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18234a531: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18234a536: test rcx, rcx
// asm:   0x18234a539: jne 0x18234ad89
// asm:   0x18234a53f: mov r14d, dword ptr [rsp + 0x118]
// asm:   0x18234a547: mov r15d, dword ptr [rsp + 0x120]
// asm:   0x18234a54f: mov r13d, dword ptr [rsp + 0x128]
// asm:   0x18234a557: movss xmm9, dword ptr [rsp + 0x30]
// asm:   0x18234ad83: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18234ad89: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 

void ApplicationManagers_DebugConsole__DrawTabs(MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  int iVar3;
  ApplicationManagers_DebugConsole_StaticFields *pAVar4;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar5;
  System_Collections_Generic_LinkedList_TextCacheEntry__o *pSVar6;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *pSVar7;
  Il2CppObject *pIVar8;
  bool bVar9;
  int iVar10;
  System_String_o *pSVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  float local_d8;
  int local_d4;
  int local_d0;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_c8;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_a0 [3];
  
  if (Il2CppMethodInitialized_184347956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata(&"Hide Traces");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"No Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Opaque");
    il2cpp_codegen_initialize_runtime_metadata(&"Warning");
    il2cpp_codegen_initialize_runtime_metadata(&"Show Traces");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Info");
    il2cpp_codegen_initialize_runtime_metadata(&"CL");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"Debug Console (Press F11 to hide)");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Error");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347956 = '\x01';
  }
  local_c8.fields._list = (System_Collections_Generic_LinkedList_T__o *)0x0;
  local_c8.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  local_c8.fields._version = 0;
  local_c8.fields._20_4_ = 0;
  local_c8.fields._current = (Il2CppObject *)0x0;
  local_c8.fields._index = 0;
  local_c8.fields._36_4_ = 0;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar4 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  iVar12 = (int)pAVar4->_windowX;
  local_d0 = iVar12 + 10;
  fVar14 = pAVar4->_windowY;
  iVar13 = (int)fVar14 + 10;
  fVar2 = pAVar4->_windowWidth;
  iVar10 = (int)fVar2;
  fVar15 = (float)local_d0;
  local_d8 = fVar14;
  local_d4 = iVar10;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar13;
  local_e8._0_4_ = fVar15;
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)((int)fVar2 + -0x195);
  UnityEngine_GUI__Label((UnityEngine_Rect_o *)local_e8,"Debug Console (Press F11 to hide)",(MethodInfo *)0x0);
  iVar10 = iVar12 + iVar10;
  local_e8._4_4_ = (float)iVar13;
  local_e8._0_4_ = (float)(iVar10 + -0x181);
  local_e0 = (System_Collections_Generic_LinkedList_Enumerator_T__o *)0x41c8000042b40000;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,"Clear",(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (pSVar5 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                (local_a0,(System_Collections_Generic_LinkedList_T__o *)pSVar5,
                 (MethodInfo_18201E0 *)
                 MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
      local_c8.fields._list = local_a0[0].fields._list;
      local_c8.fields._node = local_a0[0].fields._node;
      local_c8.fields._version = local_a0[0].fields._version;
      local_c8.fields._20_4_ = local_a0[0].fields._20_4_;
      local_c8.fields._current = local_a0[0].fields._current;
      local_c8.fields._index = local_a0[0].fields._index;
      local_c8.fields._36_4_ = local_a0[0].fields._36_4_;
      local_e8._0_4_ = 0.0;
      local_e8._4_4_ = 0.0;
      local_e0 = &local_c8;
      while( true ) {
        bVar9 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                          (&local_c8,
                           (MethodInfo_1538AC0 *)
                           MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext
                          );
        pIVar8 = local_c8.fields._current;
        if (!bVar9) break;
        if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return
                  ((ApplicationManagers_DebugConsole_LogMessage_o *)pIVar8,(MethodInfo *)0x0);
      }
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c8,
                 MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose);
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
      if (pSVar5 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
        System_Collections_Generic_LinkedList_object___GetEnumerator
                  (local_a0,(System_Collections_Generic_LinkedList_T__o *)pSVar5,
                   (MethodInfo_18201E0 *)
                   MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
        local_c8.fields._list = local_a0[0].fields._list;
        local_c8.fields._node = local_a0[0].fields._node;
        local_c8.fields._version = local_a0[0].fields._version;
        local_c8.fields._20_4_ = local_a0[0].fields._20_4_;
        local_c8.fields._current = local_a0[0].fields._current;
        local_c8.fields._index = local_a0[0].fields._index;
        local_c8.fields._36_4_ = local_a0[0].fields._36_4_;
        local_e8._0_4_ = 0.0;
        local_e8._4_4_ = 0.0;
        local_e0 = &local_c8;
        while( true ) {
          bVar9 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                            (&local_c8,
                             (MethodInfo_1538AC0 *)
                             MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext
                            );
          pIVar8 = local_c8.fields._current;
          if (!bVar9) break;
          if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
          }
          ApplicationManagers_DebugConsole_LogMessagePool__Return
                    ((ApplicationManagers_DebugConsole_LogMessage_o *)pIVar8,(MethodInfo *)0x0);
        }
        System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c8,
                   MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
                  );
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar6 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)
                 TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
        if (pSVar6 != (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) {
          System_Collections_Generic_LinkedList_TextCacheEntry___Clear
                    (pSVar6,(MethodInfo_181E860 *)
                            MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_Clear);
          pSVar6 = (System_Collections_Generic_LinkedList_TextCacheEntry__o *)
                   TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
          if (pSVar6 != (System_Collections_Generic_LinkedList_TextCacheEntry__o *)0x0) {
            System_Collections_Generic_LinkedList_TextCacheEntry___Clear
                      (pSVar6,(MethodInfo_181E860 *)
                              MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_Clear);
            pSVar7 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
            if (pSVar7 != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
              piVar1 = &(pSVar7->fields)._version;
              *piVar1 = *piVar1 + 1;
              iVar3 = (pSVar7->fields)._size;
              (pSVar7->fields)._size = 0;
              if (0 < iVar3) {
                System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar3,(MethodInfo *)0x0);
              }
              TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount = 0;
              TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer = 0;
              TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
              TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
              TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText =
                   "";
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText,
                         "");
              goto label_18234a685;
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
label_18234a685:
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar11 = "Show Traces";
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces != false) {
    pSVar11 = "Hide Traces";
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar13;
  local_e8._0_4_ = (float)(iVar10 + -0x122);
  local_e0._0_4_ = 90.0;
  local_e0._4_4_ = 25.0;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,pSVar11,(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces =
         TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces == false;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar11 = "Opaque";
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground != false) {
    pSVar11 = "Glass";
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar13;
  local_e8._0_4_ = (float)(iVar10 + -0xc3);
  local_e0._0_4_ = 90.0;
  local_e0._4_4_ = 25.0;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,pSVar11,(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground =
         TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground == false;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar11 = "Wrap";
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap != false) {
    pSVar11 = "No Wrap";
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar13;
  local_e8._0_4_ = (float)(iVar10 + -100);
  local_e0._0_4_ = 90.0;
  local_e0._4_4_ = 25.0;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,pSVar11,(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap =
         TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap == false;
  }
  iVar10 = (int)fVar14 + 0x2d;
  iVar13 = (local_d4 + -0x3c) / 5;
  fVar14 = (float)local_d0;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar10;
  local_e8._0_4_ = fVar14;
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)iVar13;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,"All",(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = 0;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar10;
  local_e8._0_4_ = (float)(iVar13 + 0x14 + iVar12);
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)iVar13;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,"Info",(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = 1;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar10;
  local_e8._0_4_ = (float)(iVar12 + (iVar13 + 0xf) * 2);
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)iVar13;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,"Warning",(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = 2;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar10;
  local_e8._0_4_ = (float)(iVar12 + iVar13 * 3 + 0x28);
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)iVar13;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,"Error",(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = 3;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar10;
  local_e8._0_4_ = (float)(iVar13 * 4 + 0x32 + iVar12);
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)iVar13;
  bVar9 = UnityEngine_GUI__Button((UnityEngine_Rect_o *)local_e8,"CL",(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab = 4;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = true;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  iVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_e8._4_4_ = (float)iVar10;
  local_e8._0_4_ = (float)((iVar13 + 10) * iVar3 + 10 + iVar12);
  local_e0._4_4_ = 25.0;
  local_e0._0_4_ = (float)iVar13;
  UnityEngine_GUI__Box((UnityEngine_Rect_o *)local_e8,"",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$DrawMessageWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawMessageWindow (const MethodInfo* method);
// 0x182349ab0

void ApplicationManagers_DebugConsole__DrawMessageWindow(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ApplicationManagers_DebugConsole_StaticFields *pAVar5;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar6;
  System_String_o *text;
  UnityEngine_Vector2_Fields scrollPosition;
  UnityEngine_GUISkin_o *__this;
  UnityEngine_GUIStyle_o *other;
  UnityEngine_GUIStyle_o *__this_00;
  System_String_o *__this_01;
  System_String_array *pSVar7;
  UnityEngine_GUIContent_o *pUVar8;
  UnityEngine_Vector2_o UVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fStackX_14;
  UnityEngine_Rect_Fields local_c8;
  UnityEngine_Rect_Fields local_b8 [9];
  
  if (Il2CppMethodInitialized_184347957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIContent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Count);
    Il2CppMethodInitialized_184347957 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  fVar1 = pAVar5->_windowX;
  fVar2 = pAVar5->_windowY;
  fVar3 = pAVar5->_windowWidth;
  fVar4 = pAVar5->_windowHeight;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  __this = UnityEngine_GUI__get_skin((MethodInfo *)0x0);
  if (__this == (UnityEngine_GUISkin_o *)0x0) goto label_182349fdb;
  other = (UnityEngine_GUIStyle_o *)
          UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettings__get_AdaptiveShadowDistance
                    ((UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettings_o *)__this,
                     (MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIStyle);
  UnityEngine_GUIStyle___ctor_2f93bd0(__this_00,other,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GUIStyle_o *)0x0) goto label_182349fdb;
  UnityEngine_GUIStyle__set_wordWrap
            (__this_00,TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap,(MethodInfo *)0x0);
  UnityEngine_GUIStyle__set_richText(__this_00,true,(MethodInfo *)0x0);
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll == false) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar6 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
    if (pSVar6 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) goto label_182349fdb;
    if (0 < (pSVar6->fields).count) goto label_182349c59;
  }
  else {
label_182349c59:
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__ProcessMessageBuffer((MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__UpdateFilteredMessages((MethodInfo *)0x0);
  __this_01 = ApplicationManagers_DebugConsole__GetDisplayText((MethodInfo *)0x0);
  iVar13 = (int)fVar3 + -0x28;
  fVar14 = 0.0;
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap == false) {
    if (__this_01 != (System_String_o *)0x0) {
      pSVar7 = System_String__Split(__this_01,10,0,(MethodInfo *)0x0);
      if (pSVar7 != (System_String_array *)0x0) {
        for (uVar11 = 0; (int)uVar11 < (int)pSVar7->max_length; uVar11 = uVar11 + 1) {
          if ((uint)pSVar7->max_length <= uVar11) {
            ThrowIndexOutOfRangeException();
          }
          text = pSVar7->m_Items[(int)uVar11];
          pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIContent);
          UnityEngine_GUIContent___ctor_2f87190(pUVar8,text,(MethodInfo *)0x0);
          UVar9 = UnityEngine_GUIStyle__CalcSize(__this_00,pUVar8,(MethodInfo *)0x0);
          if (fVar14 < UVar9.fields.x) {
            fVar14 = UVar9.fields.x;
          }
        }
        if (iVar13 <= (int)fVar14 + 10) {
          iVar13 = (int)fVar14 + 10;
        }
        goto label_182349d49;
      }
    }
label_182349fdb:
    ThrowNullReferenceException();
  }
label_182349d49:
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIContent);
  UnityEngine_GUIContent___ctor_2f87190(pUVar8,__this_01,(MethodInfo *)0x0);
  fVar14 = UnityEngine_GUIStyle__CalcHeight(__this_00,pUVar8,(float)iVar13,(MethodInfo *)0x0);
  iVar10 = (int)fVar14 + 10;
  iVar12 = (int)fVar4 + -0x87;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  scrollPosition = (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_scrollPosition).fields;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_b8[0].m_YMin = (float)((int)fVar2 + 0x50);
  local_b8[0].m_XMin = (float)((int)fVar1 + 10);
  local_c8.m_XMin = 0.0;
  local_c8.m_YMin = 0.0;
  local_c8.m_Width = (float)iVar13;
  local_c8.m_Height = (float)iVar10;
  local_b8[0].m_Width = (float)((int)fVar3 + -0x14);
  local_b8[0].m_Height = (float)iVar12;
  UVar9 = UnityEngine_GUI__BeginScrollView
                    ((UnityEngine_Rect_o *)local_b8,scrollPosition,(UnityEngine_Rect_o *)&local_c8,
                     (MethodInfo *)0x0);
  local_b8[0].m_Height = (float)iVar10;
  local_b8[0].m_XMin = 0.0;
  local_b8[0].m_YMin = 0.0;
  pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  (pAVar5->_scrollPosition).fields.x = UVar9.fields.x;
  fStackX_14 = UVar9.fields.y;
  (pAVar5->_scrollPosition).fields.y = fStackX_14;
  local_b8[0].m_Width = (float)iVar13;
  UnityEngine_GUI__TextArea((UnityEngine_Rect_o *)local_b8,__this_01,__this_00,(MethodInfo *)0x0);
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll != false) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    iVar10 = iVar10 - iVar12;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_needResetScroll = false;
    pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    iVar13 = 0;
    if (-1 < iVar10) {
      iVar13 = iVar10;
    }
    (pAVar5->_scrollPosition).fields.x = 0.0;
    (pAVar5->_scrollPosition).fields.y = (float)iVar13;
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  UnityEngine_GUI__EndScrollView((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$DrawInputWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawInputWindow (const MethodInfo* method);
// 0x182349990

void ApplicationManagers_DebugConsole__DrawInputWindow(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  ApplicationManagers_DebugConsole_StaticFields *pAVar3;
  System_String_o *value;
  UnityEngine_Rect_o local_18;
  
  if (Il2CppMethodInitialized_184347958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
    Il2CppMethodInitialized_184347958 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  fVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight;
  fVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  UnityEngine_GUI__SetNextControlName("DebugInput",(MethodInfo *)0x0);
  local_18.fields.m_YMin = (float)((int)(fVar1 + fVar2) + -0x23);
  local_18.fields.m_Height = 25.0;
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  local_18.fields.m_XMin = (float)((int)pAVar3->_windowX + 10);
  local_18.fields.m_Width = (float)((int)pAVar3->_windowWidth + -0x14);
  value = UnityEngine_GUI__TextField(&local_18,pAVar3->_inputLine,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine,value);
  return;
}


// ApplicationManagers.DebugConsole$$HandleInput
// il2cpp: void ApplicationManagers_DebugConsole__HandleInput (const MethodInfo* method);
// 0x18234b0d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234b39f: mov rbx, qword ptr [rsp + 0x20]

void ApplicationManagers_DebugConsole__HandleInput(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_Event_o *pUVar4;
  
  if (Il2CppMethodInitialized_184347959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid debug command.");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
    Il2CppMethodInitialized_184347959 = '\x01';
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  pSVar3 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar3,"DebugInput",(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pUVar4 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Event_o *)0x0) {
    iVar2 = UnityEngine_Event__get_type(pUVar4,(MethodInfo *)0x0);
    if (iVar2 != 5) {
      return;
    }
    pUVar4 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Event_o *)0x0) {
      iVar2 = UnityEngine_Event__get_keyCode(pUVar4,(MethodInfo *)0x0);
      if (iVar2 != 0xd) {
        pUVar4 = UnityEngine_Event__get_current((MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Event_o *)0x0) goto label_18234b3a9;
        iVar2 = UnityEngine_Event__get_keyCode(pUVar4,(MethodInfo *)0x0);
        if (iVar2 != 0x10f) {
          return;
        }
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      bVar1 = System_String__op_Inequality
                        (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine,
                         (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine;
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine;
        if (pSVar3 == (System_String_o *)0x0) goto label_18234b3a9;
        bVar1 = System_String__StartsWith(pSVar3,"/",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine;
          if (pSVar3 == (System_String_o *)0x0) goto label_18234b3a9;
          pSVar3 = System_String__Substring(pSVar3,1,(MethodInfo *)0x0);
          ApplicationManagers_DebugTesting__RunDebugCommand(pSVar3,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          UnityEngine_Debug__Log((Il2CppObject *)"Invalid debug command.",(MethodInfo *)0x0);
        }
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine = pSVar3;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine,pSVar3);
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
      }
      UnityEngine_GUI__FocusControl(pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
label_18234b3a9:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$IsEnterUp
// il2cpp: bool ApplicationManagers_DebugConsole__IsEnterUp (const MethodInfo* method);
// 0x18234c040

bool ApplicationManagers_DebugConsole__IsEnterUp(MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Event_o *pUVar2;
  
  pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Event_o *)0x0) {
    iVar1 = UnityEngine_Event__get_type(pUVar2,(MethodInfo *)0x0);
    if (iVar1 != 5) {
      return false;
    }
    pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Event_o *)0x0) {
      iVar1 = UnityEngine_Event__get_keyCode(pUVar2,(MethodInfo *)0x0);
      if (iVar1 == 0xd) {
        return true;
      }
      pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Event_o *)0x0) {
        iVar1 = UnityEngine_Event__get_keyCode(pUVar2,(MethodInfo *)0x0);
        return iVar1 == 0x10f;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$HandleWindowDraggingAndResizing
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing (const MethodInfo* method);
// 0x18234b3b0

void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  ApplicationManagers_DebugConsole_StaticFields *pAVar3;
  char cVar4;
  int32_t iVar5;
  UnityEngine_Event_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  float fVar9;
  float fStackX_14;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  
  if (Il2CppMethodInitialized_18434795a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434795a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging != false) {
    pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
    UVar7 = UnityEngine_Event__get_mousePosition(pUVar6,(MethodInfo *)0x0);
    fStackX_14 = UVar7.fields.y;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowX =
         UVar7.fields.x + (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_dragOffset).fields.x;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY =
         fStackX_14 + (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_dragOffset).fields.y;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing != false) {
    pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
    UVar7 = UnityEngine_Event__get_mousePosition(pUVar6,(MethodInfo *)0x0);
    fStackX_14 = UVar7.fields.y;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    fVar8 = (UVar7.fields.x - (pAVar3->_resizeStartMousePos).fields.x) + (pAVar3->_resizeStartSize).fields.x;
    if (fVar8 <= 400.0) {
      fVar8 = 400.0;
    }
    fVar9 = (fStackX_14 - (pAVar3->_resizeStartMousePos).fields.y) + (pAVar3->_resizeStartSize).fields.y;
    if (fVar9 <= 300.0) {
      fVar9 = 300.0;
    }
    pAVar3->_windowWidth = fVar8;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight = fVar9;
  }
  pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
  iVar5 = UnityEngine_Event__get_type(pUVar6,(MethodInfo *)0x0);
  if (iVar5 == 0) {
    pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
    iVar5 = UnityEngine_Event__get_button(pUVar6,(MethodInfo *)0x0);
    if (iVar5 == 0) {
      pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
      UVar7 = UnityEngine_Event__get_mousePosition(pUVar6,(MethodInfo *)0x0);
      fStackX_14 = UVar7.fields.y;
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      fVar8 = pAVar3->_windowX;
      fVar9 = pAVar3->_windowY;
      fVar1 = pAVar3->_windowWidth;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      local_6c = 0x428c0000;
      local_78 = fVar8;
      local_74 = fVar9;
      local_70 = fVar1;
      cVar4 = il2cpp_runtime_helper_1816e2b50(&local_78,UVar7.fields,0);
      if (cVar4 == '\0') {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        fVar8 = pAVar3->_windowX;
        fVar9 = pAVar3->_windowWidth;
        fVar1 = pAVar3->_windowY;
        fVar2 = pAVar3->_windowHeight;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        local_70 = 15.0;
        local_6c = 0x41700000;
        local_78 = (fVar9 + fVar8) - 15.0;
        local_74 = (fVar2 + fVar1) - 15.0;
        cVar4 = il2cpp_runtime_helper_1816e2b50(&local_78,UVar7.fields,0);
        if (cVar4 == '\0') goto label_18234b811;
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        fVar8 = pAVar3->_windowHeight;
        (pAVar3->_resizeStartSize).fields.x = pAVar3->_windowWidth;
        (pAVar3->_resizeStartSize).fields.y = fVar8;
        pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        (pAVar3->_resizeStartMousePos).fields.x = UVar7.fields.x;
        (pAVar3->_resizeStartMousePos).fields.y = fStackX_14;
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing = true;
      }
      else {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        fVar8 = pAVar3->_windowY;
        (pAVar3->_dragOffset).fields.x = pAVar3->_windowX - UVar7.fields.x;
        (pAVar3->_dragOffset).fields.y = fVar8 - fStackX_14;
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging = true;
      }
      pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
      UnityEngine_Event__Use(pUVar6,(MethodInfo *)0x0);
    }
  }
label_18234b811:
  pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Event_o *)0x0) {
    iVar5 = UnityEngine_Event__get_type(pUVar6,(MethodInfo *)0x0);
    if (iVar5 == 1) {
      pUVar6 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Event_o *)0x0) goto label_18234b962;
      iVar5 = UnityEngine_Event__get_button(pUVar6,(MethodInfo *)0x0);
      if (iVar5 == 0) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging = false;
        TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing = false;
      }
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    fVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowX;
    iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    fVar9 = (float)iVar5 - TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowWidth;
    if (fVar8 < 0.0) {
      fVar9 = 0.0;
    }
    else if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowX = fVar9;
    fVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY;
    iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    fVar9 = (float)iVar5 - TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight;
    if (fVar8 < 0.0) {
      fVar9 = 0.0;
    }
    else if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY = fVar9;
    return;
  }
label_18234b962:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$DrawResizeHandle
// il2cpp: void ApplicationManagers_DebugConsole__DrawResizeHandle (const MethodInfo* method);
// 0x182349ff0

void ApplicationManagers_DebugConsole__DrawResizeHandle(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ApplicationManagers_DebugConsole_StaticFields *pAVar5;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_18434795b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x8b\xb0");
    Il2CppMethodInitialized_18434795b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  fVar1 = pAVar5->_windowWidth;
  fVar2 = pAVar5->_windowHeight;
  fVar3 = pAVar5->_windowX;
  fVar4 = pAVar5->_windowY;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  local_38[0].fields.m_Width = 15.0;
  local_38[0].fields.m_Height = 15.0;
  local_38[0].fields.m_XMin = (fVar1 + fVar3) - 15.0;
  local_38[0].fields.m_YMin = (fVar2 + fVar4) - 15.0;
  UnityEngine_GUI__Box(local_38,"\xe2\x8b\xb0",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.ctor
// il2cpp: void ApplicationManagers_DebugConsole___ctor (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_DebugConsole___ctor(ApplicationManagers_DebugConsole_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole___cctor (const MethodInfo* method);
// 0x18234d1a0

void ApplicationManagers_DebugConsole___cctor(MethodInfo *method)

{
  float fVar1;
  ApplicationManagers_DebugConsole_StaticFields *pAVar2;
  System_String_o *value;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar3;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *__this;
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_18434795c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_DebugConsole_LogMessage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434795c = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage);
  System_Collections_Generic_LinkedList_object____ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pSVar3,
             MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_ctor);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages,pSVar3);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage);
  System_Collections_Generic_LinkedList_object____ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pSVar3,
             MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_ctor);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer = pSVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer,pSVar3);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount = 0;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer = 0;
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  pAVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  (pAVar2->_scrollPosition).fields.x = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  (pAVar2->_scrollPosition).fields.y = fVar1;
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine,value);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DebugConsole_LogMessage);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_T__o *)__this,0x400,
             (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_ctor);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages,__this);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_1980e60(__this_00,0x2000,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder,__this_00);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText = "";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_cachedDisplayText,
             "");
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayDirty = true;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilteredCount = 0;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastShowStackTraces = false;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowX = 20.0;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY = 20.0;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowWidth = 600.0;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight = 400.0;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging = false;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing = false;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces = false;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground = true;
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap = true;
  return;
}


