// Type: ApplicationManagers.DebugConsole
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugConsole.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/DebugConsole.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.DebugConsole.LogMessage$$Initialize
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Initialize (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x419b7f0

void ApplicationManagers_DebugConsole_LogMessage__Initialize
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,
               int32_t type,System_String_o *stackTrace,bool_conflict isCustomLogic,
               MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05704c5c == '\0') {
    il2cpp_init_method_metadata(&"<color=red>\x2716</color> ");
    il2cpp_init_method_metadata(&"<color=yellow>\x26a0</color> ");
    il2cpp_init_method_metadata(&"<color=orange>!</color> ");
    il2cpp_init_method_metadata(&"<color=red>\x26d4</color> ");
    il2cpp_init_method_metadata(&"<color=white>\x2139</color> ");
    il2cpp_init_method_metadata(&"");
    DAT_05704c5c = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields).Message = message;
  il2cpp_runtime_glue(&__this->fields,message);
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields).StackTrace = stackTrace;
  il2cpp_runtime_glue(&(__this->fields).StackTrace,stackTrace);
  (__this->fields).Type = type;
  *(char *)&(__this->fields).IsCustomLogic = (char)isCustomLogic;
  (__this->fields).Count = 1;
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedFormatted,0);
  *(undefined1 *)&(__this->fields)._lastShowStackTraces = 0;
  (__this->fields)._lastCount = 0;
  puVar1 = &"<color=red>\x2716</color> ";
  switch(type) {
  case 0:
    break;
  case 1:
    puVar1 = &"<color=orange>!</color> ";
    break;
  case 2:
    puVar1 = &"<color=yellow>\x26a0</color> ";
    break;
  case 3:
    puVar1 = &"<color=white>\x2139</color> ";
    break;
  case 4:
    puVar1 = &"<color=red>\x26d4</color> ";
    break;
  default:
    puVar1 = &"";
  }
  (__this->fields).Prefix = (System_String_o *)*puVar1;
  il2cpp_runtime_glue(&(__this->fields).Prefix);
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$Reset
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Reset (ApplicationManagers_DebugConsole_LogMessage_o* __this, const MethodInfo* method);
// 0x419b980

void ApplicationManagers_DebugConsole_LogMessage__Reset
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  (__this->fields).Message = (System_String_o *)0x0;
  il2cpp_runtime_glue(&__this->fields,0);
  (__this->fields).StackTrace = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).StackTrace,0);
  (__this->fields).Prefix = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).Prefix,0);
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._cachedFormatted,0);
  (__this->fields).Count = 1;
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$GetFormattedMessage
// il2cpp: System_String_o* ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage (ApplicationManagers_DebugConsole_LogMessage_o* __this, bool showStackTraces, const MethodInfo* method);
// 0x419b9e0

System_String_o *
ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
          (ApplicationManagers_DebugConsole_LogMessage_o *__this,bool_conflict showStackTraces,
          MethodInfo *method)

{
  System_String_o **ppSVar1;
  int iVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *arg0;
  System_String_o *pSVar4;
  MethodInfo *extraout_RDX;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_05704c5d == '\0') {
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&" (x{0})");
    il2cpp_init_method_metadata(&"");
    DAT_05704c5d = '\x01';
    method = extraout_RDX;
  }
  pSVar4 = (__this->fields)._cachedFormatted;
  if (((pSVar4 == (System_String_o *)0x0) ||
      (method = (MethodInfo *)(ulong)(showStackTraces & 0xffU),
      (uint)(byte)(__this->fields)._lastShowStackTraces != (showStackTraces & 0xffU))) ||
     ((__this->fields)._lastCount != (__this->fields).Count)) {
    *(char *)&(__this->fields)._lastShowStackTraces = (char)showStackTraces;
    iVar2 = (__this->fields).Count;
    (__this->fields)._lastCount = iVar2;
    pSVar4 = "";
    if (1 < iVar2) {
      uStack_28 = CONCAT44(iVar2,(undefined4)uStack_28);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_28 + 4,method);
      pSVar4 = System_String__Format(" (x{0})",arg0,(MethodInfo *)0x0);
    }
    ppSVar1 = &(__this->fields)._cachedFormatted;
    pSVar4 = System_String__Concat
                       ((__this->fields).Prefix,(__this->fields).Message,pSVar4,(MethodInfo *)0x0);
    if (((char)showStackTraces != '\0') &&
       (bVar3 = System_String__IsNullOrEmpty((__this->fields).StackTrace,(MethodInfo *)0x0),
       (char)bVar3 == '\0')) {
      pSVar4 = System_String__Concat
                         (pSVar4,"\n",(__this->fields).StackTrace,(MethodInfo *)0x0);
    }
    *ppSVar1 = pSVar4;
    il2cpp_runtime_glue(ppSVar1,pSVar4);
    pSVar4 = *ppSVar1;
  }
  return pSVar4;
}


// ApplicationManagers.DebugConsole.LogMessage$$IsDuplicateOf
// il2cpp: bool ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, bool isCustomLogic, System_String_o* stackTrace, const MethodInfo* method);
// 0x419baf0

bool_conflict
ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
          (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,
          int32_t type,bool_conflict isCustomLogic,System_String_o *stackTrace,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__op_Equality((__this->fields).Message,message,(MethodInfo *)0x0);
  if ((((char)bVar1 != '\0') && ((__this->fields).Type == type)) &&
     ((uint)(byte)(__this->fields).IsCustomLogic == (isCustomLogic & 0xffU))) {
    bVar1 = System_String__op_Equality((__this->fields).StackTrace,stackTrace,(MethodInfo *)0x0);
    return bVar1;
  }
  return 0;
}


// ApplicationManagers.DebugConsole.LogMessage$$.ctor
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage___ctor (ApplicationManagers_DebugConsole_LogMessage_o* __this, const MethodInfo* method);
// 0x419bb50

void ApplicationManagers_DebugConsole_LogMessage___ctor
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool___cctor (const MethodInfo* method);
// 0x419bb60

void ApplicationManagers_DebugConsole_LogMessagePool___cctor(MethodInfo *method)

{
  System_Collections_Generic_Stack_object__o *pSVar1;
  Il2CppObject *__this;
  int iVar2;
  
  if (DAT_05704c5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    il2cpp_init_method_metadata(&TypeInfo_LogMessage);
    il2cpp_init_method_metadata(&MethodInfo_Void_Push);
    il2cpp_init_method_metadata(&MethodInfo_Stack_1_ApplicationManagers_DebugConsole_LogMess);
    il2cpp_init_method_metadata(&TypeInfo_Stack_LogMessage);
    DAT_05704c5e = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_glue(TypeInfo_Stack_LogMessage);
  iVar2 = 0x200;
  System_Collections_Generic_Stack<object>___ctor(pSVar1,0x200,MethodInfo_Stack_1_ApplicationManagers_DebugConsole_LogMess);
  **(undefined8 **)(TypeInfo_LogMessagePool + 0xb8) = pSVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_LogMessagePool + 0xb8));
  do {
    pSVar1 = (System_Collections_Generic_Stack_object__o *)**(undefined8 **)(TypeInfo_LogMessagePool + 0xb8);
    __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LogMessage);
    System_Object___ctor(__this,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Stack_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Stack<object>__Push(pSVar1,__this,MethodInfo_Void_Push);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Get
// il2cpp: ApplicationManagers_DebugConsole_LogMessage_o* ApplicationManagers_DebugConsole_LogMessagePool__Get (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x419bc70

ApplicationManagers_DebugConsole_LogMessage_o *
ApplicationManagers_DebugConsole_LogMessagePool__Get
          (System_String_o *message,int32_t type,System_String_o *stackTrace,
          bool_conflict isCustomLogic,MethodInfo *method)

{
  System_Collections_Generic_Stack_object__o *__this;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  MethodInfo *in_R9;
  
  if (DAT_05704c5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    il2cpp_init_method_metadata(&TypeInfo_LogMessage);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_Pop);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704c5f = '\x01';
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) goto LAB_0419bd56;
LAB_0419bca4:
    __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) != 0) goto LAB_0419bca4;
LAB_0419bd56:
    il2cpp_init_class();
    __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
  }
  if (__this != (System_Collections_Generic_Stack_object__o *)0x0) {
    if ((__this->fields)._size < 1) {
      __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)il2cpp_runtime_glue(TypeInfo_LogMessage);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        il2cpp_init_class();
        __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
        if (__this == (System_Collections_Generic_Stack_object__o *)0x0) goto LAB_0419bdb5;
      }
      __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)
                  System_Collections_Generic_Stack<object>__Pop(__this,MethodInfo_DebugConsole_LogMessage_Pop);
    }
    if (__this_00 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
      ApplicationManagers_DebugConsole_LogMessage__Initialize
                (__this_00,message,type,stackTrace,isCustomLogic & 0xff,in_R9);
      return __this_00;
    }
  }
LAB_0419bdb5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Return
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool__Return (ApplicationManagers_DebugConsole_LogMessage_o* logMessage, const MethodInfo* method);
// 0x419bdc0

void ApplicationManagers_DebugConsole_LogMessagePool__Return
               (ApplicationManagers_DebugConsole_LogMessage_o *logMessage,MethodInfo *method)

