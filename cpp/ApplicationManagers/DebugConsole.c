// Type: ApplicationManagers.DebugConsole
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugConsole.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugConsole.cs
// --------------------------------

// ApplicationManagers.DebugConsole.LogMessage$$Initialize
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Initialize (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x5e13d30
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e13d54: test rbp, rbp
// asm:   0x5e13d57: je 0x5e13e51
// asm:   0x5e13d5d: test rbx, rbx
// asm:   0x5e13d60: je 0x5e13e72

void ApplicationManagers_DebugConsole_LogMessage__Initialize
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,int32_t type,
               System_String_o *stackTrace,bool isCustomLogic,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_07548417 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"<color=red>\xe2\x9c\x96</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=yellow>\xe2\x9a\xa0</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=orange>!</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=red>\xe2\x9b\x94</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=white>\xe2\x84\xb9</color> ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548417 = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).Message = message;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Message);
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields).StackTrace = stackTrace;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StackTrace);
  (__this->fields).Type = type;
  (__this->fields).IsCustomLogic = isCustomLogic;
  (__this->fields).Count = 1;
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedFormatted);
  (__this->fields)._lastShowStackTraces = false;
  (__this->fields)._lastCount = 0;
  switch(type) {
  case 0:
    ppSVar1 = &"<color=red>\xe2\x9c\x96</color> ";
    break;
  case 1:
    ppSVar1 = &"<color=orange>!</color> ";
    break;
  case 2:
    ppSVar1 = &"<color=yellow>\xe2\x9a\xa0</color> ";
    break;
  case 3:
    ppSVar1 = &"<color=white>\xe2\x84\xb9</color> ";
    break;
  case 4:
    ppSVar1 = &"<color=red>\xe2\x9b\x94</color> ";
    break;
  default:
    ppSVar1 = &"";
  }
  (__this->fields).Prefix = *ppSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Prefix);
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$Reset
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Reset (ApplicationManagers_DebugConsole_LogMessage_o* __this, const MethodInfo* method);
// 0x5e13ec0

void ApplicationManagers_DebugConsole_LogMessage__Reset
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  (__this->fields).Message = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Message);
  (__this->fields).StackTrace = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).StackTrace);
  (__this->fields).Prefix = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Prefix);
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedFormatted);
  (__this->fields).Count = 1;
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$GetFormattedMessage
// il2cpp: System_String_o* ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage (ApplicationManagers_DebugConsole_LogMessage_o* __this, bool showStackTraces, const MethodInfo* method);
// 0x5e11230

System_String_o *
ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
          (ApplicationManagers_DebugConsole_LogMessage_o *__this,bool showStackTraces,MethodInfo *method)

{
  System_String_o **targetAddress;
  int iVar1;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07548418 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&" (x{0})");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548418 = '\x01';
  }
  pSVar3 = (__this->fields)._cachedFormatted;
  if (((pSVar3 == (System_String_o *)0x0) || ((__this->fields)._lastShowStackTraces != showStackTraces)) ||
     ((__this->fields)._lastCount != (__this->fields).Count)) {
    (__this->fields)._lastShowStackTraces = showStackTraces;
    iVar1 = (__this->fields).Count;
    (__this->fields)._lastCount = iVar1;
    if (iVar1 < 2) {
      pSVar3 = "";
    }
    else {
      uStack_28 = CONCAT44(iVar1,(undefined4)uStack_28);
      arg0 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_28 + 4));
      pSVar3 = System_String__Format(" (x{0})",arg0,(MethodInfo *)0x0);
    }
    targetAddress = &(__this->fields)._cachedFormatted;
    pSVar3 = System_String__Concat_5301f10
                       ((__this->fields).Prefix,(__this->fields).Message,pSVar3,(MethodInfo *)0x0);
    if (showStackTraces) {
      bVar2 = System_String__IsNullOrEmpty((__this->fields).StackTrace,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar3 = System_String__Concat_5301f10
                           (pSVar3,"\n",(__this->fields).StackTrace,(MethodInfo *)0x0);
      }
    }
    *targetAddress = pSVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar3 = *targetAddress;
  }
  return pSVar3;
}


// ApplicationManagers.DebugConsole.LogMessage$$IsDuplicateOf
// il2cpp: bool ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, bool isCustomLogic, System_String_o* stackTrace, const MethodInfo* method);
// 0x5e101c0

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
// 0x5e13f20

void ApplicationManagers_DebugConsole_LogMessage___ctor
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool___cctor (const MethodInfo* method);
// 0x5e13f30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e13fe9: nop dword ptr [rax]

void ApplicationManagers_DebugConsole_LogMessagePool___cctor(MethodInfo *method)

{
  System_Collections_Generic_Stack_DebugConsole_LogMessage__o *pSVar1;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  int iVar2;
  
  if (Il2CppMethodInitialized_07548419 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage);
    Il2CppMethodInitialized_07548419 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage);
  iVar2 = 0x200;
  System_Collections_Generic_Stack_object____ctor_4104710
            ((System_Collections_Generic_Stack_object__o *)pSVar1,0x200,
             (MethodInfo_4104710 *)MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_ctor);
  TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool);
  do {
    pSVar1 = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Stack_object___Push
              ((System_Collections_Generic_Stack_object__o *)pSVar1,(Il2CppObject *)__this,
               (MethodInfo_4104E00 *)MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push)
    ;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Get
// il2cpp: ApplicationManagers_DebugConsole_LogMessage_o* ApplicationManagers_DebugConsole_LogMessagePool__Get (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x5e10220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1025f: jmp 0x5e1034b

ApplicationManagers_DebugConsole_LogMessage_o *
ApplicationManagers_DebugConsole_LogMessagePool__Get
          (System_String_o *message,int32_t type,System_String_o *stackTrace,bool isCustomLogic,
          MethodInfo *method)

{
  System_Collections_Generic_Stack_DebugConsole_LogMessage__o *__this;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754841a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Pop);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_get_Count);
    Il2CppMethodInitialized_0754841a = '\x01';
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e10250;
label_05e102ae:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool)
    ;
    __this = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
  }
  else {
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e102ae;
label_05e10250:
    __this = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
  }
  if (__this != (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
    if ((__this->fields)._size < 1) {
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessage);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    }
    else {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        __this = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
        if (__this == (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) goto label_05e1034b;
      }
      __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)
                  System_Collections_Generic_Stack_object___Pop
                            ((System_Collections_Generic_Stack_object__o *)__this,
                             (MethodInfo_4104CE0 *)
                             MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Pop);
    }
    if (__this_00 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
      ApplicationManagers_DebugConsole_LogMessage__Initialize
                (__this_00,message,type,stackTrace,isCustomLogic,in_R9);
      return __this_00;
    }
  }
label_05e1034b:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Return
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool__Return (ApplicationManagers_DebugConsole_LogMessage_o* logMessage, const MethodInfo* method);
// 0x5e10350

void ApplicationManagers_DebugConsole_LogMessagePool__Return
               (ApplicationManagers_DebugConsole_LogMessage_o *logMessage,MethodInfo *method)

{
  System_Collections_Generic_Stack_DebugConsole_LogMessage__o *__this;
  
  if (Il2CppMethodInitialized_0754841b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_get_Count);
    Il2CppMethodInitialized_0754841b = '\x01';
  }
  if (logMessage != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    (logMessage->fields).Message = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(logMessage->fields).Message);
    (logMessage->fields).StackTrace = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(logMessage->fields).StackTrace);
    (logMessage->fields).Prefix = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(logMessage->fields).Prefix);
    (logMessage->fields)._cachedFormatted = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(logMessage->fields)._cachedFormatted);
    (logMessage->fields).Count = 1;
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    __this = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
    if (__this == (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) {
label_05e1045e:
      ThrowNullReferenceException();
    }
    if ((__this->fields)._size < 0x200) {
      if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        __this = TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->static_fields->_pool;
        if (__this == (System_Collections_Generic_Stack_DebugConsole_LogMessage__o *)0x0) goto label_05e1045e;
      }
      System_Collections_Generic_Stack_object___Push
                ((System_Collections_Generic_Stack_object__o *)__this,(Il2CppObject *)logMessage,
                 (MethodInfo_4104E00 *)
                 MethodInfo_System_Collections_Generic_Stack_DebugConsole_LogMessage_Push);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$Init
// il2cpp: void ApplicationManagers_DebugConsole__Init (const MethodInfo* method);
// 0x5e08a90

void ApplicationManagers_DebugConsole__Init(MethodInfo *method)

{
  ApplicationManagers_DebugConsole_o *object;
  ApplicationManagers_DebugConsole_StaticFields *pAVar1;
  bool bVar2;
  ApplicationManagers_DebugConsole_o *pAVar3;
  UnityEngine_GameObject_o *owner;
  System_Action_o *__this;
  Utility_GUICallback_o *pUVar4;
  UnityEngine_Application_LogCallback_o *__this_00;
  
  if (Il2CppMethodInitialized_07548403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugConsole_DrawWindow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application_LogCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugConsole);
    Il2CppMethodInitialized_07548403 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_DebugConsole);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance = pAVar3;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance;
  if (pAVar3 == (ApplicationManagers_DebugConsole_o *)0x0) {
    ThrowNullReferenceException();
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pAVar3,(MethodInfo *)0x0);
  object = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_instance;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this,(Il2CppObject *)object,(intptr_t)MethodInfo_ApplicationManagers_DebugConsole_DrawWindow,
             (MethodInfo *)0x0);
  pUVar4 = Utility_GUICallback__Create(owner,__this,(MethodInfo *)0x0);
  (pAVar3->fields)._window = pUVar4;
  Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._window);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Application_LogCallback);
  UnityEngine_Application_LogCallback___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_DebugConsole_OnUnityDebugLog,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__add_logMessageReceived(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  bVar2 = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar1->_currentTab = (uint)!bVar2 << 2;
  pAVar1->_lastFilterTab = (uint)!bVar2 << 2;
  return;
}


// ApplicationManagers.DebugConsole$$Log
// il2cpp: void ApplicationManagers_DebugConsole__Log (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x5e0fa90