{
  System_Collections_Generic_Stack_object__o *__this;
  
  if (DAT_05704c60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    il2cpp_init_method_metadata(&MethodInfo_Void_Push);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704c60 = '\x01';
  }
  if (logMessage != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    (logMessage->fields).Message = (System_String_o *)0x0;
    il2cpp_runtime_glue(&logMessage->fields,0);
    (logMessage->fields).StackTrace = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(logMessage->fields).StackTrace,0);
    (logMessage->fields).Prefix = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(logMessage->fields).Prefix,0);
    (logMessage->fields)._cachedFormatted = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(logMessage->fields)._cachedFormatted,0);
    (logMessage->fields).Count = 1;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
    if (__this == (System_Collections_Generic_Stack_object__o *)0x0) {
LAB_0419bece:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((__this->fields)._size < 0x200) {
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        il2cpp_init_class();
        __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
        if (__this == (System_Collections_Generic_Stack_object__o *)0x0) goto LAB_0419bece;
      }
      System_Collections_Generic_Stack<object>__Push(__this,(Il2CppObject *)logMessage,MethodInfo_Void_Push)
      ;
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$Init
// il2cpp: void ApplicationManagers_DebugConsole__Init (const MethodInfo* method);
// 0x4194620

void ApplicationManagers_DebugConsole__Init(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Application_LogCallback_o *value;
  int iVar4;
  
  if (DAT_05704c37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnUnityDebugLog);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_LogCallback);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_CreateSingleton_DebugConsole);
    DAT_05704c37 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugConsole + 0xb8),MethodInfo_DebugConsole_CreateSingleton_DebugConsole);
  **(undefined8 **)(TypeInfo_DebugConsole + 0xb8) = pIVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_DebugConsole + 0xb8));
  value = (UnityEngine_Application_LogCallback_o *)il2cpp_runtime_glue(TypeInfo_LogCallback);
  UnityEngine_Application_LogCallback___ctor();
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Application__add_logMessageReceived(value,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
  iVar4 = (uint)(byte)((byte)bVar2 ^ 1) << 2;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(int *)(lVar1 + 0x98) = iVar4;
  *(int *)(lVar1 + 0x4c) = iVar4;
  return;
}


// ApplicationManagers.DebugConsole$$Log
// il2cpp: void ApplicationManagers_DebugConsole__Log (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x4197ee0

void ApplicationManagers_DebugConsole__Log
               (System_String_o *message,bool_conflict showInChat,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  
  if (DAT_05704c38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_05704c38 = '\x01';
  }
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  if ((char)showInChat != '\0') {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 != '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddException(message,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$LogCustomLogic
// il2cpp: void ApplicationManagers_DebugConsole__LogCustomLogic (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x4197f90

void ApplicationManagers_DebugConsole__LogCustomLogic
               (System_String_o *message,bool_conflict showInChat,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *message_00;
  
  if (DAT_05704c39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"[Custom Logic Error] ");
    DAT_05704c39 = '\x01';
  }
  message_00 = System_String__Concat("[Custom Logic Error] ",message,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message_00,(MethodInfo *)0x0);
  if ((char)showInChat != '\0') {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 != '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddException(message,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$LogTimeSince
// il2cpp: void ApplicationManagers_DebugConsole__LogTimeSince (float start, System_String_o* prefix, const MethodInfo* method);
// 0x4198060

void ApplicationManagers_DebugConsole__LogTimeSince
               (float start,System_String_o *prefix,MethodInfo *method)

{
  System_String_o *pSVar1;
  float local_c;
  
  if (DAT_05704c3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata();
    DAT_05704c3a = '\x01';
  }
  local_c = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  local_c = local_c - start;
  pSVar1 = System_Single__ToString(local_c,(MethodInfo *)&local_c);
  pSVar1 = System_String__Concat(prefix,": ",pSVar1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$OnUnityDebugLog
// il2cpp: void ApplicationManagers_DebugConsole__OnUnityDebugLog (System_String_o* log, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
// 0x4198100

void ApplicationManagers_DebugConsole__OnUnityDebugLog
               (System_String_o *log,System_String_o *stackTrace,int32_t type,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_LinkedList_T__o *pSVar5;
  System_Collections_Generic_LinkedListNode_T__o *pSVar6;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar7;
  long lVar8;
  System_String_o *pSVar9;
  int iVar10;
  undefined1 *puVar11;
  int32_t length;
  long lVar12;
  
  if (DAT_05704c3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&"[Custom Logic Error] ");
    DAT_05704c3b = '\x01';
  }
  if (log == (System_String_o *)0x0) {
LAB_041981aa:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = System_String__StartsWith(log,"[Custom Logic Error] ",(MethodInfo *)0x0);
  if ((char)uVar2 != '\0') {
    if ("[Custom Logic Error] " == (System_String_o *)0x0) goto LAB_041981aa;
    log = System_String__Substring(log,("[Custom Logic Error] "->fields)._stringLength,(MethodInfo *)0x0);
    if (type == 3) {
      type = 0;
    }
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveFirst);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    il2cpp_init_method_metadata(&"...");
    DAT_05704c3c = '\x01';
  }
  if (log == (System_String_o *)0x0) {
    log = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (log == (System_String_o *)0x0) goto LAB_041985fc;
  iVar10 = (log->fields)._stringLength;
  pSVar4 = log;
  if (0x400 < iVar10) {
    pSVar4 = System_String__Substring(log,0,0x400,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,"...",(MethodInfo *)0x0);
    iVar10 = (log->fields)._stringLength;
  }
  if (0x400 < iVar10) {
    iVar10 = 0x400;
  }
  if (stackTrace == (System_String_o *)0x0) goto LAB_041985fc;
  length = 0x400 - iVar10;
  if (length < (stackTrace->fields)._stringLength) {
    if (length < 0) {
      length = 0;
    }
    pSVar9 = System_String__Substring(stackTrace,0,length,(MethodInfo *)0x0);
    stackTrace = System_String__Concat(pSVar9,"...",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto LAB_041985e0;
LAB_04198261:
    pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto LAB_04198261;
LAB_041985e0:
    il2cpp_init_class();
    pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
  }
  if (pSVar5 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    if (0 < (pSVar5->fields).count) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)
                  (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
        if (pSVar5 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto LAB_041985fc;
      }
      pSVar6 = System_Collections_Generic_LinkedList<object>__get_Last(pSVar5,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
      if ((pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
         (pAVar7 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
         pAVar7 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) goto LAB_041985fc;
      bVar3 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                        (pAVar7,pSVar4,type,uVar2 & 0xff,stackTrace,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        piVar1 = &(pAVar7->fields).Count;
        *piVar1 = *piVar1 + 1;
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        puVar11 = (undefined1 *)(lVar8 + 0x38);
LAB_041984c9:
        *puVar11 = 1;
        *(undefined1 *)(lVar8 + 0x60) = 1;
        return;
      }
    }
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pAVar7 = ApplicationManagers_DebugConsole_LogMessagePool__Get
                       (pSVar4,type,stackTrace,uVar2 & 0xff,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
    if (((pSVar5 != (System_Collections_Generic_LinkedList_T__o *)0x0) &&
        (System_Collections_Generic_LinkedList<object>__AddLast
                   (pSVar5,(Il2CppObject *)pAVar7,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol), lVar12 = TypeInfo_DebugConsole,
        pSVar4 != (System_String_o *)0x0)) && (stackTrace != (System_String_o *)0x0)) {
      *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) =
           *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) + (pSVar4->fields)._stringLength +
           (stackTrace->fields)._stringLength;
      iVar10 = *(int *)(lVar12 + 0xe4);
      while( true ) {
        if (iVar10 == 0) {
          il2cpp_init_class();
          lVar12 = TypeInfo_DebugConsole;
        }
        lVar8 = *(long *)(lVar12 + 0xb8);
        if (*(long *)(lVar8 + 0x18) == 0) break;
        if (*(int *)(*(long *)(lVar8 + 0x18) + 0x18) < 0x401) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            il2cpp_init_class();
            lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            lVar12 = TypeInfo_DebugConsole;
          }
          if (*(int *)(lVar8 + 0x24) < 0x7a121) {
            if (*(int *)(lVar12 + 0xe4) == 0) {
              il2cpp_init_class();
              lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            }
            *(undefined1 *)(lVar8 + 0x38) = 1;
            puVar11 = (undefined1 *)(lVar8 + 0x48);
            goto LAB_041984c9;
          }
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          il2cpp_init_class();
          lVar12 = TypeInfo_DebugConsole;
        }
        lVar8 = *(long *)(lVar12 + 0xb8);
        pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x18);
        if (((pSVar5 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
            (pSVar6 = (pSVar5->fields).head,
            pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
           ((pAVar7 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
            pAVar7 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
            ((pSVar4 = (pAVar7->fields).Message, pSVar4 == (System_String_o *)0x0 ||
             (pSVar9 = (pAVar7->fields).StackTrace, pSVar9 == (System_String_o *)0x0)))))) break;
        *(int *)(lVar8 + 0x24) =
             (*(int *)(lVar8 + 0x24) - (pSVar4->fields)._stringLength) -
             (pSVar9->fields)._stringLength;
        System_Collections_Generic_LinkedList<object>__RemoveFirst(pSVar5,MethodInfo_Void_RemoveFirst);
        if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar7,(MethodInfo *)0x0);
        iVar10 = *(int *)(TypeInfo_DebugConsole + 0xe4);
        lVar12 = TypeInfo_DebugConsole;
      }
    }
  }
LAB_041985fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$AddMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__AddMessageBuffer (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x41981b0

void ApplicationManagers_DebugConsole__AddMessageBuffer
               (System_String_o *message,int32_t type,System_String_o *stackTrace,
               bool_conflict isCustomLogic,MethodInfo *method)

{
  int32_t *piVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_LinkedList_T__o *pSVar4;
  System_Collections_Generic_LinkedListNode_T__o *pSVar5;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar6;
  long lVar7;
  System_String_o *pSVar8;
  int iVar9;
  undefined1 *puVar10;
  int32_t length;
  long lVar11;
  
  if (DAT_05704c3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveFirst);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    il2cpp_init_method_metadata(&"...");
    DAT_05704c3c = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (message == (System_String_o *)0x0) goto LAB_041985fc;
  iVar9 = (message->fields)._stringLength;
  pSVar3 = message;
  if (0x400 < iVar9) {
    pSVar3 = System_String__Substring(message,0,0x400,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,"...",(MethodInfo *)0x0);
    iVar9 = (message->fields)._stringLength;
  }
  if (0x400 < iVar9) {
    iVar9 = 0x400;
  }
  if (stackTrace == (System_String_o *)0x0) goto LAB_041985fc;
  length = 0x400 - iVar9;
  if (length < (stackTrace->fields)._stringLength) {
    if (length < 0) {
      length = 0;
    }
    pSVar8 = System_String__Substring(stackTrace,0,length,(MethodInfo *)0x0);
    stackTrace = System_String__Concat(pSVar8,"...",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto LAB_041985e0;
LAB_04198261:
    pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto LAB_04198261;
LAB_041985e0:
    il2cpp_init_class();
    pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
  }
  if (pSVar4 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    if (0 < (pSVar4->fields).count) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)
                  (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
        if (pSVar4 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto LAB_041985fc;
      }
      pSVar5 = System_Collections_Generic_LinkedList<object>__get_Last(pSVar4,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
      if ((pSVar5 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
         (pAVar6 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar5->fields).item,
         pAVar6 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) goto LAB_041985fc;
      bVar2 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                        (pAVar6,pSVar3,type,isCustomLogic & 0xffU,stackTrace,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        piVar1 = &(pAVar6->fields).Count;
        *piVar1 = *piVar1 + 1;
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar7 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        puVar10 = (undefined1 *)(lVar7 + 0x38);
LAB_041984c9:
        *puVar10 = 1;
        *(undefined1 *)(lVar7 + 0x60) = 1;
        return;
      }
    }
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pAVar6 = ApplicationManagers_DebugConsole_LogMessagePool__Get
                       (pSVar3,type,stackTrace,isCustomLogic & 0xffU,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
    if (((pSVar4 != (System_Collections_Generic_LinkedList_T__o *)0x0) &&
        (System_Collections_Generic_LinkedList<object>__AddLast
                   (pSVar4,(Il2CppObject *)pAVar6,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol), lVar11 = TypeInfo_DebugConsole,
        pSVar3 != (System_String_o *)0x0)) && (stackTrace != (System_String_o *)0x0)) {
      *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) =
           *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) + (pSVar3->fields)._stringLength +
           (stackTrace->fields)._stringLength;
      iVar9 = *(int *)(lVar11 + 0xe4);
      while( true ) {
        if (iVar9 == 0) {
          il2cpp_init_class();
          lVar11 = TypeInfo_DebugConsole;
        }
        lVar7 = *(long *)(lVar11 + 0xb8);
        if (*(long *)(lVar7 + 0x18) == 0) break;
        if (*(int *)(*(long *)(lVar7 + 0x18) + 0x18) < 0x401) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            il2cpp_init_class();
            lVar7 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            lVar11 = TypeInfo_DebugConsole;
          }
          if (*(int *)(lVar7 + 0x24) < 0x7a121) {
            if (*(int *)(lVar11 + 0xe4) == 0) {
              il2cpp_init_class();
              lVar7 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            }
            *(undefined1 *)(lVar7 + 0x38) = 1;
            puVar10 = (undefined1 *)(lVar7 + 0x48);
            goto LAB_041984c9;
          }
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          il2cpp_init_class();
          lVar11 = TypeInfo_DebugConsole;
        }
        lVar7 = *(long *)(lVar11 + 0xb8);
        pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(lVar7 + 0x18);
        if (((pSVar4 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
            (pSVar5 = (pSVar4->fields).head,
            pSVar5 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
           ((pAVar6 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar5->fields).item,
            pAVar6 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
            ((pSVar3 = (pAVar6->fields).Message, pSVar3 == (System_String_o *)0x0 ||
             (pSVar8 = (pAVar6->fields).StackTrace, pSVar8 == (System_String_o *)0x0)))))) break;
        *(int *)(lVar7 + 0x24) =
             (*(int *)(lVar7 + 0x24) - (pSVar3->fields)._stringLength) -
             (pSVar8->fields)._stringLength;
        System_Collections_Generic_LinkedList<object>__RemoveFirst(pSVar4,MethodInfo_Void_RemoveFirst);
        if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar6,(MethodInfo *)0x0);
        iVar9 = *(int *)(TypeInfo_DebugConsole + 0xe4);
        lVar11 = TypeInfo_DebugConsole;
      }
    }
  }
LAB_041985fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$AddMessage
// il2cpp: void ApplicationManagers_DebugConsole__AddMessage (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x4198610

void ApplicationManagers_DebugConsole__AddMessage
               (System_String_o *message,int32_t type,System_String_o *stackTrace,
               bool_conflict isCustomLogic,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  System_Collections_Generic_LinkedList_T__o *pSVar6;
  System_Collections_Generic_LinkedListNode_T__o *pSVar7;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar8;
  long lVar9;
  long lVar10;
  
  if (DAT_05704c3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveFirst);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    DAT_05704c3d = '\x01';
  }
  bVar5 = System_String__op_Equality
                    (message,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
  if (pSVar6 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    if (0 < (pSVar6->fields).count) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)
                  (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
        if (pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto LAB_04198948;
      }
      pSVar7 = System_Collections_Generic_LinkedList<object>__get_Last(pSVar6,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
      if ((pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
         (pAVar8 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
         pAVar8 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) goto LAB_04198948;
      bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                        (pAVar8,message,type,isCustomLogic & 0xffU,stackTrace,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        piVar1 = &(pAVar8->fields).Count;
        *piVar1 = *piVar1 + 1;
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
LAB_04198935:
        *(undefined1 *)(lVar9 + 0x60) = 1;
        return;
      }
    }
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pAVar8 = ApplicationManagers_DebugConsole_LogMessagePool__Get
                       (message,type,stackTrace,isCustomLogic & 0xffU,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10)
    ;
    if (((pSVar6 != (System_Collections_Generic_LinkedList_T__o *)0x0) &&
        (System_Collections_Generic_LinkedList<object>__AddLast
                   (pSVar6,(Il2CppObject *)pAVar8,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol), lVar10 = TypeInfo_DebugConsole,
        message != (System_String_o *)0x0)) && (stackTrace != (System_String_o *)0x0)) {
      *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x20) =
           *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x20) + (message->fields)._stringLength +
           (stackTrace->fields)._stringLength;
      iVar2 = *(int *)(lVar10 + 0xe4);
      while( true ) {
        if (iVar2 == 0) {
          il2cpp_init_class();
          lVar10 = TypeInfo_DebugConsole;
        }
        lVar9 = *(long *)(lVar10 + 0xb8);
        if (*(long *)(lVar9 + 0x10) == 0) break;
        if (*(int *)(*(long *)(lVar9 + 0x10) + 0x18) < 0x401) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            il2cpp_init_class();
            lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            lVar10 = TypeInfo_DebugConsole;
          }
          if (*(int *)(lVar9 + 0x20) < 0x7a121) {
            if (*(int *)(lVar10 + 0xe4) == 0) {
              il2cpp_init_class();
              lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            }
            *(undefined1 *)(lVar9 + 0x48) = 1;
            goto LAB_04198935;
          }
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          il2cpp_init_class();
          lVar10 = TypeInfo_DebugConsole;
        }
        lVar9 = *(long *)(lVar10 + 0xb8);
        pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x10);
        if (((pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
            (pSVar7 = (pSVar6->fields).head,
            pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
           ((pAVar8 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
            pAVar8 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
            ((pSVar3 = (pAVar8->fields).Message, pSVar3 == (System_String_o *)0x0 ||
             (pSVar4 = (pAVar8->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))))) break;
        *(int *)(lVar9 + 0x20) =
             (*(int *)(lVar9 + 0x20) - (pSVar3->fields)._stringLength) -
             (pSVar4->fields)._stringLength;
        System_Collections_Generic_LinkedList<object>__RemoveFirst(pSVar6,MethodInfo_Void_RemoveFirst);
        if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar8,(MethodInfo *)0x0);
        iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
        lVar10 = TypeInfo_DebugConsole;
      }
    }
  }
LAB_04198948:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$ProcessMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__ProcessMessageBuffer (const MethodInfo* method);
// 0x4198950

void ApplicationManagers_DebugConsole__ProcessMessageBuffer(MethodInfo *method)

{
  int32_t *piVar1;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar2;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  System_Collections_Generic_LinkedList_T__o *pSVar6;
  System_Collections_Generic_LinkedListNode_T__o *pSVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  
  if (DAT_05704c3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveFirst);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    DAT_05704c3e = '\x01';
  }
  uVar10 = 0;
  iVar9 = *(int *)(TypeInfo_DebugConsole + 0xe4);
  while( true ) {
    if (iVar9 == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x18);
    if (pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    if ((0x31 < uVar10) || ((pSVar6->fields).count < 1)) {
      if (uVar10 != 0) {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
          lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
        *(undefined1 *)(lVar8 + 0x48) = 1;
        *(undefined1 *)(lVar8 + 0x60) = 1;
      }
      return;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)
                (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
      if (pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    pSVar7 = (pSVar6->fields).head;
    if (pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) break;
    pAVar2 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item;
    System_Collections_Generic_LinkedList<object>__RemoveFirst(pSVar6,MethodInfo_Void_RemoveFirst);
    pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10)
    ;
    if (pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    if ((pSVar6->fields).count < 1) {
LAB_04198b93:
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (((pAVar2 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar3 = (pAVar2->fields).Message, pSVar3 != (System_String_o *)0x0)) &&
         (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 != (System_String_o *)0x0)) {
        lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        iVar9 = (pSVar4->fields)._stringLength + (pSVar3->fields)._stringLength;
        *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) - iVar9;
        *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + iVar9;
        if (*(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10) !=
            (System_Collections_Generic_LinkedList_T__o *)0x0) {
          System_Collections_Generic_LinkedList<object>__AddLast
                    (*(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10),
                     (Il2CppObject *)pAVar2,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
          iVar9 = *(int *)(TypeInfo_DebugConsole + 0xe4);
          do {
            if (iVar9 == 0) {
              il2cpp_init_class();
            }
            lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            if (*(long *)(lVar8 + 0x10) == 0) break;
            if (*(int *)(*(long *)(lVar8 + 0x10) + 0x18) < 0x401) {
              if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
                il2cpp_init_class();
                lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
              }
              if (*(int *)(lVar8 + 0x20) < 0x7a121) goto LAB_04198a0a;
            }
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10);
            if (((pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                (pSVar7 = (pSVar6->fields).head,
                pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
               ((pAVar2 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
                pAVar2 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
                ((pSVar3 = (pAVar2->fields).Message, pSVar3 == (System_String_o *)0x0 ||
                 (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 == (System_String_o *)0x0))))))
            break;
            *(int *)(lVar8 + 0x20) =
                 (*(int *)(lVar8 + 0x20) - (pSVar3->fields)._stringLength) -
                 (pSVar4->fields)._stringLength;
            System_Collections_Generic_LinkedList<object>__RemoveFirst(pSVar6,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              il2cpp_init_class();
            }
            ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar2,(MethodInfo *)0x0);
            iVar9 = *(int *)(TypeInfo_DebugConsole + 0xe4);
          } while( true );
        }
      }
      break;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar6 = *(System_Collections_Generic_LinkedList_T__o **)
                (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
      if (pSVar6 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    pSVar7 = System_Collections_Generic_LinkedList<object>__get_Last(pSVar6,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsol);
    if (((pSVar7 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
        (pAVar2 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (__this = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar7->fields).item,
       __this == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) break;
    bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                      (__this,(pAVar2->fields).Message,(pAVar2->fields).Type,
                       (uint)(byte)(pAVar2->fields).IsCustomLogic,(pAVar2->fields).StackTrace,
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto LAB_04198b93;
    piVar1 = &(__this->fields).Count;
    *piVar1 = *piVar1 + (pAVar2->fields).Count;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (pAVar2->fields).Message;
    if ((pSVar3 == (System_String_o *)0x0) ||
       (pSVar4 = (pAVar2->fields).StackTrace, pSVar4 == (System_String_o *)0x0)) break;
    *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) =
         (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) - (pSVar3->fields)._stringLength) -
         (pSVar4->fields)._stringLength;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_DebugConsole_LogMessagePool__Return(pAVar2,(MethodInfo *)0x0);
LAB_04198a0a:
    uVar10 = uVar10 + 1;
    iVar9 = *(int *)(TypeInfo_DebugConsole + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$UpdateFilteredMessages
// il2cpp: void ApplicationManagers_DebugConsole__UpdateFilteredMessages (const MethodInfo* method);
// 0x4198d30

void ApplicationManagers_DebugConsole__UpdateFilteredMessages(MethodInfo *method)

{
  char cVar1;
  int32_t length;
  long lVar2;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  bool_conflict bVar3;
  long lVar4;
  ulong uVar5;
  System_Collections_Generic_LinkedList_T__o *pSVar6;
  Il2CppRGCTXData *pIVar7;
  _union_297497 _Var8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSVar10;
  undefined1 local_58 [24];
  Il2CppObject *pIStack_40;
  System_Collections_Generic_LinkedList_Enumerator_T__c *local_38;
  
  if (DAT_05704c3f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_LinkedList_1_T__Enumerator_ApplicationManagers_D);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704c3f = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
    lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x48);
  }
  else {
    lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x48);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
      if (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x4c) ==
          *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98)) {
        return;
      }
    }
    else if (*(int *)(lVar4 + 0x4c) == *(int *)(lVar4 + 0x98)) {
      return;
    }
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  lVar2 = *(long *)(lVar4 + 0x40);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    length = *(int32_t *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
      lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    }
    if (*(System_Collections_Generic_LinkedList_T__o **)(lVar4 + 0x10) !=
        (System_Collections_Generic_LinkedList_T__o *)0x0) {
      System_Collections_Generic_LinkedList<object>__GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_58,
                 *(System_Collections_Generic_LinkedList_T__o **)(lVar4 + 0x10),MethodInfo_LinkedList_1_T__Enumerator_ApplicationManagers_D);
      pSVar6 = (System_Collections_Generic_LinkedList_T__o *)local_58._0_8_;
      pIVar7 = (Il2CppRGCTXData *)local_58._8_8_;
      _Var8 = (_union_297497)local_58._16_8_;
      pIVar9 = pIStack_40;
      pSVar10 = local_38;
      do {
        while( true ) {
          __this.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar7;
          __this.fields._list = pSVar6;
          __this.fields._16_8_ = _Var8.genericMethod;
          __this.fields._current = pIVar9;
          __this.fields._32_8_ = pSVar10;
          bVar3 = System_Collections_Generic_LinkedList_Enumerator<object>__MoveNext
                            (__this,(MethodInfo_3185BC0 *)&stack0xffffffffffffff78);
          if ((char)bVar3 == '\0') {
            __this_00.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar7;
            __this_00.fields._list = pSVar6;
            __this_00.fields._16_8_ = _Var8.genericMethod;
            __this_00.fields._current = pIVar9;
            __this_00.fields._32_8_ = pSVar10;
            System_Collections_Generic_LinkedList_Enumerator<object>__Dispose
                      (__this_00,(MethodInfo_3185D40 *)&stack0xffffffffffffff78);
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            *(undefined1 *)(lVar4 + 0x48) = 0;
            *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar4 + 0x98);
            *(undefined1 *)(lVar4 + 0x60) = 1;
            return;
          }
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) break;
          uVar5 = (ulong)*(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
          if (uVar5 < 5) goto LAB_04198f28;
        }
        il2cpp_init_class();
        uVar5 = (ulong)*(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
      } while (4 < uVar5);
LAB_04198f28:
      (*(code *)(&DAT_00d82274 + *(int *)(&DAT_00d82274 + uVar5 * 4)))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$GetDisplayText
// il2cpp: System_String_o* ApplicationManagers_DebugConsole__GetDisplayText (const MethodInfo* method);
// 0x4199180

System_String_o * ApplicationManagers_DebugConsole__GetDisplayText(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Text_StringBuilder_o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  long *plVar4;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  System_String_o *value;
  undefined8 uVar5;
  long lVar6;
  int index;
  
  if (DAT_05704c40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Item);
    DAT_05704c40 = '\x01';
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto LAB_041991ac;
LAB_04199269:
    il2cpp_init_class();
    lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar1 = *(char *)(lVar6 + 0x60);
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto LAB_04199269;
LAB_041991ac:
    lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar1 = *(char *)(lVar6 + 0x60);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    }
    if (*(long *)(lVar6 + 0x40) == 0) goto LAB_0419945f;
    if (*(int *)(lVar6 + 100) == *(int *)(*(long *)(lVar6 + 0x40) + 0x18)) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        if (*(char *)(lVar6 + 0x68) == *(char *)(lVar6 + 0x9c)) goto LAB_04199206;
      }
      else if (*(char *)(lVar6 + 0x68) == *(char *)(lVar6 + 0x9c)) {
LAB_04199206:
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
          lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
LAB_0419942c:
        return *(System_String_o **)(lVar6 + 0x58);
      }
    }
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x50);
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
    while( true ) {
      if (iVar2 == 0) {
        il2cpp_init_class();
      }
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      if (*(long *)(lVar6 + 0x40) == 0) goto LAB_0419945f;
      if (*(int *)(*(long *)(lVar6 + 0x40) + 0x18) <= index) break;
      if (index != 0) {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
          lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
        if (*(System_Text_StringBuilder_o **)(lVar6 + 0x50) == (System_Text_StringBuilder_o *)0x0)
        goto LAB_0419945f;
        System_Text_StringBuilder__Append
                  (*(System_Text_StringBuilder_o **)(lVar6 + 0x50),10,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Collections_Generic_List_object__o **)
                (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x40);
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0419945f;
      pSVar3 = *(System_Text_StringBuilder_o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x50);
      __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)
                  System_Collections_Generic_List<object>__get_Item(__this,index,MethodInfo_DebugConsole_LogMessage_get_Item);
      if ((__this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) ||
         (value = ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
                            (__this_00,(uint)*(byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9c),
                             (MethodInfo *)0x0), pSVar3 == (System_Text_StringBuilder_o *)0x0))
      goto LAB_0419945f;
      System_Text_StringBuilder__Append(pSVar3,value,(MethodInfo *)0x0);
      index = index + 1;
      iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    }
    plVar4 = *(long **)(lVar6 + 0x50);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined8 *)(lVar6 + 0x58) = uVar5;
      il2cpp_runtime_glue(lVar6 + 0x58,uVar5);
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      if (*(long *)(lVar6 + 0x40) != 0) {
        *(undefined4 *)(lVar6 + 100) = *(undefined4 *)(*(long *)(lVar6 + 0x40) + 0x18);
        *(undefined1 *)(lVar6 + 0x68) = *(undefined1 *)(lVar6 + 0x9c);
        *(undefined1 *)(lVar6 + 0x60) = 0;
        goto LAB_0419942c;
      }
    }
  }
LAB_0419945f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$Update
// il2cpp: void ApplicationManagers_DebugConsole__Update (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x4199470

void ApplicationManagers_DebugConsole__Update
               (ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  long lVar2;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar3;
  
  if (DAT_05704c41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704c41 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) ||
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar2 + 0xe0),
     __this_00 == (Settings_KeybindSetting_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pbVar1 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 8);
    *pbVar1 = *pbVar1 ^ 1;
  }
  bVar3 = UnityEngine_Input__GetKeyDown(0x123,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    Assets_Scripts_ApplicationManagers_DebugLagSim__Toggle((MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.DebugConsole$$OnGUI
// il2cpp: void ApplicationManagers_DebugConsole__OnGUI (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x4199520

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_DebugConsole__OnGUI
               (ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  code cVar1;
  int iVar2;
  UnityEngine_Rect_Fields UVar3;
  bool_conflict bVar4;
  UnityEngine_Texture_o *image;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  if (DAT_05704c42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_GUI);
    il2cpp_init_method_metadata(&"DebugInput");
    il2cpp_init_method_metadata(&"");
    DAT_05704c42 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = TypeInfo_DebugConsole[2].virtualMethodPointer[8];
  }
  else {
    cVar1 = ((MethodInfo *)((long)TypeInfo_DebugConsole + 0xb0))->virtualMethodPointer[8];
  }
  if (cVar1 == (code)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_GUI__set_depth(1,(MethodInfo *)0x0);
  pMVar6 = TypeInfo_DebugConsole;
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_DebugConsole__HandleWindowInteraction(pMVar6);
  if (TypeInfo_DebugConsole[2].virtualMethodPointer[0x9d] != (Il2CppMethodPointer)0x0) {
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = UnityEngine_GUI__get_color((MethodInfo *)0x0);
    value_00.fields.b = 0.15;
    value_00.fields.a = 1.0;
    value_00.fields.r = 0.15;
    value_00.fields.g = 0.15;
    UnityEngine_GUI__set_color(value_00,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    UVar3 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
    image = (UnityEngine_Texture_o *)UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
    UnityEngine_GUI__DrawTexture((UnityEngine_Rect_o)UVar3,image,(MethodInfo *)0x0);
    UnityEngine_GUI__set_color(value,(MethodInfo *)0x0);
  }
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  UVar3 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar6 = "";
  UnityEngine_GUI__Box((UnityEngine_Rect_o)UVar3,(System_String_o *)"",(MethodInfo *)0x0);
  ApplicationManagers_DebugConsole__DrawTabs(pMVar6);
  if ((char)bVar4 == '\0') {
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    pMVar6 = TypeInfo_DebugConsole;
  }
  else {
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_GUI__set_enabled(0,(MethodInfo *)0x0);
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    pMVar6 = TypeInfo_DebugConsole;
  }
  TypeInfo_DebugConsole = pMVar6;
  if (iVar2 == 0) {
    il2cpp_init_class();
    ApplicationManagers_DebugConsole__DrawMessageWindow(pMVar6);
    ApplicationManagers_DebugConsole__DrawInputWindow(pMVar6);
    pMVar6 = TypeInfo_DebugConsole;
  }
  else {
    ApplicationManagers_DebugConsole__DrawMessageWindow(pMVar6);
    ApplicationManagers_DebugConsole__DrawInputWindow(pMVar6);
    pMVar6 = TypeInfo_DebugConsole;
  }
  TypeInfo_DebugConsole = pMVar6;
  if ((char)bVar4 == '\0') {
    if (*(int *)((long)&((MethodInfo *)((long)pMVar6 + 0xb0))->parameters + 4) == 0) {
      il2cpp_init_class();
      ApplicationManagers_DebugConsole__HandleInput(pMVar6);
      iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar6 = TypeInfo_DebugConsole;
    }
    else {
      ApplicationManagers_DebugConsole__HandleInput(pMVar6);
      iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar6 = TypeInfo_DebugConsole;
    }
  }
  else {
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_GUI__set_enabled(1,(MethodInfo *)0x0);
    pSVar5 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,"DebugInput",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar6 = TypeInfo_DebugConsole;
    }
    else {
      pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_GUI__FocusControl(pSVar5,(MethodInfo *)0x0);
      iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar6 = TypeInfo_DebugConsole;
    }
  }
  TypeInfo_DebugConsole = pMVar6;
  if (iVar2 == 0) {
    il2cpp_init_class();
    ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar6);
    iVar2 = *(int *)(TypeInfo_GUI + 0xe4);
  }
  else {
    ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar6);
    iVar2 = *(int *)(TypeInfo_GUI + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  UnityEngine_GUI__set_depth(0,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$HandleWindowInteraction
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowInteraction (const MethodInfo* method);
// 0x41998d0

void ApplicationManagers_DebugConsole__HandleWindowInteraction(MethodInfo *method)

{
  float fVar1;
  char cVar2;
  UnityEngine_Vector2_Fields UVar3;
  long lVar4;
  int32_t iVar5;
  UnityEngine_Event_o *__this;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_48;
  float fStack_44;
  
  if (DAT_05704c43 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c43 = '\x01';
  }
  __this = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this == (UnityEngine_Event_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar3 = (UnityEngine_Vector2_Fields)UnityEngine_Event__get_mousePosition(__this,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  fVar10 = *(float *)(lVar6 + 0x6c);
  fVar8 = *(float *)(lVar6 + 0x70);
  fVar1 = *(float *)(lVar6 + 0x74);
  fVar9 = *(float *)(lVar6 + 0x78);
  iVar5 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
  local_48 = UVar3.x;
  fStack_44 = UVar3.y;
  if ((iVar5 == 0) && (iVar5 = UnityEngine_Event__get_button(__this,(MethodInfo *)0x0), iVar5 == 0))
  {
    fVar7 = fVar10 + fVar1;
    if ((((local_48 < fVar7 + -15.0) || (fVar7 + -15.0 + 15.0 <= local_48)) ||
        (fVar9 = fVar9 + fVar8 + -15.0, fStack_44 < fVar9)) || (fVar9 + 15.0 <= fStack_44)) {
      if (local_48 < fVar10) {
        return;
      }
      if (fVar7 <= local_48) {
        return;
      }
      if (fStack_44 < fVar8) {
        return;
      }
      if (fVar8 + 80.0 <= fStack_44) {
        return;
      }
      fVar9 = fVar7 + -335.0 + -20.0;
      if (((fVar9 <= local_48) && (local_48 < fVar9 + 345.0)) &&
         ((fVar8 + 10.0 <= fStack_44 && (fStack_44 < fVar8 + 10.0 + 25.0)))) {
        return;
      }
      if (((fVar10 + 10.0 <= local_48) && (local_48 < fVar10 + 10.0 + fVar1 + -20.0)) &&
         ((fVar10 = fVar8 + 20.0 + 25.0, fVar10 <= fStack_44 && (fStack_44 < fVar10 + 25.0)))) {
        return;
      }
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined1 *)(lVar6 + 0x7c) = 1;
      *(float *)(lVar6 + 0x80) = local_48 - *(float *)(lVar6 + 0x6c);
      *(float *)(lVar6 + 0x84) = fStack_44 - *(float *)(lVar6 + 0x70);
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar4 = TypeInfo_DebugConsole;
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined1 *)(lVar6 + 0x7d) = 1;
      *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(lVar6 + 0x74);
      *(UnityEngine_Vector2_Fields *)(*(long *)(lVar4 + 0xb8) + 0x90) = UVar3;
    }
  }
  else {
    iVar5 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if ((iVar5 == 1) &&
       (iVar5 = UnityEngine_Event__get_button(__this,(MethodInfo *)0x0), iVar5 == 0)) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      *(undefined2 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c) = 0;
      return;
    }
    iVar5 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if (iVar5 != 3) {
      return;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      cVar2 = *(char *)(lVar6 + 0x7c);
    }
    else {
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      cVar2 = *(char *)(lVar6 + 0x7c);
    }
    if (cVar2 == '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        cVar2 = *(char *)(lVar6 + 0x7d);
      }
      else {
        cVar2 = *(char *)(lVar6 + 0x7d);
      }
      if (cVar2 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      }
      fVar8 = (local_48 - (float)*(undefined8 *)(lVar6 + 0x90)) + *(float *)(lVar6 + 0x88);
      fVar10 = 400.0;
      if (400.0 <= fVar8) {
        fVar10 = fVar8;
      }
      *(float *)(lVar6 + 0x74) = fVar10;
      fVar8 = (fStack_44 - (float)((ulong)*(undefined8 *)(lVar6 + 0x90) >> 0x20)) +
              *(float *)(lVar6 + 0x8c);
      fVar10 = 300.0;
      if (300.0 <= fVar8) {
        fVar10 = fVar8;
      }
      *(float *)(lVar6 + 0x78) = fVar10;
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      }
      *(float *)(lVar6 + 0x6c) = local_48 - *(float *)(lVar6 + 0x80);
      *(float *)(lVar6 + 0x70) = fStack_44 - *(float *)(lVar6 + 0x84);
    }
  }
  UnityEngine_Event__Use(__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$DrawTabs
// il2cpp: void ApplicationManagers_DebugConsole__DrawTabs (const MethodInfo* method);
// 0x4199ce0

void ApplicationManagers_DebugConsole__DrawTabs(MethodInfo *method)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  System_Collections_Generic_LinkedList_T__o *pSVar5;
  long lVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  undefined8 uVar8;
  bool_conflict bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar18;
  float fVar17;
  float fVar19;
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
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 local_a8 [48];
  Il2CppType **ppIStack_78;
  Il2CppRGCTXData *local_70;
  _union_297497 _Stack_68;
  System_Collections_Generic_LinkedList_Enumerator_T__c *local_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  if (DAT_05704c44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GUI);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_LinkedList_1_T__Enumerator_ApplicationManagers_D);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_LogMessagePool);
    il2cpp_init_method_metadata(&"Hide Traces");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"No Wrap");
    il2cpp_init_method_metadata(&"Opaque");
    il2cpp_init_method_metadata(&"Warning");
    il2cpp_init_method_metadata(&"Show Traces");
    il2cpp_init_method_metadata(&"Wrap");
    il2cpp_init_method_metadata(&"Info");
    il2cpp_init_method_metadata(&"CL");
    il2cpp_init_method_metadata(&"Glass");
    il2cpp_init_method_metadata(&"Debug Console (Press F11 to hide)");
    il2cpp_init_method_metadata(&"All");
    il2cpp_init_method_metadata(&"Error");
    il2cpp_init_method_metadata(&"");
    DAT_05704c44 = '\x01';
  }
  local_a8._16_8_ = (Il2CppRGCTXData *)0x0;
  local_a8._24_8_ = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
  uVar24 = 0;
  uVar21 = 0;
  uVar25 = 0;
  uVar26 = 0;
  local_a8._0_8_ = (Il2CppType *)0x0;
  local_a8._8_8_ = (Il2CppType **)0x0;
  local_a8._32_8_ = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  iVar14 = (int)*(float *)(lVar12 + 0x6c);
  iVar10 = (int)*(float *)(lVar12 + 0x70);
  iVar13 = (int)*(float *)(lVar12 + 0x74);
  iVar1 = iVar14 + 10;
  position.fields.m_XMin = (float)iVar1;
  uVar27 = 0;
  fVar16 = (float)(iVar10 + 10);
  local_48 = ZEXT416((uint)position.fields.m_XMin);
  uVar20 = 0;
  uVar22 = 0;
  uVar23 = 0;
  fVar19 = (float)(iVar13 + -0x195);
  uVar18 = 0x41c80000;
  fVar17 = fVar16;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    uStack_54 = 0x41c80000;
    uStack_50 = 0;
    uStack_4c = 0;
    local_58 = (float)(iVar13 + -0x195);
    il2cpp_init_class();
    fVar19 = local_58;
    uVar18 = uStack_54;
  }
  position.fields.m_YMin = fVar16;
  position.fields.m_Height = (float)uVar18;
  position.fields.m_Width = fVar19;
  UnityEngine_GUI__Label(position,"Debug Console (Press F11 to hide)",(MethodInfo *)0x0);
  position_00.fields.m_XMin = (float)(iVar13 + iVar14 + -0x181);
  position_00.fields.m_YMin = fVar17;
  position_00.fields.m_Width = 90.0;
  position_00.fields.m_Height = 25.0;
  bVar9 = UnityEngine_GUI__Button(position_00,"Clear",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
LAB_0419a16f:
    iVar14 = iVar13 + iVar14;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (*(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9c) == '\0') {
      puVar11 = &"Show Traces";
    }
    else {
      puVar11 = &"Hide Traces";
    }
    pSVar7 = (System_String_o *)*puVar11;
    position_01.fields.m_XMin = (float)(iVar14 + -0x122);
    fVar19 = fVar17;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_01.fields.m_YMin = fVar17;
    position_01.fields.m_Width = 90.0;
    position_01.fields.m_Height = 25.0;
    bVar9 = UnityEngine_GUI__Button(position_01,pSVar7,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      iVar4 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      lVar6 = TypeInfo_DebugConsole;
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar6 = TypeInfo_DebugConsole;
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      pbVar2 = (byte *)(lVar12 + 0x9c);
      *pbVar2 = *pbVar2 ^ 1;
      *(undefined1 *)(lVar12 + 0x60) = 1;
      iVar4 = *(int *)(lVar6 + 0xe4);
    }
    if (iVar4 == 0) {
      il2cpp_init_class();
      cVar3 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9d);
    }
    else {
      cVar3 = *(char *)(*(long *)(lVar6 + 0xb8) + 0x9d);
    }
    if (cVar3 == '\0') {
      puVar11 = &"Opaque";
    }
    else {
      puVar11 = &"Glass";
    }
    pSVar7 = (System_String_o *)*puVar11;
    position_02.fields.m_XMin = (float)(iVar14 + -0xc3);
    fVar17 = fVar19;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_02.fields.m_YMin = fVar19;
    position_02.fields.m_Width = 90.0;
    position_02.fields.m_Height = 25.0;
    bVar9 = UnityEngine_GUI__Button(position_02,pSVar7,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      iVar4 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      lVar12 = TypeInfo_DebugConsole;
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar12 = TypeInfo_DebugConsole;
      pbVar2 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9d);
      *pbVar2 = *pbVar2 ^ 1;
      iVar4 = *(int *)(lVar12 + 0xe4);
    }
    if (iVar4 == 0) {
      il2cpp_init_class();
      cVar3 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9e);
    }
    else {
      cVar3 = *(char *)(*(long *)(lVar12 + 0xb8) + 0x9e);
    }
    if (cVar3 == '\0') {
      puVar11 = &"Wrap";
    }
    else {
      puVar11 = &"No Wrap";
    }
    pSVar7 = (System_String_o *)*puVar11;
    fVar19 = (float)(iVar14 + -100);
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_03.fields.m_YMin = fVar17;
    position_03.fields.m_XMin = fVar19;
    position_03.fields.m_Width = 90.0;
    position_03.fields.m_Height = 25.0;
    uVar24 = local_48._0_4_;
    bVar9 = UnityEngine_GUI__Button(position_03,pSVar7,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pbVar2 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9e);
      *pbVar2 = *pbVar2 ^ 1;
    }
    iVar14 = (iVar13 + -0x3c) / 5;
    fVar17 = (float)(iVar10 + 0x2d);
    fVar16 = (float)iVar14;
    uVar21 = 0x41c80000;
    fVar19 = fVar17;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_04.fields.m_YMin = fVar17;
    position_04.fields.m_XMin = (float)uVar24;
    position_04.fields.m_Height = (float)uVar21;
    position_04.fields.m_Width = fVar16;
    bVar9 = UnityEngine_GUI__Button(position_04,"All",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 0;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    iVar10 = iVar14 + iVar1 + 10;
    fVar15 = (float)iVar10;
    fVar17 = fVar19;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar14 = iVar14 + 10;
    position_05.fields.m_Height = (float)uVar21;
    position_05.fields.m_Width = fVar16;
    position_05.fields.m_YMin = fVar19;
    position_05.fields.m_XMin = fVar15;
    bVar9 = UnityEngine_GUI__Button(position_05,"Info",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 1;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    iVar10 = iVar10 + iVar14;
    fVar15 = (float)iVar10;
    fVar19 = fVar17;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_06.fields.m_Height = (float)uVar21;
    position_06.fields.m_Width = fVar16;
    position_06.fields.m_YMin = fVar17;
    position_06.fields.m_XMin = fVar15;
    bVar9 = UnityEngine_GUI__Button(position_06,"Warning",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 2;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    iVar10 = iVar10 + iVar14;
    fVar15 = (float)iVar10;
    fVar17 = fVar19;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_07.fields.m_Height = (float)uVar21;
    position_07.fields.m_Width = fVar16;
    position_07.fields.m_YMin = fVar19;
    position_07.fields.m_XMin = fVar15;
    bVar9 = UnityEngine_GUI__Button(position_07,"Error",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 3;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    fVar15 = (float)(iVar10 + iVar14);
    fVar19 = fVar17;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_08.fields.m_Height = (float)uVar21;
    position_08.fields.m_Width = fVar16;
    position_08.fields.m_YMin = fVar17;
    position_08.fields.m_XMin = fVar15;
    bVar9 = UnityEngine_GUI__Button(position_08,"CL",(MethodInfo *)0x0);
    lVar12 = TypeInfo_DebugConsole;
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar12 = TypeInfo_DebugConsole;
      lVar6 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar6 + 0x98) = 4;
      *(undefined1 *)(lVar6 + 0x38) = 1;
      *(undefined1 *)(lVar6 + 0x48) = 1;
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar12 = TypeInfo_DebugConsole;
    }
    fVar17 = (float)(iVar14 * *(int *)(*(long *)(lVar12 + 0xb8) + 0x98) + iVar1);
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position_09.fields.m_Height = (float)uVar21;
    position_09.fields.m_Width = fVar16;
    position_09.fields.m_YMin = fVar19;
    position_09.fields.m_XMin = fVar17;
    UnityEngine_GUI__Box(position_09,"",(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
  if (pSVar5 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    System_Collections_Generic_LinkedList<object>__GetEnumerator
              ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(local_a8 + 0x28),pSVar5,
               MethodInfo_LinkedList_1_T__Enumerator_ApplicationManagers_D);
    local_a8._32_8_ = local_60;
    local_a8._16_8_ = local_70;
    local_a8._24_8_ = _Stack_68;
    local_a8._0_8_ = local_a8._40_8_;
    local_a8._8_8_ = ppIStack_78;
    while (__this.fields._list._4_4_ = uVar20, __this.fields._list._0_4_ = fVar17,
          __this.fields._node._0_4_ = uVar22, __this.fields._node._4_4_ = uVar23,
          __this.fields._version = uVar24, __this.fields._20_4_ = uVar21,
          __this.fields._current._0_4_ = uVar25, __this.fields._current._4_4_ = uVar26,
          __this.fields._index = iVar10, __this.fields._36_4_ = uVar27,
          bVar9 = System_Collections_Generic_LinkedList_Enumerator<object>__MoveNext
                            (__this,(MethodInfo_3185BC0 *)local_a8), uVar8 = local_a8._24_8_,
          (char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_DebugConsole_LogMessagePool__Return
                ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar8,(MethodInfo *)0x0);
    }
    __this_00.fields._list._4_4_ = uVar20;
    __this_00.fields._list._0_4_ = fVar17;
    __this_00.fields._node._0_4_ = uVar22;
    __this_00.fields._node._4_4_ = uVar23;
    __this_00.fields._version = uVar24;
    __this_00.fields._20_4_ = uVar21;
    __this_00.fields._current._0_4_ = uVar25;
    __this_00.fields._current._4_4_ = uVar26;
    __this_00.fields._index = iVar10;
    __this_00.fields._36_4_ = uVar27;
    System_Collections_Generic_LinkedList_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185D40 *)local_a8);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18)
    ;
    if (pSVar5 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
      System_Collections_Generic_LinkedList<object>__GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(local_a8 + 0x28),pSVar5,
                 MethodInfo_LinkedList_1_T__Enumerator_ApplicationManagers_D);
      local_a8._32_8_ = local_60;
      local_a8._16_8_ = local_70;
      local_a8._24_8_ = _Stack_68;
      local_a8._0_8_ = local_a8._40_8_;
      local_a8._8_8_ = ppIStack_78;
      while (__this_01.fields._list._4_4_ = uVar20, __this_01.fields._list._0_4_ = fVar17,
            __this_01.fields._node._0_4_ = uVar22, __this_01.fields._node._4_4_ = uVar23,
            __this_01.fields._version = uVar24, __this_01.fields._20_4_ = uVar21,
            __this_01.fields._current._0_4_ = uVar25, __this_01.fields._current._4_4_ = uVar26,
            __this_01.fields._index = iVar10, __this_01.fields._36_4_ = uVar27,
            bVar9 = System_Collections_Generic_LinkedList_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185BC0 *)local_a8), uVar8 = local_a8._24_8_,
            (char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DebugConsole_LogMessagePool__Return
                  ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar8,(MethodInfo *)0x0);
      }
      __this_02.fields._list._4_4_ = uVar20;
      __this_02.fields._list._0_4_ = fVar17;
      __this_02.fields._node._0_4_ = uVar22;
      __this_02.fields._node._4_4_ = uVar23;
      __this_02.fields._version = uVar24;
      __this_02.fields._20_4_ = uVar21;
      __this_02.fields._current._0_4_ = uVar25;
      __this_02.fields._current._4_4_ = uVar26;
      __this_02.fields._index = iVar10;
      __this_02.fields._36_4_ = uVar27;
      System_Collections_Generic_LinkedList_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185D40 *)local_a8);
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)
                (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
      if (pSVar5 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
        System_Collections_Generic_LinkedList<object>__Clear(pSVar5,MethodInfo_Void_Clear);
        pSVar5 = *(System_Collections_Generic_LinkedList_T__o **)
                  (*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
        if (pSVar5 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
          System_Collections_Generic_LinkedList<object>__Clear(pSVar5,MethodInfo_Void_Clear);
          lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
          lVar6 = *(long *)(lVar12 + 0x40);
          if (lVar6 != 0) {
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            iVar4 = *(int *)(lVar6 + 0x18);
            *(undefined4 *)(lVar6 + 0x18) = 0;
            if (0 < iVar4) {
              System_Array__Clear(*(System_Array_o **)(lVar6 + 0x10),0,iVar4,(MethodInfo *)0x0);
              lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            }
            *(undefined8 *)(lVar12 + 0x20) = 0;
            *(undefined1 *)(lVar12 + 0x48) = 1;
            *(undefined1 *)(lVar12 + 0x60) = 1;
            *(System_String_o **)(lVar12 + 0x58) = "";
            il2cpp_runtime_glue(lVar12 + 0x58);
            goto LAB_0419a16f;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$DrawMessageWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawMessageWindow (const MethodInfo* method);
// 0x419a7a0

void ApplicationManagers_DebugConsole__DrawMessageWindow(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  uint uVar5;
  System_String_o *text;
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_GUISkin_o *__this;
  UnityEngine_GUIStyle_o *other;
  UnityEngine_GUIStyle_o *__this_00;
  System_String_o *__this_01;
  UnityEngine_GUIContent_o *pUVar9;
  System_String_array *pSVar10;
  ulong uVar11;
  Il2CppMethodPointer pIVar12;
  int iVar13;
  MethodInfo *pMVar14;
  ulong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Rect_o position;
  
  if (DAT_05704c45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_GUIContent);
    il2cpp_init_method_metadata(&TypeInfo_GUIStyle);
    il2cpp_init_method_metadata(&TypeInfo_GUI);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704c45 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar12 = TypeInfo_DebugConsole[2].virtualMethodPointer;
  fVar19 = *(float *)(pIVar12 + 0x6c);
  fVar1 = *(float *)(pIVar12 + 0x70);
  fVar2 = *(float *)(pIVar12 + 0x74);
  fVar3 = *(float *)(pIVar12 + 0x78);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = UnityEngine_GUI__get_skin((MethodInfo *)0x0);
  if (__this == (UnityEngine_GUISkin_o *)0x0) goto LAB_0419ac14;
  other = UnityEngine_GUISkin__get_textArea(__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GUIStyle_o *)il2cpp_runtime_glue(TypeInfo_GUIStyle);
  UnityEngine_GUIStyle___ctor(__this_00,other,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GUIStyle_o *)0x0) goto LAB_0419ac14;
  UnityEngine_GUIStyle__set_wordWrap
            (__this_00,(uint)(byte)TypeInfo_DebugConsole[2].virtualMethodPointer[0x9e],(MethodInfo *)0x0);
  UnityEngine_GUIStyle__set_richText(__this_00,1,(MethodInfo *)0x0);
  pIVar12 = TypeInfo_DebugConsole[2].virtualMethodPointer;
  if (pIVar12[0x38] == (Il2CppMethodPointer)0x0) {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pIVar12 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    }
    if (*(long *)(pIVar12 + 0x18) == 0) goto LAB_0419ac14;
    if (0 < *(int *)(*(long *)(pIVar12 + 0x18) + 0x18)) goto LAB_0419a8fc;
  }
  else {
LAB_0419a8fc:
    pMVar14 = TypeInfo_DebugConsole;
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_DebugConsole__ProcessMessageBuffer(pMVar14);
  }
  pMVar14 = TypeInfo_DebugConsole;
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_DebugConsole__UpdateFilteredMessages(pMVar14);
  __this_01 = ApplicationManagers_DebugConsole__GetDisplayText(pMVar14);
  iVar16 = (int)fVar2 + -0x28;
  if (TypeInfo_DebugConsole[2].virtualMethodPointer[0x9e] != (Il2CppMethodPointer)0x0) {
    pUVar9 = (UnityEngine_GUIContent_o *)il2cpp_runtime_glue(TypeInfo_GUIContent);
    UnityEngine_GUIContent___ctor(pUVar9,__this_01,(MethodInfo *)0x0);
LAB_0419aa66:
    fVar17 = (float)iVar16;
    fVar18 = UnityEngine_GUIStyle__CalcHeight(__this_00,pUVar9,fVar17,(MethodInfo *)0x0);
    position.fields.m_XMin = (float)((int)fVar19 + 10);
    position.fields.m_Width = (float)((int)fVar2 + -0x14);
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    UVar4 = *(UnityEngine_Vector2_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x28);
    fVar19 = (float)((int)fVar18 + 10);
    auVar8._4_4_ = fVar19;
    auVar8._0_4_ = fVar17;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position.fields.m_YMin = (float)((int)fVar1 + 0x50);
    position.fields.m_Height = (float)((int)fVar3 + -0x87);
    auVar7._4_4_ = fVar19;
    auVar7._0_4_ = fVar17;
    auVar7._8_8_ = 0;
    UVar4 = (UnityEngine_Vector2_Fields)
            UnityEngine_GUI__BeginScrollView
                      (position,(UnityEngine_Vector2_o)UVar4,(UnityEngine_Rect_o)(auVar7 << 0x40),
                       (MethodInfo *)0x0);
    *(UnityEngine_Vector2_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x28) = UVar4;
    auVar8._8_8_ = 0;
    UnityEngine_GUI__TextArea
              ((UnityEngine_Rect_o)(auVar8 << 0x40),__this_01,__this_00,(MethodInfo *)0x0);
    pIVar12 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    if (pIVar12[0x38] != (Il2CppMethodPointer)0x0) {
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_init_class();
        pIVar12 = TypeInfo_DebugConsole[2].virtualMethodPointer;
      }
      iVar16 = ((int)fVar18 + 10) - ((int)fVar3 + -0x87);
      if (iVar16 < 0) {
        iVar16 = 0;
      }
      pIVar12[0x38] = (code)0x0;
      *(undefined4 *)(pIVar12 + 0x28) = 0;
      *(float *)(pIVar12 + 0x2c) = (float)iVar16;
    }
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_GUI__EndScrollView((MethodInfo *)0x0);
    return;
  }
  if (__this_01 != (System_String_o *)0x0) {
    iVar13 = 10;
    pSVar10 = System_String__Split(__this_01,10,0,(MethodInfo *)0x0);
    if (pSVar10 != (System_String_array *)0x0) {
      if (0 < (int)pSVar10->max_length) {
        uVar11 = pSVar10->max_length & 0xffffffff;
        uVar15 = 0;
        fVar17 = 0.0;
        do {
          if (uVar11 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          text = pSVar10->m_Items[uVar15];
          pUVar9 = (UnityEngine_GUIContent_o *)il2cpp_runtime_glue(TypeInfo_GUIContent);
          UnityEngine_GUIContent___ctor(pUVar9,text,(MethodInfo *)0x0);
          UVar6 = UnityEngine_GUIStyle__CalcSize(__this_00,pUVar9,(MethodInfo *)0x0);
          fVar18 = UVar6.fields.x;
          if (UVar6.fields.x <= fVar17) {
            fVar18 = fVar17;
          }
          uVar15 = uVar15 + 1;
          uVar5 = (uint)pSVar10->max_length;
          uVar11 = (ulong)uVar5;
          fVar17 = fVar18;
        } while ((long)uVar15 < (long)(int)uVar5);
        iVar13 = (int)fVar18 + 10;
      }
      if (iVar16 < iVar13) {
        iVar16 = iVar13;
      }
      pUVar9 = (UnityEngine_GUIContent_o *)il2cpp_runtime_glue(TypeInfo_GUIContent);
      UnityEngine_GUIContent___ctor(pUVar9,__this_01,(MethodInfo *)0x0);
      goto LAB_0419aa66;
    }
  }
LAB_0419ac14:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$DrawInputWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawInputWindow (const MethodInfo* method);
// 0x419ac20

void ApplicationManagers_DebugConsole__DrawInputWindow(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  long lVar3;
  System_String_o *pSVar4;
  UnityEngine_Rect_o position;
  
  if (DAT_05704c46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_GUI);
    il2cpp_init_method_metadata(&"DebugInput");
    DAT_05704c46 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = *(float *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x70);
  fVar2 = *(float *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x78);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_GUI__SetNextControlName("DebugInput",(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  position.fields.m_XMin = (float)((int)*(float *)(lVar3 + 0x6c) + 10);
  position.fields.m_YMin = (float)((int)(fVar1 + fVar2) + -0x23);
  position.fields.m_Width = (float)((int)*(float *)(lVar3 + 0x74) + -0x14);
  position.fields.m_Height = 25.0;
  pSVar4 = UnityEngine_GUI__TextField
                     (position,*(System_String_o **)(lVar3 + 0x30),(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_String_o **)(lVar3 + 0x30) = pSVar4;
  il2cpp_runtime_glue(lVar3 + 0x30,pSVar4);
  return;
}


// ApplicationManagers.DebugConsole$$HandleInput
// il2cpp: void ApplicationManagers_DebugConsole__HandleInput (const MethodInfo* method);
// 0x419ad20

void ApplicationManagers_DebugConsole__HandleInput(MethodInfo *method)

{
  Il2CppObject *message;
  undefined8 uVar1;
  Il2CppMethodPointer pIVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  
  if (DAT_05704c47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_GUI);
    il2cpp_init_method_metadata(&"Invalid debug command.");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"DebugInput");
    DAT_05704c47 = '\x01';
  }
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
  bVar4 = System_String__op_Equality(pSVar5,"DebugInput",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      method_00 = TypeInfo_DebugConsole;
      il2cpp_init_class();
      bVar4 = ApplicationManagers_DebugConsole__IsEnterUp(method_00);
      cVar3 = (char)bVar4;
    }
    else {
      bVar4 = ApplicationManagers_DebugConsole__IsEnterUp(TypeInfo_DebugConsole);
      cVar3 = (char)bVar4;
    }
    if (cVar3 != '\0') {
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = System_String__op_Inequality
                        (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30),
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                        );
      if ((char)bVar4 != '\0') {
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        message = *(Il2CppObject **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
        if (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30) ==
            (System_String_o *)0x0) {
LAB_0419af87:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = System_String__StartsWith
                          (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30),
                           "/",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Debug__Log("Invalid debug command.",(MethodInfo *)0x0);
        }
        else {
          if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          if (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30) ==
              (System_String_o *)0x0) goto LAB_0419af87;
          pSVar5 = System_String__Substring
                             (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30),1,
                              (MethodInfo *)0x0);
          ApplicationManagers_DebugTesting__RunDebugCommand(pSVar5,(MethodInfo *)0x0);
        }
        uVar1 = **(undefined8 **)(DAT_057110b0 + 0xb8);
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        pIVar2 = TypeInfo_DebugConsole[2].virtualMethodPointer;
        *(undefined8 *)(pIVar2 + 0x30) = uVar1;
        il2cpp_runtime_glue(pIVar2 + 0x30);
      }
      pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_GUI__FocusControl(pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$IsEnterUp
// il2cpp: bool ApplicationManagers_DebugConsole__IsEnterUp (const MethodInfo* method);
// 0x419b040

bool_conflict ApplicationManagers_DebugConsole__IsEnterUp(MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Event_o *pUVar2;
  uint uVar3;
  
  pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Event_o *)0x0) {
    uVar3 = 0;
    iVar1 = UnityEngine_Event__get_type(pUVar2,(MethodInfo *)0x0);
    if (iVar1 == 5) {
      pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Event_o *)0x0) goto LAB_0419b09d;
      iVar1 = UnityEngine_Event__get_keyCode(pUVar2,(MethodInfo *)0x0);
      uVar3 = 1;
      if (iVar1 != 0xd) {
        pUVar2 = UnityEngine_Event__get_current((MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Event_o *)0x0) goto LAB_0419b09d;
        iVar1 = UnityEngine_Event__get_keyCode(pUVar2,(MethodInfo *)0x0);
        uVar3 = (uint)(iVar1 == 0x10f);
      }
    }
    return uVar3;
  }
LAB_0419b09d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.DebugConsole$$HandleWindowDraggingAndResizing
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing (const MethodInfo* method);
// 0x419b0b0

void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_Fields UVar5;
  bool bVar6;
  int32_t iVar7;
  UnityEngine_Event_o *pUVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (DAT_05704c48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    DAT_05704c48 = '\x01';
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto LAB_0419b0da;
LAB_0419b40e:
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c);
    lVar9 = TypeInfo_DebugConsole;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto LAB_0419b40e;
LAB_0419b0da:
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c);
    lVar9 = TypeInfo_DebugConsole;
  }
  TypeInfo_DebugConsole = lVar9;
  if (cVar1 != '\0') {
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
    UVar4 = UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = TypeInfo_DebugConsole;
    lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(float *)(lVar3 + 0x6c) = *(float *)(lVar3 + 0x80) + UVar4.fields.x;
    *(float *)(lVar3 + 0x70) = UVar4.fields.y + *(float *)(lVar3 + 0x84);
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7d);
  }
  else {
    cVar1 = *(char *)(*(long *)(lVar9 + 0xb8) + 0x7d);
  }
  if (cVar1 != '\0') {
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
    UVar4 = UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    fVar11 = (UVar4.fields.x - *(float *)(lVar9 + 0x90)) + *(float *)(lVar9 + 0x88);
    if (fVar11 <= 400.0) {
      fVar11 = 400.0;
    }
    fVar10 = (UVar4.fields.y - *(float *)(lVar9 + 0x94)) + *(float *)(lVar9 + 0x8c);
    if (fVar10 <= 300.0) {
      fVar10 = 300.0;
    }
    *(float *)(lVar9 + 0x74) = fVar11;
    *(float *)(lVar9 + 0x78) = fVar10;
  }
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
  iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
  if (iVar7 == 0) {
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
    iVar7 = UnityEngine_Event__get_button(pUVar8,(MethodInfo *)0x0);
    if (iVar7 != 0) goto LAB_0419b304;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
    UVar5 = (UnityEngine_Vector2_Fields)
            UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    fVar11 = UVar5.x;
    fVar10 = UVar5.y;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    fVar12 = *(float *)(lVar9 + 0x6c);
    if (((fVar11 < fVar12) || (*(float *)(lVar9 + 0x74) + fVar12 <= fVar11)) ||
       (fVar10 < *(float *)(lVar9 + 0x70))) {
      bVar6 = false;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto LAB_0419b2b2;
LAB_0419b49c:
      il2cpp_init_class();
      lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      fVar12 = *(float *)(lVar9 + 0x6c);
      if (bVar6) goto LAB_0419b2bb;
LAB_0419b4c1:
      fVar12 = fVar12 + *(float *)(lVar9 + 0x74) + -15.0;
      if (((fVar11 < fVar12) || (fVar12 + 15.0 <= fVar11)) ||
         ((fVar11 = *(float *)(lVar9 + 0x70) + *(float *)(lVar9 + 0x78) + -15.0, fVar10 < fVar11 ||
          (fVar11 + 15.0 <= fVar10)))) goto LAB_0419b304;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
        lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      }
      lVar3 = TypeInfo_DebugConsole;
      *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(lVar9 + 0x74);
      *(UnityEngine_Vector2_Fields *)(*(long *)(lVar3 + 0xb8) + 0x90) = UVar5;
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x7d) = 1;
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    }
    else {
      bVar6 = fVar10 < *(float *)(lVar9 + 0x70) + 70.0;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto LAB_0419b49c;
LAB_0419b2b2:
      if (!bVar6) goto LAB_0419b4c1;
LAB_0419b2bb:
      lVar3 = TypeInfo_DebugConsole;
      *(float *)(lVar9 + 0x80) = fVar12 - fVar11;
      *(float *)(lVar9 + 0x84) = *(float *)(lVar9 + 0x70) - fVar10;
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x7c) = 1;
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    }
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
    UnityEngine_Event__Use(pUVar8,(MethodInfo *)0x0);
  }