void ApplicationManagers_DebugConsole__Log(System_String_o *message,bool showInChat,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_07548404 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  if (showInChat) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    }
    else {
      bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    }
    if (bVar1) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddException(message,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$LogCustomLogic
// il2cpp: void ApplicationManagers_DebugConsole__LogCustomLogic (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x5e0fb40

void ApplicationManagers_DebugConsole__LogCustomLogic
               (System_String_o *message,bool showInChat,MethodInfo *method)

{
  bool bVar1;
  System_String_o *message_00;
  
  if (Il2CppMethodInitialized_07548405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"[Custom Logic Error] ");
    Il2CppMethodInitialized_07548405 = '\x01';
  }
  message_00 = System_String__Concat_52f0320("[Custom Logic Error] ",message,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message_00,(MethodInfo *)0x0);
  if (showInChat) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    }
    else {
      bVar1 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    }
    if (bVar1) {
      if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__AddException(message,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$LogTimeSince
// il2cpp: void ApplicationManagers_DebugConsole__LogTimeSince (float start, System_String_o* prefix, const MethodInfo* method);
// 0x5e0fc10

void ApplicationManagers_DebugConsole__LogTimeSince(float start,System_String_o *prefix,MethodInfo *method)

{
  System_String_o *pSVar1;
  float local_c;
  
  if (Il2CppMethodInitialized_07548406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    Il2CppMethodInitialized_07548406 = '\x01';
  }
  local_c = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  local_c = local_c - start;
  pSVar1 = System_Single__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(prefix,": ",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$OnUnityDebugLog
// il2cpp: void ApplicationManagers_DebugConsole__OnUnityDebugLog (System_String_o* log, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
// 0x5e0fcb0

void ApplicationManagers_DebugConsole__OnUnityDebugLog
               (System_String_o *log,System_String_o *stackTrace,int32_t type,MethodInfo *method)

{
  bool isCustomLogic;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07548407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&"[Custom Logic Error] ");
    Il2CppMethodInitialized_07548407 = '\x01';
  }
  if (log == (System_String_o *)0x0) {
label_05e0fd5d:
    ThrowNullReferenceException();
  }
  isCustomLogic = System_String__StartsWith(log,"[Custom Logic Error] ",(MethodInfo *)0x0);
  if (isCustomLogic) {
    if ("[Custom Logic Error] " == (System_String_o *)0x0) goto label_05e0fd5d;
    log = System_String__Substring(log,("[Custom Logic Error] "->fields)._stringLength,(MethodInfo *)0x0);
    if (type == 3) {
      type = 0;
    }
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__AddMessageBuffer(log,type,stackTrace,isCustomLogic,in_R8);
  return;
}


// ApplicationManagers.DebugConsole$$AddMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__AddMessageBuffer (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x5e0fd70
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0fd8f: test r13, r13
// asm:   0x5e0fd92: je 0x5e0fe2b
// asm:   0x5e0fd98: test r14, r14
// asm:   0x5e0fda1: test r13, r13
// asm:   0x5e0fda4: jne 0x5e0fe6d
// asm:   0x5e0fdaa: jmp 0x5e101b3
// asm:   0x5e0fee8: jmp 0x5e101b3

void ApplicationManagers_DebugConsole__AddMessageBuffer
               (System_String_o *message,int32_t type,System_String_o *stackTrace,bool isCustomLogic,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar5;
  System_Collections_Generic_LinkedListNode_T__o *pSVar6;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar7;
  ApplicationManagers_DebugConsole_StaticFields *pAVar8;
  int iVar9;
  bool *pbVar10;
  int32_t length;
  MethodInfo *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548408 == '\0') {
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
    Il2CppMethodInitialized_07548408 = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (message == (System_String_o *)0x0) goto label_05e101b3;
  iVar9 = (message->fields)._stringLength;
  pSVar3 = message;
  if (0x400 < iVar9) {
    pSVar3 = System_String__Substring_53042f0(message,0,0x400,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320(pSVar3,"...",(MethodInfo *)0x0);
    iVar9 = (message->fields)._stringLength;
  }
  if (0x3ff < iVar9) {
    iVar9 = 0x400;
  }
  if (stackTrace == (System_String_o *)0x0) goto label_05e101b3;
  length = 0x400 - iVar9;
  if (length < (stackTrace->fields)._stringLength) {
    if (length < 1) {
      length = 0;
    }
    pSVar4 = System_String__Substring_53042f0(stackTrace,0,length,(MethodInfo *)0x0);
    stackTrace = System_String__Concat_52f0320(pSVar4,"...",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor != 0) goto label_05e0fed8;
label_05e0ff2b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
  }
  else {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) goto label_05e0ff2b;
label_05e0fed8:
    pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
  }
  if (pSVar5 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
    if (0 < (pSVar5->fields).count) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
        if (pSVar5 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
        goto label_05e101b3;
      }
      pSVar6 = System_Collections_Generic_LinkedList_object___get_Last
                         ((System_Collections_Generic_LinkedList_T__o *)pSVar5,
                          (MethodInfo_514F630 *)
                          MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last);
      if ((pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
         (pIVar1 = (pSVar6->fields).item, pIVar1 == (Il2CppObject *)0x0)) goto label_05e101b3;
      bVar2 = System_String__op_Equality((System_String_o *)pIVar1[1].klass,pSVar3,(MethodInfo *)0x0);
      if ((bVar2) &&
         (((*(int *)&pIVar1[1].monitor == type && ((bool)*(char *)&pIVar1[2].monitor == isCustomLogic)) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pIVar1[3].klass,stackTrace,(MethodInfo *)0x0)
          , bVar2)))) {
        *(int *)&pIVar1[3].monitor = *(int *)&pIVar1[3].monitor + 1;
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        pbVar10 = &pAVar8->_needResetScroll;
label_05e1019d:
        *pbVar10 = true;
        pAVar8->_displayDirty = true;
        return;
      }
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    pAVar7 = ApplicationManagers_DebugConsole_LogMessagePool__Get(pSVar3,type,stackTrace,isCustomLogic,method)
    ;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
    if (((pSVar5 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) &&
        (System_Collections_Generic_LinkedList_object___AddLast
                   ((System_Collections_Generic_LinkedList_T__o *)pSVar5,(Il2CppObject *)pAVar7,
                    (MethodInfo_514F8F0 *)
                    MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast),
        klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole, pSVar3 != (System_String_o *)0x0))
       && (stackTrace != (System_String_o *)0x0)) {
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer =
           TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer +
           (pSVar3->fields)._stringLength + (stackTrace->fields)._stringLength;
      while( true ) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
        }
        pAVar8 = klass->static_fields;
        if (pAVar8->_messageBuffer == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
        break;
        if ((pAVar8->_messageBuffer->fields).count < 0x401) {
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(klass);
            pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
          }
          if (pAVar8->_currentCharCountBuffer < 0x7a121) {
            if ((klass->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(klass);
              pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            }
            pAVar8->_needResetScroll = true;
            pbVar10 = &pAVar8->_filterDirty;
            goto label_05e1019d;
          }
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
        }
        pAVar8 = klass->static_fields;
        pSVar5 = pAVar8->_messageBuffer;
        if (((pSVar5 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) ||
            (pSVar6 = ((System_Collections_Generic_LinkedList_T__Fields *)&pSVar5->fields)->head,
            pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
           ((pAVar7 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
            pAVar7 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
            ((pSVar3 = (pAVar7->fields).Message, pSVar3 == (System_String_o *)0x0 ||
             (pSVar4 = (pAVar7->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))))) break;
        pAVar8->_currentCharCountBuffer =
             pAVar8->_currentCharCountBuffer -
             ((pSVar3->fields)._stringLength + (pSVar4->fields)._stringLength);
        method_00 = MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst;
        System_Collections_Generic_LinkedList_object___RemoveFirst
                  ((System_Collections_Generic_LinkedList_T__o *)pSVar5,
                   (MethodInfo_514FF20 *)
                   MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
        if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar7,method_00);
        klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
      }
    }
  }
label_05e101b3:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$AddMessage
// il2cpp: void ApplicationManagers_DebugConsole__AddMessage (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x5e10470

void ApplicationManagers_DebugConsole__AddMessage
               (System_String_o *message,int32_t type,System_String_o *stackTrace,bool isCustomLogic,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar5;
  System_Collections_Generic_LinkedListNode_T__o *pSVar6;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar7;
  ApplicationManagers_DebugConsole_StaticFields *pAVar8;
  MethodInfo *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548409 == '\0') {
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
    Il2CppMethodInitialized_07548409 = '\x01';
  }
  bVar4 = System_String__op_Equality
                    (message,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
  if (pSVar5 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
    if (0 < (pSVar5->fields).count) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
        if (pSVar5 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
        goto label_05e107a8;
      }
      pSVar6 = System_Collections_Generic_LinkedList_object___get_Last
                         ((System_Collections_Generic_LinkedList_T__o *)pSVar5,
                          (MethodInfo_514F630 *)
                          MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last);
      if ((pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
         (pIVar1 = (pSVar6->fields).item, pIVar1 == (Il2CppObject *)0x0)) goto label_05e107a8;
      bVar4 = System_String__op_Equality((System_String_o *)pIVar1[1].klass,message,(MethodInfo *)0x0);
      if ((bVar4) &&
         (((*(int *)&pIVar1[1].monitor == type && ((bool)*(char *)&pIVar1[2].monitor == isCustomLogic)) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pIVar1[3].klass,stackTrace,(MethodInfo *)0x0)
          , bVar4)))) {
        *(int *)&pIVar1[3].monitor = *(int *)&pIVar1[3].monitor + 1;
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
label_05e10795:
        pAVar8->_displayDirty = true;
        return;
      }
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    pAVar7 = ApplicationManagers_DebugConsole_LogMessagePool__Get
                       (message,type,stackTrace,isCustomLogic,method);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (((pSVar5 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) &&
        (System_Collections_Generic_LinkedList_object___AddLast
                   ((System_Collections_Generic_LinkedList_T__o *)pSVar5,(Il2CppObject *)pAVar7,
                    (MethodInfo_514F8F0 *)
                    MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast),
        klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole, message != (System_String_o *)0x0))
       && (stackTrace != (System_String_o *)0x0)) {
      TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount =
           TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCount +
           (message->fields)._stringLength + (stackTrace->fields)._stringLength;
      while( true ) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
        }
        pAVar8 = klass->static_fields;
        if (pAVar8->_messages == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
        break;
        if ((pAVar8->_messages->fields).count < 0x401) {
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(klass);
            pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
          }
          if (pAVar8->_currentCharCount < 0x7a121) {
            if ((klass->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(klass);
              pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            }
            pAVar8->_filterDirty = true;
            goto label_05e10795;
          }
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
        }
        pAVar8 = klass->static_fields;
        pSVar5 = pAVar8->_messages;
        if (((pSVar5 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) ||
            (pSVar6 = ((System_Collections_Generic_LinkedList_T__Fields *)&pSVar5->fields)->head,
            pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
           ((pAVar7 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
            pAVar7 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
            ((pSVar2 = (pAVar7->fields).Message, pSVar2 == (System_String_o *)0x0 ||
             (pSVar3 = (pAVar7->fields).StackTrace, pSVar3 == (System_String_o *)0x0)))))) break;
        pAVar8->_currentCharCount =
             pAVar8->_currentCharCount - ((pSVar2->fields)._stringLength + (pSVar3->fields)._stringLength);
        method_00 = MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst;
        System_Collections_Generic_LinkedList_object___RemoveFirst
                  ((System_Collections_Generic_LinkedList_T__o *)pSVar5,
                   (MethodInfo_514FF20 *)
                   MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
        if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar7,method_00);
        klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
      }
    }
  }
label_05e107a8:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$ProcessMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__ProcessMessageBuffer (const MethodInfo* method);
// 0x5e107b0

void ApplicationManagers_DebugConsole__ProcessMessageBuffer(MethodInfo *method)

{
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  bool bVar6;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar7;
  System_Collections_Generic_LinkedListNode_T__o *pSVar8;
  ApplicationManagers_DebugConsole_StaticFields *pAVar9;
  int iVar10;
  uint uVar11;
  MethodInfo *pMVar12;
  uint uVar13;
  
  if (Il2CppMethodInitialized_0754840a == '\0') {
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
    Il2CppMethodInitialized_0754840a = '\x01';
  }
  uVar13 = 0;
  while( true ) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar9 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pSVar7 = pAVar9->_messageBuffer;
    if (pSVar7 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
    if ((0x31 < uVar13) || ((pSVar7->fields).count < 1)) {
      if (uVar13 != 0) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          pAVar9 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        }
        pAVar9->_filterDirty = true;
        pAVar9->_displayDirty = true;
      }
      return;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      pSVar7 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
      if (pSVar7 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
    }
    pSVar8 = (pSVar7->fields).head;
    if (pSVar8 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) break;
    pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar8->fields).item;
    System_Collections_Generic_LinkedList_object___RemoveFirst
              ((System_Collections_Generic_LinkedList_T__o *)pSVar7,
               (MethodInfo_514FF20 *)
               MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
    pSVar7 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (pSVar7 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
    if ((pSVar7->fields).count < 1) {
label_05e10a20:
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      if (((pAVar1 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar3 = (pAVar1->fields).Message, pSVar3 != (System_String_o *)0x0)) &&
         (pSVar4 = (pAVar1->fields).StackTrace, pSVar4 != (System_String_o *)0x0)) {
        pAVar9 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        iVar10 = (pSVar4->fields)._stringLength + (pSVar3->fields)._stringLength;
        pAVar9->_currentCharCountBuffer = pAVar9->_currentCharCountBuffer - iVar10;
        pAVar9->_currentCharCount = pAVar9->_currentCharCount + iVar10;
        if (pAVar9->_messages != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
          System_Collections_Generic_LinkedList_object___AddLast
                    ((System_Collections_Generic_LinkedList_T__o *)pAVar9->_messages,(Il2CppObject *)pAVar1,
                     (MethodInfo_514F8F0 *)
                     MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_AddLast);
          do {
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            pAVar9 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            if (pAVar9->_messages == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
            break;
            if ((pAVar9->_messages->fields).count < 0x401) {
              if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
                pAVar9 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
              }
              if (pAVar9->_currentCharCount < 0x7a121) goto label_05e10860;
            }
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            pAVar9 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            pSVar7 = pAVar9->_messages;
            if ((((pSVar7 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) ||
                 (pSVar8 = ((System_Collections_Generic_LinkedList_T__Fields *)&pSVar7->fields)->head,
                 pSVar8 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
                (pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar8->fields).item,
                pAVar1 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
               ((pSVar3 = (pAVar1->fields).Message, pSVar3 == (System_String_o *)0x0 ||
                (pSVar4 = (pAVar1->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))) break;
            pAVar9->_currentCharCount =
                 pAVar9->_currentCharCount - ((pSVar3->fields)._stringLength + (pSVar4->fields)._stringLength)
            ;
            pMVar12 = MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst;
            System_Collections_Generic_LinkedList_object___RemoveFirst
                      ((System_Collections_Generic_LinkedList_T__o *)pSVar7,
                       (MethodInfo_514FF20 *)
                       MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_RemoveFirst);
            if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
            }
            ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar1,pMVar12);
          } while( true );
        }
      }
      break;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      pSVar7 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
      if (pSVar7 == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) break;
    }
    pSVar8 = System_Collections_Generic_LinkedList_object___get_Last
                       ((System_Collections_Generic_LinkedList_T__o *)pSVar7,
                        (MethodInfo_514F630 *)
                        MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Last);
    if (((pSVar8 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
        (pAVar1 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (pIVar2 = (pSVar8->fields).item, pIVar2 == (Il2CppObject *)0x0)) break;
    iVar10 = (pAVar1->fields).Type;
    bVar6 = (pAVar1->fields).IsCustomLogic;
    pSVar3 = (pAVar1->fields).StackTrace;
    bVar5 = System_String__op_Equality
                      ((System_String_o *)pIVar2[1].klass,(pAVar1->fields).Message,(MethodInfo *)0x0);
    if (((!bVar5) || (*(int *)&pIVar2[1].monitor != iVar10)) || ((bool)*(char *)&pIVar2[2].monitor != bVar6))
    goto label_05e10a20;
    bVar6 = System_String__op_Equality((System_String_o *)pIVar2[3].klass,pSVar3,(MethodInfo *)0x0);
    if (!bVar6) goto label_05e10a20;
    *(int *)&pIVar2[3].monitor = *(int *)&pIVar2[3].monitor + (pAVar1->fields).Count;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar3 = (pAVar1->fields).Message;
    if ((pSVar3 == (System_String_o *)0x0) ||
       (pSVar4 = (pAVar1->fields).StackTrace, pSVar4 == (System_String_o *)0x0)) break;
    uVar11 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer -
             ((pSVar3->fields)._stringLength + (pSVar4->fields)._stringLength);
    pMVar12 = (MethodInfo *)(ulong)uVar11;
    TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentCharCountBuffer = uVar11;
    if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
    }
    ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar1,pMVar12);
label_05e10860:
    uVar13 = uVar13 + 1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$UpdateFilteredMessages
// il2cpp: void ApplicationManagers_DebugConsole__UpdateFilteredMessages (const MethodInfo* method);
// 0x5e10bb0
// eh: try 0x5e10d6f..0x5e10ef8 -> pad 0x5e10f09 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e10f25..0x5e10f2a -> pad 0x5e10f4d cleanup
// eh: try 0x5e10f50..0x5e10f5a -> pad 0x5e10f62 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e10c57: jmp 0x5e10c6e
// asm:   0x5e10c82: jmp 0x5e10ed0
// asm:   0x5e10efd: jmp 0x5e10f0d
// asm:   0x5e10eff: jmp 0x5e10f0d
// asm:   0x5e10f01: jmp 0x5e10f0d
// asm:   0x5e10f03: jmp 0x5e10f0d
// asm:   0x5e10f05: jmp 0x5e10f0d
// asm:   0x5e10f07: jmp 0x5e10f0d
// asm:   0x5e10f09: jmp 0x5e10f0d
// asm:   0x5e10f0b: jmp 0x5e10f0d
// asm:   0x5e10f0d: mov rbx, rax
// asm:   0x5e10f10: cmp edx, 1
// asm:   0x5e10f13: jne 0x5e10f50
// asm:   0x5e10f15: mov rdi, rbx
// asm:   0x5e10f18: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e10f1d: mov rbx, qword ptr [rax]
// asm:   0x5e10f20: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5e10f25: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e10f2a: lea rax, [rip + 0x147e1f7]  ; MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
// asm:   0x5e10f31: mov rsi, qword ptr [rax]
// asm:   0x5e10f34: mov rdi, rsp
// asm:   0x5e10f37: call 0x4d45b70  ; System_Collections_Generic_LinkedList_Enumerator_object___Dispose()
// asm:   0x5e10f3c: test rbx, rbx
// asm:   0x5e10f3f: je 0x5e10ea4
// asm:   0x5e10f45: mov rdi, rbx
// asm:   0x5e10f48: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e10f4d: mov rbx, rax
// asm:   0x5e10f50: lea rdi, [rsp + 0x30]
// asm:   0x5e10f55: call 0x2fe0380  ; il2cpp_runtime_helper_02fe0380()
// asm:   0x5e10f5a: mov rdi, rbx
// asm:   0x5e10f5d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e10f62: mov rdi, rax
// asm:   0x5e10f65: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_DebugConsole__UpdateFilteredMessages(MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int32_t length;
  uint uVar3;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *pSVar4;
  ApplicationManagers_DebugConsole_LogMessage_array *pAVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_LinkedListNode_T__o *item;
  bool bVar7;
  ApplicationManagers_DebugConsole_StaticFields *pAVar8;
  System_Collections_Generic_LinkedListNode_T__o local_88;
  undefined1 local_58 [24];
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_40;
  System_Collections_Generic_LinkedListNode_T__o *local_38;
  
  if (Il2CppMethodInitialized_0754840b == '\0') {
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
    Il2CppMethodInitialized_0754840b = '\x01';
  }
  local_88.fields.list = (System_Collections_Generic_LinkedList_T__o *)0x0;
  local_88.fields.next = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  local_88.klass = (System_Collections_Generic_LinkedListNode_T__c *)0x0;
  local_88.monitor = (void *)0x0;
  local_88.fields.prev = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    cVar2 = pAVar8->_filterDirty;
  }
  else {
    pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    cVar2 = pAVar8->_filterDirty;
  }
  if (cVar2 == '\0') {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_lastFilterTab ==
          TypeInfo_ApplicationManagers_DebugConsole->static_fields->_currentTab) {
        return;
      }
    }
    else if (pAVar8->_lastFilterTab == pAVar8->_currentTab) {
      return;
    }
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pSVar4 = pAVar8->_filteredMessages;
  if (pSVar4 != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    }
    if (pAVar8->_messages != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_LinkedList_T__o *)pAVar8->_messages,
                 (MethodInfo_514FDA0 *)
                 MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
      local_88.fields.prev = local_38;
      local_88.fields.list = (System_Collections_Generic_LinkedList_T__o *)local_58._16_8_;
      local_88.fields.next = (System_Collections_Generic_LinkedListNode_T__o *)pAStack_40;
      local_88.klass = (System_Collections_Generic_LinkedListNode_T__c *)local_58._0_8_;
      local_88.monitor = (void *)local_58._8_8_;
      local_58._0_8_ = (System_Collections_Generic_LinkedList_T__o *)0x0;
      local_58._8_8_ = &local_88;
switchD_05e10dbf_default:
      bVar7 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                        ((System_Collections_Generic_LinkedList_Enumerator_T__o *)&local_88,
                         (MethodInfo_4C459E0 *)
                         MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext
                        );
      item = local_88.fields.next;
      if (!bVar7) {
        System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                  ((System_Collections_Generic_LinkedList_Enumerator_T__o *)&local_88,
                   (MethodInfo_4C45B70 *)
                   MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
                  );
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        pAVar8->_filterDirty = false;
        pAVar8->_lastFilterTab = pAVar8->_currentTab;
        pAVar8->_displayDirty = true;
        return;
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      switch(pAVar8->_currentTab) {
      case 0:
        break;
      case 1:
        if ((ApplicationManagers_DebugConsole_LogMessage_o *)item ==
            (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((ApplicationManagers_DebugConsole_LogMessage_Fields *)&item->fields)->Type == 3)
        goto label_05e10df4;
        goto switchD_05e10dbf_default;
      case 2:
        if ((ApplicationManagers_DebugConsole_LogMessage_o *)item ==
            (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((ApplicationManagers_DebugConsole_LogMessage_Fields *)&item->fields)->Type != 2)
        goto switchD_05e10dbf_default;
label_05e10df4:
        if (((ApplicationManagers_DebugConsole_LogMessage_Fields *)&item->fields)->IsCustomLogic == true)
        goto switchD_05e10dbf_default;
        break;
      case 3:
        if ((ApplicationManagers_DebugConsole_LogMessage_o *)item ==
            (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((((ApplicationManagers_DebugConsole_LogMessage_Fields *)&item->fields)->IsCustomLogic != false) ||
           ((uVar3 = ((ApplicationManagers_DebugConsole_LogMessage_Fields *)&item->fields)->Type,
            (uVar3 & 0xfffffffb) != 0 && (uVar3 != 1)))) goto switchD_05e10dbf_default;
        break;
      case 4:
        if ((ApplicationManagers_DebugConsole_LogMessage_o *)item ==
            (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((ApplicationManagers_DebugConsole_LogMessage_Fields *)&item->fields)->IsCustomLogic == false)
        goto switchD_05e10dbf_default;
        break;
      default:
        goto switchD_05e10dbf_default;
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_Add;
      pSVar4 = pAVar8->_filteredMessages;
      if (pSVar4 != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pAVar5 = (pSVar4->fields)._items;
        if (pAVar5 != (ApplicationManagers_DebugConsole_LogMessage_array *)0x0) {
          uVar3 = (pSVar4->fields)._size;
          if (uVar3 < (uint)pAVar5->max_length) {
            (pSVar4->fields)._size = uVar3 + 1;
            pAVar5->m_Items[(int)uVar3] = (ApplicationManagers_DebugConsole_LogMessage_o *)item;
            Il2CppCodeGenWriteBarrier(pAVar5->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
          goto switchD_05e10dbf_default;
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$GetDisplayText
// il2cpp: System_String_o* ApplicationManagers_DebugConsole__GetDisplayText (const MethodInfo* method);
// 0x5e10f70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e10fa5: jmp 0x5e10ffa
// asm:   0x5e110ba: nop word ptr [rax + rax]
// asm:   0x5e1119f: jmp 0x5e110c0

System_String_o * ApplicationManagers_DebugConsole__GetDisplayText(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *__this;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  System_String_o *pSVar4;
  ApplicationManagers_DebugConsole_StaticFields *pAVar5;
  MethodInfo *method_00;
  int index;
  
  if (Il2CppMethodInitialized_0754840c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_get_Item);
    Il2CppMethodInitialized_0754840c = '\x01';
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) goto label_05e10fe5;
label_05e10f94:
    pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    cVar1 = pAVar5->_displayDirty;
  }
  else {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor != 0) goto label_05e10f94;
label_05e10fe5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    cVar1 = pAVar5->_displayDirty;
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    }
    if (pAVar5->_filteredMessages == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0)
    goto label_05e11226;
    if (pAVar5->_lastFilteredCount == (pAVar5->_filteredMessages->fields)._size) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        if (pAVar5->_lastShowStackTraces == pAVar5->_showStackTraces) goto label_05e1103c;
      }
      else if (pAVar5->_lastShowStackTraces == pAVar5->_showStackTraces) {
label_05e1103c:
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        }
label_05e11216:
        return pAVar5->_cachedDisplayText;
      }
    }
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder;
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
    uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    while( true ) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      if (pAVar5->_filteredMessages == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0)
      goto label_05e11226;
      if ((pAVar5->_filteredMessages->fields)._size <= index) break;
      if (index != 0) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        }
        if (pAVar5->_displayBuilder == (System_Text_StringBuilder_o *)0x0) goto label_05e11226;
        System_Text_StringBuilder__Append_530f6a0(pAVar5->_displayBuilder,10,(MethodInfo *)0x0);
      }
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      __this = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filteredMessages;
      if (__this == (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) goto label_05e11226;
      pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_displayBuilder;
      __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_get_Item);
      if ((__this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) ||
         (pSVar4 = ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
                             (__this_00,
                              TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces,
                              method_00), pSVar3 == (System_Text_StringBuilder_o *)0x0)) goto label_05e11226;
      System_Text_StringBuilder__Append_530ed80(pSVar3,pSVar4,(MethodInfo *)0x0);
      index = index + 1;
      uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    }
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    }
    pSVar3 = pAVar5->_displayBuilder;
    if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
      pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      pAVar5->_cachedDisplayText = pSVar4;
      Il2CppCodeGenWriteBarrier(&pAVar5->_cachedDisplayText);
      pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      if (pAVar5->_filteredMessages != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
        pAVar5->_lastFilteredCount = (pAVar5->_filteredMessages->fields)._size;
        pAVar5->_lastShowStackTraces = pAVar5->_showStackTraces;
        pAVar5->_displayDirty = false;
        goto label_05e11216;
      }
    }
  }
label_05e11226:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$Update
// il2cpp: void ApplicationManagers_DebugConsole__Update (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x5e11340
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e113ce: test rbx, rbx
// asm:   0x5e113d1: je 0x5e1143c

void ApplicationManagers_DebugConsole__Update(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  uint32_t uVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_GeneralInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *__this_00;
  Utility_GUICallback_o *__this_01;
  Il2CppClass *klass;
  bool bVar5;
  
  if (Il2CppMethodInitialized_0754840d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754840d = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_GeneralInputSettings_o *)0x0)) &&
     (__this_00 = (pSVar4->fields).DebugWindow, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
    if (bVar5) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
      pbVar1 = &TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled;
      *pbVar1 = (bool)(*pbVar1 ^ 1);
      __this_01 = (__this->fields)._window;
      uVar2 = (((ApplicationManagers_DebugConsole_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      __this_01 = (__this->fields)._window;
      uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    if (__this_01 != (Utility_GUICallback_o *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_01,
                 TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled,(MethodInfo *)0x0);
      bVar5 = UnityEngine_Input__GetKeyDown(0x123,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle((MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$DrawWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawWindow (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x5e11450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e11773: jmp 0x5e117b8

void ApplicationManagers_DebugConsole__DrawWindow
               (ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  ApplicationManagers_DebugConsole_StaticFields *pAVar3;
  UnityEngine_Rect_o position;
  UnityEngine_Rect_o position_00;
  bool bVar4;
  UnityEngine_Texture_o *image;
  System_String_o *pSVar5;
  ApplicationManagers_DebugConsole_c *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar6;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_0754840e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754840e = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    cVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled;
  }
  else {
    cVar1 = (*(ApplicationManagers_DebugConsole_StaticFields **)
              ((long)TypeInfo_ApplicationManagers_DebugConsole + 0xb8))->Enabled;
  }
  if (cVar1 == '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_GameManagers_ChatManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar4 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  UnityEngine_GUI__set_depth(1,(MethodInfo *)0x0);
  method_00 = TypeInfo_ApplicationManagers_DebugConsole;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__HandleWindowInteraction((MethodInfo *)method_00);
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground != false) {
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    value = UnityEngine_GUI__get_color((MethodInfo *)0x0);
    value_00.fields.b = 0.15;
    value_00.fields.a = 1.0;
    value_00.fields.r = 0.15;
    value_00.fields.g = 0.15;
    UnityEngine_GUI__set_color(value_00,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    position.fields.m_XMin = pAVar3->_windowX;
    position.fields.m_YMin = pAVar3->_windowY;
    position.fields.m_Width = pAVar3->_windowWidth;
    position.fields.m_Height = pAVar3->_windowHeight;
    image = (UnityEngine_Texture_o *)UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
    UnityEngine_GUI__DrawTexture(position,image,(MethodInfo *)0x0);
    UnityEngine_GUI__set_color(value,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  position_00.fields.m_XMin = pAVar3->_windowX;
  position_00.fields.m_YMin = pAVar3->_windowY;
  position_00.fields.m_Width = pAVar3->_windowWidth;
  position_00.fields.m_Height = pAVar3->_windowHeight;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  method_01 = (MethodInfo *)"";
  UnityEngine_GUI__Box(position_00,"",(MethodInfo *)0x0);
  ApplicationManagers_DebugConsole__DrawTabs(method_01);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    UnityEngine_GUI__set_enabled(false,(MethodInfo *)0x0);
    uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  TypeInfo_ApplicationManagers_DebugConsole = (ApplicationManagers_DebugConsole_c *)pIVar6;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar6);
    ApplicationManagers_DebugConsole__DrawMessageWindow((MethodInfo *)pIVar6);
    ApplicationManagers_DebugConsole__DrawInputWindow((MethodInfo *)pIVar6);
    pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  else {
    ApplicationManagers_DebugConsole__DrawMessageWindow((MethodInfo *)pIVar6);
    ApplicationManagers_DebugConsole__DrawInputWindow((MethodInfo *)pIVar6);
    pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  TypeInfo_ApplicationManagers_DebugConsole = (ApplicationManagers_DebugConsole_c *)pIVar6;
  if (bVar4) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_GUI)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    UnityEngine_GUI__set_enabled(true,(MethodInfo *)0x0);
    pSVar5 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,"DebugInput",(MethodInfo *)0x0);
    if (bVar4) {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
      }
      UnityEngine_GUI__FocusControl(pSVar5,(MethodInfo *)0x0);
      uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
      pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    }
    else {
      uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
      pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    }
  }
  else {
    if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar6);
    }
    ApplicationManagers_DebugConsole__HandleInput((MethodInfo *)pIVar6);
    uVar2 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    pIVar6 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  TypeInfo_ApplicationManagers_DebugConsole = (ApplicationManagers_DebugConsole_c *)pIVar6;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar6);
    ApplicationManagers_DebugConsole__DrawResizeHandle((MethodInfo *)pIVar6);
    uVar2 = (TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor;
  }
  else {
    ApplicationManagers_DebugConsole__DrawResizeHandle((MethodInfo *)pIVar6);
    uVar2 = (TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  UnityEngine_GUI__set_depth(0,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$HandleWindowInteraction
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowInteraction (const MethodInfo* method);
// 0x5e117e0
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e11b2c: cmp byte ptr [rip + 0x1730529], 0
// asm:   0x5e11b33: je 0x5e11b92
// asm:   0x5e11b35: movaps xmm0, xmmword ptr [rsp + 0x30]
// asm:   0x5e11b3a: ucomiss xmm0, xmm1
// asm:   0x5e11b3f: jmp 0x5e11e13
// asm:   0x5e11b74: jmp 0x5e11e13
// asm:   0x5e11c55: addss xmm1, dword ptr [rip - 0x4e4ffbd]
// asm:   0x5e11c5d: cmp byte ptr [rip + 0x17303f8], 0
// asm:   0x5e11c64: je 0x5e11d16
// asm:   0x5e11c6a: movaps xmm0, xmmword ptr [rsp + 0x30]
// asm:   0x5e11c6f: ucomiss xmm0, xmm1
// asm:   0x5e11c78: jmp 0x5e11db0

void ApplicationManagers_DebugConsole__HandleWindowInteraction(MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector2_Fields UVar5;
  undefined4 uVar8;
  ApplicationManagers_DebugConsole_c *pAVar9;
  char cVar10;
  int32_t iVar11;
  UnityEngine_Event_o *__this;
  ApplicationManagers_DebugConsole_StaticFields *pAVar12;
  UnityEngine_Vector2_Fields UVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_28;
  float local_20;
  undefined4 local_1c;
  
  if (Il2CppMethodInitialized_0754840f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754840f = '\x01';
  }
  __this = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this == (UnityEngine_Event_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar13 = (UnityEngine_Vector2_Fields)UnityEngine_Event__get_mousePosition(__this,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  fVar18 = pAVar12->_windowWidth;
  uVar2 = pAVar12->_windowX;
  uVar6 = pAVar12->_windowY;
  fVar1 = pAVar12->_windowHeight;
  fVar15 = (float)uVar2;
  fVar16 = (float)uVar6;
  fVar17 = fVar18;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    uVar3 = pAVar12->_windowX;
    uVar7 = pAVar12->_windowY;
    fVar17 = pAVar12->_windowWidth;
    fVar15 = (float)uVar3;
    fVar16 = (float)uVar7;
  }
  local_20 = fVar17 + -20.0;
  local_28 = CONCAT44(fVar16 + 20.0 + 25.0,fVar15 + 10.0);
  local_1c = 0x41c80000;
  iVar11 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
  fStack_64 = UVar13.y;
  local_68 = UVar13.x;
  if ((iVar11 == 0) && (iVar11 = UnityEngine_Event__get_button(__this,(MethodInfo *)0x0), iVar11 == 0)) {
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar18 = fVar18 + (float)uVar2 + -15.0;
    if (Il2CppMethodInitialized_0754205c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_0754205c = '\x01';
    }
    if (fVar18 <= local_68) {
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((local_68 < fVar18 + 15.0) && (fVar18 = (float)uVar6 + fVar1 + -15.0, fVar18 <= fStack_64)) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fStack_64 < fVar18 + 15.0) {
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          pAVar9 = TypeInfo_ApplicationManagers_DebugConsole;
          pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
          pAVar12->_isResizing = true;
          (pAVar12->_resizeStartSize).fields = *(UnityEngine_Vector2_Fields *)&pAVar12->_windowWidth;
          (pAVar9->static_fields->_resizeStartMousePos).fields = UVar13;
          goto label_05e11cd7;
        }
      }
    }
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_0754205c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_0754205c = '\x01';
    }
    if (fVar15 <= local_68) {
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((local_68 < fVar15 + fVar17) && (fVar16 <= fStack_64)) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fStack_64 < fVar16 + 80.0) {
          fVar18 = fVar15 + fVar17 + -335.0;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          if (Il2CppMethodInitialized_0754205c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
            Il2CppMethodInitialized_0754205c = '\x01';
          }
          if (fVar18 + -20.0 <= local_68) {
            if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if ((local_68 < fVar18 + -20.0 + 345.0) && (fVar16 + 10.0 <= fStack_64)) {
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if (fStack_64 < fVar16 + 10.0 + 25.0) {
                return;
              }
            }
          }
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          cVar10 = il2cpp_runtime_helper_05e24330(&local_28);
          if (cVar10 == '\0') {
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            pAVar12->_isDragging = true;
            uVar4 = pAVar12->_windowX;
            uVar8 = pAVar12->_windowY;
            UVar13.y = fStack_64 - (float)uVar8;
            UVar13.x = local_68 - (float)uVar4;
            (pAVar12->_dragOffset).fields = UVar13;
            UnityEngine_Event__Use(__this,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  else {
    iVar11 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if ((iVar11 == 1) && (iVar11 = UnityEngine_Event__get_button(__this,(MethodInfo *)0x0), iVar11 == 0)) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      pAVar12->_isDragging = false;
      pAVar12->_isResizing = false;
    }
    else {
      iVar11 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
      if (iVar11 == 3) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
          cVar10 = pAVar12->_isDragging;
        }
        else {
          pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
          cVar10 = pAVar12->_isDragging;
        }
        if (cVar10 == '\0') {
          if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            cVar10 = pAVar12->_isResizing;
          }
          else {
            cVar10 = pAVar12->_isResizing;
          }
          if (cVar10 == '\0') {
            return;
          }
          if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
          }
          UVar13 = (pAVar12->_resizeStartSize).fields;
          UVar5 = (pAVar12->_resizeStartMousePos).fields;
          fStack_60 = (float)extraout_XMM0_Qb;
          fStack_5c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
          auVar14._4_4_ = (fStack_64 - UVar5.y) + UVar13.y;
          auVar14._0_4_ = (local_68 - UVar5.x) + UVar13.x;
          auVar14._8_4_ = (fStack_60 - 0.0) + 0.0;
          auVar14._12_4_ = (fStack_5c - 0.0) + 0.0;
          auVar14 = maxps(_DAT_0100a8c0,auVar14);
          pAVar12->_windowWidth = (float)auVar14._0_4_;
          pAVar12->_windowHeight = (float)auVar14._4_4_;
        }
        else {
          if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            pAVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
          }
          UVar13 = (pAVar12->_dragOffset).fields;
          pAVar12->_windowX = local_68 - UVar13.x;
          pAVar12->_windowY = fStack_64 - UVar13.y;
        }
label_05e11cd7:
        UnityEngine_Event__Use(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$DrawTabs
// il2cpp: void ApplicationManagers_DebugConsole__DrawTabs (const MethodInfo* method);
// 0x5e11e30
// eh: try 0x5e12100..0x5e121ee -> pad 0x5e1284b (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e12818..0x5e1281d -> pad 0x5e1283c cleanup
// eh: try 0x5e1283f..0x5e12849 -> pad 0x5e128a2 catch (...) [compiler noexcept guard]
// eh: try 0x5e12863..0x5e12868 -> pad 0x5e1288d cleanup
// eh: try 0x5e12890..0x5e1289a -> pad 0x5e128a2 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e127fc: jmp 0x5e12800
// asm:   0x5e127fe: jmp 0x5e1284b
// asm:   0x5e12800: mov rbx, rax
// asm:   0x5e12803: cmp edx, 1
// asm:   0x5e12806: jne 0x5e1283f
// asm:   0x5e12808: mov rdi, rbx
// asm:   0x5e1280b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e12810: mov rbx, qword ptr [rax]
// asm:   0x5e12813: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5e12818: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e1281d: lea rax, [rip + 0x147c904]  ; MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
// asm:   0x5e12824: mov rsi, qword ptr [rax]
// asm:   0x5e12827: lea rdi, [rsp + 0x40]
// asm:   0x5e1282c: call 0x4d45b70  ; System_Collections_Generic_LinkedList_Enumerator_object___Dispose()
// asm:   0x5e12831: test rbx, rbx
// asm:   0x5e12834: je 0x5e12204
// asm:   0x5e1283a: jmp 0x5e12885
// asm:   0x5e1283c: mov rbx, rax
// asm:   0x5e1283f: lea rdi, [rsp + 0x68]
// asm:   0x5e12844: call 0x2fe03e0  ; il2cpp_runtime_helper_02fe03e0()
// asm:   0x5e12849: jmp 0x5e1289a
// asm:   0x5e1284b: mov rbx, rax
// asm:   0x5e1284e: cmp edx, 1
// asm:   0x5e12851: jne 0x5e12890
// asm:   0x5e12853: mov rdi, rbx
// asm:   0x5e12856: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e1285b: mov rbx, qword ptr [rax]
// asm:   0x5e1285e: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5e12863: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e12868: lea rax, [rip + 0x147c8b9]  ; MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
// asm:   0x5e1286f: mov rsi, qword ptr [rax]
// asm:   0x5e12872: lea rdi, [rsp + 0x40]
// asm:   0x5e12877: call 0x4d45b70  ; System_Collections_Generic_LinkedList_Enumerator_object___Dispose()
// asm:   0x5e1287c: test rbx, rbx
// asm:   0x5e1287f: je 0x5e12144
// asm:   0x5e12885: mov rdi, rbx
// asm:   0x5e12888: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e1288d: mov rbx, rax
// asm:   0x5e12890: lea rdi, [rsp + 0x68]
// asm:   0x5e12895: call 0x2fe03b0  ; il2cpp_runtime_helper_02fe03b0()
// asm:   0x5e1289a: mov rdi, rbx
// asm:   0x5e1289d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e128a2: mov rdi, rax
// asm:   0x5e128a5: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_DebugConsole__DrawTabs(MethodInfo *method)

{
  int iVar1;
  int32_t *piVar2;
  bool *pbVar3;
  char cVar4;
  int32_t length;
  uint32_t uVar5;
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar6;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *pSVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  bool bVar10;
  System_String_o **ppSVar11;
  int iVar12;
  MethodInfo *pMVar13;
  ApplicationManagers_DebugConsole_StaticFields *pAVar14;
  Il2CppClass *pIVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar19;
  float fVar18;
  float fVar20;
  UnityEngine_Rect_o position;
  UnityEngine_Rect_o position_00;
  UnityEngine_Rect_o position_01;
  UnityEngine_Rect_o position_02;
  UnityEngine_Rect_o position_03;
  UnityEngine_Rect_o position_04;
  UnityEngine_Rect_o position_05;
  UnityEngine_Rect_o position_06;
  UnityEngine_Rect_o position_07;
  UnityEngine_Rect_o position_08;
  UnityEngine_Rect_o position_09;
  undefined8 local_e8;
  undefined1 local_a8 [48];
  System_Collections_Generic_LinkedListNode_T__o *pSStack_78;
  undefined8 local_70;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_68;
  undefined8 local_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_07548410 == '\0') {
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
    Il2CppMethodInitialized_07548410 = '\x01';
  }
  local_a8._16_8_ = 0;
  local_a8._24_8_ = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
  local_a8._0_8_ = (System_Collections_Generic_LinkedList_T__o *)0x0;
  local_a8._8_8_ = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  local_a8._32_8_ = 0;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  iVar12 = (int)pAVar14->_windowX;
  fVar18 = pAVar14->_windowY;
  iVar16 = (int)pAVar14->_windowWidth;
  iVar1 = iVar12 + 10;
  position.fields.m_XMin = (float)iVar1;
  fVar17 = (float)((int)fVar18 + 10);
  local_48 = ZEXT416((uint)position.fields.m_XMin);
  fVar20 = (float)(iVar16 + -0x195);
  uVar19 = 0x41c80000;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    uStack_54 = 0x41c80000;
    uStack_50 = 0;
    uStack_4c = 0;
    local_58 = (float)(iVar16 + -0x195);
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    fVar20 = local_58;
    uVar19 = uStack_54;
  }
  position.fields.m_YMin = fVar17;
  position.fields.m_Height = (float)uVar19;
  position.fields.m_Width = fVar20;
  UnityEngine_GUI__Label(position,"Debug Console (Press F11 to hide)",(MethodInfo *)0x0);
  position_00.fields.m_XMin = (float)(iVar12 + -0x181 + iVar16);
  position_00.fields.m_YMin = fVar17;
  position_00.fields.m_Width = 90.0;
  position_00.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_00,"Clear",(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pSVar6 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
    if (pSVar6 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(local_a8 + 0x28),
                 (System_Collections_Generic_LinkedList_T__o *)pSVar6,
                 (MethodInfo_514FDA0 *)
                 MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
      local_a8._32_8_ = local_60;
      local_a8._16_8_ = local_70;
      local_a8._24_8_ = pAStack_68;
      local_a8._0_8_ = local_a8._40_8_;
      local_a8._8_8_ = pSStack_78;
      local_a8._40_8_ = (System_Collections_Generic_LinkedList_T__o *)0x0;
      pSStack_78 = (System_Collections_Generic_LinkedListNode_T__o *)local_a8;
      while (pMVar13 = 
             MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext,
            bVar10 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                               ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_a8,
                                (MethodInfo_4C459E0 *)
                                MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext
                               ), uVar9 = local_a8._24_8_, bVar10) {
        if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return
                  ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar9,pMVar13);
      }
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_a8,
                 (MethodInfo_4C45B70 *)
                 MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose);
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pSVar6 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
      if (pSVar6 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
        System_Collections_Generic_LinkedList_object___GetEnumerator
                  ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(local_a8 + 0x28),
                   (System_Collections_Generic_LinkedList_T__o *)pSVar6,
                   (MethodInfo_514FDA0 *)
                   MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_GetEnumerator);
        local_a8._32_8_ = local_60;
        local_a8._16_8_ = local_70;
        local_a8._24_8_ = pAStack_68;
        local_a8._0_8_ = local_a8._40_8_;
        local_a8._8_8_ = pSStack_78;
        local_a8._40_8_ = (System_Collections_Generic_LinkedList_T__o *)0x0;
        pSStack_78 = (System_Collections_Generic_LinkedListNode_T__o *)local_a8;
        while (pMVar13 = 
               MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext,
              bVar10 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_a8,
                                  (MethodInfo_4C459E0 *)
                                  MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_MoveNext
                                 ), uVar9 = local_a8._24_8_, bVar10) {
          if ((TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole_LogMessagePool);
          }
          ApplicationManagers_DebugConsole_LogMessagePool__Return
                    ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar9,pMVar13);
        }
        System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                  ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_a8,
                   (MethodInfo_4C45B70 *)
                   MethodInfo_System_Collections_Generic_LinkedList_Enumerator_DebugConsole_LogMessage_Dispose
                  );
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar6 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messages;
        if (pSVar6 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
          System_Collections_Generic_LinkedList_object___Clear
                    ((System_Collections_Generic_LinkedList_T__o *)pSVar6,
                     (MethodInfo_514FA70 *)
                     MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_Clear);
          pSVar6 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_messageBuffer;
          if (pSVar6 != (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0) {
            System_Collections_Generic_LinkedList_object___Clear
                      ((System_Collections_Generic_LinkedList_T__o *)pSVar6,
                       (MethodInfo_514FA70 *)
                       MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_Clear);
            pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
            pSVar7 = pAVar14->_filteredMessages;
            if (pSVar7 != (System_Collections_Generic_List_DebugConsole_LogMessage__o *)0x0) {
              piVar2 = &(pSVar7->fields)._version;
              *piVar2 = *piVar2 + 1;
              length = (pSVar7->fields)._size;
              (pSVar7->fields)._size = 0;
              if (0 < length) {
                System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
                pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
              }
              pAVar14->_currentCharCount = 0;
              pAVar14->_currentCharCountBuffer = 0;
              pAVar14->_filterDirty = true;
              pAVar14->_displayDirty = true;
              pAVar14->_cachedDisplayText = "";
              Il2CppCodeGenWriteBarrier(&pAVar14->_cachedDisplayText);
              goto label_05e122d3;
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
label_05e122d3:
  iVar12 = iVar12 + iVar16;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_showStackTraces == false) {
    ppSVar11 = &"Show Traces";
  }
  else {
    ppSVar11 = &"Hide Traces";
  }
  pSVar8 = *ppSVar11;
  position_01.fields.m_XMin = (float)(iVar12 + -0x122);
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_01.fields.m_YMin = fVar17;
  position_01.fields.m_Width = 90.0;
  position_01.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_01,pSVar8,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pbVar3 = &pAVar14->_showStackTraces;
    *pbVar3 = (bool)(*pbVar3 ^ 1);
    pAVar14->_displayDirty = true;
    uVar5 = (((ApplicationManagers_DebugConsole_c *)pIVar15)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar5 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    cVar4 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground;
  }
  else {
    cVar4 = *(char *)((long)pIVar15->static_fields + 0x9d);
  }
  if (cVar4 == '\0') {
    ppSVar11 = &"Opaque";
  }
  else {
    ppSVar11 = &"Glass";
  }
  pSVar8 = *ppSVar11;
  position_02.fields.m_XMin = (float)(iVar12 + -0xc3);
  if ((((Il2CppClass *)TypeInfo_UnityEngine_GUI)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_02.fields.m_YMin = fVar17;
  position_02.fields.m_Width = 90.0;
  position_02.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_02,pSVar8,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    pbVar3 = &TypeInfo_ApplicationManagers_DebugConsole->static_fields->_solidBackground;
    *pbVar3 = (bool)(*pbVar3 ^ 1);
    uVar5 = (((ApplicationManagers_DebugConsole_c *)pIVar15)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar5 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
    pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    cVar4 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap;
  }
  else {
    cVar4 = *(char *)((long)pIVar15->static_fields + 0x9e);
  }
  if (cVar4 == '\0') {
    ppSVar11 = &"Wrap";
  }
  else {
    ppSVar11 = &"No Wrap";
  }
  pSVar8 = *ppSVar11;
  if ((((Il2CppClass *)TypeInfo_UnityEngine_GUI)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  uVar19 = local_48._0_4_;
  position_03.fields.m_YMin = fVar17;
  position_03.fields.m_XMin = (float)(iVar12 + -100);
  position_03.fields.m_Width = 90.0;
  position_03.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_03,pSVar8,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pbVar3 = &TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap;
    *pbVar3 = (bool)(*pbVar3 ^ 1);
  }
  iVar12 = (iVar16 + -0x3c) / 5;
  fVar18 = (float)((int)fVar18 + 0x2d);
  fVar20 = (float)iVar12;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_04.fields.m_YMin = fVar18;
  position_04.fields.m_XMin = (float)uVar19;
  position_04.fields.m_Height = 25.0;
  position_04.fields.m_Width = fVar20;
  bVar10 = UnityEngine_GUI__Button(position_04,"All",(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pAVar14->_currentTab = 0;
    pAVar14->_needResetScroll = true;
    pAVar14->_filterDirty = true;
  }
  iVar16 = iVar12 + iVar1 + 10;
  position_05.fields.m_XMin = (float)iVar16;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  iVar12 = iVar12 + 10;
  position_05.fields.m_YMin = fVar18;
  position_05.fields.m_Width = fVar20;
  position_05.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_05,"Info",(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pAVar14->_currentTab = 1;
    pAVar14->_needResetScroll = true;
    pAVar14->_filterDirty = true;
  }
  iVar16 = iVar16 + iVar12;
  position_06.fields.m_XMin = (float)iVar16;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_06.fields.m_YMin = fVar18;
  position_06.fields.m_Width = fVar20;
  position_06.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_06,"Warning",(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pAVar14->_currentTab = 2;
    pAVar14->_needResetScroll = true;
    pAVar14->_filterDirty = true;
  }
  iVar16 = iVar16 + iVar12;
  position_07.fields.m_XMin = (float)iVar16;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_07.fields.m_YMin = fVar18;
  position_07.fields.m_Width = fVar20;
  position_07.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_07,"Error",(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pAVar14->_currentTab = 3;
    pAVar14->_needResetScroll = true;
    pAVar14->_filterDirty = true;
  }
  position_08.fields.m_XMin = (float)(iVar16 + iVar12);
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_08.fields.m_YMin = fVar18;
  position_08.fields.m_Width = fVar20;
  position_08.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_08,"CL",(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  if (bVar10) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pAVar14->_currentTab = 4;
    pAVar14->_needResetScroll = true;
    pAVar14->_filterDirty = true;
  }
  if ((pIVar15->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar15);
    pIVar15 = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
  }
  iVar16 = pIVar15->static_fields->_currentTab;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position_09.fields.m_XMin = (float)(iVar16 * iVar12 + iVar1);
  position_09.fields.m_YMin = fVar18;
  position_09.fields.m_Width = fVar20;
  position_09.fields.m_Height = 25.0;
  UnityEngine_GUI__Box(position_09,"",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$DrawMessageWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawMessageWindow (const MethodInfo* method);
// 0x5e128b0

void ApplicationManagers_DebugConsole__DrawMessageWindow(MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  System_String_o *text;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_GUISkin_o *__this;
  UnityEngine_GUIStyle_o *other;
  UnityEngine_GUIStyle_o *__this_00;
  System_String_o *__this_01;
  UnityEngine_GUIContent_o *pUVar8;
  System_String_array *pSVar9;
  ulong uVar10;
  ApplicationManagers_DebugConsole_StaticFields *pAVar11;
  int iVar12;
  int iVar13;
  ApplicationManagers_DebugConsole_c *pAVar14;
  ulong uVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  UnityEngine_Rect_o position;
  float local_88;
  float fStack_84;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07548411 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIContent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_get_Count);
    Il2CppMethodInitialized_07548411 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar11 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  uVar1 = pAVar11->_windowX;
  uVar3 = pAVar11->_windowY;
  uVar2 = pAVar11->_windowWidth;
  uVar4 = pAVar11->_windowHeight;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  __this = UnityEngine_GUI__get_skin((MethodInfo *)0x0);
  if (__this == (UnityEngine_GUISkin_o *)0x0) goto label_05e12cd7;
  other = UnityEngine_GUISkin__get_textArea(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIStyle);
  UnityEngine_GUIStyle___ctor_69971b0(__this_00,other,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GUIStyle_o *)0x0) goto label_05e12cd7;
  UnityEngine_GUIStyle__set_wordWrap
            (__this_00,TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap,(MethodInfo *)0x0);
  UnityEngine_GUIStyle__set_richText(__this_00,true,(MethodInfo *)0x0);
  pAVar11 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  if (pAVar11->_needResetScroll == false) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      pAVar11 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    }
    if (pAVar11->_messageBuffer == (System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *)0x0)
    goto label_05e12cd7;
    if (0 < (pAVar11->_messageBuffer->fields).count) goto label_05e12a07;
  }
  else {
label_05e12a07:
    pAVar14 = TypeInfo_ApplicationManagers_DebugConsole;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__ProcessMessageBuffer((MethodInfo *)pAVar14);
  }
  pAVar14 = TypeInfo_ApplicationManagers_DebugConsole;
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__UpdateFilteredMessages((MethodInfo *)pAVar14);
  __this_01 = ApplicationManagers_DebugConsole__GetDisplayText((MethodInfo *)pAVar14);
  iVar13 = (int)(float)uVar2 + -0x28;
  if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_wordWrap != false) {
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIContent);
    UnityEngine_GUIContent___ctor_698b020(pUVar8,__this_01,(MethodInfo *)0x0);
label_05e12b75:
    fVar16 = UnityEngine_GUIStyle__CalcHeight(__this_00,pUVar8,(float)iVar13,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    position.fields.m_XMin = (float)((int)(float)uVar1 + 10);
    position.fields.m_YMin = (float)((int)(float)uVar3 + 0x50);
    position.fields.m_Width = (float)((int)(float)uVar2 + -0x14);
    position.fields.m_Height = (float)((int)(float)uVar4 + -0x87);
    position.fields._0_8_ = (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_scrollPosition).fields
    ;
    uVar10 = CONCAT44((float)((int)fVar16 + 10),(float)iVar13);
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar10;
    position.fields._0_8_ =
         (UnityEngine_Vector2_Fields)
         UnityEngine_GUI__BeginScrollView
                   (position,(UnityEngine_Vector2_o)position.fields._0_8_,(UnityEngine_Rect_o)(auVar6 << 0x40)
                    ,(MethodInfo *)0x0);
    (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_scrollPosition).fields = position.fields._0_8_
    ;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar10;
    UnityEngine_GUI__TextArea((UnityEngine_Rect_o)(auVar7 << 0x40),__this_01,__this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    if (pAVar11->_needResetScroll != false) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        pAVar11 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      }
      iVar12 = ((int)fVar16 + 10) - ((int)(float)uVar4 + -0x87);
      iVar13 = 0;
      if (0 < iVar12) {
        iVar13 = iVar12;
      }
      pAVar11->_needResetScroll = false;
      (pAVar11->_scrollPosition).fields.x = 0.0;
      (pAVar11->_scrollPosition).fields.y = (float)iVar13;
    }
    if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
    }
    UnityEngine_GUI__EndScrollView((MethodInfo *)0x0);
    return;
  }
  if (__this_01 != (System_String_o *)0x0) {
    iVar12 = 10;
    pSVar9 = System_String__Split(__this_01,10,0,(MethodInfo *)0x0);
    if (pSVar9 != (System_String_array *)0x0) {
      if (0 < (int)pSVar9->max_length) {
        uVar10 = pSVar9->max_length & 0xffffffff;
        fVar16 = 0.0;
        uVar15 = 0;
        do {
          if (uVar10 <= uVar15) {
            ThrowIndexOutOfRangeException();
          }
          text = pSVar9->m_Items[uVar15];
          pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIContent);
          UnityEngine_GUIContent___ctor_698b020(pUVar8,text,(MethodInfo *)0x0);
          auVar17._0_8_ = UnityEngine_GUIStyle__CalcSize(__this_00,pUVar8,(MethodInfo *)0x0);
          auVar17._8_8_ = extraout_XMM0_Qb;
          if (auVar17._0_4_ <= fVar16) {
            auVar17._0_4_ = fVar16;
          }
          uVar15 = uVar15 + 1;
          uVar5 = (uint)pSVar9->max_length;
          uVar10 = (ulong)uVar5;
          fVar16 = auVar17._0_4_;
        } while ((long)uVar15 < (long)(int)uVar5);
        iVar12 = (int)fVar16 + 10;
      }
      if (iVar13 <= iVar12) {
        iVar13 = iVar12;
      }
      pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GUIContent);
      UnityEngine_GUIContent___ctor_698b020(pUVar8,__this_01,(MethodInfo *)0x0);
      goto label_05e12b75;
    }
  }
label_05e12cd7:
  ThrowNullReferenceException();
}


// ApplicationManagers.DebugConsole$$DrawInputWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawInputWindow (const MethodInfo* method);
// 0x5e12ce0

void ApplicationManagers_DebugConsole__DrawInputWindow(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  ApplicationManagers_DebugConsole_StaticFields *pAVar3;
  System_String_o *pSVar4;
  UnityEngine_Rect_o position;
  
  if (Il2CppMethodInitialized_07548412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
    Il2CppMethodInitialized_07548412 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  fVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY;
  fVar2 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  UnityEngine_GUI__SetNextControlName("DebugInput",(MethodInfo *)0x0);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  position.fields.m_XMin = (float)((int)pAVar3->_windowX + 10);
  position.fields.m_YMin = (float)((int)(fVar1 + fVar2) + -0x23);
  position.fields.m_Width = (float)((int)pAVar3->_windowWidth + -0x14);
  position.fields.m_Height = 25.0;
  pSVar4 = UnityEngine_GUI__TextField(position,pAVar3->_inputLine,(MethodInfo *)0x0);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_inputLine = pSVar4;
  Il2CppCodeGenWriteBarrier(&pAVar3->_inputLine);
  return;
}


// ApplicationManagers.DebugConsole$$HandleInput
// il2cpp: void ApplicationManagers_DebugConsole__HandleInput (const MethodInfo* method);
// 0x5e12df0

void ApplicationManagers_DebugConsole__HandleInput(MethodInfo *method)

{
  ApplicationManagers_DebugConsole_StaticFields *pAVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  ApplicationManagers_DebugConsole_c *method_01;
  
  if (Il2CppMethodInitialized_07548413 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid debug command.");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"DebugInput");
    Il2CppMethodInitialized_07548413 = '\x01';
  }
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  pSVar3 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar3,"DebugInput",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      method_01 = TypeInfo_ApplicationManagers_DebugConsole;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      bVar2 = ApplicationManagers_DebugConsole__IsEnterUp((MethodInfo *)method_01);
    }
    else {
      bVar2 = ApplicationManagers_DebugConsole__IsEnterUp
                        ((MethodInfo *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    if (bVar2) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      bVar2 = System_String__op_Inequality
                        (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine,
                         (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine;
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine;
        if (pSVar3 == (System_String_o *)0x0) {
label_05e13055:
          ThrowNullReferenceException();
        }
        bVar2 = System_String__StartsWith(pSVar3,"/",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          pSVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_inputLine;
          if (pSVar3 == (System_String_o *)0x0) goto label_05e13055;
          method_00 = (MethodInfo *)0x1;
          pSVar3 = System_String__Substring(pSVar3,1,(MethodInfo *)0x0);
          ApplicationManagers_DebugTesting__RunDebugCommand(pSVar3,method_00);
        }
        else {
          if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
          }
          UnityEngine_Debug__Log((Il2CppObject *)"Invalid debug command.",(MethodInfo *)0x0);
        }
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        pAVar1 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
        pAVar1->_inputLine = pSVar3;
        Il2CppCodeGenWriteBarrier(&pAVar1->_inputLine);
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
      }
      UnityEngine_GUI__FocusControl(pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$IsEnterUp
// il2cpp: bool ApplicationManagers_DebugConsole__IsEnterUp (const MethodInfo* method);
// 0x5e13120

bool ApplicationManagers_DebugConsole__IsEnterUp(MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Event_o *pUVar2;
  bool bVar3;
  
  pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Event_o *)0x0) {
label_05e1317d:
    ThrowNullReferenceException();
  }
  bVar3 = false;
  iVar1 = UnityEngine_Event__get_type(pUVar2,(MethodInfo *)0x0);
  if (iVar1 == 5) {
    pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Event_o *)0x0) goto label_05e1317d;
    iVar1 = UnityEngine_Event__get_keyCode(pUVar2,(MethodInfo *)0x0);
    bVar3 = true;
    if (iVar1 != 0xd) {
      pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Event_o *)0x0) goto label_05e1317d;
      iVar1 = UnityEngine_Event__get_keyCode(pUVar2,(MethodInfo *)0x0);
      bVar3 = iVar1 == 0x10f;
    }
  }
  return bVar3;
}


// ApplicationManagers.DebugConsole$$HandleWindowDraggingAndResizing
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing (const MethodInfo* method);
// 0x5e134c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e1350e: jmp 0x5e1362a
// asm:   0x5e136ef: jmp 0x5e137df
// asm:   0x5e13866: ucomiss xmm0, xmm2
// asm:   0x5e13869: jae 0x5e138a5
// asm:   0x5e1386b: jmp 0x5e13997
// asm:   0x5e13aad: jmp 0x5e139e4

void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_Fields UVar4;
  undefined4 uVar5;
  char cVar6;
  uint32_t uVar7;
  ApplicationManagers_DebugConsole_StaticFields *pAVar8;
  float fVar9;
  ApplicationManagers_DebugConsole_c *pAVar10;
  int32_t iVar11;
  UnityEngine_Event_o *pUVar12;
  Il2CppClass *klass;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Vector2_Fields UVar15;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  float fVar18;
  
  if (Il2CppMethodInitialized_07548414 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07548414 = '\x01';
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor != 0) goto label_05e134e3;
label_05e13545:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging == false) goto label_05e134f0;
label_05e1355a:
    pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
    UVar14 = UnityEngine_Event__get_mousePosition(pUVar12,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    UVar15 = (pAVar8->_dragOffset).fields;
    pAVar8->_windowX = UVar14.fields.x + UVar15.x;
    pAVar8->_windowY = UVar14.fields.y + UVar15.y;
    if ((((ApplicationManagers_DebugConsole_c *)klass)->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e134fd;
label_05e135b5:
    il2cpp_codegen_runtime_class_init(klass);
    cVar6 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isResizing;
  }
  else {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) goto label_05e13545;
label_05e134e3:
    if (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_isDragging != false) goto label_05e1355a;
label_05e134f0:
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) goto label_05e135b5;
label_05e134fd:
    cVar6 = ((ApplicationManagers_DebugConsole_c *)klass)->static_fields->_isResizing;
  }
  if (cVar6 != '\0') {
    pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
    UVar14 = UnityEngine_Event__get_mousePosition(pUVar12,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    UVar15 = (pAVar8->_resizeStartSize).fields;
    UVar4 = (pAVar8->_resizeStartMousePos).fields;
    auVar16._0_4_ = (UVar14.fields.x - UVar4.x) + UVar15.x;
    auVar16._4_4_ = (UVar14.fields.y - UVar4.y) + UVar15.y;
    auVar16._8_4_ = ((float)extraout_XMM0_Qb - 0.0) + 0.0;
    auVar16._12_4_ = ((float)((ulong)extraout_XMM0_Qb >> 0x20) - 0.0) + 0.0;
    auVar16 = maxps(auVar16,_DAT_0100a8c0);
    pAVar8->_windowWidth = (float)auVar16._0_4_;
    pAVar8->_windowHeight = (float)auVar16._4_4_;
  }
  pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
  iVar11 = UnityEngine_Event__get_type(pUVar12,(MethodInfo *)0x0);
  if (iVar11 != 0) goto label_05e13997;
  pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
  iVar11 = UnityEngine_Event__get_button(pUVar12,(MethodInfo *)0x0);
  if (iVar11 != 0) goto label_05e13997;
  pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
  UVar15 = (UnityEngine_Vector2_Fields)UnityEngine_Event__get_mousePosition(pUVar12,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  fVar18 = pAVar8->_windowX;
  fVar13 = pAVar8->_windowY;
  fVar1 = pAVar8->_windowWidth;
  fVar9 = UVar15.x;
  fVar17 = UVar15.y;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    if (Il2CppMethodInitialized_0754205c != '\0') goto label_05e136ea;
label_05e1370d:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754205c = '\x01';
    if (fVar9 < fVar18) goto label_05e137df;
label_05e13734:
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if ((fVar18 + fVar1 <= fVar9) || (fVar17 < fVar13)) goto label_05e137df;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (fVar13 + 70.0 <= fVar17) goto label_05e137df;
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar10 = TypeInfo_ApplicationManagers_DebugConsole;
    pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    uVar3 = pAVar8->_windowX;
    uVar5 = pAVar8->_windowY;
    UVar15.x = (float)uVar3 - fVar9;
    UVar15.y = (float)uVar5 - fVar17;
    (pAVar8->_dragOffset).fields = UVar15;
    pAVar10->static_fields->_isDragging = true;
label_05e1397d:
    pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
    UnityEngine_Event__Use(pUVar12,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_0754205c == '\0') goto label_05e1370d;
label_05e136ea:
    if (fVar18 <= fVar9) goto label_05e13734;
label_05e137df:
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    fVar18 = pAVar8->_windowX;
    fVar13 = pAVar8->_windowY;
    fVar1 = pAVar8->_windowWidth;
    fVar2 = pAVar8->_windowHeight;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar18 = fVar18 + fVar1 + -15.0;
    if (Il2CppMethodInitialized_0754205c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_0754205c = '\x01';
    }
    if (fVar18 <= fVar9) {
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      if ((fVar9 < fVar18 + 15.0) && (fVar18 = fVar13 + fVar2 + -15.0, fVar18 <= fVar17)) {
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if (fVar17 < fVar18 + 15.0) {
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          pAVar10 = TypeInfo_ApplicationManagers_DebugConsole;
          (TypeInfo_ApplicationManagers_DebugConsole->static_fields->_resizeStartSize).fields =
               *(UnityEngine_Vector2_Fields *)
                &TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowWidth;
          (pAVar10->static_fields->_resizeStartMousePos).fields = UVar15;
          pAVar10->static_fields->_isResizing = true;
          goto label_05e1397d;
        }
      }
    }
  }
label_05e13997:
  pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Event_o *)0x0) {
label_05e13ab2:
    ThrowNullReferenceException();
  }
  iVar11 = UnityEngine_Event__get_type(pUVar12,(MethodInfo *)0x0);
  if (iVar11 == 1) {
    pUVar12 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_Event_o *)0x0) goto label_05e13ab2;
    iVar11 = UnityEngine_Event__get_button(pUVar12,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
      }
      pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
      pAVar8->_isDragging = false;
      pAVar8->_isResizing = false;
      uVar7 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05e139e2;
    }
  }
  uVar7 = (TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor;
joined_r0x05e139e2:
  if (uVar7 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  fVar18 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowX;
  iVar11 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pAVar8 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  fVar13 = (float)iVar11 - pAVar8->_windowWidth;
  if (fVar18 <= fVar13) {
    fVar13 = fVar18;
  }
  pAVar8->_windowX = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar13);
  fVar18 = pAVar8->_windowY;
  iVar11 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar13 = (float)iVar11 - TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowHeight;
  if (fVar18 <= fVar13) {
    fVar13 = fVar18;
  }
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_windowY =
       (float)(-(uint)(0.0 <= fVar18) & (uint)fVar13);
  return;
}


// ApplicationManagers.DebugConsole$$DrawResizeHandle
// il2cpp: void ApplicationManagers_DebugConsole__DrawResizeHandle (const MethodInfo* method);
// 0x5e13060

void ApplicationManagers_DebugConsole__DrawResizeHandle(MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ApplicationManagers_DebugConsole_StaticFields *pAVar5;
  UnityEngine_Rect_o position;
  
  if (Il2CppMethodInitialized_07548415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUI);
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x8b\xb0");
    Il2CppMethodInitialized_07548415 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  pAVar5 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  uVar1 = pAVar5->_windowX;
  uVar3 = pAVar5->_windowY;
  uVar2 = pAVar5->_windowWidth;
  uVar4 = pAVar5->_windowHeight;
  if ((TypeInfo_UnityEngine_GUI->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUI);
  }
  position.fields.m_XMin = (float)uVar1 + (float)uVar2 + -15.0;
  position.fields.m_YMin = (float)uVar3 + (float)uVar4 + -15.0;
  position.fields.m_Width = 15.0;
  position.fields.m_Height = 15.0;
  UnityEngine_GUI__Box(position,"\xe2\x8b\xb0",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.ctor
// il2cpp: void ApplicationManagers_DebugConsole___ctor (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x5e13ac0

void ApplicationManagers_DebugConsole___ctor(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole___cctor (const MethodInfo* method);
// 0x5e13ad0

void ApplicationManagers_DebugConsole___cctor(MethodInfo *method)

{
  System_Collections_Generic_LinkedList_DebugConsole_LogMessage__o *pSVar1;
  ApplicationManagers_DebugConsole_c *pAVar2;
  System_Collections_Generic_List_DebugConsole_LogMessage__o *__this;
  System_Text_StringBuilder_o *__this_00;
  ApplicationManagers_DebugConsole_StaticFields *pAVar3;
  
  if (Il2CppMethodInitialized_07548416 == '\0') {
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
    Il2CppMethodInitialized_07548416 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage);
  System_Collections_Generic_LinkedList_object____ctor
            ((System_Collections_Generic_LinkedList_T__o *)pSVar1,
             (MethodInfo_514F5D0 *)
             MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_ctor);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_messages = pSVar1;
  Il2CppCodeGenWriteBarrier(&pAVar3->_messages);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage);
  System_Collections_Generic_LinkedList_object____ctor
            ((System_Collections_Generic_LinkedList_T__o *)pSVar1,
             (MethodInfo_514F5D0 *)
             MethodInfo_System_Collections_Generic_LinkedList_DebugConsole_LogMessage_ctor);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_messageBuffer = pSVar1;
  Il2CppCodeGenWriteBarrier(&pAVar3->_messageBuffer);
  pAVar2 = TypeInfo_ApplicationManagers_DebugConsole;
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_currentCharCount = 0;
  pAVar3->_currentCharCountBuffer = 0;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
    pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
    pAVar2 = TypeInfo_ApplicationManagers_DebugConsole;
  }
  (pAVar3->_scrollPosition).fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  pAVar3 = pAVar2->static_fields;
  pAVar3->_inputLine = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pAVar3->_inputLine);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DebugConsole_LogMessage);
  System_Collections_Generic_List_object____ctor_395c990
            ((System_Collections_Generic_List_object__o *)__this,0x400,
             (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_DebugConsole_LogMessage_ctor);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_filteredMessages = __this;
  Il2CppCodeGenWriteBarrier(&pAVar3->_filteredMessages);
  TypeInfo_ApplicationManagers_DebugConsole->static_fields->_filterDirty = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_530d510(__this_00,0x2000,(MethodInfo *)0x0);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_displayBuilder = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar3->_displayBuilder);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_cachedDisplayText = "";
  Il2CppCodeGenWriteBarrier(&pAVar3->_cachedDisplayText);
  pAVar3 = TypeInfo_ApplicationManagers_DebugConsole->static_fields;
  pAVar3->_displayDirty = true;
  pAVar3->_lastFilteredCount = 0;
  pAVar3->_lastShowStackTraces = false;
  pAVar3->_windowX = 20.0;
  pAVar3->_windowY = 20.0;
  pAVar3->_windowWidth = 600.0;
  pAVar3->_windowHeight = 400.0;
  pAVar3->_isDragging = false;
  pAVar3->_isResizing = false;
  pAVar3->_showStackTraces = false;
  pAVar3->_solidBackground = true;
  pAVar3->_wordWrap = true;
  return;
}