LAB_0419b304:
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Event_o *)0x0) {
LAB_0419b56f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
  if (iVar7 == 1) {
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto LAB_0419b56f;
    iVar7 = UnityEngine_Event__get_button(pUVar8,(MethodInfo *)0x0);
    if (iVar7 == 0) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      *(undefined2 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c) = 0;
      iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      goto joined_r0x0419b34f;
    }
  }
  iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
joined_r0x0419b34f:
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  fVar11 = *(float *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x6c);
  iVar7 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  fVar10 = (float)iVar7 - *(float *)(lVar9 + 0x74);
  if (fVar11 <= fVar10) {
    fVar10 = fVar11;
  }
  *(uint *)(lVar9 + 0x6c) = -(uint)(0.0 <= fVar11) & (uint)fVar10;
  fVar11 = *(float *)(lVar9 + 0x70);
  iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar10 = (float)iVar7 - *(float *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x78);
  if (fVar11 <= fVar10) {
    fVar10 = fVar11;
  }
  *(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x70) = -(uint)(0.0 <= fVar11) & (uint)fVar10;
  return;
}


// ApplicationManagers.DebugConsole$$DrawResizeHandle
// il2cpp: void ApplicationManagers_DebugConsole__DrawResizeHandle (const MethodInfo* method);
// 0x419af90

void ApplicationManagers_DebugConsole__DrawResizeHandle(MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Rect_o position;
  
  if (DAT_05704c49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_GUI);
    il2cpp_init_method_metadata(&"\x22f0");
    DAT_05704c49 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x6c);
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x74);
  position.fields.m_XMin = (float)uVar2 + (float)uVar1 + -15.0;
  position.fields.m_YMin = (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar1 >> 0x20) + -15.0;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_init_class();
  }
  position.fields.m_Width = 15.0;
  position.fields.m_Height = 15.0;
  UnityEngine_GUI__Box(position,"\x22f0",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.ctor
// il2cpp: void ApplicationManagers_DebugConsole___ctor (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x419b580

void ApplicationManagers_DebugConsole___ctor
               (ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole___cctor (const MethodInfo* method);
// 0x419b590

void ApplicationManagers_DebugConsole___cctor(MethodInfo *method)

{
  System_Collections_Generic_LinkedList_T__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Text_StringBuilder_o *__this_00;
  long lVar3;
  
  if (DAT_05704c4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_LinkedList_1_ApplicationManagers_DebugConsole_Lo);
    il2cpp_init_method_metadata(&TypeInfo_LinkedList_LogMessage);
    il2cpp_init_method_metadata(&MethodInfo_List_1_ApplicationManagers_DebugConsole_LogMessa);
    il2cpp_init_method_metadata(&TypeInfo_List_LogMessage);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"");
    DAT_05704c4a = '\x01';
  }
  pSVar1 = (System_Collections_Generic_LinkedList_T__o *)il2cpp_runtime_glue(TypeInfo_LinkedList_LogMessage);
  System_Collections_Generic_LinkedList<object>___ctor(pSVar1,MethodInfo_LinkedList_1_ApplicationManagers_DebugConsole_Lo);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Collections_Generic_LinkedList_T__o **)(lVar3 + 0x10) = pSVar1;
  il2cpp_runtime_glue(lVar3 + 0x10,pSVar1);
  pSVar1 = (System_Collections_Generic_LinkedList_T__o *)il2cpp_runtime_glue(TypeInfo_LinkedList_LogMessage);
  System_Collections_Generic_LinkedList<object>___ctor(pSVar1,MethodInfo_LinkedList_1_ApplicationManagers_DebugConsole_Lo);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Collections_Generic_LinkedList_T__o **)(lVar3 + 0x18) = pSVar1;
  il2cpp_runtime_glue(lVar3 + 0x18,pSVar1);
  lVar2 = TypeInfo_DebugConsole;
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
    lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    lVar2 = TypeInfo_DebugConsole;
  }
  *(undefined8 *)(lVar3 + 0x28) = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  lVar3 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar3 + 0x30) = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(lVar3 + 0x30);
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_LogMessage);
  System_Collections_Generic_List<object>___ctor(__this,0x400,MethodInfo_List_1_ApplicationManagers_DebugConsole_LogMessa);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar3 + 0x40) = __this;
  il2cpp_runtime_glue(lVar3 + 0x40,__this);
  *(undefined1 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x48) = 1;
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,0x2000,(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Text_StringBuilder_o **)(lVar3 + 0x50) = __this_00;
  il2cpp_runtime_glue(lVar3 + 0x50,__this_00);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(undefined8 *)(lVar3 + 0x58) = "";
  il2cpp_runtime_glue(lVar3 + 0x58);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(undefined1 *)(lVar3 + 0x60) = 1;
  *(undefined4 *)(lVar3 + 100) = 0;
  *(undefined1 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x6c) = 0x41a0000041a00000;
  *(undefined8 *)(lVar3 + 0x74) = 0x43c8000044160000;
  *(undefined2 *)(lVar3 + 0x7c) = 0;
  *(undefined2 *)(lVar3 + 0x9c) = 0x100;
  *(undefined1 *)(lVar3 + 0x9e) = 1;
  return;
}


