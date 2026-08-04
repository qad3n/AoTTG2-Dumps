// Type: ApplicationManagers.DebugConsole
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/DebugConsole.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugConsole.cs
// --------------------------------

// ApplicationManagers.DebugConsole.LogMessage$$Initialize
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Initialize (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x44b4970

void ApplicationManagers_DebugConsole_LogMessage__Initialize
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,int32_t type,
               System_String_o *stackTrace,bool_conflict isCustomLogic,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (g_data_057aea2a == '\0') {
    il2cpp_runtime_helper_023445d0(&"<color=red>\xe2\x9c\x96</color> ");
    il2cpp_runtime_helper_023445d0(&"<color=yellow>\xe2\x9a\xa0</color> ");
    il2cpp_runtime_helper_023445d0(&"<color=orange>!</color> ");
    il2cpp_runtime_helper_023445d0(&"<color=red>\xe2\x9b\x94</color> ");
    il2cpp_runtime_helper_023445d0(&"<color=white>\xe2\x84\xb9</color> ");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea2a = '\x01';
    if (message != (System_String_o *)0x0) goto label_044b499d;
label_044b4a98:
    message = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (__this != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) goto label_044b49a6;
label_044b4ab9:
    il2cpp_runtime_helper_022b2c90();
switchD_044b4a32_caseD_4:
    puVar1 = &"<color=red>\xe2\x9b\x94</color> ";
  }
  else {
    if (message == (System_String_o *)0x0) goto label_044b4a98;
label_044b499d:
    if (__this == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) goto label_044b4ab9;
label_044b49a6:
    (__this->fields).Message = message;
    il2cpp_runtime_helper_022b4080(&__this->fields,message);
    if (stackTrace == (System_String_o *)0x0) {
      stackTrace = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (__this->fields).StackTrace = stackTrace;
    il2cpp_runtime_helper_022b4080(&(__this->fields).StackTrace,stackTrace);
    (__this->fields).Type = type;
    *(char *)&(__this->fields).IsCustomLogic = (char)isCustomLogic;
    (__this->fields).Count = 1;
    (__this->fields)._cachedFormatted = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedFormatted,0);
    *(undefined1 *)&(__this->fields)._lastShowStackTraces = 0;
    (__this->fields)._lastCount = 0;
    puVar1 = &"<color=red>\xe2\x9c\x96</color> ";
    switch(type) {
    case 0:
      break;
    case 1:
      puVar1 = &"<color=orange>!</color> ";
      break;
    case 2:
      puVar1 = &"<color=yellow>\xe2\x9a\xa0</color> ";
      break;
    case 3:
      puVar1 = &"<color=white>\xe2\x84\xb9</color> ";
      break;
    case 4:
      goto switchD_044b4a32_caseD_4;
    default:
      puVar1 = &"";
    }
  }
  (__this->fields).Prefix = (System_String_o *)*puVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Prefix);
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$Reset
// il2cpp: void ApplicationManagers_DebugConsole_LogMessage__Reset (ApplicationManagers_DebugConsole_LogMessage_o* __this, const MethodInfo* method);
// 0x44b4b00

void ApplicationManagers_DebugConsole_LogMessage__Reset
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  (__this->fields).Message = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&__this->fields,0);
  (__this->fields).StackTrace = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields).StackTrace,0);
  (__this->fields).Prefix = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Prefix,0);
  (__this->fields)._cachedFormatted = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cachedFormatted,0);
  (__this->fields).Count = 1;
  return;
}


// ApplicationManagers.DebugConsole.LogMessage$$GetFormattedMessage
// il2cpp: System_String_o* ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage (ApplicationManagers_DebugConsole_LogMessage_o* __this, bool showStackTraces, const MethodInfo* method);
// 0x44b4b60

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
  if (g_data_057aea2b == '\0') {
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&" (x{0})");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea2b = '\x01';
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
      arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4,method);
      pSVar4 = System_String__Format(" (x{0})",arg0,(MethodInfo *)0x0);
    }
    ppSVar1 = &(__this->fields)._cachedFormatted;
    pSVar4 = System_String__Concat_3af7150
                       ((__this->fields).Prefix,(__this->fields).Message,pSVar4,(MethodInfo *)0x0);
    if (((char)showStackTraces != '\0') &&
       (bVar3 = System_String__IsNullOrEmpty((__this->fields).StackTrace,(MethodInfo *)0x0),
       (char)bVar3 == '\0')) {
      pSVar4 = System_String__Concat_3af7150
                         (pSVar4,"\n",(__this->fields).StackTrace,(MethodInfo *)0x0);
    }
    *ppSVar1 = pSVar4;
    il2cpp_runtime_helper_022b4080(ppSVar1,pSVar4);
    pSVar4 = *ppSVar1;
  }
  return pSVar4;
}


// ApplicationManagers.DebugConsole.LogMessage$$IsDuplicateOf
// il2cpp: bool ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf (ApplicationManagers_DebugConsole_LogMessage_o* __this, System_String_o* message, int32_t type, bool isCustomLogic, System_String_o* stackTrace, const MethodInfo* method);
// 0x44b4c70

bool_conflict
ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
          (ApplicationManagers_DebugConsole_LogMessage_o *__this,System_String_o *message,int32_t type,
          bool_conflict isCustomLogic,System_String_o *stackTrace,MethodInfo *method)

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
// 0x44b4cd0

void ApplicationManagers_DebugConsole_LogMessage___ctor
               (ApplicationManagers_DebugConsole_LogMessage_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool___cctor (const MethodInfo* method);
// 0x44b4ce0

void ApplicationManagers_DebugConsole_LogMessagePool___cctor(MethodInfo *method)

{
  System_Collections_Generic_Stack_object__o *pSVar1;
  System_String_o *__this;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_01;
  Il2CppObject *pIVar2;
  Events_OnLoadScene_o *value;
  uint uVar3;
  undefined8 in_RCX;
  System_String_o *stackTrace;
  int iVar4;
  int32_t type;
  System_String_o *message;
  ApplicationManagers_DebugConsole_LogMessage_o *item;
  MethodInfo *in_R9;
  
  if (g_data_057aea2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_LogMessage);
    g_data_057aea2c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_LogMessage);
  iVar4 = 0x200;
  System_Collections_Generic_Stack_object____ctor_3a0ee10(pSVar1,0x200,MethodInfo_Stack_1_ApplicationManagers_DebugConsole_LogMessage);
  **(undefined8 **)&TypeInfo_LogMessagePool[2].fields.Type = pSVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)&TypeInfo_LogMessagePool[2].fields.Type);
  while( true ) {
    pSVar1 = (System_Collections_Generic_Stack_object__o *)**(undefined8 **)&TypeInfo_LogMessagePool[2].fields.Type;
    __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LogMessage);
    type = 0;
    message = __this;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    uVar3 = (uint)in_RCX;
    if (pSVar1 == (System_Collections_Generic_Stack_object__o *)0x0) break;
    System_Collections_Generic_Stack_object___Push(pSVar1,(Il2CppObject *)__this,MethodInfo_Void_Push);
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea2d = '\x01';
    if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) == 0) goto label_044b4ed6;
label_044b4e24:
    __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
    item = TypeInfo_LogMessagePool;
  }
  else {
    if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) != 0) goto label_044b4e24;
label_044b4ed6:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
    item = TypeInfo_LogMessagePool;
  }
  TypeInfo_LogMessagePool = item;
  if (__this_00 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    if ((__this_00->fields).Type < 1) {
      __this_01 = (ApplicationManagers_DebugConsole_LogMessage_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LogMessage);
      item = __this_01;
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)((long)&item[2].fields._cachedFormatted + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
        if (__this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) goto label_044b4f35;
      }
      __this_01 = (ApplicationManagers_DebugConsole_LogMessage_o *)
                  System_Collections_Generic_Stack_object___Pop
                            ((System_Collections_Generic_Stack_object__o *)__this_00,MethodInfo_DebugConsole_LogMessage_Pop);
      item = __this_00;
    }
    if (__this_01 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
      ApplicationManagers_DebugConsole_LogMessage__Initialize
                (__this_01,message,type,stackTrace,uVar3 & 0xff,in_R9);
      return;
    }
  }
label_044b4f35:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea2e = '\x01';
  }
  if (item != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    (item->fields).Message = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&item->fields,0);
    (item->fields).StackTrace = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(item->fields).StackTrace,0);
    (item->fields).Prefix = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(item->fields).Prefix,0);
    (item->fields)._cachedFormatted = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(item->fields)._cachedFormatted,0);
    (item->fields).Count = 1;
    if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = (System_Collections_Generic_Stack_object__o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
    if (pSVar1 == (System_Collections_Generic_Stack_object__o *)0x0) {
label_044b504e:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea2f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
        g_data_057aea2f = '\x01';
      }
      pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugTesting + 0xb8),MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
      **(undefined8 **)(TypeInfo_DebugTesting + 0xb8) = pIVar2;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DebugTesting + 0xb8));
      value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
      Events_OnLoadScene___ctor();
      Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
      return;
    }
    if ((pSVar1->fields)._size < 0x200) {
      if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar1 = (System_Collections_Generic_Stack_object__o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
        if (pSVar1 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_044b504e;
      }
      System_Collections_Generic_Stack_object___Push(pSVar1,(Il2CppObject *)item,MethodInfo_Void_Push);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Get
// il2cpp: ApplicationManagers_DebugConsole_LogMessage_o* ApplicationManagers_DebugConsole_LogMessagePool__Get (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x44b4df0

ApplicationManagers_DebugConsole_LogMessage_o *
ApplicationManagers_DebugConsole_LogMessagePool__Get
          (System_String_o *message,int32_t type,System_String_o *stackTrace,bool_conflict isCustomLogic,
          MethodInfo *method)

{
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  ApplicationManagers_DebugConsole_LogMessage_o *pAVar1;
  ApplicationManagers_DebugConsole_LogMessage_o *extraout_RAX;
  Il2CppObject *pIVar2;
  Events_OnLoadScene_o *value;
  ApplicationManagers_DebugConsole_LogMessage_o *extraout_RAX_00;
  ApplicationManagers_DebugConsole_LogMessage_o *item;
  MethodInfo *in_R9;
  
  if (g_data_057aea2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_Pop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea2d = '\x01';
    if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) == 0) goto label_044b4ed6;
label_044b4e24:
    pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
    item = TypeInfo_LogMessagePool;
  }
  else {
    if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) != 0) goto label_044b4e24;
label_044b4ed6:
    il2cpp_runtime_helper_02337ed0();
    pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
    item = TypeInfo_LogMessagePool;
  }
  TypeInfo_LogMessagePool = item;
  if (pAVar1 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    if ((pAVar1->fields).Type < 1) {
      __this = (ApplicationManagers_DebugConsole_LogMessage_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LogMessage);
      item = __this;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)((long)&item[2].fields._cachedFormatted + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
        if (pAVar1 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) goto label_044b4f35;
      }
      __this = (ApplicationManagers_DebugConsole_LogMessage_o *)
               System_Collections_Generic_Stack_object___Pop
                         ((System_Collections_Generic_Stack_object__o *)pAVar1,MethodInfo_DebugConsole_LogMessage_Pop);
      item = pAVar1;
    }
    if (__this != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
      ApplicationManagers_DebugConsole_LogMessage__Initialize
                (__this,message,type,stackTrace,isCustomLogic & 0xff,in_R9);
      return __this;
    }
  }
label_044b4f35:
  pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea2e = '\x01';
  }
  if (item != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    (item->fields).Message = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&item->fields,0);
    (item->fields).StackTrace = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(item->fields).StackTrace,0);
    (item->fields).Prefix = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(item->fields).Prefix,0);
    (item->fields)._cachedFormatted = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(item->fields)._cachedFormatted,0);
    (item->fields).Count = 1;
    if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
    if (pAVar1 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
label_044b504e:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea2f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
        g_data_057aea2f = '\x01';
      }
      pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugTesting + 0xb8),MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
      **(undefined8 **)(TypeInfo_DebugTesting + 0xb8) = pIVar2;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DebugTesting + 0xb8));
      value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
      Events_OnLoadScene___ctor();
      Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    if ((pAVar1->fields).Type < 0x200) {
      if (*(int *)((long)&TypeInfo_LogMessagePool[2].fields._cachedFormatted + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pAVar1 = (ApplicationManagers_DebugConsole_LogMessage_o *)**(long **)&TypeInfo_LogMessagePool[2].fields.Type;
        if (pAVar1 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) goto label_044b504e;
      }
      System_Collections_Generic_Stack_object___Push
                ((System_Collections_Generic_Stack_object__o *)pAVar1,(Il2CppObject *)item,MethodInfo_Void_Push);
      return extraout_RAX;
    }
  }
  return pAVar1;
}


// ApplicationManagers.DebugConsole.LogMessagePool$$Return
// il2cpp: void ApplicationManagers_DebugConsole_LogMessagePool__Return (ApplicationManagers_DebugConsole_LogMessage_o* logMessage, const MethodInfo* method);
// 0x44b4f40

void ApplicationManagers_DebugConsole_LogMessagePool__Return
               (ApplicationManagers_DebugConsole_LogMessage_o *logMessage,MethodInfo *method)

{
  System_Collections_Generic_Stack_object__o *__this;
  Il2CppObject *pIVar1;
  Events_OnLoadScene_o *value;
  
  if (g_data_057aea2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea2e = '\x01';
  }
  if (logMessage != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
    (logMessage->fields).Message = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&logMessage->fields,0);
    (logMessage->fields).StackTrace = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(logMessage->fields).StackTrace,0);
    (logMessage->fields).Prefix = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(logMessage->fields).Prefix,0);
    (logMessage->fields)._cachedFormatted = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(logMessage->fields)._cachedFormatted,0);
    (logMessage->fields).Count = 1;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
    if (__this == (System_Collections_Generic_Stack_object__o *)0x0) {
label_044b504e:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aea2f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
        g_data_057aea2f = '\x01';
      }
      pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                         ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugTesting + 0xb8),MethodInfo_DebugTesting_CreateSingleton_DebugTesting);
      **(undefined8 **)(TypeInfo_DebugTesting + 0xb8) = pIVar1;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DebugTesting + 0xb8));
      value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
      Events_OnLoadScene___ctor();
      Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
      return;
    }
    if ((__this->fields)._size < 0x200) {
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this = (System_Collections_Generic_Stack_object__o *)**(long **)(TypeInfo_LogMessagePool + 0xb8);
        if (__this == (System_Collections_Generic_Stack_object__o *)0x0) goto label_044b504e;
      }
      System_Collections_Generic_Stack_object___Push(__this,(Il2CppObject *)logMessage,MethodInfo_Void_Push);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$Init
// il2cpp: void ApplicationManagers_DebugConsole__Init (const MethodInfo* method);
// 0x44ac6a0

void ApplicationManagers_DebugConsole__Init(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Application_LogCallback_o *value;
  int iVar4;
  
  if (g_data_057aea05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnUnityDebugLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_CreateSingleton_DebugConsole);
    g_data_057aea05 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_DebugConsole + 0xb8),MethodInfo_DebugConsole_CreateSingleton_DebugConsole);
  **(undefined8 **)(TypeInfo_DebugConsole + 0xb8) = pIVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_DebugConsole + 0xb8));
  value = (UnityEngine_Application_LogCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LogCallback);
  UnityEngine_Application_LogCallback___ctor();
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Application__add_logMessageReceived(value,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Debug__get_isDebugBuild((MethodInfo *)0x0);
  iVar4 = (uint)(byte)((byte)bVar2 ^ 1) << 2;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(int *)(lVar1 + 0x98) = iVar4;
  *(int *)(lVar1 + 0x4c) = iVar4;
  return;
}


// ApplicationManagers.DebugConsole$$Log
// il2cpp: void ApplicationManagers_DebugConsole__Log (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x44b1060

void ApplicationManagers_DebugConsole__Log
               (System_String_o *message,bool_conflict showInChat,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  byte bVar3;
  Photon_Pun_PhotonView_o *__this;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  undefined8 uVar7;
  UnityEngine_Vector2_o UVar8;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  char cVar9;
  undefined4 extraout_EAX;
  bool_conflict bVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  int iVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *pMVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  float extraout_var;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_RectTransform_o *pUVar19;
  UnityEngine_Object_o *obj;
  MethodInfo **ppMVar20;
  System_String_o *pSVar21;
  UnityEngine_Transform_o *pUVar22;
  undefined8 uVar23;
  System_Collections_Generic_Dictionary_int__object__o *pSVar24;
  System_Object_array *pSVar25;
  System_String_o *pSVar26;
  Il2CppObject *pIVar27;
  System_String_o *pSVar28;
  System_String_o *pSVar29;
  System_Text_StringBuilder_o *pSVar30;
  MethodInfo *pMVar31;
  UI_ChatPanel_o *__this_02;
  Il2CppClass *pIVar32;
  Il2CppObject *pIVar33;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar34;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar35;
  undefined4 extraout_var_00;
  System_String_array *pSVar36;
  char *pcVar37;
  System_String_array *pSVar38;
  System_String_array *pSVar39;
  System_String_array *parameters;
  long lVar40;
  long lVar41;
  GameManagers_ChatManager___c__DisplayClass93_0_o *__this_03;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar42;
  System_Collections_Generic_List_TSource__o *__this_04;
  Photon_Realtime_Player_o *pPVar43;
  MethodInfo_37E4C90 *method_00;
  System_String_o **ppSVar44;
  MethodInfo_362BED0 **method_01;
  int32_t color;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  int iVar45;
  System_String_array **ppSVar46;
  System_String_array **ppSVar47;
  uint uVar48;
  ulong unaff_RBP;
  ulong uVar49;
  System_DateTime_Fields SVar50;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_05;
  System_Collections_Generic_List_GameObject__o *pSVar51;
  long *plVar52;
  Photon_Realtime_Player_o *player;
  System_String_o **message_00;
  System_Collections_Generic_List_int__o *__this_06;
  undefined8 in_R8;
  int32_t iVar53;
  undefined8 in_R9;
  Il2CppClass **ppIVar54;
  Il2CppClass **ppIVar55;
  MethodInfo **ppMVar56;
  System_DateTime_Fields unaff_R13;
  MethodInfo **__this_07;
  System_String_o **ppSVar57;
  UnityEngine_Color_o UVar58;
  System_Nullable_DateTime__o timestamp;
  System_Nullable_DateTime__o __this_08;
  MethodInfo *in_stack_fffffffffffffcf8;
  MethodInfo *in_stack_fffffffffffffd40;
  int32_t iStack_2a8;
  int32_t iStack_2a4;
  undefined8 uStack_2a0;
  System_String_o *pSStack_298;
  System_String_o *apSStack_290 [2];
  System_DateTime_o SStack_280;
  Photon_Realtime_Player_o *pPStack_278;
  System_DateTime_o *pSStack_270;
  System_String_array *pSStack_268;
  Photon_Realtime_Player_o *pPStack_260;
  System_String_o *pSStack_258;
  ulong uStack_250;
  MethodInfo *in_stack_fffffffffffffdb8;
  MethodInfo *in_stack_fffffffffffffde0;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  System_DateTime_o SStack_208;
  Photon_Realtime_Player_o *pPStack_200;
  System_DateTime_Fields SStack_1f8;
  System_String_array *pSStack_1f0;
  System_Object_array *pSStack_1e8;
  System_String_array *pSStack_1e0;
  Photon_Pun_PhotonView_o *pPStack_1d8;
  System_String_o *pSStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_1b8;
  System_String_array *pSStack_1b0;
  System_String_array *pSStack_1a8;
  MethodInfo *in_stack_fffffffffffffe80;
  System_String_o *pSStack_170;
  MethodInfo *pMStack_168;
  Il2CppClass *pIStack_160;
  Il2CppClass *pIStack_158;
  MethodInfo *pMStack_150;
  int32_t iStack_13c;
  System_String_array *pSStack_138;
  Il2CppMethodPointer pIStack_130;
  System_String_o *pSStack_128;
  System_String_o *pSStack_120;
  Il2CppClass *pIStack_118;
  System_String_o *pSStack_110;
  Il2CppType **ppIStack_108;
  undefined1 auStack_100 [16];
  Il2CppClass *pIStack_f0;
  System_String_o *pSStack_e8;
  Il2CppClass *pIStack_e0;
  System_String_o *pSStack_d8;
  Il2CppType **ppIStack_d0;
  Il2CppClass *pIStack_c8;
  MethodInfo *pMStack_c0;
  Il2CppClass **ppIStack_b8;
  uint64_t uStack_b0;
  MethodInfo **ppMStack_a8;
  System_String_o **ppSStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  uint uVar59;
  ulong uStack_88;
  int32_t iStack_84;
  MethodInfo *in_stack_ffffffffffffff98;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (g_data_057aea06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057aea06 = '\x01';
  }
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  if ((char)showInChat != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    else {
      bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    if (cVar9 != '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aef79 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
        g_data_057aef79 = '\x01';
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      else {
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      if (iVar14 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar15 = *(System_Collections_Generic_List_object__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28)
        ;
      }
      else {
        pSVar15 = *(System_Collections_Generic_List_object__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28)
        ;
      }
      if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_0454d5f4;
      if ((pSVar15->fields)._size < 1) goto label_0454d5f9;
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar15 = *(System_Collections_Generic_List_object__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28)
        ;
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_0454d5f4;
      }
      pSVar29 = (System_String_o *)
                System_Collections_Generic_List_object___get_Item
                          (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_String_get_Item);
      if (pSVar29 == (System_String_o *)0x0) goto label_0454d5f4;
      bVar10 = 0;
      cVar9 = '\0';
      bVar11 = System_String__Contains
                         (pSVar29,*(System_String_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x78),
                          (MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      else {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = System_String__op_Equality
                           (*(System_String_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x78),message,
                            (MethodInfo *)0x0);
        cVar9 = (char)bVar10;
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      if (iVar14 == 0) goto label_0454d648;
label_0454d4a2:
      pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
      cVar9 = (char)bVar10;
      do {
        if (cVar9 == '\0') {
          *(System_String_o **)(pIVar5 + 0x78) = message;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x78,message);
          *(undefined4 *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x80) = 0;
          GameManagers_ChatManager__AddLine
                    (message,4,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_stack_ffffffffffffffd8
                    );
          return;
        }
        *(int *)(pIVar5 + 0x80) = *(int *)(pIVar5 + 0x80) + 1;
        if (*(System_Text_StringBuilder_o **)(pIVar5 + 0x90) != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Clear(*(System_Text_StringBuilder_o **)(pIVar5 + 0x90),(MethodInfo *)0x0)
          ;
          if (((*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x90) !=
                (System_Text_StringBuilder_o *)0x0) &&
              (pSVar30 = System_Text_StringBuilder__Append_3b03f90
                                   (*(System_Text_StringBuilder_o **)
                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x90),message,(MethodInfo *)0x0),
              pSVar30 != (System_Text_StringBuilder_o *)0x0)) &&
             (pSVar30 = System_Text_StringBuilder__Append_3b048f0(pSVar30,0x28,(MethodInfo *)0x0),
             pSVar30 != (System_Text_StringBuilder_o *)0x0)) {
            ppSVar44 = (System_String_o **)TypeInfo_ChatManager[2].virtualMethodPointer;
            pSVar30 = System_Text_StringBuilder__Append_3b04980
                                (pSVar30,*(int32_t *)&(((Il2CppClass *)ppSVar44)->_1).fields,(MethodInfo *)0x0
                                );
            if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0(pSVar30,0x29,(MethodInfo *)0x0);
              iVar53 = (int32_t)in_R9;
              uVar13 = (uint)in_R8;
              plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x90);
              if (plVar52 != (long *)0x0) {
                pSVar29 = (System_String_o *)
                          (**(code **)(*plVar52 + 0x168))(plVar52,*(undefined8 *)(*plVar52 + 0x170));
                pSVar29 = GameManagers_ChatManager__GetColorString(pSVar29,4,0,(MethodInfo *)ppSVar44);
                SVar50._dateData = (uint64_t)&g_data_00000004;
                ppIVar54 = (Il2CppClass **)0x1;
                if (g_data_057aef7a == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057aef7a = '\x01';
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454da01;
label_0454d6fb:
                  lVar40 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                }
                else {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454d6fb;
label_0454da01:
                  il2cpp_runtime_helper_02337ed0();
                  lVar40 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                }
                message_00 = (System_String_o **)TypeInfo_ChatManager;
                ppIVar55 = (Il2CppClass **)0x1;
                if (lVar40 != 0) {
                  if (*(int *)(lVar40 + 0x18) < 1) {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uStack_88 = 0;
                    uStack_90 = 0x454da5c;
                    GameManagers_ChatManager__AddLine
                              (pSVar29,4,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                               in_stack_ffffffffffffff98);
                    return;
                  }
                  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  unaff_R13._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  message_00 = (System_String_o **)TypeInfo_ChatManager;
                  ppIVar55 = (Il2CppClass **)0x1;
                  if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) != 0) {
                    uVar48 = *(uint *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) + 0x18);
                    unaff_RBP = (ulong)uVar48;
                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar29 = Anticheat_ChatFilter__FilterSizeTag(pSVar29,(MethodInfo *)0x0);
                    SVar50._dateData = 0;
                    pMVar31 = (MethodInfo *)Anticheat_ChatFilter__FilterBadWords(pSVar29,(MethodInfo *)0x0);
                    message_00 = (System_String_o **)0x0;
                    if (*(System_Collections_Generic_List_object__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) !=
                        (System_Collections_Generic_List_object__o *)0x0) {
                      uVar48 = uVar48 - 1;
                      unaff_RBP = (ulong)uVar48;
                      SVar50._dateData = (uint64_t)uVar48;
                      ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                      System_Collections_Generic_List_object___set_Item
                                (*(System_Collections_Generic_List_object__o **)
                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),uVar48,(Il2CppObject *)pMVar31
                                 ,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
                      message_00 = (System_String_o **)0x0;
                      ppIVar55 = ppIVar54;
                      if (*(System_Collections_Generic_List_T__o **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38) !=
                          (System_Collections_Generic_List_T__o *)0x0) {
                        SVar50._dateData = (uint64_t)uVar48;
                        ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                        System_Collections_Generic_List_Int32Enum___set_Item
                                  (*(System_Collections_Generic_List_T__o **)
                                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),uVar48,4,
                                   (MethodInfo_3600D10 *)MethodInfo_Void_set_Item);
                        message_00 = (System_String_o **)0x0;
                        if (*(System_Collections_Generic_List_bool__o **)
                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) !=
                            (System_Collections_Generic_List_bool__o *)0x0) {
                          SVar50._dateData = (uint64_t)uVar48;
                          ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                          System_Collections_Generic_List_bool___set_Item
                                    (*(System_Collections_Generic_List_bool__o **)
                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),uVar48,1,
                                     (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                          message_00 = (System_String_o **)0x0;
                          if (*(System_Collections_Generic_List_DateTime__o **)
                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                              (System_Collections_Generic_List_DateTime__o *)0x0) {
                            SVar50._dateData = (uint64_t)uVar48;
                            ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                            System_Collections_Generic_List_DateTime___set_Item
                                      (*(System_Collections_Generic_List_DateTime__o **)
                                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),uVar48,
                                       (System_DateTime_o)unaff_R13._dateData,
                                       (MethodInfo_358EB60 *)MethodInfo_Void_set_Item);
                            message_00 = (System_String_o **)0x0;
                            if (*(System_Collections_Generic_List_int__o **)
                                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) !=
                                (System_Collections_Generic_List_int__o *)0x0) {
                              ppIVar55 = &MethodInfo_Void_set_Item;
                              SVar50._dateData = (uint64_t)uVar48;
                              ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                              System_Collections_Generic_List_int___set_Item
                                        (*(System_Collections_Generic_List_int__o **)
                                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),uVar48,-1,
                                         (MethodInfo_35FDD20 *)MethodInfo_Void_set_Item);
                              message_00 = (System_String_o **)0x0;
                              if (*(System_Collections_Generic_List_bool__o **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                                  (System_Collections_Generic_List_bool__o *)0x0) {
                                SVar50._dateData = (uint64_t)uVar48;
                                ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                                System_Collections_Generic_List_bool___set_Item
                                          (*(System_Collections_Generic_List_bool__o **)
                                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),uVar48,0,
                                           (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                                message_00 = (System_String_o **)0x0;
                                if (*(System_Collections_Generic_List_bool__o **)
                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) !=
                                    (System_Collections_Generic_List_bool__o *)0x0) {
                                  SVar50._dateData = (uint64_t)uVar48;
                                  ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                                  System_Collections_Generic_List_bool___set_Item
                                            (*(System_Collections_Generic_List_bool__o **)
                                              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),uVar48,0,
                                             (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                                  message_00 = (System_String_o **)0x0;
                                  if (*(System_Collections_Generic_List_bool__o **)
                                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) !=
                                      (System_Collections_Generic_List_bool__o *)0x0) {
                                    SVar50._dateData = (uint64_t)uVar48;
                                    ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                                    System_Collections_Generic_List_bool___set_Item
                                              (*(System_Collections_Generic_List_bool__o **)
                                                (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),uVar48,0,
                                               (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                                    message_00 = (System_String_o **)0x0;
                                    if (*(System_Collections_Generic_List_int__o **)
                                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0xc0) !=
                                        (System_Collections_Generic_List_int__o *)0x0) {
                                      SVar50._dateData = (uint64_t)uVar48;
                                      System_Collections_Generic_List_int___set_Item
                                                (*(System_Collections_Generic_List_int__o **)
                                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0xc0),uVar48,-1,
                                                 (MethodInfo_35FDD20 *)MethodInfo_Void_set_Item);
                                      ppSVar44 = (System_String_o **)TypeInfo_ChatManager[2].virtualMethodPointer;
                                      pMVar16 = (MethodInfo *)(((Il2CppClass *)ppSVar44)->_2).typeHierarchy;
                                      message_00 = (System_String_o **)0x0;
                                      if (pMVar16 != (MethodInfo *)0x0) {
                                        if ((int)uVar48 < *(int *)&pMVar16->name) {
                                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                            il2cpp_runtime_helper_02337ed0(TypeInfo_ChatManager);
                                            pMVar16 = *(MethodInfo **)
                                                       (TypeInfo_ChatManager[2].virtualMethodPointer + 200);
                                            message_00 = (System_String_o **)0x0;
                                            if (pMVar16 == (MethodInfo *)0x0) goto label_0454db85;
                                          }
                                          System_Collections_Generic_List_ChatManager_ChatPlayerLineData___set_Item
                                                    ((System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o
                                                      *)pMVar16,uVar48,
                                                     (GameManagers_ChatManager_ChatPlayerLineData_o)ZEXT824(0)
                                                     ,MethodInfo_Void_set_Item);
                                        }
                                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                          pMVar16 = TypeInfo_ChatManager;
                                          il2cpp_runtime_helper_02337ed0();
                                          bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar16);
                                          cVar9 = (char)bVar10;
                                          pMVar16 = TypeInfo_ChatManager;
                                          message_00 = (System_String_o **)pMVar31;
                                        }
                                        else {
                                          bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar16);
                                          cVar9 = (char)bVar10;
                                          pMVar16 = TypeInfo_ChatManager;
                                          message_00 = (System_String_o **)pMVar31;
                                        }
                                        if (cVar9 == '\0') {
                                          TypeInfo_ChatManager = pMVar16;
                                          return;
                                        }
                                        TypeInfo_ChatManager = pMVar16;
                                        if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        __this_02 = GameManagers_ChatManager__GetChatPanel(pMVar16);
                                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        bVar10 = UnityEngine_Object__op_Inequality
                                                           ((UnityEngine_Object_o *)__this_02,
                                                            (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                        if ((char)bVar10 == '\0') {
                                          return;
                                        }
                                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        SVar50._dateData = unaff_R13._dateData;
                                        pSVar29 = GameManagers_ChatManager__GetFormattedMessage
                                                            ((System_String_o *)message_00,
                                                             (System_DateTime_o)unaff_R13._dateData,0,
                                                             (MethodInfo *)ppSVar44);
                                        if (__this_02 != (UI_ChatPanel_o *)0x0) {
                                          UI_ChatPanel__ReplaceLastLine(__this_02,pSVar29,(MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
label_0454db85:
                il2cpp_runtime_helper_022b2c90();
                ppIVar54 = (Il2CppClass **)(SVar50._dateData & 0xffffffff);
                if (g_data_057aef7d == '\0') {
                  uStack_98 = 0x454dbb5;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  uStack_98 = 0x454dbc1;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                  uStack_98 = 0x454dbcd;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                  uStack_98 = 0x454dbd9;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                  uStack_98 = 0x454dbe5;
                  il2cpp_runtime_helper_023445d0(&"] ");
                  message_00 = &"D2";
                  uStack_98 = 0x454dbf1;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aef7d = '\x01';
                }
                uStack_88 = (ulong)uVar59;
                lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                ppSVar57 = (System_String_o **)&g_data_00000004;
                if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x178), lVar40 != 0)) {
                  if ((*(char *)(lVar40 + 0x11) == '\0') || ((char)ppIVar54 != '\0')) {
                    return;
                  }
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    uStack_98 = 0x454dc61;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  message_00 = (System_String_o **)0x0;
                  if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98) !=
                      (System_Text_StringBuilder_o *)0x0) {
                    uStack_98 = 0x454dc82;
                    System_Text_StringBuilder__Clear
                              (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98),
                               (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                      uStack_98 = 0x454dc9a;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    SVar50._dateData = 0;
                    uStack_98 = 0x454dca6;
                    System_DateTime__ToLocalTime
                              ((System_DateTime_o)&stack0xffffffffffffff88,(MethodInfo *)0x0);
                    message_00 = (System_String_o **)0x0;
                    ppSVar57 = (System_String_o **)&g_data_00000004;
                    if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98) !=
                        (System_Text_StringBuilder_o *)0x0) {
                      uStack_98 = 0x454dcd1;
                      ppIVar54 = (Il2CppClass **)
                                 System_Text_StringBuilder__Append_3b048f0
                                           (*(System_Text_StringBuilder_o **)
                                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x98),0x5b,
                                            (MethodInfo *)0x0);
                      uStack_98 = 0x454dce0;
                      iVar12 = System_DateTime__get_Hour
                                         ((System_DateTime_o)&stack0xffffffffffffff80,(MethodInfo *)0x0);
                      uStack_88 = CONCAT44(iVar12,uVar59);
                      ppSVar57 = &"D2";
                      message_00 = (System_String_o **)&iStack_84;
                      uStack_98 = 0x454dcfa;
                      SVar50._dateData = (uint64_t)"D2";
                      pSVar29 = System_Int32__ToString_3cb43b0
                                          ((int32_t)message_00,"D2",(MethodInfo *)0x0);
                      if ((MethodInfo *)ppIVar54 != (MethodInfo *)0x0) {
                        uStack_98 = 0x454dd10;
                        message_00 = (System_String_o **)ppIVar54;
                        pSVar30 = System_Text_StringBuilder__Append_3b03f90
                                            ((System_Text_StringBuilder_o *)ppIVar54,pSVar29,(MethodInfo *)0x0
                                            );
                        SVar50._dateData = (uint64_t)pSVar29;
                        if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
                          uStack_98 = 0x454dd28;
                          ppIVar54 = (Il2CppClass **)
                                     System_Text_StringBuilder__Append_3b048f0(pSVar30,0x3a,(MethodInfo *)0x0)
                          ;
                          uStack_98 = 0x454dd37;
                          iVar12 = System_DateTime__get_Minute
                                             ((System_DateTime_o)&stack0xffffffffffffff80,(MethodInfo *)0x0);
                          uStack_88 = CONCAT44(iVar12,uVar59);
                          message_00 = (System_String_o **)&iStack_84;
                          uStack_98 = 0x454dd4a;
                          SVar50._dateData = (uint64_t)"D2";
                          pSVar29 = System_Int32__ToString_3cb43b0
                                              ((int32_t)message_00,"D2",(MethodInfo *)0x0);
                          if ((MethodInfo *)ppIVar54 != (MethodInfo *)0x0) {
                            uStack_98 = 0x454dd5c;
                            message_00 = (System_String_o **)ppIVar54;
                            pSVar30 = System_Text_StringBuilder__Append_3b03f90
                                                ((System_Text_StringBuilder_o *)ppIVar54,pSVar29,
                                                 (MethodInfo *)0x0);
                            SVar50._dateData = (uint64_t)pSVar29;
                            if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
                              ppSVar44 = &"] ";
                              uStack_98 = 0x454dd75;
                              SVar50._dateData = (uint64_t)"] ";
                              System_Text_StringBuilder__Append_3b03f90
                                        (pSVar30,"] ",(MethodInfo *)0x0);
                              plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98);
                              message_00 = (System_String_o **)0x0;
                              if (plVar52 != (long *)0x0) {
                                uStack_98 = 0x454dd9b;
                                pSVar29 = (System_String_o *)
                                          (**(code **)(*plVar52 + 0x168))
                                                    (plVar52,*(undefined8 *)(*plVar52 + 0x170));
                                uStack_98 = 0x454ddaa;
                                GameManagers_ChatManager__GetColorString(pSVar29,3,0,(MethodInfo *)ppSVar44);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uStack_98 = 0x454ddd3;
                il2cpp_runtime_helper_022b2c90();
                ppMStack_a8 = &TypeInfo_ChatManager;
                pUVar22 = (UnityEngine_Transform_o *)(SVar50._dateData & 0xffffffff);
                pMStack_c0 = (MethodInfo *)ppIVar54;
                ppIStack_b8 = ppIVar55;
                uStack_b0 = unaff_R13._dateData;
                ppSStack_a0 = ppSVar57;
                uStack_98 = unaff_RBP;
                if (g_data_057aef7c == '\0') {
                  pMStack_150 = (MethodInfo *)0x454de0f;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  pMStack_150 = (MethodInfo *)0x454de1b;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  pMStack_150 = (MethodInfo *)0x454de27;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  pMStack_150 = (MethodInfo *)0x454de33;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  pMStack_150 = (MethodInfo *)0x454de3f;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de4b;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_ChatManager_ChatPlayerLineData_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de57;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de63;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_DateTime_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de6f;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de7b;
                  il2cpp_runtime_helper_023445d0(&": ");
                  pMStack_150 = (MethodInfo *)0x454de87;
                  il2cpp_runtime_helper_023445d0(&"[{0}] ");
                  g_data_057aef7c = '\x01';
                }
                pIStack_118 = (Il2CppClass *)0x0;
                pSStack_110 = (System_String_o *)0x0;
                pSStack_128 = (System_String_o *)0x0;
                pSStack_120 = (System_String_o *)0x0;
                pSStack_138 = (System_String_array *)0x0;
                pIStack_130 = (Il2CppMethodPointer)0x0;
                ppIStack_108 = (Il2CppType **)0x0;
                iVar14 = (int)SVar50._dateData;
                if (iVar14 < 0) {
label_0454dffe:
                  unaff_R13._dateData = **(undefined8 **)(g_data_057b9c00 + 0xb8);
label_0454e01b:
                  pMStack_150 = (MethodInfo *)0x454e022;
                  GameManagers_ChatManager_ChatDisplayLine__Plain
                            ((GameManagers_ChatManager_ChatDisplayLine_o *)auStack_100,
                             (System_String_o *)unaff_R13._dateData,(MethodInfo *)0x0);
                  ((MethodInfo *)message_00)->parameters = ppIStack_d0;
                  ((MethodInfo *)message_00)->klass = pIStack_e0;
                  ((MethodInfo *)message_00)->return_type = (Il2CppType *)pSStack_d8;
                  ((MethodInfo *)message_00)->invoker_method = (InvokerMethod)pIStack_f0;
                  ((MethodInfo *)message_00)->name = (char *)pSStack_e8;
                  ((MethodInfo *)message_00)->methodPointer =
                       (Il2CppMethodPointer)CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
                  ((MethodInfo *)message_00)->virtualMethodPointer = (Il2CppMethodPointer)auStack_100._8_8_;
                  return;
                }
                ppMVar56 = &TypeInfo_ChatManager;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  pMStack_150 = (MethodInfo *)0x454deca;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = *(System_Collections_Generic_List_object__o **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                pMVar31 = TypeInfo_ChatManager;
                pIVar32 = (Il2CppClass *)&TypeInfo_ChatManager;
                if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
                  if ((pSVar15->fields)._size <= iVar14) goto label_0454dffe;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pMStack_150 = (MethodInfo *)0x454def9;
                    il2cpp_runtime_helper_02337ed0();
                    pSVar15 = *(System_Collections_Generic_List_object__o **)
                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_0454e2a5;
                  }
                  method_01 = &MethodInfo_String_get_Item;
                  pMStack_150 = (MethodInfo *)0x454df25;
                  pIVar32 = (Il2CppClass *)
                            System_Collections_Generic_List_object___get_Item(pSVar15,iVar14,MethodInfo_String_get_Item);
                  ppSVar44 = (System_String_o **)method_01;
                  pMVar31 = (MethodInfo *)0x0;
                  if (*(System_Collections_Generic_List_DateTime__o **)
                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                      (System_Collections_Generic_List_DateTime__o *)0x0) {
                    pMStack_150 = (MethodInfo *)0x454df51;
                    ppIVar54 = (Il2CppClass **)
                               System_Collections_Generic_List_DateTime___get_Item
                                         (*(System_Collections_Generic_List_DateTime__o **)
                                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar14,MethodInfo_DateTime_get_Item);
                    ppSVar44 = (System_String_o **)method_01;
                    pMVar31 = (MethodInfo *)0x0;
                    if (*(System_Collections_Generic_List_bool__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                        (System_Collections_Generic_List_bool__o *)0x0) {
                      pMStack_150 = (MethodInfo *)0x454df7d;
                      uVar48 = System_Collections_Generic_List_bool___get_Item
                                         (*(System_Collections_Generic_List_bool__o **)
                                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar14,MethodInfo_Boolean_get_Item);
                      pMStack_150 = (MethodInfo *)0x454df8b;
                      unaff_R13._dateData =
                           (uint64_t)
                           GameManagers_ChatManager__GetFormattedMessage
                                     ((System_String_o *)pIVar32,(System_DateTime_o)ppIVar54,uVar48 & 0xff,
                                      (MethodInfo *)method_01);
                      __this_05 = *(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 200);
                      ppSVar44 = (System_String_o **)method_01;
                      pMVar31 = TypeInfo_ChatManager;
                      if (__this_05 !=
                          (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                        if ((__this_05->fields)._size <= iVar14) goto label_0454e01b;
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          pMStack_150 = (MethodInfo *)0x454dfbc;
                          il2cpp_runtime_helper_02337ed0();
                          __this_05 = *(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                                       (TypeInfo_ChatManager[2].virtualMethodPointer + 200);
                          ppSVar44 = (System_String_o **)method_01;
                          if (__this_05 ==
                              (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                          goto label_0454e2a5;
                        }
                        ppIVar54 = &MethodInfo_ChatManager_ChatPlayerLineData_get_Item;
                        pMStack_150 = (MethodInfo *)0x454dfed;
                        ppSVar44 = (System_String_o **)MethodInfo_ChatManager_ChatPlayerLineData_get_Item;
                        System_Collections_Generic_List_ChatManager_ChatPlayerLineData___get_Item
                                  ((GameManagers_ChatManager_ChatPlayerLineData_o *)auStack_100,__this_05,
                                   iVar14,(MethodInfo_36C3C40 *)MethodInfo_ChatManager_ChatPlayerLineData_get_Item);
                        if ((auStack_100._0_4_ & 1) == 0) goto label_0454e01b;
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          pMStack_150 = (MethodInfo *)0x454e06f;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar31 = TypeInfo_ChatManager;
                        if (*(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                             (TypeInfo_ChatManager[2].virtualMethodPointer + 200) !=
                            (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                          pMStack_150 = (MethodInfo *)0x454e099;
                          System_Collections_Generic_List_ChatManager_ChatPlayerLineData___get_Item
                                    ((GameManagers_ChatManager_ChatPlayerLineData_o *)auStack_100,
                                     *(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 200),iVar14,
                                     (MethodInfo_36C3C40 *)MethodInfo_ChatManager_ChatPlayerLineData_get_Item);
                          __this_06 = (((Il2CppClass *)TypeInfo_ChatManager[2].virtualMethodPointer)->_1).this_arg.
                                      data;
                          pMVar31 = (MethodInfo *)0x0;
                          ppSVar44 = (System_String_o **)TypeInfo_ChatManager[2].virtualMethodPointer;
                          if (__this_06 != (System_Collections_Generic_List_int__o *)0x0) {
                            pIStack_c8 = pIStack_f0;
                            iStack_13c = -1;
                            ppSVar44 = (System_String_o **)pIStack_f0;
                            pIVar32 = (Il2CppClass *)auStack_100._8_8_;
                            if (iVar14 < (__this_06->fields)._size) {
                              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                pMStack_150 = (MethodInfo *)0x454e0e1;
                                il2cpp_runtime_helper_02337ed0(TypeInfo_ChatManager);
                                __this_06 = *(System_Collections_Generic_List_int__o **)
                                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30);
                                pMVar31 = (MethodInfo *)0x0;
                                ppSVar44 = (System_String_o **)pIStack_f0;
                                if (__this_06 == (System_Collections_Generic_List_int__o *)0x0)
                                goto label_0454e2a5;
                              }
                              pMStack_150 = (MethodInfo *)0x454e10a;
                              iStack_13c = System_Collections_Generic_List_int___get_Item
                                                     (__this_06,iVar14,MethodInfo_Int32_get_Item);
                            }
                            pSStack_110 = (System_String_o *)0x0;
                            ppIStack_108 = (Il2CppType **)0x0;
                            pSStack_120 = (System_String_o *)0x0;
                            pIStack_118 = (Il2CppClass *)0x0;
                            pIStack_130 = (Il2CppMethodPointer)0x0;
                            pSStack_128 = (System_String_o *)0x0;
                            pMStack_150 = (MethodInfo *)0x454e132;
                            pSStack_138 = (System_String_array *)unaff_R13._dateData;
                            il2cpp_runtime_helper_022b4080(&pSStack_138);
                            pIStack_130 = (Il2CppMethodPointer)CONCAT71(pIStack_130._1_7_,1);
                            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                              pMStack_150 = (MethodInfo *)0x454e149;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pMVar31 = (MethodInfo *)0x0;
                            if (*(System_Collections_Generic_List_DateTime__o **)
                                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                                (System_Collections_Generic_List_DateTime__o *)0x0) {
                              pMStack_150 = (MethodInfo *)0x454e172;
                              ppIVar54 = (Il2CppClass **)
                                         System_Collections_Generic_List_DateTime___get_Item
                                                   (*(System_Collections_Generic_List_DateTime__o **)
                                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar14,
                                                    MethodInfo_DateTime_get_Item);
                              pMVar31 = (MethodInfo *)0x0;
                              if (*(System_Collections_Generic_List_bool__o **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                                  (System_Collections_Generic_List_bool__o *)0x0) {
                                pMStack_150 = (MethodInfo *)0x454e19e;
                                uVar13 = System_Collections_Generic_List_bool___get_Item
                                                   (*(System_Collections_Generic_List_bool__o **)
                                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar14,
                                                    MethodInfo_Boolean_get_Item);
                                pMStack_150 = (MethodInfo *)0x454e1a9;
                                pSStack_128 = GameManagers_ChatManager__GetTimestampPrefix
                                                        ((System_DateTime_o)ppIVar54,uVar13 & 0xff,method_02);
                                pMStack_150 = (MethodInfo *)0x454e1bb;
                                il2cpp_runtime_helper_022b4080(&pSStack_128,pSStack_128);
                                iVar53 = iStack_13c;
                                auStack_100._0_4_ = iStack_13c;
                                pMStack_150 = (MethodInfo *)0x454e1d8;
                                pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_100);
                                ppSVar44 = &"[{0}] ";
                                pMStack_150 = (MethodInfo *)0x454e1ec;
                                pSVar29 = System_String__Format("[{0}] ",pIVar33,(MethodInfo *)0x0);
                                pMStack_150 = (MethodInfo *)0x454e1fb;
                                pSStack_120 = GameManagers_ChatManager__GetColorString
                                                        (pSVar29,1,0,(MethodInfo *)ppSVar44);
                                pMStack_150 = (MethodInfo *)0x454e20d;
                                il2cpp_runtime_helper_022b4080(&pSStack_120,pSStack_120);
                                if ((Il2CppClass *)auStack_100._8_8_ == (Il2CppClass *)0x0) {
                                  auStack_100._8_8_ = **(undefined8 **)(g_data_057b9c00 + 0xb8);
                                }
                                pMStack_150 = (MethodInfo *)0x454e235;
                                pIStack_118 = (Il2CppClass *)auStack_100._8_8_;
                                il2cpp_runtime_helper_022b4080(&pIStack_118,auStack_100._8_8_);
                                pIVar32 = pIStack_c8;
                                if (pIStack_c8 == (Il2CppClass *)0x0) {
                                  pIVar32 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                                }
                                pMStack_150 = (MethodInfo *)0x454e264;
                                pSStack_110 = System_String__Concat_3ae5ba0
                                                        (": ",(System_String_o *)pIVar32,
                                                         (MethodInfo *)0x0);
                                pMStack_150 = (MethodInfo *)0x454e276;
                                il2cpp_runtime_helper_022b4080(&pSStack_110,pSStack_110);
                                ppIStack_108 = (Il2CppType **)CONCAT44(ppIStack_108._4_4_,iVar53);
                                ((MethodInfo *)message_00)->klass = pIStack_118;
                                ((MethodInfo *)message_00)->return_type = (Il2CppType *)pSStack_110;
                                ((MethodInfo *)message_00)->invoker_method = (InvokerMethod)pSStack_128;
                                ((MethodInfo *)message_00)->name = (char *)pSStack_120;
                                ((MethodInfo *)message_00)->methodPointer = (Il2CppMethodPointer)pSStack_138;
                                ((MethodInfo *)message_00)->virtualMethodPointer = pIStack_130;
                                ((MethodInfo *)message_00)->parameters = ppIStack_108;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
label_0454e2a5:
                pMStack_150 = (MethodInfo *)0x454e2aa;
                pSStack_170 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
                ppSVar46 = (System_String_array **)&pSStack_170;
                pMStack_168 = (MethodInfo *)ppIVar54;
                pIStack_160 = pIVar32;
                pIStack_158 = (Il2CppClass *)message_00;
                pMStack_150 = (MethodInfo *)pUVar22;
                if (g_data_057aef7e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057aef7e = '\x01';
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e3d0;
label_0454e2de:
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
                  cVar9 = (char)bVar10;
                  pMVar16 = TypeInfo_ChatManager;
                }
                else {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e2de;
label_0454e3d0:
                  pMVar16 = TypeInfo_ChatManager;
                  il2cpp_runtime_helper_02337ed0();
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar16);
                  cVar9 = (char)bVar10;
                  pMVar16 = TypeInfo_ChatManager;
                }
                if (cVar9 == '\0') {
                  TypeInfo_ChatManager = pMVar16;
                  return;
                }
                ppMVar20 = &TypeInfo_ChatManager;
                TypeInfo_ChatManager = pMVar16;
                if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          GameManagers_ChatManager__GetFeedPanel(pMVar16);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pSVar34,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_1a8 = (System_String_array *)0x454e364;
                  GameManagers_ChatManager__AddLine
                            ((System_String_o *)pMVar31,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,
                             0,in_stack_fffffffffffffe80);
                  return;
                }
                if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar29 = Anticheat_ChatFilter__FilterSizeTag((System_String_o *)pMVar31,(MethodInfo *)0x0);
                pSVar21 = (System_String_o *)0x0;
                pSVar29 = Anticheat_ChatFilter__FilterBadWords(pSVar29,(MethodInfo *)0x0);
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar32 = MethodInfo_Void_Add;
                pSVar17 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x60);
                if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  piVar2 = (int *)((long)&pSVar17->max_length + 4);
                  *piVar2 = *piVar2 + 1;
                  pSVar25 = ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar17->bounds)->_networkCallback;
                  ppSVar44 = (System_String_o **)pIVar32;
                  if (pSVar25 != (System_Object_array *)0x0) {
                    uVar48 = *(uint *)&pSVar17->max_length;
                    pSVar21 = pSVar29;
                    if (uVar48 < (uint)pSVar25->max_length) {
                      ppSVar44 = (System_String_o **)(ulong)(uVar48 + 1);
                      *(uint *)&pSVar17->max_length = uVar48 + 1;
                      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (pSVar25->m_Items + (int)uVar48);
                      pSVar25->m_Items[(int)uVar48] = (Il2CppObject *)pSVar29;
                      il2cpp_runtime_helper_022b4080();
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar29,
                                 *(MethodInfo_362C220 **)
                                  (*(long *)((long)(pIVar32->_1).byval_arg.data + 0xc0) + 0x70));
                      ppSVar44 = (System_String_o **)pIVar32;
                    }
                    if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) != 0) {
                      uVar48 = *(uint *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) + 0x18);
                      pUVar22 = (UnityEngine_Transform_o *)(ulong)uVar48;
                      iVar12 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)pSVar17);
                      if (iVar12 < (int)uVar48) {
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar17 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x60);
                        if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        goto label_0454e50c;
                        pSVar21 = (System_String_o *)0x0;
                        System_Collections_Generic_List_object___RemoveAt
                                  ((System_Collections_Generic_List_object__o *)pSVar17,0,MethodInfo_Void_RemoveAt);
                      }
                      pMVar31 = pMStack_150;
                      if (pSVar34 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        pMVar16 = (MethodInfo *)0x0;
                        pMStack_150 = (MethodInfo *)pIStack_158;
                        pIStack_158 = pIStack_160;
                        pIStack_160 = (Il2CppClass *)pMStack_168;
                        if (g_data_057ae3cc == '\0') {
                          pMStack_168 = (MethodInfo *)0x43bfb40;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                          g_data_057ae3cc = '\x01';
                          pMVar16 = extraout_RDX;
                        }
                        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                  pSVar34->m_Items[3].fields.key;
                        pMStack_168 = (MethodInfo *)0x43bfb56;
                        pSVar21 = pSVar29;
                        pSVar35 = pSVar34;
                        pMVar16 = (MethodInfo *)
                                  UI_FeedPanel__CreateLine((UI_FeedPanel_o *)pSVar34,pSVar29,pMVar16);
                        lVar40 = MethodInfo_Void_Add;
                        if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        {
                          piVar1 = (int32_t *)((long)&pSVar17->max_length + 4);
                          *piVar1 = *piVar1 + 1;
                          pSVar25 = (System_Object_array *)
                                    ((UI_FeedPanel_Fields *)&pSVar17->bounds)->m_CachedPtr;
                          if (pSVar25 != (System_Object_array *)0x0) {
                            uVar13 = *(uint *)&pSVar17->max_length;
                            if (uVar13 < (uint)pSVar25->max_length) {
                              *(uint *)&pSVar17->max_length = uVar13 + 1;
                              pSVar25->m_Items[(int)uVar13] = (Il2CppObject *)pMVar16;
                              pMStack_168 = (MethodInfo *)0x43bfb96;
                              il2cpp_runtime_helper_022b4080();
                            }
                            else {
                              pMStack_168 = (MethodInfo *)0x43bfbb2;
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar17,
                                         (Il2CppObject *)pMVar16,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar40 + 0x20) + 0xc0) + 0x70));
                            }
                            pMStack_168 = (MethodInfo *)0x43bfbb9;
                            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                            UI_FeedPanel__ClearExcessLines((UI_FeedPanel_o *)pSVar34,pMVar16);
                            return;
                          }
                        }
                        pMStack_168 = (MethodInfo *)0x43bfbcb;
                        il2cpp_runtime_helper_022b2c90();
                        pMStack_168 = pMVar31;
                        ppSVar44 = (System_String_o **)pSVar35;
                        pSStack_170 = pSVar29;
                        if (g_data_057ae3cf == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                          il2cpp_runtime_helper_023445d0(&"TextColor");
                          il2cpp_runtime_helper_023445d0(&"DefaultPanel");
                          ppSVar44 = &"Default";
                          il2cpp_runtime_helper_023445d0();
                          g_data_057ae3cf = '\x01';
                        }
                        lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                        if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x148), lVar40 != 0)) {
                          uVar13 = *(uint *)(lVar40 + 0x14);
                          ppMVar56 = (MethodInfo **)(ulong)uVar13;
                          pIVar32 = (pSVar35->obj).klass;
                          pSVar29 = (System_String_o *)
                                    (*(((System_Collections_Generic_List_object__VTable *)pIVar32->vtable)->
                                      _4_unknown).methodPtr)
                                              (pSVar35,(((System_Collections_Generic_List_object__VTable *)
                                                        pIVar32->vtable)->_4_unknown).method);
                          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                          UI_ElementStyle___ctor
                                    ((UI_ElementStyle_o *)pSVar17,uVar13,120.0,20.0,pSVar29,(MethodInfo *)0x0)
                          ;
                          pUVar18 = *(UnityEngine_GameObject_o **)&pSVar35->m_Items[3].fields;
                          ppSVar44 = (System_String_o **)
                                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                            ppSVar44 = (System_String_o **)
                                       UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                            pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      UI_ElementFactory__CreateDefaultLabel
                                                ((UnityEngine_Transform_o *)ppSVar44,
                                                 (UI_ElementStyle_o *)pSVar17,pSVar21,0,3,(MethodInfo *)0x0);
                            if ((pSVar34 !=
                                 (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
                               (pIVar33 = UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)pSVar34,MethodInfo_Text_GetComponent_Text),
                               ppSVar44 = (System_String_o **)pSVar34,
                               pSVar17 !=
                               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                              pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                        pSVar17->max_length;
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              ppSVar44 = (System_String_o **)pSVar17;
                              UVar58 = UI_UIManager__GetThemeColor
                                                 ((System_String_o *)pSVar17,"TextColor","Default",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              ppMVar56 = (MethodInfo **)pIVar33;
                              if (pIVar33 != (Il2CppObject *)0x0) {
                                (*pIVar33->klass->vtable[0x17].methodPtr)
                                          (UVar58.fields.r,UVar58.fields.b,pIVar33);
                                pUVar22 = (UnityEngine_Transform_o *)pSVar35->m_Items[3].fields.value;
                                ppSVar44 = (System_String_o **)0x0;
                                if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetAsLastSibling(pUVar22,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        pSStack_1b8 = pSVar17;
                        pSStack_1b0 = (System_String_array *)ppMVar56;
                        pSStack_1a8 = (System_String_array *)unaff_R13._dateData;
                        uStack_1c0._0_4_ = extraout_EAX;
                        uStack_1c0._4_4_ = extraout_var;
                        if (g_data_057ae3ce == '\0') {
                          uStack_1c8 = 0x43bfdc3;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
                          uStack_1c8 = 0x43bfdcf;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                          uStack_1c8 = 0x43bfddb;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                          uStack_1c8 = 0x43bfde7;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                          uStack_1c8 = 0x43bfdf3;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          uStack_1c8 = 0x43bfdff;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          uStack_1c8 = 0x43bfe0b;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                          g_data_057ae3ce = '\x01';
                        }
                        lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                        if (((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0x140), lVar40 == 0)) ||
                           (pSVar51 = (System_Collections_Generic_List_GameObject__o *)
                                      ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      ppSVar44)->m_Items[3].fields.key,
                           pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0))
                        goto label_043bffb8;
                        iVar14 = *(int *)(lVar40 + 0x14);
                        iVar45 = 0;
                        uStack_1c0._4_4_ = 0.0;
                        goto label_043bfe70;
                      }
                    }
                  }
                }
label_0454e50c:
                il2cpp_runtime_helper_022b2c90();
                uVar49 = (ulong)pSVar21 & 0xffffffff;
                if (g_data_057aef7f == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057aef7f = '\x01';
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e5ec;
label_0454e54d:
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
                  cVar9 = (char)bVar10;
                  pMVar31 = TypeInfo_ChatManager;
                }
                else {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e54d;
label_0454e5ec:
                  pMVar31 = TypeInfo_ChatManager;
                  il2cpp_runtime_helper_02337ed0();
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar31);
                  cVar9 = (char)bVar10;
                  pMVar31 = TypeInfo_ChatManager;
                }
                if (cVar9 == '\0') {
                  TypeInfo_ChatManager = pMVar31;
                  return;
                }
                TypeInfo_ChatManager = pMVar31;
                if (*(int *)((long)&pMVar31[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          GameManagers_ChatManager__GetVoiceChatPanel(pMVar31);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pSVar35,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  return;
                }
                if (pSVar35 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  ppSVar44 = (System_String_o **)pSVar35;
                  if ((char)uVar49 != '\0') {
                    ppSVar46 = &pSStack_1a8;
                    pSVar34 = pSVar17;
                    pSStack_1a8 = (System_String_array *)CONCAT44(extraout_var_00,bVar10);
                    if (g_data_057ae502 == '\0') {
                      pSStack_1b0 = (System_String_array *)0x43eda96;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,pSVar17,0);
                      pSStack_1b0 = (System_String_array *)0x43edaa2;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                      pSStack_1b0 = (System_String_array *)0x43edaae;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                      pSStack_1b0 = (System_String_array *)0x43edaba;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
                      pSStack_1b0 = (System_String_array *)0x43edac6;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
                      pSStack_1b0 = (System_String_array *)0x43edad2;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                      pSStack_1b0 = (System_String_array *)0x43edade;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                      ppSVar44 = &"";
                      pSStack_1b0 = (System_String_array *)0x43edaea;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057ae502 = '\x01';
                    }
                    if ((pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
                       (ppSVar44 = (System_String_o **)pSVar35->m_Items[3].fields.key,
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44 !=
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                      pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (ulong)*(uint *)&pSVar17->max_length;
                      pSStack_1b0 = (System_String_array *)0x43edb1a;
                      bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         ((System_Collections_Generic_Dictionary_int__object__o *)ppSVar44,
                                          *(uint *)&pSVar17->max_length,MethodInfo_Boolean_ContainsKey);
                      if ((char)bVar10 != '\0') {
                        return;
                      }
                      lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x148), lVar40 != 0)) {
                        uVar13 = *(uint *)(lVar40 + 0x14);
                        pUVar22 = (UnityEngine_Transform_o *)(ulong)uVar13;
                        pIVar32 = (pSVar35->obj).klass;
                        pSStack_1b0 = (System_String_array *)0x43edb71;
                        pSVar29 = (System_String_o *)
                                  (*(((UI_FeedPanel_VTable *)pIVar32->vtable)->_4_get_ThemePanel).methodPtr)
                                            (pSVar35,(((UI_FeedPanel_VTable *)pIVar32->vtable)->
                                                     _4_get_ThemePanel).method);
                        pSStack_1b0 = (System_String_array *)0x43edb83;
                        ppMVar20 = (MethodInfo **)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                        pSStack_1b0 = (System_String_array *)0x43edba5;
                        UI_ElementStyle___ctor
                                  ((UI_ElementStyle_o *)ppMVar20,uVar13,120.0,20.0,pSVar29,(MethodInfo *)0x0);
                        iVar53 = *(int32_t *)&pSVar17->max_length;
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          pSStack_1b0 = (System_String_array *)0x43edbc1;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_1b0 = (System_String_array *)0x43edbce;
                        ppMVar56 = (MethodInfo **)
                                   GameManagers_ChatManager__GetIDString(iVar53,0,0,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                          pSStack_1b0 = (System_String_array *)0x43edbe9;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                  **(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
                        pSStack_1b0 = (System_String_array *)0x43edc0a;
                        pSVar21 = PhotonExtensions__GetStringProperty
                                            ((Photon_Realtime_Player_o *)pSVar17,(System_String_o *)pSVar34,
                                             "",(MethodInfo *)0x0);
                        pUVar18 = *(UnityEngine_GameObject_o **)&pSVar35->m_Items[3].fields;
                        ppSVar44 = (System_String_o **)0x0;
                        pSVar29 = (System_String_o *)&TypeInfo_PlayerProperty;
                        if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                          pSStack_1b0 = (System_String_array *)0x43edc1d;
                          pUVar22 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                          pSStack_1b0 = (System_String_array *)0x43edc2d;
                          pSVar29 = System_String__Concat_3ae5ba0
                                              ((System_String_o *)ppMVar56,pSVar21,(MethodInfo *)0x0);
                          pSStack_1b0 = (System_String_array *)0x43edc46;
                          pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    ppMVar20;
                          pUVar18 = UI_ElementFactory__CreateWhiteLabel
                                              (pUVar22,(UI_ElementStyle_o *)ppMVar20,pSVar29,0,3,
                                               (MethodInfo *)0x0);
                          pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    pSVar35->m_Items[3].fields.key;
                          ppSVar44 = (System_String_o **)0x0;
                          pSVar29 = pSVar21;
                          if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                            pSStack_1b0 = (System_String_array *)0x43edc65;
                            System_Collections_Generic_Dictionary_int__object___Add
                                      (pSVar24,*(int32_t *)&pSVar17->max_length,(Il2CppObject *)pUVar18,
                                       MethodInfo_Void_Add);
                            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                    pSStack_1b0 = (System_String_array *)0x43edc7f;
                    il2cpp_runtime_helper_022b2c90();
                    pSVar17 = pSVar34;
                    pSVar34 = pSVar35;
                  }
                  *(MethodInfo ***)((long)ppSVar46 + -8) = ppMVar20;
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x10) = pSVar34;
                  *(System_String_o **)((long)ppSVar46 + -0x18) = pSVar29;
                  pSVar34 = pSVar17;
                  plVar52 = (long *)ppSVar44;
                  if (g_data_057ae503 == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edca0;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcac;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcb8;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                    plVar52 = &TypeInfo_Object;
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcc4;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057ae503 = '\x01';
                  }
                  if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->
                              m_Items[3].fields.key;
                    plVar52 = (long *)0x0;
                    if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      uVar13 = *(uint *)&pSVar17->max_length;
                      pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (ulong)uVar13;
                      *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcf3;
                      bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar24,uVar13,MethodInfo_Boolean_ContainsKey);
                      if ((char)bVar10 == '\0') {
                        return;
                      }
                      pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                                ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)
                                ->m_Items[3].fields.key;
                      plVar52 = (long *)0x0;
                      if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        iVar53 = *(int32_t *)&pSVar17->max_length;
                        *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd12;
                        ppMVar20 = (MethodInfo **)
                                   System_Collections_Generic_Dictionary_int__object___get_Item
                                             (pSVar24,iVar53,MethodInfo_GameObject_get_Item);
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd2d;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                        *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd37;
                        UnityEngine_Object__Destroy_4e01c60
                                  ((UnityEngine_Object_o *)ppMVar20,(MethodInfo *)0x0);
                        pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44
                                  )->m_Items[3].fields.key;
                        plVar52 = (long *)0x0;
                        if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          iVar53 = *(int32_t *)&pSVar17->max_length;
                          *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd52;
                          System_Collections_Generic_Dictionary_int__object___Remove
                                    (pSVar24,iVar53,MethodInfo_Boolean_Remove);
                          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd69;
                  il2cpp_runtime_helper_022b2c90();
                  *(UnityEngine_Transform_o **)((long)ppSVar46 + -0x20) = pUVar22;
                  *(MethodInfo ***)((long)ppSVar46 + -0x28) = ppMVar20;
                  *(System_String_o ***)((long)ppSVar46 + -0x30) = ppSVar44;
                  *(MethodInfo ***)((long)ppSVar46 + -0x38) = ppMVar56;
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x40) = pSVar17;
                  ppSVar44 = (System_String_o **)plVar52;
                  if (g_data_057ae504 == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edd93;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edd9f;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddab;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddb7;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddc3;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddcf;
                    il2cpp_runtime_helper_023445d0(&"TextColor");
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edddb;
                    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
                    ppSVar44 = &"Default";
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edde7;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057ae504 = '\x01';
                  }
                  lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x148), lVar40 != 0)) {
                    iVar53 = *(int32_t *)(lVar40 + 0x14);
                    pIVar32 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar52)->
                              obj).klass;
                    pMVar31 = (((System_Collections_Generic_Dictionary_int__object__VTable *)pIVar32->vtable)
                              ->_4_unknown).method;
                    pIVar5 = (((System_Collections_Generic_Dictionary_int__object__VTable *)pIVar32->vtable)->
                             _4_unknown).methodPtr;
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede33;
                    pSVar29 = (System_String_o *)(*pIVar5)(plVar52,pMVar31);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede45;
                    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede68;
                    UI_ElementStyle___ctor
                              ((UI_ElementStyle_o *)pSVar17,iVar53,120.0,20.0,pSVar29,(MethodInfo *)0x0);
                    pUVar18 = *(UnityEngine_GameObject_o **)
                               &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar52)->
                                m_Items[3].fields;
                    ppSVar44 = (System_String_o **)0x0;
                    if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                      *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede7c;
                      ppSVar44 = (System_String_o **)
                                 UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                      *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede95;
                      pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                UI_ElementFactory__CreateWhiteLabel
                                          ((UnityEngine_Transform_o *)ppSVar44,(UI_ElementStyle_o *)pSVar17,
                                           (System_String_o *)pSVar34,0,3,(MethodInfo *)0x0);
                      if (pSVar35 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edeb3;
                        ppSVar44 = (System_String_o **)pSVar35;
                        pIVar33 = UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)pSVar35,MethodInfo_Text_GetComponent_Text);
                        pSVar34 = pSVar35;
                        if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        {
                          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    pSVar17->max_length;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eded7;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edf00;
                          ppSVar44 = (System_String_o **)pSVar17;
                          UVar58 = UI_UIManager__GetThemeColor
                                             ((System_String_o *)pSVar17,"TextColor","Default",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          plVar52 = (long *)0x0;
                          if (pIVar33 != (Il2CppObject *)0x0) {
                            pMVar31 = pIVar33->klass->vtable[0x17].method;
                            pIVar5 = pIVar33->klass->vtable[0x17].methodPtr;
                            *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edf18;
                            (*pIVar5)(UVar58.fields.r,UVar58.fields.b,pIVar33,pMVar31);
                            return;
                          }
                        }
                      }
                    }
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edf29;
                  uVar23 = il2cpp_runtime_helper_022b2c90();
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x48) = pSVar34;
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x50) = pSVar17;
                  *(undefined8 *)((long)ppSVar46 + -0x58) = uVar23;
                  if (g_data_057ae505 == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf4c;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf58;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
                    g_data_057ae505 = '\x01';
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf6e;
                  pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf83;
                  System_Collections_Generic_Dictionary_int__object____ctor(pSVar24,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].
                  fields.key = (Il2CppObject *)pSVar24;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf93;
                  il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      ppSVar44)->m_Items[3].fields.key,pSVar24);
                  uVar23 = *(undefined8 *)((long)ppSVar46 + -0x50);
                  uVar7 = *(undefined8 *)((long)ppSVar46 + -0x48);
                  *(long **)((long)ppSVar46 + -0x48) = plVar52;
                  *(undefined8 *)((long)ppSVar46 + -0x50) = uVar7;
                  *(undefined8 *)((long)ppSVar46 + -0x58) = uVar23;
                  if (g_data_057ae02c == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x432777d;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327789;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327795;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277a1;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277ad;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
                    g_data_057ae02c = '\x01';
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277c3;
                  pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277d8;
                  System_Collections_Generic_List_object____ctor(pSVar15,MethodInfo_List_1_UI_BasePopup);
                  *(System_Collections_Generic_List_object__o **)
                   &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[1].
                    fields = pSVar15;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277e8;
                  il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     ppSVar44)->m_Items + 1,pSVar15);
                  pSVar29 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x432780f;
                  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327824;
                  Settings_StringSetting___ctor_40f74f0(__this_00,pSVar29,0x7fffffff,(MethodInfo *)0x0);
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[1].
                  fields.value = (Il2CppObject *)__this_00;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327834;
                  il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      ppSVar44)->m_Items[1].fields.value,__this_00);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327843;
                  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327858;
                  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Type);
                  *(System_Collections_Generic_Dictionary_object__object__o **)
                   &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[2].
                    fields = __this_01;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327868;
                  il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     ppSVar44)->m_Items + 2);
                  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar44,(MethodInfo *)0x0);
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057aef8d == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                  g_data_057aef8d = '\x01';
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0454e6b2;
label_0454e63d:
                  pSVar38 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pSVar38 != (System_String_array *)0x0) goto label_0454e64d;
label_0454e6ca:
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0454e63d;
label_0454e6b2:
                  il2cpp_runtime_helper_02337ed0();
                  pSVar38 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pSVar38 == (System_String_array *)0x0) goto label_0454e6ca;
label_0454e64d:
                  pIVar32 = (pSVar38->obj).klass;
                  bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
                  ppSVar44 = (System_String_o **)(ulong)bVar3;
                  if ((bVar3 <= (pIVar32->_2).naturalAligment) &&
                     ((pIVar32->_2).typeHierarchy
                      [(long)((long)&((Il2CppClass *)((long)ppSVar44 + -0x1128))->vtable[0xfe].method + 7)] ==
                      TypeInfo_InGameMenu)) {
                    return;
                  }
                }
                il2cpp_runtime_helper_022b2fd0();
                ppMVar20 = &TypeInfo_ChatManager;
                ppSVar47 = &pSStack_1a8;
                pSStack_1a8 = (System_String_array *)&TypeInfo_UIManager;
                if (g_data_057aef81 == '\0') {
                  pSStack_1b0 = (System_String_array *)0x454e6fd;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  pSStack_1b0 = (System_String_array *)0x454e709;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                  pSStack_1b0 = (System_String_array *)0x454e715;
                  il2cpp_runtime_helper_023445d0(&"/");
                  g_data_057aef81 = '\x01';
                }
                __this_07 = (MethodInfo **)&g_data_057b9b70;
                pSStack_1b0 = (System_String_array *)0x454e73e;
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)pSVar38,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  return;
                }
                plVar52 = &TypeInfo_CustomLogicManager;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  pSStack_1b0 = (System_String_array *)0x454e760;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar39 = *(System_String_array **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                if (pSVar39 == (System_String_array *)0x0) {
label_0454e854:
                  pSVar36 = pSVar39;
                  pSStack_1b0 = (System_String_array *)0x454e859;
                  pSVar39 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
                }
                else {
                  pSStack_1b0 = (System_String_array *)0x454e781;
                  pSVar36 = (System_String_array *)
                            CustomLogic_CustomLogicEvaluator__OnChatInput
                                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar39,
                                       (System_String_o *)pSVar38,(MethodInfo *)0x0);
                  if ((pSVar36 != (System_String_array *)0x0) &&
                     (ppSVar44 = (System_String_o **)(pSVar36->obj).klass,
                     (Il2CppClass *)ppSVar44 == g_data_057b9b98)) {
                    pSStack_1b0 = (System_String_array *)0x454e797;
                    pcVar37 = (char *)il2cpp_runtime_helper_02305440();
                    pSVar39 = pSVar36;
                    if (*pcVar37 == '\0') {
                      return;
                    }
                  }
                  if (pSVar38 == (System_String_array *)0x0) goto label_0454e854;
                  pSStack_1b0 = (System_String_array *)0x454e7b9;
                  pMVar31 = "/";
                  bVar10 = System_String__StartsWith
                                     ((System_String_o *)pSVar38,(System_String_o *)"/",
                                      (MethodInfo *)0x0);
                  if ((char)bVar10 == '\0') {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      pSStack_1b0 = (System_String_array *)0x454e83f;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSStack_1b0 = (System_String_array *)0x454e847;
                    pSVar29 = GameManagers_ChatManager__ProcessMentions((System_String_o *)pSVar38,pMVar31);
                    pSVar38 = pSStack_1a8;
                    pSStack_1a8 = (System_String_array *)&TypeInfo_ChatManager;
                    pSStack_1b0 = pSVar38;
                    if (g_data_057aef6e == '\0') {
                      pSStack_1d0 = (System_String_o *)0x454bb53;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                      pSStack_1d0 = (System_String_o *)0x454bb5f;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                      pSStack_1d0 = (System_String_o *)0x454bb6b;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
                      pSStack_1d0 = (System_String_o *)0x454bb77;
                      il2cpp_runtime_helper_023445d0(&"PlayerChatRPC");
                      g_data_057aef6e = '\x01';
                    }
                    uStack_1c0 = 0;
                    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                    pSStack_1d0 = (System_String_o *)0x454bbaf;
                    pSVar25 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
                    if (pSVar25 != (System_Object_array *)0x0) {
                      if (pSVar29 != (System_String_o *)0x0) {
                        pSStack_1d0 = (System_String_o *)0x454bbd0;
                        lVar40 = il2cpp_runtime_helper_023051f0(pSVar29);
                        if (lVar40 == 0) goto label_0454bcaf;
                      }
                      ppMVar56 = (MethodInfo **)pSVar25;
                      if ((int)pSVar25->max_length != 0) {
                        pSVar25->m_Items[0] = (Il2CppObject *)pSVar29;
                        pSStack_1d0 = (System_String_o *)0x454bbf7;
                        il2cpp_runtime_helper_022b4080(pSVar25->m_Items);
                        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                          pSStack_1d0 = (System_String_o *)0x454bc0f;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_1d0 = (System_String_o *)0x454bc16;
                        uStack_1c0 = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
                        pSStack_1d0 = (System_String_o *)0x454bc27;
                        pSStack_1b8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      System_DateTime__get_Ticks
                                                ((System_DateTime_o)&uStack_1c0,(MethodInfo *)0x0);
                        pSStack_1d0 = (System_String_o *)0x454bc41;
                        pSVar38 = (System_String_array *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
                        if (pSVar38 != (System_String_array *)0x0) {
                          pSStack_1d0 = (System_String_o *)0x454bc59;
                          lVar40 = il2cpp_runtime_helper_023051f0(pSVar38);
                          if (lVar40 == 0) goto label_0454bcaf;
                        }
                        if (1 < (uint)pSVar25->max_length) {
                          pSVar25->m_Items[1] = (Il2CppObject *)pSVar38;
                          pSStack_1d0 = (System_String_o *)0x454bc7a;
                          il2cpp_runtime_helper_022b4080(pSVar25->m_Items + 1);
                          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                            pSStack_1d0 = (System_String_o *)0x454bc99;
                            Photon_Pun_PhotonView__RPC(__this,"PlayerChatRPC",0,pSVar25,(MethodInfo *)0x0);
                            return;
                          }
                          goto label_0454bcaa;
                        }
                      }
                      pSStack_1d0 = (System_String_o *)0x454bcaa;
                      il2cpp_runtime_helper_022b2ca0();
                    }
label_0454bcaa:
                    pSVar25 = (System_Object_array *)ppMVar56;
                    pSStack_1d0 = (System_String_o *)0x454bcaf;
                    il2cpp_runtime_helper_022b2c90();
label_0454bcaf:
                    pSStack_1d0 = (System_String_o *)0x454bcb4;
                    pSVar26 = (System_String_o *)il2cpp_runtime_helper_0231b270();
                    pSVar28 = (System_String_o *)0x0;
                    pSStack_1d0 = (System_String_o *)0x454bcbe;
                    il2cpp_runtime_helper_022b2b10();
                    pSVar21 = pSVar28;
                    pSStack_1f0 = pSVar38;
                    pSStack_1e8 = pSVar25;
                    pSStack_1e0 = (System_String_array *)unaff_R13._dateData;
                    pPStack_1d8 = __this;
                    pSStack_1d0 = pSVar29;
                    if (g_data_057aef70 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_DateTime);
                      il2cpp_runtime_helper_023445d0(&" ");
                      il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
                      il2cpp_runtime_helper_023445d0(&"[{0}]");
                      g_data_057aef70 = '\x01';
                    }
                    SStack_208.fields._dateData = (System_DateTime_Fields)0;
                    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar34 = pSStack_1b8;
                    pPVar43 = TypeInfo_InGameManager;
                    if (pSStack_1b8 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                    {
                      pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x28);
                      pPVar43 = (Photon_Realtime_Player_o *)0x0;
                      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                        bVar10 = System_Collections_Generic_HashSet_int___Contains
                                           (pSVar4,*(int32_t *)((long)pSStack_1b8 + 0x18),MethodInfo_Boolean_Contains);
                        if ((char)bVar10 == '\0') {
                          uStack_20c = *(undefined4 *)((long)pSVar34 + 0x18);
                          pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_20c);
                          uStack_210 = *(undefined4 *)((long)pSVar34 + 0x18);
                          pIVar27 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_210);
                          ppSVar44 = &"[{0}]";
                          pSVar29 = System_String__Format("[{0}]",pIVar27,(MethodInfo *)0x0);
                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar29 = GameManagers_ChatManager__GetColorString
                                              (pSVar29,1,0,(MethodInfo *)ppSVar44);
                          pSVar29 = System_String__Format_3af78e0
                                              ("<link=\"{0}\">{1}</link>",pIVar33,(Il2CppObject *)pSVar29,(MethodInfo *)0x0)
                          ;
                          pSVar29 = System_String__Concat_3af7150
                                              (pSVar29," ",pSVar26,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          method_00 = (MethodInfo_37E4C90 *)0x0;
                          System_DateTime___ctor_3c8ff10
                                    ((System_DateTime_o)&SStack_208,(int64_t)pSVar28,1,(MethodInfo *)0x0);
                          pPStack_200 = (Photon_Realtime_Player_o *)0x0;
                          SStack_1f8._dateData = 0;
                          __this_08.fields.value.fields._dateData = SStack_208.fields._dateData;
                          __this_08.fields._0_8_ = &pPStack_200;
                          System_Nullable_DateTime____ctor
                                    (__this_08,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00);
                          timestamp.fields._0_8_ = (ulong)pPStack_200 & 0xffffffff;
                          timestamp.fields.value.fields._dateData =
                               (System_DateTime_Fields)(System_DateTime_Fields)SStack_1f8._dateData;
                          GameManagers_ChatManager__AddLine
                                    (pSVar29,0,0,timestamp,*(int32_t *)((long)pSVar34 + 0x18),0,0,-1,0,
                                     in_stack_fffffffffffffde0);
                        }
                        return;
                      }
                    }
                    il2cpp_runtime_helper_022b2c90();
                    pSVar29 = pSVar21;
                    if (g_data_057aef71 == '\0') {
                      uStack_250 = 0x454bf06;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      uStack_250 = 0x454bf12;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                      uStack_250 = 0x454bf1e;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
                      uStack_250 = 0x454bf2a;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
                      g_data_057aef71 = '\x01';
                    }
                    SVar50._dateData = 0;
                    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
                      uStack_250 = 0x454bf57;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    player = TypeInfo_InGameManager;
                    if (pPStack_200 != (Photon_Realtime_Player_o *)0x0) {
                      pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x28);
                      player = (Photon_Realtime_Player_o *)0x0;
                      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                        uStack_250 = 0x454bf8e;
                        bVar10 = System_Collections_Generic_HashSet_int___Contains
                                           (pSVar4,(pPStack_200->fields).actorNumber,MethodInfo_Boolean_Contains);
                        if ((char)bVar10 == '\0') {
                          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                            uStack_250 = 0x454bfaa;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uStack_250 = 0x454bfbe;
                          System_DateTime___ctor_3c8ff10
                                    ((System_DateTime_o)&stack0xfffffffffffffdc8,(int64_t)pSVar21,1,
                                     (MethodInfo *)0x0);
                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                            uStack_250 = 0x454bfdb;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uStack_250 = 0x454bff4;
                          GameManagers_ChatManager__AddPlayerLine
                                    (pPStack_200,(System_String_o *)pPVar43,0,
                                     (System_DateTime_o)SVar50._dateData,0,-1,in_stack_fffffffffffffdb8);
                        }
                        return;
                      }
                    }
                    uStack_250 = 0x454c005;
                    il2cpp_runtime_helper_022b2c90();
                    pPStack_278 = pPStack_200;
                    pSStack_270 = &SStack_208;
                    pSStack_268 = (System_String_array *)unaff_R13._dateData;
                    pPStack_260 = pPVar43;
                    pSStack_258 = pSVar21;
                    uStack_250 = uVar49;
                    if (g_data_057aef74 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
                      il2cpp_runtime_helper_023445d0(&": ");
                      il2cpp_runtime_helper_023445d0(&" ");
                      il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
                      il2cpp_runtime_helper_023445d0(&"[{0}]");
                      il2cpp_runtime_helper_023445d0(&"");
                      g_data_057aef74 = '\x01';
                    }
                    uStack_2a0 = 0;
                    pSStack_298 = (System_String_o *)0x0;
                    apSStack_290[0] = (System_String_o *)0x0;
                    if (player == (Photon_Realtime_Player_o *)0x0) {
                      return;
                    }
                    SStack_280.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)ppSVar44;
                    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pMVar31 = (MethodInfo *)0x0;
                    pSVar21 = PhotonExtensions__GetStringProperty
                                        (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                         "",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar21 = Anticheat_ChatFilter__FilterSizeTag(pSVar21,(MethodInfo *)0x0);
                    if (pSVar29 == (System_String_o *)0x0) {
                      pSVar29 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                      iVar14 = *(int *)(TypeInfo_ChatFilter + 0xe4);
                    }
                    else {
                      iVar14 = *(int *)(TypeInfo_ChatFilter + 0xe4);
                    }
                    if (iVar14 == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar29 = Anticheat_ChatFilter__FilterSizeTag(pSVar29,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar29 = MiscExtensions__ReplaceNamedColorTags(pSVar29,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar26 = GameManagers_ChatManager__GetColorString(pSVar29,color,0,pMVar31);
                    iStack_2a4 = (player->fields).actorNumber;
                    pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2a4);
                    iStack_2a8 = (player->fields).actorNumber;
                    pIVar27 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2a8);
                    ppSVar44 = &"[{0}]";
                    pSVar29 = System_String__Format("[{0}]",pIVar27,(MethodInfo *)0x0);
                    pSVar29 = GameManagers_ChatManager__GetColorString(pSVar29,1,0,(MethodInfo *)ppSVar44);
                    pSVar28 = System_String__Format_3af78e0
                                        ("<link=\"{0}\">{1}</link>",pIVar33,(Il2CppObject *)pSVar29,(MethodInfo *)0x0);
                    pSVar29 = TypeInfo_string;
                    pSVar38 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
                    if (pSVar38 != (System_String_array *)0x0) {
                      if ((int)pSVar38->max_length != 0) {
                        pSVar29 = (System_String_o *)pSVar38->m_Items;
                        pSVar38->m_Items[0] = pSVar28;
                        il2cpp_runtime_helper_022b4080(pSVar29,pSVar28);
                        if (1 < (uint)pSVar38->max_length) {
                          pSVar29 = (System_String_o *)(pSVar38->m_Items + 1);
                          pSVar38->m_Items[1] = " ";
                          il2cpp_runtime_helper_022b4080();
                          if (2 < (uint)pSVar38->max_length) {
                            pSVar29 = (System_String_o *)(pSVar38->m_Items + 2);
                            pSVar38->m_Items[2] = pSVar21;
                            il2cpp_runtime_helper_022b4080(pSVar29,pSVar21);
                            if (3 < (uint)pSVar38->max_length) {
                              pSVar29 = (System_String_o *)(pSVar38->m_Items + 3);
                              pSVar38->m_Items[3] = ": ";
                              il2cpp_runtime_helper_022b4080();
                              if (4 < (uint)pSVar38->max_length) {
                                pSVar38->m_Items[4] = pSVar26;
                                il2cpp_runtime_helper_022b4080(pSVar38->m_Items + 4);
                                pSVar29 = System_String__Concat_3af7570(pSVar38,(MethodInfo *)0x0);
                                iVar12 = (player->fields).actorNumber;
                                apSStack_290[0] = (System_String_o *)0x0;
                                uStack_2a0 = 1;
                                pSStack_298 = pSVar21;
                                il2cpp_runtime_helper_022b4080(&pSStack_298,pSVar21);
                                apSStack_290[0] = pSVar26;
                                il2cpp_runtime_helper_022b4080(apSStack_290,pSVar26);
                                playerLineData.fields.SenderName = pSStack_298;
                                playerLineData.fields._0_8_ = uStack_2a0;
                                playerLineData.fields.BodyText = apSStack_290[0];
                                GameManagers_ChatManager__AddLineInternal
                                          (pSVar29,0,0,SStack_280,iVar12,0,uVar13 & 0xff,iVar53,0,
                                           playerLineData,in_stack_fffffffffffffd40);
                                return;
                              }
                            }
                          }
                        }
                      }
                      il2cpp_runtime_helper_022b2ca0();
                    }
                    il2cpp_runtime_helper_022b2c90();
                    if (g_data_057aef72 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      g_data_057aef72 = '\x01';
                    }
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    GameManagers_ChatManager__AddLine
                              (pSVar29,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                               in_stack_fffffffffffffcf8);
                    return;
                  }
                  if (*(int *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar38->bounds)->_networkCallback
                      == 1) {
                    return;
                  }
                  pMVar31 = (MethodInfo *)0x1;
                  pSStack_1b0 = (System_String_array *)0x454e7d6;
                  pSVar38 = (System_String_array *)
                            System_String__Substring((System_String_o *)pSVar38,1,(MethodInfo *)0x0);
                  __this_07 = &TypeInfo_ChatManager;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pSStack_1b0 = (System_String_array *)0x454e7f1;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_1b0 = (System_String_array *)0x454e7f9;
                  pSVar39 = pSVar38;
                  pSVar36 = GameManagers_ChatManager__ParseCommandArgs((System_String_o *)pSVar38,pMVar31);
                  if (pSVar36 == (System_String_array *)0x0) goto label_0454e854;
                  if (pSVar36->max_length == 0) {
                    return;
                  }
                  pSVar39 = pSVar36;
                  __this_07 = (MethodInfo **)pSVar17;
                  plVar52 = (long *)ppMVar20;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pSStack_1b0 = (System_String_array *)0x454e81d;
                    pSVar39 = (System_String_array *)il2cpp_runtime_helper_02337ed0();
                    __this_07 = (MethodInfo **)pSVar17;
                    plVar52 = (long *)ppMVar20;
                  }
                  ppSVar47 = (System_String_array **)&stack0xfffffffffffffe70;
                  pSVar38 = pSStack_1a8;
                }
                *(ulong *)((long)ppSVar47 + -8) = uVar49;
                *(long **)((long)ppSVar47 + -0x10) = plVar52;
                *(MethodInfo ***)((long)ppSVar47 + -0x18) = __this_07;
                *(uint64_t *)((long)ppSVar47 + -0x20) = unaff_R13._dateData;
                *(MethodInfo ***)((long)ppSVar47 + -0x28) = &TypeInfo_ChatManager;
                *(System_String_array **)((long)ppSVar47 + -0x30) = pSVar38;
                *(System_String_array **)((long)ppSVar47 + -0x38) = pSVar39;
                if (g_data_057aef84 == '\0') {
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e887;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e893;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e89f;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8ab;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8b7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8c3;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8cf;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8db;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8e7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8f3;
                  il2cpp_runtime_helper_023445d0(&" not found, try /help to see a list of commands.");
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8ff;
                  il2cpp_runtime_helper_023445d0(&"Command ");
                  g_data_057aef84 = '\x01';
                }
                *(undefined8 *)((long)ppSVar47 + -0x38) = 0;
                ppMVar20 = &TypeInfo_ChatManager;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e926;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar39 = (System_String_array *)unaff_R13._dateData;
                if (pSVar36 == (System_String_array *)0x0) goto label_0454ed3e;
                parameters = pSVar38;
                if (*(int *)&pSVar36->max_length == 0) {
label_0454ed43:
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed48;
                  il2cpp_runtime_helper_022b2ca0();
                  pSVar39 = (System_String_array *)unaff_R13._dateData;
                }
                else {
                  pSVar29 = pSVar36->m_Items[0];
                  if (pSVar29 == (System_String_o *)0x0) {
label_0454ed3e:
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed43;
                    il2cpp_runtime_helper_022b2c90();
                    parameters = pSVar38;
                    unaff_R13._dateData = (uint64_t)pSVar39;
                    goto label_0454ed43;
                  }
                  parameters = *(System_String_array **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x70);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e95e;
                  pSVar29 = System_String__ToLower(pSVar29,(MethodInfo *)0x0);
                  pSVar38 = parameters;
                  if (parameters == (System_String_array *)0x0) goto label_0454ed3e;
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e97f;
                  bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                     ((System_Collections_Generic_Dictionary_object__object__o *)parameters,
                                      (Il2CppObject *)pSVar29,(Il2CppObject **)((long)ppSVar47 + -0x38),
                                      MethodInfo_Boolean_TryGetValue);
                  lVar40 = MethodInfo_String_Empty_String;
                  if ((char)bVar10 == '\0') {
                    if (*(int *)&pSVar36->max_length != 0) {
                      pSVar29 = pSVar36->m_Items[0];
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea69;
                      pSVar29 = System_String__Concat_3af7150
                                          ("Command ",pSVar29," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea7d;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)ppSVar47 + -0x50) = 0;
                      *(undefined8 *)((long)ppSVar47 + -0x58) = 0xffffffffffffffff;
                      *(undefined8 *)((long)ppSVar47 + -0x60) = 0;
                      *(undefined8 *)((long)ppSVar47 + -0x68) = 0;
                      *(undefined8 *)((long)ppSVar47 + -0x70) = 0x454eaac;
                      GameManagers_ChatManager__AddLine
                                (pSVar29,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,
                                 *(bool_conflict *)((long)ppSVar47 + -0x68),
                                 *(bool_conflict *)((long)ppSVar47 + -0x60),
                                 *(int32_t *)((long)ppSVar47 + -0x58),
                                 *(bool_conflict *)((long)ppSVar47 + -0x50),
                                 *(MethodInfo **)((long)ppSVar47 + -0x48));
                      return;
                    }
                    goto label_0454ed43;
                  }
                  pSVar38 = *(System_String_array **)((long)ppSVar47 + -0x38);
                  if (pSVar38 == (System_String_array *)0x0) goto label_0454ed3e;
                  pIVar32 = (pSVar38->obj).klass;
                  bVar3 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
                  if ((bVar3 <= (pIVar32->_2).naturalAligment) &&
                     ((pIVar32->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CLCommandAttribute)) {
                    if (*(int *)&pSVar36->max_length < 2) {
                      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ecf5;
                        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
                        lVar41 = *(long *)(*(long *)(lVar40 + 0x38) + 0x10);
                        if ((*(byte *)(lVar41 + 0x135) & 1) == 0) goto label_0454ed0a;
label_0454ebb7:
                        if (*(int *)(lVar41 + 0xe4) != 0) goto label_0454ebc4;
label_0454ed1f:
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed24;
                        il2cpp_runtime_helper_02337ed0();
                        lVar40 = *(long *)(*(long *)(lVar40 + 0x38) + 0x10);
                        bVar3 = *(byte *)(lVar40 + 0x135);
                      }
                      else {
                        lVar41 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
                        if ((*(byte *)(lVar41 + 0x135) & 1) != 0) goto label_0454ebb7;
label_0454ed0a:
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed0f;
                        lVar41 = il2cpp_runtime_helper_023009c0();
                        if (*(int *)(lVar41 + 0xe4) == 0) goto label_0454ed1f;
label_0454ebc4:
                        lVar40 = *(long *)(*(long *)(lVar40 + 0x38) + 0x10);
                        bVar3 = *(byte *)(lVar40 + 0x135);
                      }
                      if ((bVar3 & 1) == 0) {
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ebdd;
                        lVar40 = il2cpp_runtime_helper_023009c0(lVar40);
                      }
                      ppMVar56 = (MethodInfo **)**(undefined8 **)(lVar40 + 0xb8);
                      iVar14 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
                    }
                    else {
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb65;
                      pSVar42 = System_Linq_Enumerable__Skip_object_
                                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar36,1,
                                           MethodInfo_IEnumerable_1_System_String_Skip_String);
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb77;
                      ppMVar56 = (MethodInfo **)System_Linq_Enumerable__ToArray_object_(pSVar42,MethodInfo_String_ToArray_String);
                      iVar14 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
                    }
                    if (iVar14 == 0) {
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ebff;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    __this_07 = *(MethodInfo ***)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_07 ==
                        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      return;
                    }
                    ppMVar20 = (MethodInfo **)pSVar38->m_Items[5];
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec2e;
                    pSVar39 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
                    parameters = pSVar38;
                    if (*(int *)&pSVar36->max_length == 0) goto label_0454ed43;
                    if (pSVar39 == (System_String_array *)0x0) goto label_0454ed3e;
                    parameters = (System_String_array *)pSVar36->m_Items[0];
                    if (parameters != (System_String_array *)0x0) {
                      pIVar32 = (((pSVar39->obj).klass)->_1).element_class;
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec5d;
                      lVar40 = il2cpp_runtime_helper_023051f0(parameters,pIVar32);
                      if (lVar40 == 0) goto label_0454ed48;
                    }
                    unaff_R13._dateData = (uint64_t)pSVar39;
                    if ((int)pSVar39->max_length == 0) goto label_0454ed43;
                    pSVar39->m_Items[0] = (System_String_o *)parameters;
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec81;
                    il2cpp_runtime_helper_022b4080(pSVar39->m_Items,parameters);
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec90;
                    parameters = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eca0;
                    CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
                              ((CustomLogic_CustomLogicListBuiltin_o *)parameters,
                               (System_Object_array *)ppMVar56,(MethodInfo *)0x0);
                    if (parameters != (System_String_array *)0x0) {
                      pIVar32 = (((pSVar39->obj).klass)->_1).element_class;
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ecb5;
                      lVar40 = il2cpp_runtime_helper_023051f0(parameters,pIVar32);
                      if (lVar40 == 0) goto label_0454ed48;
                    }
                    if (1 < (uint)pSVar39->max_length) {
                      pSVar39->m_Items[1] = (System_String_o *)parameters;
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ecd8;
                      il2cpp_runtime_helper_022b4080(pSVar39->m_Items + 1,parameters);
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ece8;
                      CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                                ((CustomLogic_CustomLogicEvaluator_o *)__this_07,
                                 (CustomLogic_UserMethod_o *)ppMVar20,(System_Object_array *)pSVar39,
                                 (MethodInfo *)0x0);
                      return;
                    }
                    goto label_0454ed43;
                  }
                  __this_07 = (MethodInfo **)pSVar38->m_Items[1];
                  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_07 ==
                      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_0454ed3e;
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e9d9;
                  bVar10 = System_Reflection_MethodBase__get_IsStatic
                                     ((System_Reflection_MethodBase_o *)__this_07,(MethodInfo *)0x0);
                  if ((char)bVar10 == '\0') {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eac6;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppMVar20 = *(MethodInfo ***)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eae8;
                    parameters = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
                    if (parameters == (System_String_array *)0x0) goto label_0454ed3e;
                    pIVar32 = (((parameters->obj).klass)->_1).element_class;
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb03;
                    lVar40 = il2cpp_runtime_helper_023051f0(pSVar36,pIVar32);
                    if (lVar40 != 0) {
                      if (*(int *)&parameters->max_length != 0) {
                        parameters->m_Items[0] = (System_String_o *)pSVar36;
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb29;
                        il2cpp_runtime_helper_022b4080(parameters->m_Items,pSVar36);
                        goto label_0454eb2f;
                      }
                      goto label_0454ed43;
                    }
                  }
                  else {
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e9f5;
                    parameters = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
                    if (parameters == (System_String_array *)0x0) goto label_0454ed3e;
                    pIVar32 = (((parameters->obj).klass)->_1).element_class;
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea10;
                    lVar40 = il2cpp_runtime_helper_023051f0(pSVar36,pIVar32);
                    if (lVar40 != 0) {
                      if (*(int *)&parameters->max_length != 0) {
                        parameters->m_Items[0] = (System_String_o *)pSVar36;
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea36;
                        il2cpp_runtime_helper_022b4080(parameters->m_Items);
                        ppMVar20 = (MethodInfo **)0x0;
label_0454eb2f:
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb39;
                        System_Reflection_MethodBase__Invoke
                                  ((System_Reflection_MethodBase_o *)__this_07,(Il2CppObject *)ppMVar20,
                                   (System_Object_array *)parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_0454ed43;
                    }
                  }
                }
label_0454ed48:
                *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed4d;
                pSVar29 = (System_String_o *)il2cpp_runtime_helper_0231b270();
                *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed57;
                uVar23 = il2cpp_runtime_helper_022b2b10(pSVar29,0);
                *(System_String_array **)((long)ppSVar47 + -0x40) = pSVar36;
                *(MethodInfo ***)((long)ppSVar47 + -0x48) = ppMVar20;
                *(MethodInfo ***)((long)ppSVar47 + -0x50) = __this_07;
                *(System_String_array **)((long)ppSVar47 + -0x58) = pSVar39;
                *(MethodInfo ***)((long)ppSVar47 + -0x60) = ppMVar56;
                *(System_String_array **)((long)ppSVar47 + -0x68) = parameters;
                *(undefined8 *)((long)ppSVar47 + -0x70) = uVar23;
                if (g_data_057aef82 == '\0') {
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ed87;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ed93;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ed9f;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edab;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edb7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edc3;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edcf;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Item);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eddb;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ede7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edf3;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ProcessMentions_b__0);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edff;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass93_0);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee0b;
                  il2cpp_runtime_helper_023445d0(&"@");
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee17;
                  il2cpp_runtime_helper_023445d0(&"");
                  g_data_057aef82 = '\x01';
                }
                if (pSVar29 == (System_String_o *)0x0) goto label_0454f2d9;
                *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee36;
                iVar14 = System_String__IndexOf(pSVar29,0x40,(MethodInfo *)0x0);
                if (iVar14 == -1) {
                  return;
                }
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee5b;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
                if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
                *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee7d;
                System_Text_StringBuilder__Clear(pSVar30,(MethodInfo *)0x0);
                pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
                if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
                *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eea2;
                System_Text_StringBuilder__Append_3b03f90(pSVar30,pSVar29,(MethodInfo *)0x0);
                goto label_0454eeda;
              }
            }
          }
        }
label_0454d5f4:
        il2cpp_runtime_helper_022b2c90();
label_0454d5f9:
        bVar10 = 0;
        cVar9 = '\0';
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454d4a2;
label_0454d648:
        il2cpp_runtime_helper_02337ed0();
        pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
      } while( true );
    }
  }
  return;
  while( true ) {
    uStack_1c8 = 0x43bfe7f;
    pUVar18 = (UnityEngine_GameObject_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar51,iVar45,MethodInfo_GameObject_get_Item);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) break;
    uStack_1c8 = 0x43bfe94;
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) break;
    uStack_1c8 = 0x43bfea7;
    UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar19,(MethodInfo *)0x0);
    uStack_1c0._4_4_ = uStack_1c0._4_4_ + UVar8.fields.y;
    iVar45 = iVar45 + 1;
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bfe70:
    if ((pSVar51->fields)._size <= iVar45) {
      uStack_1c0._4_4_ = uStack_1c0._4_4_ - (float)iVar14;
      if (uStack_1c0._4_4_ <= 0.0) {
        return;
      }
      if (pSVar51 != (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bff10;
      break;
    }
  }
  goto label_043bffb8;
label_0454eeda:
  do {
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eee3;
    __this_03 = (GameManagers_ChatManager___c__DisplayClass93_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass93_0);
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eef0;
    GameManagers_ChatManager___c__DisplayClass93_0___ctor(__this_03,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef02;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    if (plVar52 == (long *)0x0) goto label_0454f2d9;
    uVar23 = *(undefined8 *)(*plVar52 + 0x170);
    pcVar6 = *(code **)(*plVar52 + 0x168);
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef2d;
    pSVar29 = (System_String_o *)(*pcVar6)(plVar52,uVar23);
    if (pSVar29 == (System_String_o *)0x0) goto label_0454f2d9;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef48;
    iVar45 = System_String__IndexOf_3afbe50(pSVar29,0x20,iVar14,(MethodInfo *)0x0);
    if (iVar45 == -1) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef92;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454efb4;
      iVar45 = System_Text_StringBuilder__get_Length(pSVar30,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454efc3;
label_0454ef5c:
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    }
    else {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454ef5c;
label_0454efc3:
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454efc8;
      il2cpp_runtime_helper_02337ed0();
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    }
    if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eff7;
    pSVar29 = System_Text_StringBuilder__ToString_3b032f0
                        (pSVar30,iVar14 + 1,(iVar45 - iVar14) + -1,(MethodInfo *)0x0);
    if (__this_03 == (GameManagers_ChatManager___c__DisplayClass93_0_o *)0x0) goto label_0454f2d9;
    (__this_03->fields).mention = pSVar29;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f013;
    il2cpp_runtime_helper_022b4080(&__this_03->fields);
    pSVar29 = (__this_03->fields).mention;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f01e;
    bVar10 = System_String__IsNullOrWhiteSpace(pSVar29,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0a8;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0af;
      source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0c1;
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0db;
      System_Func_object__bool____ctor();
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0f0;
      pSVar42 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player)
      ;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f102;
      __this_04 = System_Linq_Enumerable__ToList_object_(pSVar42,MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
      if (__this_04 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0454f2d9;
      if ((__this_04->fields)._size != 1) {
        iVar45 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
        goto joined_r0x0454f02d;
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f130;
      pPVar43 = (Photon_Realtime_Player_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_04,0,MethodInfo_Player_get_Item);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f14e;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar29 = (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f16f;
      pSVar29 = PhotonExtensions__GetStringProperty(pPVar43,pSVar29,"",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f18a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f194;
      pSVar29 = Anticheat_ChatFilter__FilterSizeTag(pSVar29,(MethodInfo *)0x0);
      ppSVar44 = &"@";
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1a8;
      pSVar29 = System_String__Concat_3ae5ba0("@",pSVar29,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1bd;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1cc;
      pSVar29 = GameManagers_ChatManager__GetColorString(pSVar29,2,0,(MethodInfo *)ppSVar44);
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1f6;
      pSVar30 = System_Text_StringBuilder__Remove(pSVar30,iVar14,iVar45 - iVar14,(MethodInfo *)0x0);
      if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f20f;
      System_Text_StringBuilder__Insert(pSVar30,iVar14,pSVar29,(MethodInfo *)0x0);
      plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (plVar52 == (long *)0x0) goto label_0454f2d9;
      uVar23 = *(undefined8 *)(*plVar52 + 0x170);
      pcVar6 = *(code **)(*plVar52 + 0x168);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f23a;
      pSVar21 = (System_String_o *)(*pcVar6)(plVar52,uVar23);
      if ((pSVar29 == (System_String_o *)0x0) || (pSVar21 == (System_String_o *)0x0)) goto label_0454f2d9;
      iVar45 = (pSVar29->fields)._stringLength;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eec6;
      iVar14 = System_String__IndexOf_3afbe50(pSVar21,0x40,iVar14 + iVar45,(MethodInfo *)0x0);
    }
    else {
      iVar45 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0454f02d:
      if (iVar45 == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f034;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (plVar52 == (long *)0x0) goto label_0454f2d9;
      uVar23 = *(undefined8 *)(*plVar52 + 0x170);
      pcVar6 = *(code **)(*plVar52 + 0x168);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f05f;
      pSVar29 = (System_String_o *)(*pcVar6)(plVar52,uVar23);
      if (pSVar29 == (System_String_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f07a;
      iVar14 = System_String__IndexOf_3afbe50(pSVar29,0x40,iVar14 + 1,(MethodInfo *)0x0);
    }
  } while (iVar14 != -1);
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f28f;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
  if (plVar52 != (long *)0x0) {
    (**(code **)(*plVar52 + 0x168))(plVar52,*(undefined8 *)(*plVar52 + 0x170));
    return;
  }
label_0454f2d9:
  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f2de;
  il2cpp_runtime_helper_022b2c90();
  return;
  while( true ) {
    uStack_1c8 = 0x43bff39;
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) break;
    uStack_1c8 = 0x43bff48;
    UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar19,(MethodInfo *)0x0);
    uStack_1c0._4_4_ = uStack_1c0._4_4_ - UVar8.fields.y;
    if (uStack_1c0._4_4_ <= 0.0) {
      return;
    }
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    uStack_1c8 = 0x43bff78;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar51,0,MethodInfo_GameObject_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_1c8 = 0x43bff8d;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1c8 = 0x43bff97;
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    uStack_1c8 = 0x43bffab;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar51,0,MethodInfo_Void_RemoveAt);
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bff10:
    if ((pSVar51->fields)._size < 1) {
      return;
    }
    uStack_1c8 = 0x43bff24;
    pUVar18 = (UnityEngine_GameObject_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar51,0,MethodInfo_GameObject_get_Item);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) break;
  }
label_043bffb8:
  uStack_1c8 = 0x43bffbd;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.DebugConsole$$LogCustomLogic
// il2cpp: void ApplicationManagers_DebugConsole__LogCustomLogic (System_String_o* message, bool showInChat, const MethodInfo* method);
// 0x44b1110

void ApplicationManagers_DebugConsole__LogCustomLogic
               (System_String_o *message,bool_conflict showInChat,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  byte bVar3;
  Photon_Pun_PhotonView_o *__this;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  code *pcVar6;
  undefined8 uVar7;
  UnityEngine_Vector2_o UVar8;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  char cVar9;
  undefined4 extraout_EAX;
  bool_conflict bVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  int iVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *pMVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  float extraout_var;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_RectTransform_o *pUVar19;
  UnityEngine_Object_o *obj;
  MethodInfo **ppMVar20;
  System_String_o *pSVar21;
  UnityEngine_Transform_o *pUVar22;
  undefined8 uVar23;
  System_Collections_Generic_Dictionary_int__object__o *pSVar24;
  System_String_o *pSVar25;
  System_Object_array *pSVar26;
  System_String_o *pSVar27;
  Il2CppObject *pIVar28;
  System_String_o *pSVar29;
  System_Text_StringBuilder_o *pSVar30;
  MethodInfo *pMVar31;
  UI_ChatPanel_o *__this_02;
  Il2CppClass *pIVar32;
  Il2CppObject *pIVar33;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar34;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar35;
  undefined4 extraout_var_00;
  System_String_array *pSVar36;
  char *pcVar37;
  System_String_array *pSVar38;
  System_String_array *pSVar39;
  System_String_array *parameters;
  long lVar40;
  long lVar41;
  GameManagers_ChatManager___c__DisplayClass93_0_o *__this_03;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar42;
  System_Collections_Generic_List_TSource__o *__this_04;
  Photon_Realtime_Player_o *pPVar43;
  MethodInfo_37E4C90 *method_00;
  System_String_o **ppSVar44;
  MethodInfo_362BED0 **method_01;
  int32_t color;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  int iVar45;
  System_String_array **ppSVar46;
  System_String_array **ppSVar47;
  uint uVar48;
  ulong unaff_RBP;
  ulong uVar49;
  System_DateTime_Fields SVar50;
  System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *__this_05;
  System_Collections_Generic_List_GameObject__o *pSVar51;
  long *plVar52;
  Photon_Realtime_Player_o *player;
  System_String_o **message_00;
  System_Collections_Generic_List_int__o *__this_06;
  undefined8 in_R8;
  int32_t iVar53;
  undefined8 in_R9;
  Il2CppClass **ppIVar54;
  Il2CppClass **ppIVar55;
  MethodInfo **ppMVar56;
  System_DateTime_Fields unaff_R13;
  MethodInfo **__this_07;
  System_String_o **ppSVar57;
  UnityEngine_Color_o UVar58;
  System_Nullable_DateTime__o timestamp;
  System_Nullable_DateTime__o __this_08;
  MethodInfo *in_stack_fffffffffffffcf8;
  MethodInfo *in_stack_fffffffffffffd40;
  int32_t iStack_2a8;
  int32_t iStack_2a4;
  undefined8 uStack_2a0;
  System_String_o *pSStack_298;
  System_String_o *apSStack_290 [2];
  System_DateTime_o SStack_280;
  Photon_Realtime_Player_o *pPStack_278;
  System_DateTime_o *pSStack_270;
  System_String_array *pSStack_268;
  Photon_Realtime_Player_o *pPStack_260;
  System_String_o *pSStack_258;
  ulong uStack_250;
  MethodInfo *in_stack_fffffffffffffdb8;
  MethodInfo *in_stack_fffffffffffffde0;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  System_DateTime_o SStack_208;
  Photon_Realtime_Player_o *pPStack_200;
  System_DateTime_Fields SStack_1f8;
  System_String_array *pSStack_1f0;
  System_Object_array *pSStack_1e8;
  System_String_array *pSStack_1e0;
  Photon_Pun_PhotonView_o *pPStack_1d8;
  System_String_o *pSStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_1b8;
  System_String_array *pSStack_1b0;
  System_String_array *pSStack_1a8;
  MethodInfo *in_stack_fffffffffffffe80;
  System_String_o *pSStack_170;
  MethodInfo *pMStack_168;
  Il2CppClass *pIStack_160;
  Il2CppClass *pIStack_158;
  MethodInfo *pMStack_150;
  int32_t iStack_13c;
  System_String_array *pSStack_138;
  Il2CppMethodPointer pIStack_130;
  System_String_o *pSStack_128;
  System_String_o *pSStack_120;
  Il2CppClass *pIStack_118;
  System_String_o *pSStack_110;
  Il2CppType **ppIStack_108;
  undefined1 auStack_100 [16];
  Il2CppClass *pIStack_f0;
  System_String_o *pSStack_e8;
  Il2CppClass *pIStack_e0;
  System_String_o *pSStack_d8;
  Il2CppType **ppIStack_d0;
  Il2CppClass *pIStack_c8;
  MethodInfo *pMStack_c0;
  Il2CppClass **ppIStack_b8;
  uint64_t uStack_b0;
  MethodInfo **ppMStack_a8;
  System_String_o **ppSStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  uint uVar59;
  ulong uStack_88;
  int32_t iStack_84;
  MethodInfo *in_stack_ffffffffffffff98;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (g_data_057aea07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"[Custom Logic Error] ");
    g_data_057aea07 = '\x01';
  }
  pSVar25 = System_String__Concat_3ae5ba0("[Custom Logic Error] ",message,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
  if ((char)showInChat != '\0') {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    else {
      bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    if (cVar9 != '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aef79 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
        g_data_057aef79 = '\x01';
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      else {
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      if (iVar14 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar15 = *(System_Collections_Generic_List_object__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28)
        ;
      }
      else {
        pSVar15 = *(System_Collections_Generic_List_object__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28)
        ;
      }
      if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_0454d5f4;
      if ((pSVar15->fields)._size < 1) goto label_0454d5f9;
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar15 = *(System_Collections_Generic_List_object__o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28)
        ;
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_0454d5f4;
      }
      pSVar25 = (System_String_o *)
                System_Collections_Generic_List_object___get_Item
                          (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_String_get_Item);
      if (pSVar25 == (System_String_o *)0x0) goto label_0454d5f4;
      bVar10 = 0;
      cVar9 = '\0';
      bVar11 = System_String__Contains
                         (pSVar25,*(System_String_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x78),
                          (MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      else {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = System_String__op_Equality
                           (*(System_String_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x78),message,
                            (MethodInfo *)0x0);
        cVar9 = (char)bVar10;
        iVar14 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
      }
      if (iVar14 == 0) goto label_0454d648;
label_0454d4a2:
      pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
      cVar9 = (char)bVar10;
      do {
        if (cVar9 == '\0') {
          *(System_String_o **)(pIVar5 + 0x78) = message;
          il2cpp_runtime_helper_022b4080(pIVar5 + 0x78,message);
          *(undefined4 *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x80) = 0;
          GameManagers_ChatManager__AddLine
                    (message,4,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_stack_ffffffffffffffd8
                    );
          return;
        }
        *(int *)(pIVar5 + 0x80) = *(int *)(pIVar5 + 0x80) + 1;
        if (*(System_Text_StringBuilder_o **)(pIVar5 + 0x90) != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Clear(*(System_Text_StringBuilder_o **)(pIVar5 + 0x90),(MethodInfo *)0x0)
          ;
          if (((*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x90) !=
                (System_Text_StringBuilder_o *)0x0) &&
              (pSVar30 = System_Text_StringBuilder__Append_3b03f90
                                   (*(System_Text_StringBuilder_o **)
                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x90),message,(MethodInfo *)0x0),
              pSVar30 != (System_Text_StringBuilder_o *)0x0)) &&
             (pSVar30 = System_Text_StringBuilder__Append_3b048f0(pSVar30,0x28,(MethodInfo *)0x0),
             pSVar30 != (System_Text_StringBuilder_o *)0x0)) {
            ppSVar44 = (System_String_o **)TypeInfo_ChatManager[2].virtualMethodPointer;
            pSVar30 = System_Text_StringBuilder__Append_3b04980
                                (pSVar30,*(int32_t *)&(((Il2CppClass *)ppSVar44)->_1).fields,(MethodInfo *)0x0
                                );
            if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_3b048f0(pSVar30,0x29,(MethodInfo *)0x0);
              iVar53 = (int32_t)in_R9;
              uVar13 = (uint)in_R8;
              plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x90);
              if (plVar52 != (long *)0x0) {
                pSVar25 = (System_String_o *)
                          (**(code **)(*plVar52 + 0x168))(plVar52,*(undefined8 *)(*plVar52 + 0x170));
                pSVar25 = GameManagers_ChatManager__GetColorString(pSVar25,4,0,(MethodInfo *)ppSVar44);
                SVar50._dateData = (uint64_t)&g_data_00000004;
                ppIVar54 = (Il2CppClass **)0x1;
                if (g_data_057aef7a == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057aef7a = '\x01';
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454da01;
label_0454d6fb:
                  lVar40 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                }
                else {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454d6fb;
label_0454da01:
                  il2cpp_runtime_helper_02337ed0();
                  lVar40 = *(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                }
                message_00 = (System_String_o **)TypeInfo_ChatManager;
                ppIVar55 = (Il2CppClass **)0x1;
                if (lVar40 != 0) {
                  if (*(int *)(lVar40 + 0x18) < 1) {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uStack_88 = 0;
                    uStack_90 = 0x454da5c;
                    GameManagers_ChatManager__AddLine
                              (pSVar25,4,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                               in_stack_ffffffffffffff98);
                    return;
                  }
                  if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  unaff_R13._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  message_00 = (System_String_o **)TypeInfo_ChatManager;
                  ppIVar55 = (Il2CppClass **)0x1;
                  if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) != 0) {
                    uVar48 = *(uint *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) + 0x18);
                    unaff_RBP = (ulong)uVar48;
                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar25 = Anticheat_ChatFilter__FilterSizeTag(pSVar25,(MethodInfo *)0x0);
                    SVar50._dateData = 0;
                    pMVar31 = (MethodInfo *)Anticheat_ChatFilter__FilterBadWords(pSVar25,(MethodInfo *)0x0);
                    message_00 = (System_String_o **)0x0;
                    if (*(System_Collections_Generic_List_object__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28) !=
                        (System_Collections_Generic_List_object__o *)0x0) {
                      uVar48 = uVar48 - 1;
                      unaff_RBP = (ulong)uVar48;
                      SVar50._dateData = (uint64_t)uVar48;
                      ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                      System_Collections_Generic_List_object___set_Item
                                (*(System_Collections_Generic_List_object__o **)
                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28),uVar48,(Il2CppObject *)pMVar31
                                 ,(MethodInfo_362BF10 *)MethodInfo_Void_set_Item);
                      message_00 = (System_String_o **)0x0;
                      ppIVar55 = ppIVar54;
                      if (*(System_Collections_Generic_List_T__o **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38) !=
                          (System_Collections_Generic_List_T__o *)0x0) {
                        SVar50._dateData = (uint64_t)uVar48;
                        ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                        System_Collections_Generic_List_Int32Enum___set_Item
                                  (*(System_Collections_Generic_List_T__o **)
                                    (TypeInfo_ChatManager[2].virtualMethodPointer + 0x38),uVar48,4,
                                   (MethodInfo_3600D10 *)MethodInfo_Void_set_Item);
                        message_00 = (System_String_o **)0x0;
                        if (*(System_Collections_Generic_List_bool__o **)
                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40) !=
                            (System_Collections_Generic_List_bool__o *)0x0) {
                          SVar50._dateData = (uint64_t)uVar48;
                          ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                          System_Collections_Generic_List_bool___set_Item
                                    (*(System_Collections_Generic_List_bool__o **)
                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 0x40),uVar48,1,
                                     (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                          message_00 = (System_String_o **)0x0;
                          if (*(System_Collections_Generic_List_DateTime__o **)
                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                              (System_Collections_Generic_List_DateTime__o *)0x0) {
                            SVar50._dateData = (uint64_t)uVar48;
                            ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                            System_Collections_Generic_List_DateTime___set_Item
                                      (*(System_Collections_Generic_List_DateTime__o **)
                                        (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),uVar48,
                                       (System_DateTime_o)unaff_R13._dateData,
                                       (MethodInfo_358EB60 *)MethodInfo_Void_set_Item);
                            message_00 = (System_String_o **)0x0;
                            if (*(System_Collections_Generic_List_int__o **)
                                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30) !=
                                (System_Collections_Generic_List_int__o *)0x0) {
                              ppIVar55 = &MethodInfo_Void_set_Item;
                              SVar50._dateData = (uint64_t)uVar48;
                              ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                              System_Collections_Generic_List_int___set_Item
                                        (*(System_Collections_Generic_List_int__o **)
                                          (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30),uVar48,-1,
                                         (MethodInfo_35FDD20 *)MethodInfo_Void_set_Item);
                              message_00 = (System_String_o **)0x0;
                              if (*(System_Collections_Generic_List_bool__o **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                                  (System_Collections_Generic_List_bool__o *)0x0) {
                                SVar50._dateData = (uint64_t)uVar48;
                                ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                                System_Collections_Generic_List_bool___set_Item
                                          (*(System_Collections_Generic_List_bool__o **)
                                            (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),uVar48,0,
                                           (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                                message_00 = (System_String_o **)0x0;
                                if (*(System_Collections_Generic_List_bool__o **)
                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58) !=
                                    (System_Collections_Generic_List_bool__o *)0x0) {
                                  SVar50._dateData = (uint64_t)uVar48;
                                  ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                                  System_Collections_Generic_List_bool___set_Item
                                            (*(System_Collections_Generic_List_bool__o **)
                                              (TypeInfo_ChatManager[2].virtualMethodPointer + 0x58),uVar48,0,
                                             (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                                  message_00 = (System_String_o **)0x0;
                                  if (*(System_Collections_Generic_List_bool__o **)
                                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8) !=
                                      (System_Collections_Generic_List_bool__o *)0x0) {
                                    SVar50._dateData = (uint64_t)uVar48;
                                    ppSVar44 = (System_String_o **)MethodInfo_Void_set_Item;
                                    System_Collections_Generic_List_bool___set_Item
                                              (*(System_Collections_Generic_List_bool__o **)
                                                (TypeInfo_ChatManager[2].virtualMethodPointer + 0xb8),uVar48,0,
                                               (MethodInfo_357C350 *)MethodInfo_Void_set_Item);
                                    message_00 = (System_String_o **)0x0;
                                    if (*(System_Collections_Generic_List_int__o **)
                                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0xc0) !=
                                        (System_Collections_Generic_List_int__o *)0x0) {
                                      SVar50._dateData = (uint64_t)uVar48;
                                      System_Collections_Generic_List_int___set_Item
                                                (*(System_Collections_Generic_List_int__o **)
                                                  (TypeInfo_ChatManager[2].virtualMethodPointer + 0xc0),uVar48,-1,
                                                 (MethodInfo_35FDD20 *)MethodInfo_Void_set_Item);
                                      ppSVar44 = (System_String_o **)TypeInfo_ChatManager[2].virtualMethodPointer;
                                      pMVar16 = (MethodInfo *)(((Il2CppClass *)ppSVar44)->_2).typeHierarchy;
                                      message_00 = (System_String_o **)0x0;
                                      if (pMVar16 != (MethodInfo *)0x0) {
                                        if ((int)uVar48 < *(int *)&pMVar16->name) {
                                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                            il2cpp_runtime_helper_02337ed0(TypeInfo_ChatManager);
                                            pMVar16 = *(MethodInfo **)
                                                       (TypeInfo_ChatManager[2].virtualMethodPointer + 200);
                                            message_00 = (System_String_o **)0x0;
                                            if (pMVar16 == (MethodInfo *)0x0) goto label_0454db85;
                                          }
                                          System_Collections_Generic_List_ChatManager_ChatPlayerLineData___set_Item
                                                    ((System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o
                                                      *)pMVar16,uVar48,
                                                     (GameManagers_ChatManager_ChatPlayerLineData_o)ZEXT824(0)
                                                     ,MethodInfo_Void_set_Item);
                                        }
                                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                          pMVar16 = TypeInfo_ChatManager;
                                          il2cpp_runtime_helper_02337ed0();
                                          bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar16);
                                          cVar9 = (char)bVar10;
                                          pMVar16 = TypeInfo_ChatManager;
                                          message_00 = (System_String_o **)pMVar31;
                                        }
                                        else {
                                          bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar16);
                                          cVar9 = (char)bVar10;
                                          pMVar16 = TypeInfo_ChatManager;
                                          message_00 = (System_String_o **)pMVar31;
                                        }
                                        if (cVar9 == '\0') {
                                          TypeInfo_ChatManager = pMVar16;
                                          return;
                                        }
                                        TypeInfo_ChatManager = pMVar16;
                                        if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        __this_02 = GameManagers_ChatManager__GetChatPanel(pMVar16);
                                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        bVar10 = UnityEngine_Object__op_Inequality
                                                           ((UnityEngine_Object_o *)__this_02,
                                                            (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                        if ((char)bVar10 == '\0') {
                                          return;
                                        }
                                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        SVar50._dateData = unaff_R13._dateData;
                                        pSVar25 = GameManagers_ChatManager__GetFormattedMessage
                                                            ((System_String_o *)message_00,
                                                             (System_DateTime_o)unaff_R13._dateData,0,
                                                             (MethodInfo *)ppSVar44);
                                        if (__this_02 != (UI_ChatPanel_o *)0x0) {
                                          UI_ChatPanel__ReplaceLastLine(__this_02,pSVar25,(MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
label_0454db85:
                il2cpp_runtime_helper_022b2c90();
                ppIVar54 = (Il2CppClass **)(SVar50._dateData & 0xffffffff);
                if (g_data_057aef7d == '\0') {
                  uStack_98 = 0x454dbb5;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  uStack_98 = 0x454dbc1;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                  uStack_98 = 0x454dbcd;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                  uStack_98 = 0x454dbd9;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
                  uStack_98 = 0x454dbe5;
                  il2cpp_runtime_helper_023445d0(&"] ");
                  message_00 = &"D2";
                  uStack_98 = 0x454dbf1;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057aef7d = '\x01';
                }
                uStack_88 = (ulong)uVar59;
                lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                ppSVar57 = (System_String_o **)&g_data_00000004;
                if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x178), lVar40 != 0)) {
                  if ((*(char *)(lVar40 + 0x11) == '\0') || ((char)ppIVar54 != '\0')) {
                    return;
                  }
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    uStack_98 = 0x454dc61;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  message_00 = (System_String_o **)0x0;
                  if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98) !=
                      (System_Text_StringBuilder_o *)0x0) {
                    uStack_98 = 0x454dc82;
                    System_Text_StringBuilder__Clear
                              (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98),
                               (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                      uStack_98 = 0x454dc9a;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    SVar50._dateData = 0;
                    uStack_98 = 0x454dca6;
                    System_DateTime__ToLocalTime
                              ((System_DateTime_o)&stack0xffffffffffffff88,(MethodInfo *)0x0);
                    message_00 = (System_String_o **)0x0;
                    ppSVar57 = (System_String_o **)&g_data_00000004;
                    if (*(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98) !=
                        (System_Text_StringBuilder_o *)0x0) {
                      uStack_98 = 0x454dcd1;
                      ppIVar54 = (Il2CppClass **)
                                 System_Text_StringBuilder__Append_3b048f0
                                           (*(System_Text_StringBuilder_o **)
                                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x98),0x5b,
                                            (MethodInfo *)0x0);
                      uStack_98 = 0x454dce0;
                      iVar12 = System_DateTime__get_Hour
                                         ((System_DateTime_o)&stack0xffffffffffffff80,(MethodInfo *)0x0);
                      uStack_88 = CONCAT44(iVar12,uVar59);
                      ppSVar57 = &"D2";
                      message_00 = (System_String_o **)&iStack_84;
                      uStack_98 = 0x454dcfa;
                      SVar50._dateData = (uint64_t)"D2";
                      pSVar25 = System_Int32__ToString_3cb43b0
                                          ((int32_t)message_00,"D2",(MethodInfo *)0x0);
                      if ((MethodInfo *)ppIVar54 != (MethodInfo *)0x0) {
                        uStack_98 = 0x454dd10;
                        message_00 = (System_String_o **)ppIVar54;
                        pSVar30 = System_Text_StringBuilder__Append_3b03f90
                                            ((System_Text_StringBuilder_o *)ppIVar54,pSVar25,(MethodInfo *)0x0
                                            );
                        SVar50._dateData = (uint64_t)pSVar25;
                        if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
                          uStack_98 = 0x454dd28;
                          ppIVar54 = (Il2CppClass **)
                                     System_Text_StringBuilder__Append_3b048f0(pSVar30,0x3a,(MethodInfo *)0x0)
                          ;
                          uStack_98 = 0x454dd37;
                          iVar12 = System_DateTime__get_Minute
                                             ((System_DateTime_o)&stack0xffffffffffffff80,(MethodInfo *)0x0);
                          uStack_88 = CONCAT44(iVar12,uVar59);
                          message_00 = (System_String_o **)&iStack_84;
                          uStack_98 = 0x454dd4a;
                          SVar50._dateData = (uint64_t)"D2";
                          pSVar25 = System_Int32__ToString_3cb43b0
                                              ((int32_t)message_00,"D2",(MethodInfo *)0x0);
                          if ((MethodInfo *)ppIVar54 != (MethodInfo *)0x0) {
                            uStack_98 = 0x454dd5c;
                            message_00 = (System_String_o **)ppIVar54;
                            pSVar30 = System_Text_StringBuilder__Append_3b03f90
                                                ((System_Text_StringBuilder_o *)ppIVar54,pSVar25,
                                                 (MethodInfo *)0x0);
                            SVar50._dateData = (uint64_t)pSVar25;
                            if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
                              ppSVar44 = &"] ";
                              uStack_98 = 0x454dd75;
                              SVar50._dateData = (uint64_t)"] ";
                              System_Text_StringBuilder__Append_3b03f90
                                        (pSVar30,"] ",(MethodInfo *)0x0);
                              plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x98);
                              message_00 = (System_String_o **)0x0;
                              if (plVar52 != (long *)0x0) {
                                uStack_98 = 0x454dd9b;
                                pSVar25 = (System_String_o *)
                                          (**(code **)(*plVar52 + 0x168))
                                                    (plVar52,*(undefined8 *)(*plVar52 + 0x170));
                                uStack_98 = 0x454ddaa;
                                GameManagers_ChatManager__GetColorString(pSVar25,3,0,(MethodInfo *)ppSVar44);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uStack_98 = 0x454ddd3;
                il2cpp_runtime_helper_022b2c90();
                ppMStack_a8 = &TypeInfo_ChatManager;
                pUVar22 = (UnityEngine_Transform_o *)(SVar50._dateData & 0xffffffff);
                pMStack_c0 = (MethodInfo *)ppIVar54;
                ppIStack_b8 = ppIVar55;
                uStack_b0 = unaff_R13._dateData;
                ppSStack_a0 = ppSVar57;
                uStack_98 = unaff_RBP;
                if (g_data_057aef7c == '\0') {
                  pMStack_150 = (MethodInfo *)0x454de0f;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  pMStack_150 = (MethodInfo *)0x454de1b;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  pMStack_150 = (MethodInfo *)0x454de27;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  pMStack_150 = (MethodInfo *)0x454de33;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  pMStack_150 = (MethodInfo *)0x454de3f;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de4b;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_ChatManager_ChatPlayerLineData_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de57;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de63;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_DateTime_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de6f;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
                  pMStack_150 = (MethodInfo *)0x454de7b;
                  il2cpp_runtime_helper_023445d0(&": ");
                  pMStack_150 = (MethodInfo *)0x454de87;
                  il2cpp_runtime_helper_023445d0(&"[{0}] ");
                  g_data_057aef7c = '\x01';
                }
                pIStack_118 = (Il2CppClass *)0x0;
                pSStack_110 = (System_String_o *)0x0;
                pSStack_128 = (System_String_o *)0x0;
                pSStack_120 = (System_String_o *)0x0;
                pSStack_138 = (System_String_array *)0x0;
                pIStack_130 = (Il2CppMethodPointer)0x0;
                ppIStack_108 = (Il2CppType **)0x0;
                iVar14 = (int)SVar50._dateData;
                if (iVar14 < 0) {
label_0454dffe:
                  unaff_R13._dateData = **(undefined8 **)(g_data_057b9c00 + 0xb8);
label_0454e01b:
                  pMStack_150 = (MethodInfo *)0x454e022;
                  GameManagers_ChatManager_ChatDisplayLine__Plain
                            ((GameManagers_ChatManager_ChatDisplayLine_o *)auStack_100,
                             (System_String_o *)unaff_R13._dateData,(MethodInfo *)0x0);
                  ((MethodInfo *)message_00)->parameters = ppIStack_d0;
                  ((MethodInfo *)message_00)->klass = pIStack_e0;
                  ((MethodInfo *)message_00)->return_type = (Il2CppType *)pSStack_d8;
                  ((MethodInfo *)message_00)->invoker_method = (InvokerMethod)pIStack_f0;
                  ((MethodInfo *)message_00)->name = (char *)pSStack_e8;
                  ((MethodInfo *)message_00)->methodPointer =
                       (Il2CppMethodPointer)CONCAT44(auStack_100._4_4_,auStack_100._0_4_);
                  ((MethodInfo *)message_00)->virtualMethodPointer = (Il2CppMethodPointer)auStack_100._8_8_;
                  return;
                }
                ppMVar56 = &TypeInfo_ChatManager;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  pMStack_150 = (MethodInfo *)0x454deca;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = *(System_Collections_Generic_List_object__o **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                pMVar31 = TypeInfo_ChatManager;
                pIVar32 = (Il2CppClass *)&TypeInfo_ChatManager;
                if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
                  if ((pSVar15->fields)._size <= iVar14) goto label_0454dffe;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pMStack_150 = (MethodInfo *)0x454def9;
                    il2cpp_runtime_helper_02337ed0();
                    pSVar15 = *(System_Collections_Generic_List_object__o **)
                               (TypeInfo_ChatManager[2].virtualMethodPointer + 0x28);
                    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_0454e2a5;
                  }
                  method_01 = &MethodInfo_String_get_Item;
                  pMStack_150 = (MethodInfo *)0x454df25;
                  pIVar32 = (Il2CppClass *)
                            System_Collections_Generic_List_object___get_Item(pSVar15,iVar14,MethodInfo_String_get_Item);
                  ppSVar44 = (System_String_o **)method_01;
                  pMVar31 = (MethodInfo *)0x0;
                  if (*(System_Collections_Generic_List_DateTime__o **)
                       (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                      (System_Collections_Generic_List_DateTime__o *)0x0) {
                    pMStack_150 = (MethodInfo *)0x454df51;
                    ppIVar54 = (Il2CppClass **)
                               System_Collections_Generic_List_DateTime___get_Item
                                         (*(System_Collections_Generic_List_DateTime__o **)
                                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar14,MethodInfo_DateTime_get_Item);
                    ppSVar44 = (System_String_o **)method_01;
                    pMVar31 = (MethodInfo *)0x0;
                    if (*(System_Collections_Generic_List_bool__o **)
                         (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                        (System_Collections_Generic_List_bool__o *)0x0) {
                      pMStack_150 = (MethodInfo *)0x454df7d;
                      uVar48 = System_Collections_Generic_List_bool___get_Item
                                         (*(System_Collections_Generic_List_bool__o **)
                                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar14,MethodInfo_Boolean_get_Item);
                      pMStack_150 = (MethodInfo *)0x454df8b;
                      unaff_R13._dateData =
                           (uint64_t)
                           GameManagers_ChatManager__GetFormattedMessage
                                     ((System_String_o *)pIVar32,(System_DateTime_o)ppIVar54,uVar48 & 0xff,
                                      (MethodInfo *)method_01);
                      __this_05 = *(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 200);
                      ppSVar44 = (System_String_o **)method_01;
                      pMVar31 = TypeInfo_ChatManager;
                      if (__this_05 !=
                          (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                        if ((__this_05->fields)._size <= iVar14) goto label_0454e01b;
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          pMStack_150 = (MethodInfo *)0x454dfbc;
                          il2cpp_runtime_helper_02337ed0();
                          __this_05 = *(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                                       (TypeInfo_ChatManager[2].virtualMethodPointer + 200);
                          ppSVar44 = (System_String_o **)method_01;
                          if (__this_05 ==
                              (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0)
                          goto label_0454e2a5;
                        }
                        ppIVar54 = &MethodInfo_ChatManager_ChatPlayerLineData_get_Item;
                        pMStack_150 = (MethodInfo *)0x454dfed;
                        ppSVar44 = (System_String_o **)MethodInfo_ChatManager_ChatPlayerLineData_get_Item;
                        System_Collections_Generic_List_ChatManager_ChatPlayerLineData___get_Item
                                  ((GameManagers_ChatManager_ChatPlayerLineData_o *)auStack_100,__this_05,
                                   iVar14,(MethodInfo_36C3C40 *)MethodInfo_ChatManager_ChatPlayerLineData_get_Item);
                        if ((auStack_100._0_4_ & 1) == 0) goto label_0454e01b;
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          pMStack_150 = (MethodInfo *)0x454e06f;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pMVar31 = TypeInfo_ChatManager;
                        if (*(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                             (TypeInfo_ChatManager[2].virtualMethodPointer + 200) !=
                            (System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o *)0x0) {
                          pMStack_150 = (MethodInfo *)0x454e099;
                          System_Collections_Generic_List_ChatManager_ChatPlayerLineData___get_Item
                                    ((GameManagers_ChatManager_ChatPlayerLineData_o *)auStack_100,
                                     *(System_Collections_Generic_List_ChatManager_ChatPlayerLineData__o **)
                                      (TypeInfo_ChatManager[2].virtualMethodPointer + 200),iVar14,
                                     (MethodInfo_36C3C40 *)MethodInfo_ChatManager_ChatPlayerLineData_get_Item);
                          __this_06 = (((Il2CppClass *)TypeInfo_ChatManager[2].virtualMethodPointer)->_1).this_arg.
                                      data;
                          pMVar31 = (MethodInfo *)0x0;
                          ppSVar44 = (System_String_o **)TypeInfo_ChatManager[2].virtualMethodPointer;
                          if (__this_06 != (System_Collections_Generic_List_int__o *)0x0) {
                            pIStack_c8 = pIStack_f0;
                            iStack_13c = -1;
                            ppSVar44 = (System_String_o **)pIStack_f0;
                            pIVar32 = (Il2CppClass *)auStack_100._8_8_;
                            if (iVar14 < (__this_06->fields)._size) {
                              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                                pMStack_150 = (MethodInfo *)0x454e0e1;
                                il2cpp_runtime_helper_02337ed0(TypeInfo_ChatManager);
                                __this_06 = *(System_Collections_Generic_List_int__o **)
                                             (TypeInfo_ChatManager[2].virtualMethodPointer + 0x30);
                                pMVar31 = (MethodInfo *)0x0;
                                ppSVar44 = (System_String_o **)pIStack_f0;
                                if (__this_06 == (System_Collections_Generic_List_int__o *)0x0)
                                goto label_0454e2a5;
                              }
                              pMStack_150 = (MethodInfo *)0x454e10a;
                              iStack_13c = System_Collections_Generic_List_int___get_Item
                                                     (__this_06,iVar14,MethodInfo_Int32_get_Item);
                            }
                            pSStack_110 = (System_String_o *)0x0;
                            ppIStack_108 = (Il2CppType **)0x0;
                            pSStack_120 = (System_String_o *)0x0;
                            pIStack_118 = (Il2CppClass *)0x0;
                            pIStack_130 = (Il2CppMethodPointer)0x0;
                            pSStack_128 = (System_String_o *)0x0;
                            pMStack_150 = (MethodInfo *)0x454e132;
                            pSStack_138 = (System_String_array *)unaff_R13._dateData;
                            il2cpp_runtime_helper_022b4080(&pSStack_138);
                            pIStack_130 = (Il2CppMethodPointer)CONCAT71(pIStack_130._1_7_,1);
                            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                              pMStack_150 = (MethodInfo *)0x454e149;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            pMVar31 = (MethodInfo *)0x0;
                            if (*(System_Collections_Generic_List_DateTime__o **)
                                 (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48) !=
                                (System_Collections_Generic_List_DateTime__o *)0x0) {
                              pMStack_150 = (MethodInfo *)0x454e172;
                              ppIVar54 = (Il2CppClass **)
                                         System_Collections_Generic_List_DateTime___get_Item
                                                   (*(System_Collections_Generic_List_DateTime__o **)
                                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x48),iVar14,
                                                    MethodInfo_DateTime_get_Item);
                              pMVar31 = (MethodInfo *)0x0;
                              if (*(System_Collections_Generic_List_bool__o **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50) !=
                                  (System_Collections_Generic_List_bool__o *)0x0) {
                                pMStack_150 = (MethodInfo *)0x454e19e;
                                uVar13 = System_Collections_Generic_List_bool___get_Item
                                                   (*(System_Collections_Generic_List_bool__o **)
                                                     (TypeInfo_ChatManager[2].virtualMethodPointer + 0x50),iVar14,
                                                    MethodInfo_Boolean_get_Item);
                                pMStack_150 = (MethodInfo *)0x454e1a9;
                                pSStack_128 = GameManagers_ChatManager__GetTimestampPrefix
                                                        ((System_DateTime_o)ppIVar54,uVar13 & 0xff,method_02);
                                pMStack_150 = (MethodInfo *)0x454e1bb;
                                il2cpp_runtime_helper_022b4080(&pSStack_128,pSStack_128);
                                iVar53 = iStack_13c;
                                auStack_100._0_4_ = iStack_13c;
                                pMStack_150 = (MethodInfo *)0x454e1d8;
                                pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_100);
                                ppSVar44 = &"[{0}] ";
                                pMStack_150 = (MethodInfo *)0x454e1ec;
                                pSVar25 = System_String__Format("[{0}] ",pIVar33,(MethodInfo *)0x0);
                                pMStack_150 = (MethodInfo *)0x454e1fb;
                                pSStack_120 = GameManagers_ChatManager__GetColorString
                                                        (pSVar25,1,0,(MethodInfo *)ppSVar44);
                                pMStack_150 = (MethodInfo *)0x454e20d;
                                il2cpp_runtime_helper_022b4080(&pSStack_120,pSStack_120);
                                if ((Il2CppClass *)auStack_100._8_8_ == (Il2CppClass *)0x0) {
                                  auStack_100._8_8_ = **(undefined8 **)(g_data_057b9c00 + 0xb8);
                                }
                                pMStack_150 = (MethodInfo *)0x454e235;
                                pIStack_118 = (Il2CppClass *)auStack_100._8_8_;
                                il2cpp_runtime_helper_022b4080(&pIStack_118,auStack_100._8_8_);
                                pIVar32 = pIStack_c8;
                                if (pIStack_c8 == (Il2CppClass *)0x0) {
                                  pIVar32 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                                }
                                pMStack_150 = (MethodInfo *)0x454e264;
                                pSStack_110 = System_String__Concat_3ae5ba0
                                                        (": ",(System_String_o *)pIVar32,
                                                         (MethodInfo *)0x0);
                                pMStack_150 = (MethodInfo *)0x454e276;
                                il2cpp_runtime_helper_022b4080(&pSStack_110,pSStack_110);
                                ppIStack_108 = (Il2CppType **)CONCAT44(ppIStack_108._4_4_,iVar53);
                                ((MethodInfo *)message_00)->klass = pIStack_118;
                                ((MethodInfo *)message_00)->return_type = (Il2CppType *)pSStack_110;
                                ((MethodInfo *)message_00)->invoker_method = (InvokerMethod)pSStack_128;
                                ((MethodInfo *)message_00)->name = (char *)pSStack_120;
                                ((MethodInfo *)message_00)->methodPointer = (Il2CppMethodPointer)pSStack_138;
                                ((MethodInfo *)message_00)->virtualMethodPointer = pIStack_130;
                                ((MethodInfo *)message_00)->parameters = ppIStack_108;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
label_0454e2a5:
                pMStack_150 = (MethodInfo *)0x454e2aa;
                pSStack_170 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
                ppSVar46 = (System_String_array **)&pSStack_170;
                pMStack_168 = (MethodInfo *)ppIVar54;
                pIStack_160 = pIVar32;
                pIStack_158 = (Il2CppClass *)message_00;
                pMStack_150 = (MethodInfo *)pUVar22;
                if (g_data_057aef7e == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057aef7e = '\x01';
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e3d0;
label_0454e2de:
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
                  cVar9 = (char)bVar10;
                  pMVar16 = TypeInfo_ChatManager;
                }
                else {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e2de;
label_0454e3d0:
                  pMVar16 = TypeInfo_ChatManager;
                  il2cpp_runtime_helper_02337ed0();
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar16);
                  cVar9 = (char)bVar10;
                  pMVar16 = TypeInfo_ChatManager;
                }
                if (cVar9 == '\0') {
                  TypeInfo_ChatManager = pMVar16;
                  return;
                }
                ppMVar20 = &TypeInfo_ChatManager;
                TypeInfo_ChatManager = pMVar16;
                if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          GameManagers_ChatManager__GetFeedPanel(pMVar16);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pSVar34,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_1a8 = (System_String_array *)0x454e364;
                  GameManagers_ChatManager__AddLine
                            ((System_String_o *)pMVar31,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,
                             0,in_stack_fffffffffffffe80);
                  return;
                }
                if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar25 = Anticheat_ChatFilter__FilterSizeTag((System_String_o *)pMVar31,(MethodInfo *)0x0);
                pSVar21 = (System_String_o *)0x0;
                pSVar25 = Anticheat_ChatFilter__FilterBadWords(pSVar25,(MethodInfo *)0x0);
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar32 = MethodInfo_Void_Add;
                pSVar17 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                           (TypeInfo_ChatManager[2].virtualMethodPointer + 0x60);
                if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  piVar2 = (int *)((long)&pSVar17->max_length + 4);
                  *piVar2 = *piVar2 + 1;
                  pSVar26 = ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar17->bounds)->_networkCallback;
                  ppSVar44 = (System_String_o **)pIVar32;
                  if (pSVar26 != (System_Object_array *)0x0) {
                    uVar48 = *(uint *)&pSVar17->max_length;
                    pSVar21 = pSVar25;
                    if (uVar48 < (uint)pSVar26->max_length) {
                      ppSVar44 = (System_String_o **)(ulong)(uVar48 + 1);
                      *(uint *)&pSVar17->max_length = uVar48 + 1;
                      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (pSVar26->m_Items + (int)uVar48);
                      pSVar26->m_Items[(int)uVar48] = (Il2CppObject *)pSVar25;
                      il2cpp_runtime_helper_022b4080();
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar17,(Il2CppObject *)pSVar25,
                                 *(MethodInfo_362C220 **)
                                  (*(long *)((long)(pIVar32->_1).byval_arg.data + 0xc0) + 0x70));
                      ppSVar44 = (System_String_o **)pIVar32;
                    }
                    if (*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) != 0) {
                      uVar48 = *(uint *)(*(long *)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x60) + 0x18);
                      pUVar22 = (UnityEngine_Transform_o *)(ulong)uVar48;
                      iVar12 = GameManagers_ChatManager__get_MaxLines((MethodInfo *)pSVar17);
                      if (iVar12 < (int)uVar48) {
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar17 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                   (TypeInfo_ChatManager[2].virtualMethodPointer + 0x60);
                        if (pSVar17 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        goto label_0454e50c;
                        pSVar21 = (System_String_o *)0x0;
                        System_Collections_Generic_List_object___RemoveAt
                                  ((System_Collections_Generic_List_object__o *)pSVar17,0,MethodInfo_Void_RemoveAt);
                      }
                      pMVar31 = pMStack_150;
                      if (pSVar34 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        pMVar16 = (MethodInfo *)0x0;
                        pMStack_150 = (MethodInfo *)pIStack_158;
                        pIStack_158 = pIStack_160;
                        pIStack_160 = (Il2CppClass *)pMStack_168;
                        if (g_data_057ae3cc == '\0') {
                          pMStack_168 = (MethodInfo *)0x43bfb40;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                          g_data_057ae3cc = '\x01';
                          pMVar16 = extraout_RDX;
                        }
                        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                  pSVar34->m_Items[3].fields.key;
                        pMStack_168 = (MethodInfo *)0x43bfb56;
                        pSVar21 = pSVar25;
                        pSVar35 = pSVar34;
                        pMVar16 = (MethodInfo *)
                                  UI_FeedPanel__CreateLine((UI_FeedPanel_o *)pSVar34,pSVar25,pMVar16);
                        lVar40 = MethodInfo_Void_Add;
                        if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        {
                          piVar1 = (int32_t *)((long)&pSVar17->max_length + 4);
                          *piVar1 = *piVar1 + 1;
                          pSVar26 = (System_Object_array *)
                                    ((UI_FeedPanel_Fields *)&pSVar17->bounds)->m_CachedPtr;
                          if (pSVar26 != (System_Object_array *)0x0) {
                            uVar13 = *(uint *)&pSVar17->max_length;
                            if (uVar13 < (uint)pSVar26->max_length) {
                              *(uint *)&pSVar17->max_length = uVar13 + 1;
                              pSVar26->m_Items[(int)uVar13] = (Il2CppObject *)pMVar16;
                              pMStack_168 = (MethodInfo *)0x43bfb96;
                              il2cpp_runtime_helper_022b4080();
                            }
                            else {
                              pMStack_168 = (MethodInfo *)0x43bfbb2;
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar17,
                                         (Il2CppObject *)pMVar16,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar40 + 0x20) + 0xc0) + 0x70));
                            }
                            pMStack_168 = (MethodInfo *)0x43bfbb9;
                            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                            UI_FeedPanel__ClearExcessLines((UI_FeedPanel_o *)pSVar34,pMVar16);
                            return;
                          }
                        }
                        pMStack_168 = (MethodInfo *)0x43bfbcb;
                        il2cpp_runtime_helper_022b2c90();
                        pMStack_168 = pMVar31;
                        ppSVar44 = (System_String_o **)pSVar35;
                        pSStack_170 = pSVar25;
                        if (g_data_057ae3cf == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                          il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                          il2cpp_runtime_helper_023445d0(&"TextColor");
                          il2cpp_runtime_helper_023445d0(&"DefaultPanel");
                          ppSVar44 = &"Default";
                          il2cpp_runtime_helper_023445d0();
                          g_data_057ae3cf = '\x01';
                        }
                        lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                        if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x148), lVar40 != 0)) {
                          uVar13 = *(uint *)(lVar40 + 0x14);
                          ppMVar56 = (MethodInfo **)(ulong)uVar13;
                          pIVar32 = (pSVar35->obj).klass;
                          pSVar25 = (System_String_o *)
                                    (*(((System_Collections_Generic_List_object__VTable *)pIVar32->vtable)->
                                      _4_unknown).methodPtr)
                                              (pSVar35,(((System_Collections_Generic_List_object__VTable *)
                                                        pIVar32->vtable)->_4_unknown).method);
                          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                          UI_ElementStyle___ctor
                                    ((UI_ElementStyle_o *)pSVar17,uVar13,120.0,20.0,pSVar25,(MethodInfo *)0x0)
                          ;
                          pUVar18 = *(UnityEngine_GameObject_o **)&pSVar35->m_Items[3].fields;
                          ppSVar44 = (System_String_o **)
                                     (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                            ppSVar44 = (System_String_o **)
                                       UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                            pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      UI_ElementFactory__CreateDefaultLabel
                                                ((UnityEngine_Transform_o *)ppSVar44,
                                                 (UI_ElementStyle_o *)pSVar17,pSVar21,0,3,(MethodInfo *)0x0);
                            if ((pSVar34 !=
                                 (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
                               (pIVar33 = UnityEngine_GameObject__GetComponent_object_
                                                    ((UnityEngine_GameObject_o *)pSVar34,MethodInfo_Text_GetComponent_Text),
                               ppSVar44 = (System_String_o **)pSVar34,
                               pSVar17 !=
                               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                              pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                        pSVar17->max_length;
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              ppSVar44 = (System_String_o **)pSVar17;
                              UVar58 = UI_UIManager__GetThemeColor
                                                 ((System_String_o *)pSVar17,"TextColor","Default",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              ppMVar56 = (MethodInfo **)pIVar33;
                              if (pIVar33 != (Il2CppObject *)0x0) {
                                (*pIVar33->klass->vtable[0x17].methodPtr)
                                          (UVar58.fields.r,UVar58.fields.b,pIVar33);
                                pUVar22 = (UnityEngine_Transform_o *)pSVar35->m_Items[3].fields.value;
                                ppSVar44 = (System_String_o **)0x0;
                                if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetAsLastSibling(pUVar22,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
                        pSStack_1b8 = pSVar17;
                        pSStack_1b0 = (System_String_array *)ppMVar56;
                        pSStack_1a8 = (System_String_array *)unaff_R13._dateData;
                        uStack_1c0._0_4_ = extraout_EAX;
                        uStack_1c0._4_4_ = extraout_var;
                        if (g_data_057ae3ce == '\0') {
                          uStack_1c8 = 0x43bfdc3;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
                          uStack_1c8 = 0x43bfdcf;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
                          uStack_1c8 = 0x43bfddb;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                          uStack_1c8 = 0x43bfde7;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                          uStack_1c8 = 0x43bfdf3;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                          uStack_1c8 = 0x43bfdff;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                          uStack_1c8 = 0x43bfe0b;
                          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                          g_data_057ae3ce = '\x01';
                        }
                        lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                        if (((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0x140), lVar40 == 0)) ||
                           (pSVar51 = (System_Collections_Generic_List_GameObject__o *)
                                      ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      ppSVar44)->m_Items[3].fields.key,
                           pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0))
                        goto label_043bffb8;
                        iVar14 = *(int *)(lVar40 + 0x14);
                        iVar45 = 0;
                        uStack_1c0._4_4_ = 0.0;
                        goto label_043bfe70;
                      }
                    }
                  }
                }
label_0454e50c:
                il2cpp_runtime_helper_022b2c90();
                uVar49 = (ulong)pSVar21 & 0xffffffff;
                if (g_data_057aef7f == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                  g_data_057aef7f = '\x01';
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e5ec;
label_0454e54d:
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
                  cVar9 = (char)bVar10;
                  pMVar31 = TypeInfo_ChatManager;
                }
                else {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e54d;
label_0454e5ec:
                  pMVar31 = TypeInfo_ChatManager;
                  il2cpp_runtime_helper_02337ed0();
                  bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar31);
                  cVar9 = (char)bVar10;
                  pMVar31 = TypeInfo_ChatManager;
                }
                if (cVar9 == '\0') {
                  TypeInfo_ChatManager = pMVar31;
                  return;
                }
                TypeInfo_ChatManager = pMVar31;
                if (*(int *)((long)&pMVar31[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          GameManagers_ChatManager__GetVoiceChatPanel(pMVar31);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pSVar35,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  return;
                }
                if (pSVar35 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  ppSVar44 = (System_String_o **)pSVar35;
                  if ((char)uVar49 != '\0') {
                    ppSVar46 = &pSStack_1a8;
                    pSVar34 = pSVar17;
                    pSStack_1a8 = (System_String_array *)CONCAT44(extraout_var_00,bVar10);
                    if (g_data_057ae502 == '\0') {
                      pSStack_1b0 = (System_String_array *)0x43eda96;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,pSVar17,0);
                      pSStack_1b0 = (System_String_array *)0x43edaa2;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
                      pSStack_1b0 = (System_String_array *)0x43edaae;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                      pSStack_1b0 = (System_String_array *)0x43edaba;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
                      pSStack_1b0 = (System_String_array *)0x43edac6;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
                      pSStack_1b0 = (System_String_array *)0x43edad2;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                      pSStack_1b0 = (System_String_array *)0x43edade;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                      ppSVar44 = &"";
                      pSStack_1b0 = (System_String_array *)0x43edaea;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057ae502 = '\x01';
                    }
                    if ((pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
                       (ppSVar44 = (System_String_o **)pSVar35->m_Items[3].fields.key,
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44 !=
                       (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                      pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (ulong)*(uint *)&pSVar17->max_length;
                      pSStack_1b0 = (System_String_array *)0x43edb1a;
                      bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         ((System_Collections_Generic_Dictionary_int__object__o *)ppSVar44,
                                          *(uint *)&pSVar17->max_length,MethodInfo_Boolean_ContainsKey);
                      if ((char)bVar10 != '\0') {
                        return;
                      }
                      lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x148), lVar40 != 0)) {
                        uVar13 = *(uint *)(lVar40 + 0x14);
                        pUVar22 = (UnityEngine_Transform_o *)(ulong)uVar13;
                        pIVar32 = (pSVar35->obj).klass;
                        pSStack_1b0 = (System_String_array *)0x43edb71;
                        pSVar25 = (System_String_o *)
                                  (*(((UI_FeedPanel_VTable *)pIVar32->vtable)->_4_get_ThemePanel).methodPtr)
                                            (pSVar35,(((UI_FeedPanel_VTable *)pIVar32->vtable)->
                                                     _4_get_ThemePanel).method);
                        pSStack_1b0 = (System_String_array *)0x43edb83;
                        ppMVar20 = (MethodInfo **)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                        pSStack_1b0 = (System_String_array *)0x43edba5;
                        UI_ElementStyle___ctor
                                  ((UI_ElementStyle_o *)ppMVar20,uVar13,120.0,20.0,pSVar25,(MethodInfo *)0x0);
                        iVar53 = *(int32_t *)&pSVar17->max_length;
                        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                          pSStack_1b0 = (System_String_array *)0x43edbc1;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_1b0 = (System_String_array *)0x43edbce;
                        ppMVar56 = (MethodInfo **)
                                   GameManagers_ChatManager__GetIDString(iVar53,0,0,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                          pSStack_1b0 = (System_String_array *)0x43edbe9;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                  **(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
                        pSStack_1b0 = (System_String_array *)0x43edc0a;
                        pSVar21 = PhotonExtensions__GetStringProperty
                                            ((Photon_Realtime_Player_o *)pSVar17,(System_String_o *)pSVar34,
                                             "",(MethodInfo *)0x0);
                        pUVar18 = *(UnityEngine_GameObject_o **)&pSVar35->m_Items[3].fields;
                        ppSVar44 = (System_String_o **)0x0;
                        pSVar25 = (System_String_o *)&TypeInfo_PlayerProperty;
                        if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                          pSStack_1b0 = (System_String_array *)0x43edc1d;
                          pUVar22 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                          pSStack_1b0 = (System_String_array *)0x43edc2d;
                          pSVar25 = System_String__Concat_3ae5ba0
                                              ((System_String_o *)ppMVar56,pSVar21,(MethodInfo *)0x0);
                          pSStack_1b0 = (System_String_array *)0x43edc46;
                          pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    ppMVar20;
                          pUVar18 = UI_ElementFactory__CreateWhiteLabel
                                              (pUVar22,(UI_ElementStyle_o *)ppMVar20,pSVar25,0,3,
                                               (MethodInfo *)0x0);
                          pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    pSVar35->m_Items[3].fields.key;
                          ppSVar44 = (System_String_o **)0x0;
                          pSVar25 = pSVar21;
                          if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                            pSStack_1b0 = (System_String_array *)0x43edc65;
                            System_Collections_Generic_Dictionary_int__object___Add
                                      (pSVar24,*(int32_t *)&pSVar17->max_length,(Il2CppObject *)pUVar18,
                                       MethodInfo_Void_Add);
                            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                    pSStack_1b0 = (System_String_array *)0x43edc7f;
                    il2cpp_runtime_helper_022b2c90();
                    pSVar17 = pSVar34;
                    pSVar34 = pSVar35;
                  }
                  *(MethodInfo ***)((long)ppSVar46 + -8) = ppMVar20;
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x10) = pSVar34;
                  *(System_String_o **)((long)ppSVar46 + -0x18) = pSVar25;
                  pSVar34 = pSVar17;
                  plVar52 = (long *)ppSVar44;
                  if (g_data_057ae503 == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edca0;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcac;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcb8;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
                    plVar52 = &TypeInfo_Object;
                    *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcc4;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057ae503 = '\x01';
                  }
                  if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                    pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->
                              m_Items[3].fields.key;
                    plVar52 = (long *)0x0;
                    if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      uVar13 = *(uint *)&pSVar17->max_length;
                      pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (ulong)uVar13;
                      *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edcf3;
                      bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar24,uVar13,MethodInfo_Boolean_ContainsKey);
                      if ((char)bVar10 == '\0') {
                        return;
                      }
                      pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                                ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)
                                ->m_Items[3].fields.key;
                      plVar52 = (long *)0x0;
                      if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        iVar53 = *(int32_t *)&pSVar17->max_length;
                        *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd12;
                        ppMVar20 = (MethodInfo **)
                                   System_Collections_Generic_Dictionary_int__object___get_Item
                                             (pSVar24,iVar53,MethodInfo_GameObject_get_Item);
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd2d;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                        *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd37;
                        UnityEngine_Object__Destroy_4e01c60
                                  ((UnityEngine_Object_o *)ppMVar20,(MethodInfo *)0x0);
                        pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44
                                  )->m_Items[3].fields.key;
                        plVar52 = (long *)0x0;
                        if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          iVar53 = *(int32_t *)&pSVar17->max_length;
                          *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd52;
                          System_Collections_Generic_Dictionary_int__object___Remove
                                    (pSVar24,iVar53,MethodInfo_Boolean_Remove);
                          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x20) = 0x43edd69;
                  il2cpp_runtime_helper_022b2c90();
                  *(UnityEngine_Transform_o **)((long)ppSVar46 + -0x20) = pUVar22;
                  *(MethodInfo ***)((long)ppSVar46 + -0x28) = ppMVar20;
                  *(System_String_o ***)((long)ppSVar46 + -0x30) = ppSVar44;
                  *(MethodInfo ***)((long)ppSVar46 + -0x38) = ppMVar56;
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x40) = pSVar17;
                  ppSVar44 = (System_String_o **)plVar52;
                  if (g_data_057ae504 == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edd93;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edd9f;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddab;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddb7;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddc3;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eddcf;
                    il2cpp_runtime_helper_023445d0(&"TextColor");
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edddb;
                    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
                    ppSVar44 = &"Default";
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edde7;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057ae504 = '\x01';
                  }
                  lVar40 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x148), lVar40 != 0)) {
                    iVar53 = *(int32_t *)(lVar40 + 0x14);
                    pIVar32 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar52)->
                              obj).klass;
                    pMVar31 = (((System_Collections_Generic_Dictionary_int__object__VTable *)pIVar32->vtable)
                              ->_4_unknown).method;
                    pIVar5 = (((System_Collections_Generic_Dictionary_int__object__VTable *)pIVar32->vtable)->
                             _4_unknown).methodPtr;
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede33;
                    pSVar25 = (System_String_o *)(*pIVar5)(plVar52,pMVar31);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede45;
                    pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                    *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede68;
                    UI_ElementStyle___ctor
                              ((UI_ElementStyle_o *)pSVar17,iVar53,120.0,20.0,pSVar25,(MethodInfo *)0x0);
                    pUVar18 = *(UnityEngine_GameObject_o **)
                               &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar52)->
                                m_Items[3].fields;
                    ppSVar44 = (System_String_o **)0x0;
                    if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
                      *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede7c;
                      ppSVar44 = (System_String_o **)
                                 UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                      *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43ede95;
                      pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                UI_ElementFactory__CreateWhiteLabel
                                          ((UnityEngine_Transform_o *)ppSVar44,(UI_ElementStyle_o *)pSVar17,
                                           (System_String_o *)pSVar34,0,3,(MethodInfo *)0x0);
                      if (pSVar35 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                        *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edeb3;
                        ppSVar44 = (System_String_o **)pSVar35;
                        pIVar33 = UnityEngine_GameObject__GetComponent_object_
                                            ((UnityEngine_GameObject_o *)pSVar35,MethodInfo_Text_GetComponent_Text);
                        pSVar34 = pSVar35;
                        if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                        {
                          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    pSVar17->max_length;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43eded7;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edf00;
                          ppSVar44 = (System_String_o **)pSVar17;
                          UVar58 = UI_UIManager__GetThemeColor
                                             ((System_String_o *)pSVar17,"TextColor","Default",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          plVar52 = (long *)0x0;
                          if (pIVar33 != (Il2CppObject *)0x0) {
                            pMVar31 = pIVar33->klass->vtable[0x17].method;
                            pIVar5 = pIVar33->klass->vtable[0x17].methodPtr;
                            *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edf18;
                            (*pIVar5)(UVar58.fields.r,UVar58.fields.b,pIVar33,pMVar31);
                            return;
                          }
                        }
                      }
                    }
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x48) = 0x43edf29;
                  uVar23 = il2cpp_runtime_helper_022b2c90();
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x48) = pSVar34;
                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   ((long)ppSVar46 + -0x50) = pSVar17;
                  *(undefined8 *)((long)ppSVar46 + -0x58) = uVar23;
                  if (g_data_057ae505 == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf4c;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf58;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
                    g_data_057ae505 = '\x01';
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf6e;
                  pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf83;
                  System_Collections_Generic_Dictionary_int__object____ctor(pSVar24,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].
                  fields.key = (Il2CppObject *)pSVar24;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43edf93;
                  il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      ppSVar44)->m_Items[3].fields.key,pSVar24);
                  uVar23 = *(undefined8 *)((long)ppSVar46 + -0x50);
                  uVar7 = *(undefined8 *)((long)ppSVar46 + -0x48);
                  *(long **)((long)ppSVar46 + -0x48) = plVar52;
                  *(undefined8 *)((long)ppSVar46 + -0x50) = uVar7;
                  *(undefined8 *)((long)ppSVar46 + -0x58) = uVar23;
                  if (g_data_057ae02c == '\0') {
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x432777d;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327789;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327795;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277a1;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
                    *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277ad;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
                    g_data_057ae02c = '\x01';
                  }
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277c3;
                  pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277d8;
                  System_Collections_Generic_List_object____ctor(pSVar15,MethodInfo_List_1_UI_BasePopup);
                  *(System_Collections_Generic_List_object__o **)
                   &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[1].
                    fields = pSVar15;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x43277e8;
                  il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     ppSVar44)->m_Items + 1,pSVar15);
                  pSVar25 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x432780f;
                  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327824;
                  Settings_StringSetting___ctor_40f74f0(__this_00,pSVar25,0x7fffffff,(MethodInfo *)0x0);
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[1].
                  fields.value = (Il2CppObject *)__this_00;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327834;
                  il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      ppSVar44)->m_Items[1].fields.value,__this_00);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327843;
                  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327858;
                  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Type);
                  *(System_Collections_Generic_Dictionary_object__object__o **)
                   &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[2].
                    fields = __this_01;
                  *(undefined8 *)((long)ppSVar46 + -0x60) = 0x4327868;
                  il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     ppSVar44)->m_Items + 2);
                  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar44,(MethodInfo *)0x0);
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                if (g_data_057aef8d == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                  g_data_057aef8d = '\x01';
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0454e6b2;
label_0454e63d:
                  pSVar38 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pSVar38 != (System_String_array *)0x0) goto label_0454e64d;
label_0454e6ca:
                  il2cpp_runtime_helper_022b2c90();
                }
                else {
                  if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0454e63d;
label_0454e6b2:
                  il2cpp_runtime_helper_02337ed0();
                  pSVar38 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pSVar38 == (System_String_array *)0x0) goto label_0454e6ca;
label_0454e64d:
                  pIVar32 = (pSVar38->obj).klass;
                  bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
                  ppSVar44 = (System_String_o **)(ulong)bVar3;
                  if ((bVar3 <= (pIVar32->_2).naturalAligment) &&
                     ((pIVar32->_2).typeHierarchy
                      [(long)((long)&((Il2CppClass *)((long)ppSVar44 + -0x1128))->vtable[0xfe].method + 7)] ==
                      TypeInfo_InGameMenu)) {
                    return;
                  }
                }
                il2cpp_runtime_helper_022b2fd0();
                ppMVar20 = &TypeInfo_ChatManager;
                ppSVar47 = &pSStack_1a8;
                pSStack_1a8 = (System_String_array *)&TypeInfo_UIManager;
                if (g_data_057aef81 == '\0') {
                  pSStack_1b0 = (System_String_array *)0x454e6fd;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  pSStack_1b0 = (System_String_array *)0x454e709;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                  pSStack_1b0 = (System_String_array *)0x454e715;
                  il2cpp_runtime_helper_023445d0(&"/");
                  g_data_057aef81 = '\x01';
                }
                __this_07 = (MethodInfo **)&g_data_057b9b70;
                pSStack_1b0 = (System_String_array *)0x454e73e;
                bVar10 = System_String__op_Equality
                                   ((System_String_o *)pSVar38,
                                    (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  return;
                }
                plVar52 = &TypeInfo_CustomLogicManager;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  pSStack_1b0 = (System_String_array *)0x454e760;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar39 = *(System_String_array **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                if (pSVar39 == (System_String_array *)0x0) {
label_0454e854:
                  pSVar36 = pSVar39;
                  pSStack_1b0 = (System_String_array *)0x454e859;
                  pSVar39 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
                }
                else {
                  pSStack_1b0 = (System_String_array *)0x454e781;
                  pSVar36 = (System_String_array *)
                            CustomLogic_CustomLogicEvaluator__OnChatInput
                                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar39,
                                       (System_String_o *)pSVar38,(MethodInfo *)0x0);
                  if ((pSVar36 != (System_String_array *)0x0) &&
                     (ppSVar44 = (System_String_o **)(pSVar36->obj).klass,
                     (Il2CppClass *)ppSVar44 == g_data_057b9b98)) {
                    pSStack_1b0 = (System_String_array *)0x454e797;
                    pcVar37 = (char *)il2cpp_runtime_helper_02305440();
                    pSVar39 = pSVar36;
                    if (*pcVar37 == '\0') {
                      return;
                    }
                  }
                  if (pSVar38 == (System_String_array *)0x0) goto label_0454e854;
                  pSStack_1b0 = (System_String_array *)0x454e7b9;
                  pMVar31 = "/";
                  bVar10 = System_String__StartsWith
                                     ((System_String_o *)pSVar38,(System_String_o *)"/",
                                      (MethodInfo *)0x0);
                  if ((char)bVar10 == '\0') {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      pSStack_1b0 = (System_String_array *)0x454e83f;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSStack_1b0 = (System_String_array *)0x454e847;
                    pSVar25 = GameManagers_ChatManager__ProcessMentions((System_String_o *)pSVar38,pMVar31);
                    pSVar38 = pSStack_1a8;
                    pSStack_1a8 = (System_String_array *)&TypeInfo_ChatManager;
                    pSStack_1b0 = pSVar38;
                    if (g_data_057aef6e == '\0') {
                      pSStack_1d0 = (System_String_o *)0x454bb53;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                      pSStack_1d0 = (System_String_o *)0x454bb5f;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                      pSStack_1d0 = (System_String_o *)0x454bb6b;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
                      pSStack_1d0 = (System_String_o *)0x454bb77;
                      il2cpp_runtime_helper_023445d0(&"PlayerChatRPC");
                      g_data_057aef6e = '\x01';
                    }
                    uStack_1c0 = 0;
                    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                    pSStack_1d0 = (System_String_o *)0x454bbaf;
                    pSVar26 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
                    if (pSVar26 != (System_Object_array *)0x0) {
                      if (pSVar25 != (System_String_o *)0x0) {
                        pSStack_1d0 = (System_String_o *)0x454bbd0;
                        lVar40 = il2cpp_runtime_helper_023051f0(pSVar25);
                        if (lVar40 == 0) goto label_0454bcaf;
                      }
                      ppMVar56 = (MethodInfo **)pSVar26;
                      if ((int)pSVar26->max_length != 0) {
                        pSVar26->m_Items[0] = (Il2CppObject *)pSVar25;
                        pSStack_1d0 = (System_String_o *)0x454bbf7;
                        il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
                        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                          pSStack_1d0 = (System_String_o *)0x454bc0f;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_1d0 = (System_String_o *)0x454bc16;
                        uStack_1c0 = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
                        pSStack_1d0 = (System_String_o *)0x454bc27;
                        pSStack_1b8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      System_DateTime__get_Ticks
                                                ((System_DateTime_o)&uStack_1c0,(MethodInfo *)0x0);
                        pSStack_1d0 = (System_String_o *)0x454bc41;
                        pSVar38 = (System_String_array *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
                        if (pSVar38 != (System_String_array *)0x0) {
                          pSStack_1d0 = (System_String_o *)0x454bc59;
                          lVar40 = il2cpp_runtime_helper_023051f0(pSVar38);
                          if (lVar40 == 0) goto label_0454bcaf;
                        }
                        if (1 < (uint)pSVar26->max_length) {
                          pSVar26->m_Items[1] = (Il2CppObject *)pSVar38;
                          pSStack_1d0 = (System_String_o *)0x454bc7a;
                          il2cpp_runtime_helper_022b4080(pSVar26->m_Items + 1);
                          if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                            pSStack_1d0 = (System_String_o *)0x454bc99;
                            Photon_Pun_PhotonView__RPC(__this,"PlayerChatRPC",0,pSVar26,(MethodInfo *)0x0);
                            return;
                          }
                          goto label_0454bcaa;
                        }
                      }
                      pSStack_1d0 = (System_String_o *)0x454bcaa;
                      il2cpp_runtime_helper_022b2ca0();
                    }
label_0454bcaa:
                    pSVar26 = (System_Object_array *)ppMVar56;
                    pSStack_1d0 = (System_String_o *)0x454bcaf;
                    il2cpp_runtime_helper_022b2c90();
label_0454bcaf:
                    pSStack_1d0 = (System_String_o *)0x454bcb4;
                    pSVar27 = (System_String_o *)il2cpp_runtime_helper_0231b270();
                    pSVar29 = (System_String_o *)0x0;
                    pSStack_1d0 = (System_String_o *)0x454bcbe;
                    il2cpp_runtime_helper_022b2b10();
                    pSVar21 = pSVar29;
                    pSStack_1f0 = pSVar38;
                    pSStack_1e8 = pSVar26;
                    pSStack_1e0 = (System_String_array *)unaff_R13._dateData;
                    pPStack_1d8 = __this;
                    pSStack_1d0 = pSVar25;
                    if (g_data_057aef70 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_DateTime);
                      il2cpp_runtime_helper_023445d0(&" ");
                      il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
                      il2cpp_runtime_helper_023445d0(&"[{0}]");
                      g_data_057aef70 = '\x01';
                    }
                    SStack_208.fields._dateData = (System_DateTime_Fields)0;
                    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar34 = pSStack_1b8;
                    pPVar43 = TypeInfo_InGameManager;
                    if (pSStack_1b8 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                    {
                      pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x28);
                      pPVar43 = (Photon_Realtime_Player_o *)0x0;
                      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                        bVar10 = System_Collections_Generic_HashSet_int___Contains
                                           (pSVar4,*(int32_t *)((long)pSStack_1b8 + 0x18),MethodInfo_Boolean_Contains);
                        if ((char)bVar10 == '\0') {
                          uStack_20c = *(undefined4 *)((long)pSVar34 + 0x18);
                          pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_20c);
                          uStack_210 = *(undefined4 *)((long)pSVar34 + 0x18);
                          pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_210);
                          ppSVar44 = &"[{0}]";
                          pSVar25 = System_String__Format("[{0}]",pIVar28,(MethodInfo *)0x0);
                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar25 = GameManagers_ChatManager__GetColorString
                                              (pSVar25,1,0,(MethodInfo *)ppSVar44);
                          pSVar25 = System_String__Format_3af78e0
                                              ("<link=\"{0}\">{1}</link>",pIVar33,(Il2CppObject *)pSVar25,(MethodInfo *)0x0)
                          ;
                          pSVar25 = System_String__Concat_3af7150
                                              (pSVar25," ",pSVar27,(MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          method_00 = (MethodInfo_37E4C90 *)0x0;
                          System_DateTime___ctor_3c8ff10
                                    ((System_DateTime_o)&SStack_208,(int64_t)pSVar29,1,(MethodInfo *)0x0);
                          pPStack_200 = (Photon_Realtime_Player_o *)0x0;
                          SStack_1f8._dateData = 0;
                          __this_08.fields.value.fields._dateData = SStack_208.fields._dateData;
                          __this_08.fields._0_8_ = &pPStack_200;
                          System_Nullable_DateTime____ctor
                                    (__this_08,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00);
                          timestamp.fields._0_8_ = (ulong)pPStack_200 & 0xffffffff;
                          timestamp.fields.value.fields._dateData =
                               (System_DateTime_Fields)(System_DateTime_Fields)SStack_1f8._dateData;
                          GameManagers_ChatManager__AddLine
                                    (pSVar25,0,0,timestamp,*(int32_t *)((long)pSVar34 + 0x18),0,0,-1,0,
                                     in_stack_fffffffffffffde0);
                        }
                        return;
                      }
                    }
                    il2cpp_runtime_helper_022b2c90();
                    pSVar25 = pSVar21;
                    if (g_data_057aef71 == '\0') {
                      uStack_250 = 0x454bf06;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      uStack_250 = 0x454bf12;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
                      uStack_250 = 0x454bf1e;
                      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
                      uStack_250 = 0x454bf2a;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
                      g_data_057aef71 = '\x01';
                    }
                    SVar50._dateData = 0;
                    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
                      uStack_250 = 0x454bf57;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    player = TypeInfo_InGameManager;
                    if (pPStack_200 != (Photon_Realtime_Player_o *)0x0) {
                      pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                                (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x28);
                      player = (Photon_Realtime_Player_o *)0x0;
                      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                        uStack_250 = 0x454bf8e;
                        bVar10 = System_Collections_Generic_HashSet_int___Contains
                                           (pSVar4,(pPStack_200->fields).actorNumber,MethodInfo_Boolean_Contains);
                        if ((char)bVar10 == '\0') {
                          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
                            uStack_250 = 0x454bfaa;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uStack_250 = 0x454bfbe;
                          System_DateTime___ctor_3c8ff10
                                    ((System_DateTime_o)&stack0xfffffffffffffdc8,(int64_t)pSVar21,1,
                                     (MethodInfo *)0x0);
                          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                            uStack_250 = 0x454bfdb;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          uStack_250 = 0x454bff4;
                          GameManagers_ChatManager__AddPlayerLine
                                    (pPStack_200,(System_String_o *)pPVar43,0,
                                     (System_DateTime_o)SVar50._dateData,0,-1,in_stack_fffffffffffffdb8);
                        }
                        return;
                      }
                    }
                    uStack_250 = 0x454c005;
                    il2cpp_runtime_helper_022b2c90();
                    pPStack_278 = pPStack_200;
                    pSStack_270 = &SStack_208;
                    pSStack_268 = (System_String_array *)unaff_R13._dateData;
                    pPStack_260 = pPVar43;
                    pSStack_258 = pSVar21;
                    uStack_250 = uVar49;
                    if (g_data_057aef74 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
                      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
                      il2cpp_runtime_helper_023445d0(&": ");
                      il2cpp_runtime_helper_023445d0(&" ");
                      il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
                      il2cpp_runtime_helper_023445d0(&"[{0}]");
                      il2cpp_runtime_helper_023445d0(&"");
                      g_data_057aef74 = '\x01';
                    }
                    uStack_2a0 = 0;
                    pSStack_298 = (System_String_o *)0x0;
                    apSStack_290[0] = (System_String_o *)0x0;
                    if (player == (Photon_Realtime_Player_o *)0x0) {
                      return;
                    }
                    SStack_280.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)ppSVar44;
                    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pMVar31 = (MethodInfo *)0x0;
                    pSVar21 = PhotonExtensions__GetStringProperty
                                        (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                         "",(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar21 = Anticheat_ChatFilter__FilterSizeTag(pSVar21,(MethodInfo *)0x0);
                    if (pSVar25 == (System_String_o *)0x0) {
                      pSVar25 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                      iVar14 = *(int *)(TypeInfo_ChatFilter + 0xe4);
                    }
                    else {
                      iVar14 = *(int *)(TypeInfo_ChatFilter + 0xe4);
                    }
                    if (iVar14 == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar25 = Anticheat_ChatFilter__FilterSizeTag(pSVar25,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar25 = MiscExtensions__ReplaceNamedColorTags(pSVar25,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar27 = GameManagers_ChatManager__GetColorString(pSVar25,color,0,pMVar31);
                    iStack_2a4 = (player->fields).actorNumber;
                    pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2a4);
                    iStack_2a8 = (player->fields).actorNumber;
                    pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_2a8);
                    ppSVar44 = &"[{0}]";
                    pSVar25 = System_String__Format("[{0}]",pIVar28,(MethodInfo *)0x0);
                    pSVar25 = GameManagers_ChatManager__GetColorString(pSVar25,1,0,(MethodInfo *)ppSVar44);
                    pSVar29 = System_String__Format_3af78e0
                                        ("<link=\"{0}\">{1}</link>",pIVar33,(Il2CppObject *)pSVar25,(MethodInfo *)0x0);
                    pSVar25 = TypeInfo_string;
                    pSVar38 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
                    if (pSVar38 != (System_String_array *)0x0) {
                      if ((int)pSVar38->max_length != 0) {
                        pSVar25 = (System_String_o *)pSVar38->m_Items;
                        pSVar38->m_Items[0] = pSVar29;
                        il2cpp_runtime_helper_022b4080(pSVar25,pSVar29);
                        if (1 < (uint)pSVar38->max_length) {
                          pSVar25 = (System_String_o *)(pSVar38->m_Items + 1);
                          pSVar38->m_Items[1] = " ";
                          il2cpp_runtime_helper_022b4080();
                          if (2 < (uint)pSVar38->max_length) {
                            pSVar25 = (System_String_o *)(pSVar38->m_Items + 2);
                            pSVar38->m_Items[2] = pSVar21;
                            il2cpp_runtime_helper_022b4080(pSVar25,pSVar21);
                            if (3 < (uint)pSVar38->max_length) {
                              pSVar25 = (System_String_o *)(pSVar38->m_Items + 3);
                              pSVar38->m_Items[3] = ": ";
                              il2cpp_runtime_helper_022b4080();
                              if (4 < (uint)pSVar38->max_length) {
                                pSVar38->m_Items[4] = pSVar27;
                                il2cpp_runtime_helper_022b4080(pSVar38->m_Items + 4);
                                pSVar25 = System_String__Concat_3af7570(pSVar38,(MethodInfo *)0x0);
                                iVar12 = (player->fields).actorNumber;
                                apSStack_290[0] = (System_String_o *)0x0;
                                uStack_2a0 = 1;
                                pSStack_298 = pSVar21;
                                il2cpp_runtime_helper_022b4080(&pSStack_298,pSVar21);
                                apSStack_290[0] = pSVar27;
                                il2cpp_runtime_helper_022b4080(apSStack_290,pSVar27);
                                playerLineData.fields.SenderName = pSStack_298;
                                playerLineData.fields._0_8_ = uStack_2a0;
                                playerLineData.fields.BodyText = apSStack_290[0];
                                GameManagers_ChatManager__AddLineInternal
                                          (pSVar25,0,0,SStack_280,iVar12,0,uVar13 & 0xff,iVar53,0,
                                           playerLineData,in_stack_fffffffffffffd40);
                                return;
                              }
                            }
                          }
                        }
                      }
                      il2cpp_runtime_helper_022b2ca0();
                    }
                    il2cpp_runtime_helper_022b2c90();
                    if (g_data_057aef72 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                      g_data_057aef72 = '\x01';
                    }
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    GameManagers_ChatManager__AddLine
                              (pSVar25,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                               in_stack_fffffffffffffcf8);
                    return;
                  }
                  if (*(int *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar38->bounds)->_networkCallback
                      == 1) {
                    return;
                  }
                  pMVar31 = (MethodInfo *)0x1;
                  pSStack_1b0 = (System_String_array *)0x454e7d6;
                  pSVar38 = (System_String_array *)
                            System_String__Substring((System_String_o *)pSVar38,1,(MethodInfo *)0x0);
                  __this_07 = &TypeInfo_ChatManager;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pSStack_1b0 = (System_String_array *)0x454e7f1;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_1b0 = (System_String_array *)0x454e7f9;
                  pSVar39 = pSVar38;
                  pSVar36 = GameManagers_ChatManager__ParseCommandArgs((System_String_o *)pSVar38,pMVar31);
                  if (pSVar36 == (System_String_array *)0x0) goto label_0454e854;
                  if (pSVar36->max_length == 0) {
                    return;
                  }
                  pSVar39 = pSVar36;
                  __this_07 = (MethodInfo **)pSVar17;
                  plVar52 = (long *)ppMVar20;
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pSStack_1b0 = (System_String_array *)0x454e81d;
                    pSVar39 = (System_String_array *)il2cpp_runtime_helper_02337ed0();
                    __this_07 = (MethodInfo **)pSVar17;
                    plVar52 = (long *)ppMVar20;
                  }
                  ppSVar47 = (System_String_array **)&stack0xfffffffffffffe70;
                  pSVar38 = pSStack_1a8;
                }
                *(ulong *)((long)ppSVar47 + -8) = uVar49;
                *(long **)((long)ppSVar47 + -0x10) = plVar52;
                *(MethodInfo ***)((long)ppSVar47 + -0x18) = __this_07;
                *(uint64_t *)((long)ppSVar47 + -0x20) = unaff_R13._dateData;
                *(MethodInfo ***)((long)ppSVar47 + -0x28) = &TypeInfo_ChatManager;
                *(System_String_array **)((long)ppSVar47 + -0x30) = pSVar38;
                *(System_String_array **)((long)ppSVar47 + -0x38) = pSVar39;
                if (g_data_057aef84 == '\0') {
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e887;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e893;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e89f;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8ab;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8b7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8c3;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8cf;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8db;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8e7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8f3;
                  il2cpp_runtime_helper_023445d0(&" not found, try /help to see a list of commands.");
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e8ff;
                  il2cpp_runtime_helper_023445d0(&"Command ");
                  g_data_057aef84 = '\x01';
                }
                *(undefined8 *)((long)ppSVar47 + -0x38) = 0;
                ppMVar20 = &TypeInfo_ChatManager;
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e926;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar39 = (System_String_array *)unaff_R13._dateData;
                if (pSVar36 == (System_String_array *)0x0) goto label_0454ed3e;
                parameters = pSVar38;
                if (*(int *)&pSVar36->max_length == 0) {
label_0454ed43:
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed48;
                  il2cpp_runtime_helper_022b2ca0();
                  pSVar39 = (System_String_array *)unaff_R13._dateData;
                }
                else {
                  pSVar25 = pSVar36->m_Items[0];
                  if (pSVar25 == (System_String_o *)0x0) {
label_0454ed3e:
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed43;
                    il2cpp_runtime_helper_022b2c90();
                    parameters = pSVar38;
                    unaff_R13._dateData = (uint64_t)pSVar39;
                    goto label_0454ed43;
                  }
                  parameters = *(System_String_array **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x70);
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e95e;
                  pSVar25 = System_String__ToLower(pSVar25,(MethodInfo *)0x0);
                  pSVar38 = parameters;
                  if (parameters == (System_String_array *)0x0) goto label_0454ed3e;
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e97f;
                  bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                     ((System_Collections_Generic_Dictionary_object__object__o *)parameters,
                                      (Il2CppObject *)pSVar25,(Il2CppObject **)((long)ppSVar47 + -0x38),
                                      MethodInfo_Boolean_TryGetValue);
                  lVar40 = MethodInfo_String_Empty_String;
                  if ((char)bVar10 == '\0') {
                    if (*(int *)&pSVar36->max_length != 0) {
                      pSVar25 = pSVar36->m_Items[0];
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea69;
                      pSVar25 = System_String__Concat_3af7150
                                          ("Command ",pSVar25," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea7d;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)((long)ppSVar47 + -0x50) = 0;
                      *(undefined8 *)((long)ppSVar47 + -0x58) = 0xffffffffffffffff;
                      *(undefined8 *)((long)ppSVar47 + -0x60) = 0;
                      *(undefined8 *)((long)ppSVar47 + -0x68) = 0;
                      *(undefined8 *)((long)ppSVar47 + -0x70) = 0x454eaac;
                      GameManagers_ChatManager__AddLine
                                (pSVar25,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,
                                 *(bool_conflict *)((long)ppSVar47 + -0x68),
                                 *(bool_conflict *)((long)ppSVar47 + -0x60),
                                 *(int32_t *)((long)ppSVar47 + -0x58),
                                 *(bool_conflict *)((long)ppSVar47 + -0x50),
                                 *(MethodInfo **)((long)ppSVar47 + -0x48));
                      return;
                    }
                    goto label_0454ed43;
                  }
                  pSVar38 = *(System_String_array **)((long)ppSVar47 + -0x38);
                  if (pSVar38 == (System_String_array *)0x0) goto label_0454ed3e;
                  pIVar32 = (pSVar38->obj).klass;
                  bVar3 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
                  if ((bVar3 <= (pIVar32->_2).naturalAligment) &&
                     ((pIVar32->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CLCommandAttribute)) {
                    if (*(int *)&pSVar36->max_length < 2) {
                      if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ecf5;
                        il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
                        lVar41 = *(long *)(*(long *)(lVar40 + 0x38) + 0x10);
                        if ((*(byte *)(lVar41 + 0x135) & 1) == 0) goto label_0454ed0a;
label_0454ebb7:
                        if (*(int *)(lVar41 + 0xe4) != 0) goto label_0454ebc4;
label_0454ed1f:
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed24;
                        il2cpp_runtime_helper_02337ed0();
                        lVar40 = *(long *)(*(long *)(lVar40 + 0x38) + 0x10);
                        bVar3 = *(byte *)(lVar40 + 0x135);
                      }
                      else {
                        lVar41 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
                        if ((*(byte *)(lVar41 + 0x135) & 1) != 0) goto label_0454ebb7;
label_0454ed0a:
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed0f;
                        lVar41 = il2cpp_runtime_helper_023009c0();
                        if (*(int *)(lVar41 + 0xe4) == 0) goto label_0454ed1f;
label_0454ebc4:
                        lVar40 = *(long *)(*(long *)(lVar40 + 0x38) + 0x10);
                        bVar3 = *(byte *)(lVar40 + 0x135);
                      }
                      if ((bVar3 & 1) == 0) {
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ebdd;
                        lVar40 = il2cpp_runtime_helper_023009c0(lVar40);
                      }
                      ppMVar56 = (MethodInfo **)**(undefined8 **)(lVar40 + 0xb8);
                      iVar14 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
                    }
                    else {
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb65;
                      pSVar42 = System_Linq_Enumerable__Skip_object_
                                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar36,1,
                                           MethodInfo_IEnumerable_1_System_String_Skip_String);
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb77;
                      ppMVar56 = (MethodInfo **)System_Linq_Enumerable__ToArray_object_(pSVar42,MethodInfo_String_ToArray_String);
                      iVar14 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
                    }
                    if (iVar14 == 0) {
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ebff;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    __this_07 = *(MethodInfo ***)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                    if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_07 ==
                        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      return;
                    }
                    ppMVar20 = (MethodInfo **)pSVar38->m_Items[5];
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec2e;
                    pSVar39 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
                    parameters = pSVar38;
                    if (*(int *)&pSVar36->max_length == 0) goto label_0454ed43;
                    if (pSVar39 == (System_String_array *)0x0) goto label_0454ed3e;
                    parameters = (System_String_array *)pSVar36->m_Items[0];
                    if (parameters != (System_String_array *)0x0) {
                      pIVar32 = (((pSVar39->obj).klass)->_1).element_class;
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec5d;
                      lVar40 = il2cpp_runtime_helper_023051f0(parameters,pIVar32);
                      if (lVar40 == 0) goto label_0454ed48;
                    }
                    unaff_R13._dateData = (uint64_t)pSVar39;
                    if ((int)pSVar39->max_length == 0) goto label_0454ed43;
                    pSVar39->m_Items[0] = (System_String_o *)parameters;
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec81;
                    il2cpp_runtime_helper_022b4080(pSVar39->m_Items,parameters);
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ec90;
                    parameters = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eca0;
                    CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
                              ((CustomLogic_CustomLogicListBuiltin_o *)parameters,
                               (System_Object_array *)ppMVar56,(MethodInfo *)0x0);
                    if (parameters != (System_String_array *)0x0) {
                      pIVar32 = (((pSVar39->obj).klass)->_1).element_class;
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ecb5;
                      lVar40 = il2cpp_runtime_helper_023051f0(parameters,pIVar32);
                      if (lVar40 == 0) goto label_0454ed48;
                    }
                    if (1 < (uint)pSVar39->max_length) {
                      pSVar39->m_Items[1] = (System_String_o *)parameters;
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ecd8;
                      il2cpp_runtime_helper_022b4080(pSVar39->m_Items + 1,parameters);
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ece8;
                      CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                                ((CustomLogic_CustomLogicEvaluator_o *)__this_07,
                                 (CustomLogic_UserMethod_o *)ppMVar20,(System_Object_array *)pSVar39,
                                 (MethodInfo *)0x0);
                      return;
                    }
                    goto label_0454ed43;
                  }
                  __this_07 = (MethodInfo **)pSVar38->m_Items[1];
                  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_07 ==
                      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                  goto label_0454ed3e;
                  *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e9d9;
                  bVar10 = System_Reflection_MethodBase__get_IsStatic
                                     ((System_Reflection_MethodBase_o *)__this_07,(MethodInfo *)0x0);
                  if ((char)bVar10 == '\0') {
                    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                      *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eac6;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppMVar20 = *(MethodInfo ***)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eae8;
                    parameters = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
                    if (parameters == (System_String_array *)0x0) goto label_0454ed3e;
                    pIVar32 = (((parameters->obj).klass)->_1).element_class;
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb03;
                    lVar40 = il2cpp_runtime_helper_023051f0(pSVar36,pIVar32);
                    if (lVar40 != 0) {
                      if (*(int *)&parameters->max_length != 0) {
                        parameters->m_Items[0] = (System_String_o *)pSVar36;
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb29;
                        il2cpp_runtime_helper_022b4080(parameters->m_Items,pSVar36);
                        goto label_0454eb2f;
                      }
                      goto label_0454ed43;
                    }
                  }
                  else {
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454e9f5;
                    parameters = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
                    if (parameters == (System_String_array *)0x0) goto label_0454ed3e;
                    pIVar32 = (((parameters->obj).klass)->_1).element_class;
                    *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea10;
                    lVar40 = il2cpp_runtime_helper_023051f0(pSVar36,pIVar32);
                    if (lVar40 != 0) {
                      if (*(int *)&parameters->max_length != 0) {
                        parameters->m_Items[0] = (System_String_o *)pSVar36;
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ea36;
                        il2cpp_runtime_helper_022b4080(parameters->m_Items);
                        ppMVar20 = (MethodInfo **)0x0;
label_0454eb2f:
                        *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454eb39;
                        System_Reflection_MethodBase__Invoke
                                  ((System_Reflection_MethodBase_o *)__this_07,(Il2CppObject *)ppMVar20,
                                   (System_Object_array *)parameters,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_0454ed43;
                    }
                  }
                }
label_0454ed48:
                *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed4d;
                pSVar25 = (System_String_o *)il2cpp_runtime_helper_0231b270();
                *(undefined8 *)((long)ppSVar47 + -0x40) = 0x454ed57;
                uVar23 = il2cpp_runtime_helper_022b2b10(pSVar25,0);
                *(System_String_array **)((long)ppSVar47 + -0x40) = pSVar36;
                *(MethodInfo ***)((long)ppSVar47 + -0x48) = ppMVar20;
                *(MethodInfo ***)((long)ppSVar47 + -0x50) = __this_07;
                *(System_String_array **)((long)ppSVar47 + -0x58) = pSVar39;
                *(MethodInfo ***)((long)ppSVar47 + -0x60) = ppMVar56;
                *(System_String_array **)((long)ppSVar47 + -0x68) = parameters;
                *(undefined8 *)((long)ppSVar47 + -0x70) = uVar23;
                if (g_data_057aef82 == '\0') {
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ed87;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ed93;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ed9f;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edab;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edb7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edc3;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edcf;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Item);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eddb;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ede7;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edf3;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ProcessMentions_b__0);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454edff;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass93_0);
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee0b;
                  il2cpp_runtime_helper_023445d0(&"@");
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee17;
                  il2cpp_runtime_helper_023445d0(&"");
                  g_data_057aef82 = '\x01';
                }
                if (pSVar25 == (System_String_o *)0x0) goto label_0454f2d9;
                *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee36;
                iVar14 = System_String__IndexOf(pSVar25,0x40,(MethodInfo *)0x0);
                if (iVar14 == -1) {
                  return;
                }
                if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee5b;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
                if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
                *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ee7d;
                System_Text_StringBuilder__Clear(pSVar30,(MethodInfo *)0x0);
                pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
                if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
                *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eea2;
                System_Text_StringBuilder__Append_3b03f90(pSVar30,pSVar25,(MethodInfo *)0x0);
                goto label_0454eeda;
              }
            }
          }
        }
label_0454d5f4:
        il2cpp_runtime_helper_022b2c90();
label_0454d5f9:
        bVar10 = 0;
        cVar9 = '\0';
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454d4a2;
label_0454d648:
        il2cpp_runtime_helper_02337ed0();
        pIVar5 = TypeInfo_ChatManager[2].virtualMethodPointer;
      } while( true );
    }
  }
  return;
  while( true ) {
    uStack_1c8 = 0x43bfe7f;
    pUVar18 = (UnityEngine_GameObject_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar51,iVar45,MethodInfo_GameObject_get_Item);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) break;
    uStack_1c8 = 0x43bfe94;
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) break;
    uStack_1c8 = 0x43bfea7;
    UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar19,(MethodInfo *)0x0);
    uStack_1c0._4_4_ = uStack_1c0._4_4_ + UVar8.fields.y;
    iVar45 = iVar45 + 1;
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bfe70:
    if ((pSVar51->fields)._size <= iVar45) {
      uStack_1c0._4_4_ = uStack_1c0._4_4_ - (float)iVar14;
      if (uStack_1c0._4_4_ <= 0.0) {
        return;
      }
      if (pSVar51 != (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043bff10;
      break;
    }
  }
  goto label_043bffb8;
label_0454eeda:
  do {
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eee3;
    __this_03 = (GameManagers_ChatManager___c__DisplayClass93_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass93_0);
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eef0;
    GameManagers_ChatManager___c__DisplayClass93_0___ctor(__this_03,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef02;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    if (plVar52 == (long *)0x0) goto label_0454f2d9;
    uVar23 = *(undefined8 *)(*plVar52 + 0x170);
    pcVar6 = *(code **)(*plVar52 + 0x168);
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef2d;
    pSVar25 = (System_String_o *)(*pcVar6)(plVar52,uVar23);
    if (pSVar25 == (System_String_o *)0x0) goto label_0454f2d9;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef48;
    iVar45 = System_String__IndexOf_3afbe50(pSVar25,0x20,iVar14,(MethodInfo *)0x0);
    if (iVar45 == -1) {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454ef92;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454efb4;
      iVar45 = System_Text_StringBuilder__get_Length(pSVar30,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454efc3;
label_0454ef5c:
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    }
    else {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454ef5c;
label_0454efc3:
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454efc8;
      il2cpp_runtime_helper_02337ed0();
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    }
    if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eff7;
    pSVar25 = System_Text_StringBuilder__ToString_3b032f0
                        (pSVar30,iVar14 + 1,(iVar45 - iVar14) + -1,(MethodInfo *)0x0);
    if (__this_03 == (GameManagers_ChatManager___c__DisplayClass93_0_o *)0x0) goto label_0454f2d9;
    (__this_03->fields).mention = pSVar25;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f013;
    il2cpp_runtime_helper_022b4080(&__this_03->fields);
    pSVar25 = (__this_03->fields).mention;
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f01e;
    bVar10 = System_String__IsNullOrWhiteSpace(pSVar25,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0a8;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0af;
      source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0c1;
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0db;
      System_Func_object__bool____ctor();
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f0f0;
      pSVar42 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player)
      ;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f102;
      __this_04 = System_Linq_Enumerable__ToList_object_(pSVar42,MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
      if (__this_04 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0454f2d9;
      if ((__this_04->fields)._size != 1) {
        iVar45 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
        goto joined_r0x0454f02d;
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f130;
      pPVar43 = (Photon_Realtime_Player_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_04,0,MethodInfo_Player_get_Item);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f14e;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar25 = (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f16f;
      pSVar25 = PhotonExtensions__GetStringProperty(pPVar43,pSVar25,"",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f18a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f194;
      pSVar25 = Anticheat_ChatFilter__FilterSizeTag(pSVar25,(MethodInfo *)0x0);
      ppSVar44 = &"@";
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1a8;
      pSVar25 = System_String__Concat_3ae5ba0("@",pSVar25,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1bd;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1cc;
      pSVar25 = GameManagers_ChatManager__GetColorString(pSVar25,2,0,(MethodInfo *)ppSVar44);
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f1f6;
      pSVar30 = System_Text_StringBuilder__Remove(pSVar30,iVar14,iVar45 - iVar14,(MethodInfo *)0x0);
      if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f20f;
      System_Text_StringBuilder__Insert(pSVar30,iVar14,pSVar25,(MethodInfo *)0x0);
      plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (plVar52 == (long *)0x0) goto label_0454f2d9;
      uVar23 = *(undefined8 *)(*plVar52 + 0x170);
      pcVar6 = *(code **)(*plVar52 + 0x168);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f23a;
      pSVar21 = (System_String_o *)(*pcVar6)(plVar52,uVar23);
      if ((pSVar25 == (System_String_o *)0x0) || (pSVar21 == (System_String_o *)0x0)) goto label_0454f2d9;
      iVar45 = (pSVar25->fields)._stringLength;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454eec6;
      iVar14 = System_String__IndexOf_3afbe50(pSVar21,0x40,iVar14 + iVar45,(MethodInfo *)0x0);
    }
    else {
      iVar45 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0454f02d:
      if (iVar45 == 0) {
        *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f034;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (plVar52 == (long *)0x0) goto label_0454f2d9;
      uVar23 = *(undefined8 *)(*plVar52 + 0x170);
      pcVar6 = *(code **)(*plVar52 + 0x168);
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f05f;
      pSVar25 = (System_String_o *)(*pcVar6)(plVar52,uVar23);
      if (pSVar25 == (System_String_o *)0x0) goto label_0454f2d9;
      *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f07a;
      iVar14 = System_String__IndexOf_3afbe50(pSVar25,0x40,iVar14 + 1,(MethodInfo *)0x0);
    }
  } while (iVar14 != -1);
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f28f;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar52 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
  if (plVar52 != (long *)0x0) {
    (**(code **)(*plVar52 + 0x168))(plVar52,*(undefined8 *)(*plVar52 + 0x170));
    return;
  }
label_0454f2d9:
  *(undefined8 *)((long)ppSVar47 + -0x78) = 0x454f2de;
  il2cpp_runtime_helper_022b2c90();
  return;
  while( true ) {
    uStack_1c8 = 0x43bff39;
    pUVar19 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) break;
    uStack_1c8 = 0x43bff48;
    UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar19,(MethodInfo *)0x0);
    uStack_1c0._4_4_ = uStack_1c0._4_4_ - UVar8.fields.y;
    if (uStack_1c0._4_4_ <= 0.0) {
      return;
    }
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    uStack_1c8 = 0x43bff78;
    obj = (UnityEngine_Object_o *)
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar51,0,MethodInfo_GameObject_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_1c8 = 0x43bff8d;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_1c8 = 0x43bff97;
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
    uStack_1c8 = 0x43bffab;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar51,0,MethodInfo_Void_RemoveAt);
    pSVar51 = (System_Collections_Generic_List_GameObject__o *)
              ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar44)->m_Items[3].fields
              .key;
    if (pSVar51 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
label_043bff10:
    if ((pSVar51->fields)._size < 1) {
      return;
    }
    uStack_1c8 = 0x43bff24;
    pUVar18 = (UnityEngine_GameObject_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar51,0,MethodInfo_GameObject_get_Item);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) break;
  }
label_043bffb8:
  uStack_1c8 = 0x43bffbd;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.DebugConsole$$LogTimeSince
// il2cpp: void ApplicationManagers_DebugConsole__LogTimeSince (float start, System_String_o* prefix, const MethodInfo* method);
// 0x44b11e0

void ApplicationManagers_DebugConsole__LogTimeSince(float start,System_String_o *prefix,MethodInfo *method)

{
  System_String_o *pSVar1;
  float local_c;
  
  if (g_data_057aea08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0();
    g_data_057aea08 = '\x01';
  }
  local_c = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  local_c = local_c - start;
  pSVar1 = System_Single__ToString(local_c,(MethodInfo *)&local_c);
  pSVar1 = System_String__Concat_3af7150(prefix,": ",pSVar1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$OnUnityDebugLog
// il2cpp: void ApplicationManagers_DebugConsole__OnUnityDebugLog (System_String_o* log, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
// 0x44b1280

void ApplicationManagers_DebugConsole__OnUnityDebugLog
               (System_String_o *log,System_String_o *stackTrace,int32_t type,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  long lVar3;
  System_String_o *pSVar4;
  System_String_Fields array;
  System_Type_array **ppSVar5;
  uint uVar6;
  bool_conflict bVar7;
  undefined8 *puVar8;
  System_Object_array *pSVar9;
  System_Object_array *message;
  System_Collections_Generic_LinkedListNode_T__o *pSVar10;
  ApplicationManagers_DebugConsole_LogMessage_o *value;
  undefined8 uVar11;
  System_Collections_Generic_LinkedList_T__o *pSVar12;
  System_Runtime_Serialization_SerializationInfo_o *pSVar13;
  long *plVar14;
  int iVar15;
  System_Object_array *pSVar16;
  System_Object_array *pSVar17;
  System_String_o **ppSVar18;
  int32_t iVar19;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_RBX;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_00;
  undefined1 *puVar20;
  ulong unaff_RBP;
  ulong uVar21;
  System_String_o *pSVar22;
  System_String_o *pSVar23;
  MethodInfo_3516500 *pMVar24;
  System_Object_array *pSVar25;
  uint uVar26;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_R14;
  System_Object_array *unaff_R15;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  
  puVar20 = &stack0xffffffffffffffd8;
  uVar21 = (ulong)(uint)type;
  pSVar22 = stackTrace;
  pSVar25 = (System_Object_array *)log;
  if (g_data_057aea09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSVar25 = (System_Object_array *)&"[Custom Logic Error] ";
    il2cpp_runtime_helper_023445d0();
    g_data_057aea09 = '\x01';
  }
  puVar8 = unaff_R12;
  pSVar9 = unaff_R15;
  uVar26 = (uint)pSVar22;
  if (log == (System_String_o *)0x0) {
label_044b132a:
    type = uVar26;
    unaff_R15 = pSVar9;
    unaff_R12 = puVar8;
    auVar28 = il2cpp_runtime_helper_022b2c90();
    pSVar22 = auVar28._8_8_;
    puVar8 = auVar28._0_8_;
  }
  else {
    pSVar22 = "[Custom Logic Error] ";
    pSVar9 = (System_Object_array *)log;
    uVar6 = System_String__StartsWith(log,"[Custom Logic Error] ",(MethodInfo *)0x0);
    pSVar25 = (System_Object_array *)log;
    if ((char)uVar6 != '\0') {
      pSVar25 = pSVar9;
      puVar8 = &"[Custom Logic Error] ";
      pSVar9 = (System_Object_array *)(ulong)uVar6;
      uVar26 = (uint)pSVar22;
      if ("[Custom Logic Error] " == (System_String_o *)0x0) goto label_044b132a;
      pSVar25 = (System_Object_array *)
                System_String__Substring(log,("[Custom Logic Error] "->fields)._stringLength,(MethodInfo *)0x0);
      if (type == 3) {
        type = 0;
      }
    }
    puVar8 = &TypeInfo_DebugConsole;
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)((ulong)uVar6 & 0xff);
    pSVar22 = stackTrace;
    log = (System_String_o *)unaff_RBX;
    puVar20 = (undefined1 *)register0x00000020;
    uVar21 = unaff_RBP;
    stackTrace = (System_String_o *)unaff_R14;
  }
  *(ulong *)(puVar20 + -8) = uVar21;
  *(System_Object_array **)(puVar20 + -0x10) = unaff_R15;
  *(System_String_o **)(puVar20 + -0x18) = stackTrace;
  *(undefined8 *)(puVar20 + -0x20) = unaff_R13;
  *(undefined8 **)(puVar20 + -0x28) = unaff_R12;
  *(System_String_o **)(puVar20 + -0x30) = log;
  *(undefined8 **)(puVar20 + -0x38) = puVar8;
  puVar8 = (undefined8 *)((ulong)method & 0xffffffff);
  *(int32_t *)(puVar20 + -0x34) = type;
  pSVar16 = (System_Object_array *)method;
  pSVar9 = pSVar25;
  if (g_data_057aea0a == '\0') {
    *(undefined8 *)(puVar20 + -0x40) = 0x44b166b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b1677;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b1683;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b168f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b169b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b16a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b16b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0x40) = 0x44b16bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    pSVar9 = (System_Object_array *)&"...";
    *(undefined8 *)(puVar20 + -0x40) = 0x44b16cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea0a = '\x01';
  }
  if (pSVar25 == (System_Object_array *)0x0) {
    pSVar25 = (System_Object_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (pSVar22 == (System_String_o *)0x0) {
    pSVar22 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  message = pSVar25;
  if (pSVar25 != (System_Object_array *)0x0) {
    uVar26 = *(uint *)&((System_Collections_Generic_LinkedList_T__Fields *)((long)pSVar25 + 0x10))->head;
    if (0x400 < (int)uVar26) {
      *(undefined8 *)(puVar20 + -0x40) = 0x44b138d;
      pSVar9 = (System_Object_array *)
               System_String__Substring_3af8da0((System_String_o *)pSVar25,0,0x400,(MethodInfo *)0x0);
      *(undefined8 *)(puVar20 + -0x40) = 0x44b13a1;
      pSVar23 = "...";
      message = (System_Object_array *)
                System_String__Concat_3ae5ba0((System_String_o *)pSVar9,"...",(MethodInfo *)0x0);
      type = (int32_t)pSVar23;
      uVar26 = *(uint *)&((System_Collections_Generic_LinkedList_T__Fields *)((long)pSVar25 + 0x10))->head;
    }
    pSVar16 = (System_Object_array *)(ulong)uVar26;
    if (0x400 < (int)uVar26) {
      pSVar16 = (System_Object_array *)0x400;
    }
    if (pSVar22 != (System_String_o *)0x0) {
      iVar19 = 0x400 - (int)pSVar16;
      if (iVar19 < (pSVar22->fields)._stringLength) {
        if (iVar19 < 0) {
          iVar19 = 0;
        }
        *(undefined8 *)(puVar20 + -0x40) = 0x44b1732;
        pSVar22 = System_String__Substring_3af8da0(pSVar22,0,iVar19,(MethodInfo *)0x0);
        pSVar16 = (System_Object_array *)&"...";
        *(undefined8 *)(puVar20 + -0x40) = 0x44b1746;
        pSVar23 = "...";
        pSVar22 = System_String__Concat_3ae5ba0(pSVar22,"...",(MethodInfo *)0x0);
        type = (int32_t)pSVar23;
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0)
        goto label_044b1760;
label_044b13e1:
        pSVar25 = *(System_Object_array **)
                   ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
        pSVar9 = TypeInfo_DebugConsole;
      }
      else {
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) != 0)
        goto label_044b13e1;
label_044b1760:
        *(undefined8 *)(puVar20 + -0x40) = 0x44b1765;
        il2cpp_runtime_helper_02337ed0();
        pSVar25 = *(System_Object_array **)
                   ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
        pSVar9 = TypeInfo_DebugConsole;
      }
      stackTrace = (System_String_o *)&TypeInfo_DebugConsole;
      TypeInfo_DebugConsole = pSVar9;
      if (pSVar25 != (System_Object_array *)0x0) {
        stackTrace = (System_String_o *)&TypeInfo_DebugConsole;
        pSVar17 = (System_Object_array *)((ulong)method & 0xff);
        if (0 < *(int *)&pSVar25->max_length) {
          unaff_R15 = pSVar17;
          if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)pSVar9->m_Items + 0xa0))
                              ->fields)._syncRoot + 4) == 0) {
            *(undefined8 *)(puVar20 + -0x40) = 0x44b1411;
            il2cpp_runtime_helper_02337ed0();
            pSVar25 = *(System_Object_array **)
                       ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
            if (pSVar25 == (System_Object_array *)0x0) goto label_044b177c;
          }
          pSVar16 = (System_Object_array *)&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes;
          *(undefined8 *)(puVar20 + -0x40) = 0x44b143a;
          pMVar24 = MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes;
          pSVar10 = System_Collections_Generic_LinkedList_object___get_Last
                              ((System_Collections_Generic_LinkedList_T__o *)pSVar25,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          type = (int32_t)pMVar24;
          pSVar9 = pSVar25;
          if ((pSVar10 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
             (log = (System_String_o *)(pSVar10->fields).item,
             (ApplicationManagers_DebugConsole_LogMessage_o *)log ==
             (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) goto label_044b177c;
          *(undefined8 *)(puVar20 + -0x40) = 0x44b1468;
          bVar7 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                            ((ApplicationManagers_DebugConsole_LogMessage_o *)log,(System_String_o *)message,
                             *(int32_t *)(puVar20 + -0x34),(bool_conflict)pSVar17,pSVar22,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            piVar1 = &(((ApplicationManagers_DebugConsole_LogMessage_o *)log)->fields).Count;
            *piVar1 = *piVar1 + 1;
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              *(undefined8 *)(puVar20 + -0x40) = 0x44b1481;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            ppSVar18 = (System_String_o **)((long)&pSVar13->fields + 0x28);
label_044b1649:
            *(undefined1 *)ppSVar18 = 1;
            *(undefined1 *)((long)&pSVar13->fields + 0x50) = 1;
            return;
          }
        }
        puVar8 = &TypeInfo_LogMessagePool;
        if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
          *(undefined8 *)(puVar20 + -0x40) = 0x44b14ad;
          il2cpp_runtime_helper_02337ed0();
        }
        type = *(int32_t *)(puVar20 + -0x34);
        *(undefined8 *)(puVar20 + -0x40) = 0x44b14c2;
        unaff_R15 = (System_Object_array *)
                    ApplicationManagers_DebugConsole_LogMessagePool__Get
                              ((System_String_o *)message,type,pSVar22,(bool_conflict)pSVar17,
                               (MethodInfo *)0x0);
        pSVar16 = pSVar17;
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
          *(undefined8 *)(puVar20 + -0x40) = 0x44b14d6;
          il2cpp_runtime_helper_02337ed0();
          pSVar16 = pSVar17;
        }
        pSVar9 = *(System_Object_array **)
                  ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                            ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
        if (pSVar9 != (System_Object_array *)0x0) {
          *(undefined8 *)(puVar20 + -0x40) = 0x44b14ff;
          pSVar25 = unaff_R15;
          System_Collections_Generic_LinkedList_object___AddLast
                    ((System_Collections_Generic_LinkedList_T__o *)pSVar9,(Il2CppObject *)unaff_R15,
                     MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          pSVar17 = TypeInfo_DebugConsole;
          type = (int32_t)pSVar25;
          if ((message != (System_Object_array *)0x0) && (pSVar22 != (System_String_o *)0x0)) {
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            *(int *)((long)&pSVar13->fields + 0x14) =
                 *(int *)((long)&pSVar13->fields + 0x14) +
                 *(int *)&((System_Collections_Generic_LinkedList_T__Fields *)&message->bounds)->head +
                 (pSVar22->fields)._stringLength;
            pSVar22 = (System_String_o *)&MethodInfo_Void_RemoveFirst;
            iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                      ((long)pSVar17->m_Items + 0xa0))->fields)._syncRoot + 4);
            while( true ) {
              type = (int32_t)pSVar25;
              pSVar9 = pSVar17;
              if (iVar15 == 0) {
                *(undefined8 *)(puVar20 + -0x40) = 0x44b155b;
                il2cpp_runtime_helper_02337ed0();
                pSVar9 = TypeInfo_DebugConsole;
              }
              pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar9->m_Items + 0x70))->
                        fields)._siInfo;
              pSVar16 = *(System_Object_array **)((long)&pSVar13->fields + 8);
              if (pSVar16 == (System_Object_array *)0x0) break;
              if ((int)pSVar16->max_length < 0x401) {
                if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)pSVar9->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                  *(undefined8 *)(puVar20 + -0x40) = 0x44b1589;
                  il2cpp_runtime_helper_02337ed0();
                  pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo;
                  pSVar9 = TypeInfo_DebugConsole;
                }
                if (*(int *)((long)&pSVar13->fields + 0x14) < 0x7a121) {
                  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                       ((long)pSVar9->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                    *(undefined8 *)(puVar20 + -0x40) = 0x44b1637;
                    il2cpp_runtime_helper_02337ed0();
                    pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)
                               ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo;
                  }
                  *(undefined1 *)((long)&pSVar13->fields + 0x28) = 1;
                  ppSVar18 = (System_String_o **)((long)&pSVar13->fields + 0x38);
                  goto label_044b1649;
                }
              }
              if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                   ((long)pSVar9->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                *(undefined8 *)(puVar20 + -0x40) = 0x44b15ae;
                il2cpp_runtime_helper_02337ed0();
                pSVar9 = TypeInfo_DebugConsole;
              }
              pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar9->m_Items + 0x70))->
                        fields)._siInfo;
              pSVar9 = *(System_Object_array **)((long)&pSVar13->fields + 8);
              if ((((pSVar9 == (System_Object_array *)0x0) ||
                   (pSVar16 = (System_Object_array *)pSVar9->bounds, pSVar16 == (System_Object_array *)0x0))
                  || (log = *(System_String_o **)((long)pSVar16->m_Items + 8),
                     (ApplicationManagers_DebugConsole_LogMessage_o *)log ==
                     (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
                 ((pSVar16 = (System_Object_array *)
                             (((ApplicationManagers_DebugConsole_LogMessage_o *)log)->fields).Message,
                  pSVar16 == (System_Object_array *)0x0 ||
                  (pSVar23 = (((ApplicationManagers_DebugConsole_LogMessage_o *)log)->fields).StackTrace,
                  pSVar23 == (System_String_o *)0x0)))) break;
              *(int *)((long)&pSVar13->fields + 0x14) =
                   (*(int *)((long)&pSVar13->fields + 0x14) - *(int *)&pSVar16->bounds) -
                   (pSVar23->fields)._stringLength;
              *(undefined8 *)(puVar20 + -0x40) = 0x44b160e;
              System_Collections_Generic_LinkedList_object___RemoveFirst
                        ((System_Collections_Generic_LinkedList_T__o *)pSVar9,MethodInfo_Void_RemoveFirst);
              if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
                *(undefined8 *)(puVar20 + -0x40) = 0x44b1624;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar25 = (System_Object_array *)0x0;
              *(undefined8 *)(puVar20 + -0x40) = 0x44b154a;
              ApplicationManagers_DebugConsole_LogMessagePool__Return
                        ((ApplicationManagers_DebugConsole_LogMessage_o *)log,(MethodInfo *)0x0);
              iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                        ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
              pSVar17 = TypeInfo_DebugConsole;
            }
          }
        }
      }
    }
  }
label_044b177c:
  uVar26 = (uint)pSVar16;
  *(undefined8 *)(puVar20 + -0x40) = 0x44b1781;
  auVar28 = il2cpp_runtime_helper_022b2c90();
  *(System_String_o **)(puVar20 + -0x40) = pSVar22;
  *(System_Object_array **)(puVar20 + -0x48) = unaff_R15;
  *(System_String_o **)(puVar20 + -0x50) = stackTrace;
  *(System_Object_array **)(puVar20 + -0x58) = message;
  *(undefined8 **)(puVar20 + -0x60) = puVar8;
  *(System_String_o **)(puVar20 + -0x68) = log;
  *(long *)(puVar20 + -0x70) = auVar28._0_8_;
  __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)(ulong)uVar26;
  *(long *)(puVar20 + -0x70) = auVar28._8_8_;
  value = (ApplicationManagers_DebugConsole_LogMessage_o *)(ulong)(uint)type;
  if (g_data_057aea0b == '\0') {
    *(undefined8 *)(puVar20 + -0x78) = 0x44b17bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b17c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b17d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b17e0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b17ec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b17f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b1804;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0x78) = 0x44b1810;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0b = '\x01';
  }
  pSVar23 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)(puVar20 + -0x78) = 0x44b1839;
  bVar7 = System_String__op_Equality((System_String_o *)pSVar9,pSVar23,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))->
                      fields)._syncRoot + 4) == 0) {
    *(undefined8 *)(puVar20 + -0x78) = 0x44b185a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = (System_Collections_Generic_LinkedList_T__o *)
            (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
             _siInfo)->fields).m_members;
  if (pSVar12 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    pSVar22 = (System_String_o *)(ulong)(byte)uVar26;
    if ((pSVar12->fields).count < 1) {
label_044b190e:
      stackTrace = (System_String_o *)&TypeInfo_LogMessagePool;
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        *(undefined8 *)(puVar20 + -0x78) = 0x44b1926;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(ApplicationManagers_DebugConsole_LogMessage_o **)(puVar20 + -0x70);
      *(undefined8 *)(puVar20 + -0x78) = 0x44b193d;
      value = ApplicationManagers_DebugConsole_LogMessagePool__Get
                        ((System_String_o *)pSVar9,type,(System_String_o *)__this_00,uVar26 & 0xff,
                         (MethodInfo *)0x0);
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        *(undefined8 *)(puVar20 + -0x78) = 0x44b1952;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = (System_Collections_Generic_LinkedList_T__o *)
                (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                  fields)._siInfo)->fields).m_members;
      if (pSVar12 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
        *(undefined8 *)(puVar20 + -0x78) = 0x44b197c;
        System_Collections_Generic_LinkedList_object___AddLast(pSVar12,(Il2CppObject *)value,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
        pSVar25 = TypeInfo_DebugConsole;
        if ((pSVar9 != (System_Object_array *)0x0) &&
           (__this_00 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) {
          pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                    fields)._siInfo;
          *(int *)((long)&pSVar13->fields + 0x10) =
               *(int *)((long)&pSVar13->fields + 0x10) +
               *(int *)&((System_Collections_Generic_LinkedList_T__Fields *)&pSVar9->bounds)->head +
               *(int *)&(__this_00->fields).Message;
          pSVar22 = (System_String_o *)&MethodInfo_Void_RemoveFirst;
          iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                    ((long)pSVar25->m_Items + 0xa0))->fields)._syncRoot + 4);
          while( true ) {
            if (iVar15 == 0) {
              *(undefined8 *)(puVar20 + -0x78) = 0x44b19dc;
              il2cpp_runtime_helper_02337ed0();
              pSVar25 = TypeInfo_DebugConsole;
            }
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar25->m_Items + 0x70))->fields
                      )._siInfo;
            lVar3 = (long)(pSVar13->fields).m_members;
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) < 0x401) {
              if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                   ((long)pSVar25->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                *(undefined8 *)(puVar20 + -0x78) = 0x44b1a0b;
                il2cpp_runtime_helper_02337ed0();
                pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70)
                           )->fields)._siInfo;
                pSVar25 = TypeInfo_DebugConsole;
              }
              if (*(int *)((long)&pSVar13->fields + 0x10) < 0x7a121) {
                if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)pSVar25->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                  *(undefined8 *)(puVar20 + -0x78) = 0x44b1aa6;
                  il2cpp_runtime_helper_02337ed0();
                  pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo;
                }
                *(undefined1 *)((long)&pSVar13->fields + 0x38) = 1;
                goto label_044b1ab5;
              }
            }
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)pSVar25->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              *(undefined8 *)(puVar20 + -0x78) = 0x44b1a2d;
              il2cpp_runtime_helper_02337ed0();
              pSVar25 = TypeInfo_DebugConsole;
            }
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar25->m_Items + 0x70))->fields
                      )._siInfo;
            pSVar12 = (System_Collections_Generic_LinkedList_T__o *)(pSVar13->fields).m_members;
            if ((((pSVar12 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                 (pSVar10 = (pSVar12->fields).head,
                 pSVar10 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
                (__this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar10->fields).item,
                __this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
               ((pSVar23 = (__this_00->fields).Message, pSVar23 == (System_String_o *)0x0 ||
                (pSVar4 = (__this_00->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))) break;
            *(int *)((long)&pSVar13->fields + 0x10) =
                 (*(int *)((long)&pSVar13->fields + 0x10) - (pSVar23->fields)._stringLength) -
                 (pSVar4->fields)._stringLength;
            *(undefined8 *)(puVar20 + -0x78) = 0x44b1a7e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar12,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              *(undefined8 *)(puVar20 + -0x78) = 0x44b1a93;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar20 + -0x78) = 0x44b19ca;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(__this_00,(MethodInfo *)0x0);
            iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                      ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
            pSVar25 = TypeInfo_DebugConsole;
          }
        }
      }
    }
    else {
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        *(undefined8 *)(puVar20 + -0x78) = 0x44b188d;
        il2cpp_runtime_helper_02337ed0();
        pSVar12 = (System_Collections_Generic_LinkedList_T__o *)
                  (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                    fields)._siInfo)->fields).m_members;
        if (pSVar12 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b1ac8;
      }
      *(undefined8 *)(puVar20 + -0x78) = 0x44b18b7;
      pSVar10 = System_Collections_Generic_LinkedList_object___get_Last(pSVar12,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
      if (pSVar10 != (System_Collections_Generic_LinkedListNode_T__o *)0x0) {
        __this = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar10->fields).item;
        __this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
        if (__this != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          *(undefined8 *)(puVar20 + -0x78) = 0x44b18e4;
          bVar7 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                            (__this,(System_String_o *)pSVar9,type,uVar26 & 0xff,
                             *(System_String_o **)(puVar20 + -0x70),(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            piVar1 = &(__this->fields).Count;
            *piVar1 = *piVar1 + 1;
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              *(undefined8 *)(puVar20 + -0x78) = 0x44b18fe;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
label_044b1ab5:
            *(undefined1 *)((long)&pSVar13->fields + 0x50) = 1;
            return;
          }
          goto label_044b190e;
        }
      }
    }
  }
label_044b1ac8:
  *(undefined8 *)(puVar20 + -0x78) = 0x44b1acd;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  *(System_String_o **)(puVar20 + -0x78) = pSVar22;
  *(ApplicationManagers_DebugConsole_LogMessage_o **)(puVar20 + -0x80) = value;
  *(System_String_o **)(puVar20 + -0x88) = stackTrace;
  *(System_Object_array **)(puVar20 + -0x90) = pSVar9;
  *(System_Object_array ***)(puVar20 + -0x98) = &TypeInfo_DebugConsole;
  *(ApplicationManagers_DebugConsole_LogMessage_o **)(puVar20 + -0xa0) = __this_00;
  *(undefined8 *)(puVar20 + -0xa8) = uVar11;
  if (g_data_057aea0c == '\0') {
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1af0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1afc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b14;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b2c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b38;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b44;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0c = '\x01';
  }
  uVar21 = 0;
  iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                            ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
  while( true ) {
    if (iVar15 == 0) {
      *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b9f;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    pSVar25 = *(System_Object_array **)((long)&pSVar13->fields + 8);
    if (pSVar25 == (System_Object_array *)0x0) break;
    uVar26 = (uint)uVar21;
    if ((0x31 < uVar26) || (*(int *)&pSVar25->max_length < 1)) {
      if (uVar26 != 0) {
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
          *(undefined8 *)(puVar20 + -0xb0) = 0x44b1e7c;
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                    fields)._siInfo;
        }
        *(undefined1 *)((long)&pSVar13->fields + 0x38) = 1;
        *(undefined1 *)((long)&pSVar13->fields + 0x50) = 1;
      }
      return;
    }
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      *(undefined8 *)(puVar20 + -0xb0) = 0x44b1bd8;
      il2cpp_runtime_helper_02337ed0();
      pSVar25 = *(System_Object_array **)
                 ((long)&((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70)
                           )->fields)._siInfo)->fields + 8);
      if (pSVar25 == (System_Object_array *)0x0) break;
    }
    if (pSVar25->bounds == (Il2CppArrayBounds *)0x0) break;
    stackTrace = *(System_String_o **)((long)(pSVar25->bounds + 2) + 8);
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1c0c;
    System_Collections_Generic_LinkedList_object___RemoveFirst
              ((System_Collections_Generic_LinkedList_T__o *)pSVar25,MethodInfo_Void_RemoveFirst);
    pSVar12 = (System_Collections_Generic_LinkedList_T__o *)
              (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
               ._siInfo)->fields).m_members;
    if (pSVar12 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    if ((pSVar12->fields).count < 1) {
label_044b1d13:
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        *(undefined8 *)(puVar20 + -0xb0) = 0x44b1d21;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace !=
            (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar22 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).Message,
          pSVar22 != (System_String_o *)0x0)) &&
         (pSVar23 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).StackTrace,
         pSVar23 != (System_String_o *)0x0)) {
        pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                  fields)._siInfo;
        iVar15 = (pSVar23->fields)._stringLength + (pSVar22->fields)._stringLength;
        *(int *)((long)&pSVar13->fields + 0x14) = *(int *)((long)&pSVar13->fields + 0x14) - iVar15;
        ppSVar5 = (System_Type_array **)((long)&pSVar13->fields + 0x10);
        *(int *)ppSVar5 = *(int *)ppSVar5 + iVar15;
        pSVar12 = (System_Collections_Generic_LinkedList_T__o *)(pSVar13->fields).m_members;
        if (pSVar12 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
          *(undefined8 *)(puVar20 + -0xb0) = 0x44b1d7e;
          System_Collections_Generic_LinkedList_object___AddLast
                    (pSVar12,(Il2CppObject *)stackTrace,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                    ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
          do {
            if (iVar15 == 0) {
              *(undefined8 *)(puVar20 + -0xb0) = 0x44b1dab;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            lVar3 = (long)(pSVar13->fields).m_members;
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) < 0x401) {
              if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                   ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                *(undefined8 *)(puVar20 + -0xb0) = 0x44b1dd9;
                il2cpp_runtime_helper_02337ed0();
                pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70)
                           )->fields)._siInfo;
              }
              if (*(int *)((long)&pSVar13->fields + 0x10) < 0x7a121) goto label_044b1b8a;
            }
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              *(undefined8 *)(puVar20 + -0xb0) = 0x44b1dfe;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            pSVar12 = (System_Collections_Generic_LinkedList_T__o *)(pSVar13->fields).m_members;
            if (((pSVar12 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                (pSVar10 = (pSVar12->fields).head,
                pSVar10 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
               ((__this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar10->fields).item,
                __this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
                ((pSVar22 = (__this_00->fields).Message, pSVar22 == (System_String_o *)0x0 ||
                 (pSVar23 = (__this_00->fields).StackTrace, pSVar23 == (System_String_o *)0x0)))))) break;
            *(int *)((long)&pSVar13->fields + 0x10) =
                 (*(int *)((long)&pSVar13->fields + 0x10) - (pSVar22->fields)._stringLength) -
                 (pSVar23->fields)._stringLength;
            *(undefined8 *)(puVar20 + -0xb0) = 0x44b1e4e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar12,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              *(undefined8 *)(puVar20 + -0xb0) = 0x44b1e64;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar20 + -0xb0) = 0x44b1d9a;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(__this_00,(MethodInfo *)0x0);
            iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                      ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
          } while( true );
        }
      }
      break;
    }
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      *(undefined8 *)(puVar20 + -0xb0) = 0x44b1c3b;
      il2cpp_runtime_helper_02337ed0();
      pSVar12 = (System_Collections_Generic_LinkedList_T__o *)
                (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                  fields)._siInfo)->fields).m_members;
      if (pSVar12 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1c64;
    pSVar10 = System_Collections_Generic_LinkedList_object___get_Last(pSVar12,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    if (((pSVar10 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
        ((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace ==
         (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (__this_00 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar10->fields).item,
       __this_00 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) break;
    pSVar22 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).StackTrace;
    bVar7 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).IsCustomLogic;
    iVar19 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).Type;
    pSVar23 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).Message;
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1c9f;
    bVar7 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                      (__this_00,pSVar23,iVar19,(uint)(byte)bVar7,pSVar22,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_044b1d13;
    piVar1 = &(__this_00->fields).Count;
    *piVar1 = *piVar1 + (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).Count;
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      *(undefined8 *)(puVar20 + -0xb0) = 0x44b1cbb;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).Message;
    if ((pSVar22 == (System_String_o *)0x0) ||
       (pSVar23 = (((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace)->fields).StackTrace,
       pSVar23 == (System_String_o *)0x0)) break;
    pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    *(int *)((long)&pSVar13->fields + 0x14) =
         (*(int *)((long)&pSVar13->fields + 0x14) - (pSVar22->fields)._stringLength) -
         (pSVar23->fields)._stringLength;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      *(undefined8 *)(puVar20 + -0xb0) = 0x44b1d01;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar20 + -0xb0) = 0x44b1b8a;
    ApplicationManagers_DebugConsole_LogMessagePool__Return
              ((ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace,(MethodInfo *)0x0);
label_044b1b8a:
    uVar21 = (ulong)(uVar26 + 1);
    iVar15 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                              ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
  }
  *(undefined8 *)(puVar20 + -0xb0) = 0x44b1ea2;
  il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar20 + -0xb0) = &TypeInfo_LogMessagePool;
  *(System_Object_array ***)(puVar20 + -0xb8) = &TypeInfo_DebugConsole;
  *(System_String_o **)(puVar20 + -0xc0) = stackTrace;
  *(MethodInfo_3516DC0 ***)(puVar20 + -200) = &MethodInfo_Void_RemoveFirst;
  *(ulong *)(puVar20 + -0xd0) = uVar21;
  *(ApplicationManagers_DebugConsole_LogMessage_o **)(puVar20 + -0xd8) = __this_00;
  if (g_data_057aea0d == '\0') {
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1ed3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1edf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1eeb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1ef7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1f03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1f0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1f1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aea0d = '\x01';
  }
  *(undefined8 *)(puVar20 + -0x120) = 0;
  *(undefined8 *)(puVar20 + -0x118) = 0;
  *(undefined8 *)(puVar20 + -0x130) = 0;
  *(undefined8 *)(puVar20 + -0x128) = 0;
  *(undefined8 *)(puVar20 + -0x110) = 0;
  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))->
                      fields)._syncRoot + 4) == 0) {
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1f75;
    il2cpp_runtime_helper_02337ed0();
    pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    cVar2 = *(char *)((long)&pSVar13->fields + 0x38);
  }
  else {
    pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    cVar2 = *(char *)((long)&pSVar13->fields + 0x38);
  }
  if (cVar2 == '\0') {
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      *(undefined8 *)(puVar20 + -0x138) = 0x44b1f8c;
      il2cpp_runtime_helper_02337ed0();
      pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
                ._siInfo;
      if (*(int *)((long)&pSVar13->fields + 0x3c) == *(int *)((long)(pSVar13 + 1) + 0x30)) {
        return;
      }
    }
    else if (*(int *)((long)&pSVar13->fields + 0x3c) == *(int *)((long)(pSVar13 + 1) + 0x30)) {
      return;
    }
  }
  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))->
                      fields)._syncRoot + 4) == 0) {
    *(undefined8 *)(puVar20 + -0x138) = 0x44b1fb3;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
            _siInfo;
  pSVar22 = *(System_String_o **)((long)&pSVar13->fields + 0x30);
  if (pSVar22 != (System_String_o *)0x0) {
    *(int *)((long)(pSVar22 + 1) + 4U) = *(int *)((long)(pSVar22 + 1) + 4U) + 1;
    iVar19 = *(int32_t *)&pSVar22[1].klass;
    *(undefined4 *)&pSVar22[1].klass = 0;
    if (0 < iVar19) {
      array = pSVar22->fields;
      *(undefined8 *)(puVar20 + -0x138) = 0x44b1fe9;
      System_Array__Clear((System_Array_o *)array,0,iVar19,(MethodInfo *)0x0);
      pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
                ._siInfo;
    }
    pSVar12 = (System_Collections_Generic_LinkedList_T__o *)(pSVar13->fields).m_members;
    if (pSVar12 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
      *(undefined8 *)(puVar20 + -0x138) = 0x44b2014;
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(puVar20 + -0x100),pSVar12,
                 MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
      *(undefined8 *)(puVar20 + -0x110) = *(undefined8 *)(puVar20 + -0xe0);
      *(undefined8 *)(puVar20 + -0x120) = *(undefined8 *)(puVar20 + -0xf0);
      *(undefined8 *)(puVar20 + -0x118) = *(undefined8 *)(puVar20 + -0xe8);
      *(undefined8 *)(puVar20 + -0x130) = *(undefined8 *)(puVar20 + -0x100);
      *(undefined8 *)(puVar20 + -0x128) = *(undefined8 *)(puVar20 + -0xf8);
      while( true ) {
        *(undefined8 *)(puVar20 + -0x138) = 0x44b207c;
        bVar7 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                          ((System_Collections_Generic_LinkedList_Enumerator_T__o)
                           *(System_Collections_Generic_LinkedList_Enumerator_T__Fields *)(puVar20 + -0x130),
                           (MethodInfo_3219F70 *)(puVar20 + -0x130));
        if ((char)bVar7 == '\0') break;
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
          *(undefined8 *)(puVar20 + -0x138) = 0x44b20d5;
          il2cpp_runtime_helper_02337ed0();
          uVar26 = *(uint *)((long)((((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo + 1) + 0x30);
        }
        else {
          uVar26 = *(uint *)((long)((((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo + 1) + 0x30);
        }
        if ((ulong)uVar26 < 5) {
          (*(code *)(&g_data_00d99a44 + *(int *)(&g_data_00d99a44 + (ulong)uVar26 * 4)))();
          return;
        }
      }
      *(undefined8 *)(puVar20 + -0x138) = 0x44b21d9;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                ((System_Collections_Generic_LinkedList_Enumerator_T__o)
                 *(System_Collections_Generic_LinkedList_Enumerator_T__Fields *)(puVar20 + -0x130),
                 (MethodInfo_321A0F0 *)(puVar20 + -0x130));
      goto label_044b21d9;
    }
  }
  *(undefined8 *)(puVar20 + -0x138) = 0x44b2237;
  auVar27 = il2cpp_runtime_helper_022b2c90();
  if (auVar27._8_4_ == 1) {
    *(undefined8 *)(puVar20 + -0x138) = 0x44b229a;
    plVar14 = (long *)__cxa_begin_catch(auVar27._0_8_);
    lVar3 = *plVar14;
    *(undefined8 *)(puVar20 + -0x138) = 0x44b22a2;
    __cxa_end_catch();
    *(undefined8 *)(puVar20 + -0x138) = 0x44b22b4;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              ((System_Collections_Generic_LinkedList_Enumerator_T__o)
               *(System_Collections_Generic_LinkedList_Enumerator_T__Fields *)(puVar20 + -0x130),
               (MethodInfo_321A0F0 *)(puVar20 + -0x130));
    if (lVar3 == 0) {
label_044b21d9:
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        *(undefined8 *)(puVar20 + -0x138) = 0x44b21ea;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
                ._siInfo;
      *(undefined1 *)((long)&pSVar13->fields + 0x38) = 0;
      *(int32_t *)((long)&pSVar13->fields + 0x3c) = *(int32_t *)((long)(pSVar13 + 1) + 0x30);
      *(undefined1 *)((long)&pSVar13->fields + 0x50) = 1;
      return;
    }
    *(undefined8 *)(puVar20 + -0x138) = 0x44b22c5;
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  *(undefined8 *)(puVar20 + -0x138) = 0x44b22de;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose
            ((System_Collections_Generic_LinkedList_Enumerator_T__o)
             *(System_Collections_Generic_LinkedList_Enumerator_T__Fields *)(puVar20 + -0x130),
             (MethodInfo_321A0F0 *)(puVar20 + -0x130));
  *(undefined8 *)(puVar20 + -0x138) = 0x44b22eb;
  _Unwind_Resume(auVar27._0_8_);
}


// ApplicationManagers.DebugConsole$$AddMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__AddMessageBuffer (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x44b1330

void ApplicationManagers_DebugConsole__AddMessageBuffer
               (System_String_o *message,int32_t type,System_String_o *stackTrace,bool_conflict isCustomLogic,
               MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  long lVar3;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_03;
  System_Type_array **ppSVar4;
  undefined4 in_EAX;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  System_String_o *pSVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_LinkedListNode_T__o *pSVar9;
  System_String_o *str0;
  ApplicationManagers_DebugConsole_LogMessage_o *value;
  System_Collections_Generic_LinkedList_T__o *pSVar10;
  System_Runtime_Serialization_SerializationInfo_o *pSVar11;
  long *plVar12;
  int iVar13;
  System_Object_array *pSVar14;
  System_Object_array *pSVar15;
  System_String_o **ppSVar16;
  int32_t iVar17;
  ApplicationManagers_DebugConsole_LogMessage_o *extraout_RDX;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_RBX;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_04;
  System_String_o *pSVar18;
  MethodInfo_3516500 *pMVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_R14;
  System_Object_array *unaff_R15;
  undefined1 auVar23 [12];
  Il2CppMethodPointer pIVar24;
  Il2CppMethodPointer pIVar25;
  Il2CppRGCTXData *pIVar26;
  InvokerMethod pIVar27;
  _union_300326 _Var28;
  char *pcVar29;
  Il2CppObject *pIVar30;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSVar31;
  undefined1 auStack_100 [24];
  Il2CppObject *pIStack_e8;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSStack_e0;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_a0;
  undefined8 *puStack_98;
  System_Object_array *pSStack_90;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_88;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_80;
  System_String_o *pSStack_78;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_70;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_68;
  undefined8 *puStack_60;
  System_String_o *pSStack_58;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_50;
  System_Object_array *pSStack_48;
  System_String_o *pSStack_40;
  undefined8 uStack_38;
  
  pSVar14 = (System_Object_array *)(ulong)(uint)isCustomLogic;
  puVar21 = (undefined8 *)(ulong)(uint)isCustomLogic;
  uStack_38 = CONCAT44(type,in_EAX);
  pSVar6 = (System_Object_array *)message;
  if (g_data_057aea0a == '\0') {
    pSStack_40 = (System_String_o *)0x44b166b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSStack_40 = (System_String_o *)0x44b1677;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    pSStack_40 = (System_String_o *)0x44b1683;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    pSStack_40 = (System_String_o *)0x44b168f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    pSStack_40 = (System_String_o *)0x44b169b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_40 = (System_String_o *)0x44b16a7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    pSStack_40 = (System_String_o *)0x44b16b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    pSStack_40 = (System_String_o *)0x44b16bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    pSVar6 = (System_Object_array *)&"...";
    pSStack_40 = (System_String_o *)0x44b16cb;
    il2cpp_runtime_helper_023445d0();
    g_data_057aea0a = '\x01';
  }
  if (message == (System_String_o *)0x0) {
    message = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (stackTrace == (System_String_o *)0x0) {
    stackTrace = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar7 = message;
  if (message != (System_String_o *)0x0) {
    uVar20 = ((System_String_Fields *)((long)message + 0x10))->_stringLength;
    if (0x400 < (int)uVar20) {
      pSStack_40 = (System_String_o *)0x44b138d;
      pSVar6 = (System_Object_array *)System_String__Substring_3af8da0(message,0,0x400,(MethodInfo *)0x0);
      pSStack_40 = (System_String_o *)0x44b13a1;
      pSVar18 = "...";
      pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)pSVar6,"...",(MethodInfo *)0x0);
      type = (int32_t)pSVar18;
      uVar20 = ((System_String_Fields *)((long)message + 0x10))->_stringLength;
    }
    pSVar14 = (System_Object_array *)(ulong)uVar20;
    if (0x400 < (int)uVar20) {
      pSVar14 = (System_Object_array *)0x400;
    }
    if (stackTrace != (System_String_o *)0x0) {
      iVar17 = 0x400 - (int)pSVar14;
      if (iVar17 < (stackTrace->fields)._stringLength) {
        if (iVar17 < 0) {
          iVar17 = 0;
        }
        pSStack_40 = (System_String_o *)0x44b1732;
        str0 = System_String__Substring_3af8da0(stackTrace,0,iVar17,(MethodInfo *)0x0);
        pSVar14 = (System_Object_array *)&"...";
        pSStack_40 = (System_String_o *)0x44b1746;
        pSVar18 = "...";
        stackTrace = System_String__Concat_3ae5ba0(str0,"...",(MethodInfo *)0x0);
        type = (int32_t)pSVar18;
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0)
        goto label_044b1760;
label_044b13e1:
        pSVar8 = *(System_Object_array **)
                  ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                            ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
        pSVar6 = TypeInfo_DebugConsole;
      }
      else {
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) != 0)
        goto label_044b13e1;
label_044b1760:
        pSStack_40 = (System_String_o *)0x44b1765;
        il2cpp_runtime_helper_02337ed0();
        pSVar8 = *(System_Object_array **)
                  ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                            ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
        pSVar6 = TypeInfo_DebugConsole;
      }
      unaff_R14 = (ApplicationManagers_DebugConsole_LogMessage_o *)&TypeInfo_DebugConsole;
      TypeInfo_DebugConsole = pSVar6;
      if (pSVar8 != (System_Object_array *)0x0) {
        unaff_R14 = (ApplicationManagers_DebugConsole_LogMessage_o *)&TypeInfo_DebugConsole;
        pSVar15 = (System_Object_array *)(ulong)(byte)isCustomLogic;
        if (0 < *(int *)&pSVar8->max_length) {
          unaff_R15 = pSVar15;
          if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)pSVar6->m_Items + 0xa0))
                              ->fields)._syncRoot + 4) == 0) {
            pSStack_40 = (System_String_o *)0x44b1411;
            il2cpp_runtime_helper_02337ed0();
            pSVar8 = *(System_Object_array **)
                      ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                                ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
            if (pSVar8 == (System_Object_array *)0x0) goto label_044b177c;
          }
          pSVar14 = (System_Object_array *)&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes;
          pSStack_40 = (System_String_o *)0x44b143a;
          pMVar19 = MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes;
          pSVar9 = System_Collections_Generic_LinkedList_object___get_Last
                             ((System_Collections_Generic_LinkedList_T__o *)pSVar8,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          type = (int32_t)pMVar19;
          pSVar6 = pSVar8;
          if ((pSVar9 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
             (unaff_RBX = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar9->fields).item,
             unaff_RBX == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) goto label_044b177c;
          pSStack_40 = (System_String_o *)0x44b1468;
          bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                            (unaff_RBX,pSVar7,uStack_38._4_4_,isCustomLogic & 0xff,stackTrace,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            piVar1 = &(unaff_RBX->fields).Count;
            *piVar1 = *piVar1 + 1;
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              pSStack_40 = (System_String_o *)0x44b1481;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            ppSVar16 = (System_String_o **)((long)&pSVar11->fields + 0x28);
label_044b1649:
            *(undefined1 *)ppSVar16 = 1;
            *(undefined1 *)((long)&pSVar11->fields + 0x50) = 1;
            return;
          }
        }
        puVar21 = &TypeInfo_LogMessagePool;
        if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
          pSStack_40 = (System_String_o *)0x44b14ad;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = (System_String_o *)0x44b14c2;
        type = uStack_38._4_4_;
        unaff_R15 = (System_Object_array *)
                    ApplicationManagers_DebugConsole_LogMessagePool__Get
                              (pSVar7,uStack_38._4_4_,stackTrace,isCustomLogic & 0xff,(MethodInfo *)0x0);
        pSVar14 = pSVar15;
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
          pSStack_40 = (System_String_o *)0x44b14d6;
          il2cpp_runtime_helper_02337ed0();
          pSVar14 = pSVar15;
        }
        pSVar6 = *(System_Object_array **)
                  ((long)&((((System_Collections_Generic_LinkedList_T__o *)
                            ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo)->fields + 8);
        if (pSVar6 != (System_Object_array *)0x0) {
          pSStack_40 = (System_String_o *)0x44b14ff;
          pSVar8 = unaff_R15;
          System_Collections_Generic_LinkedList_object___AddLast
                    ((System_Collections_Generic_LinkedList_T__o *)pSVar6,(Il2CppObject *)unaff_R15,
                     MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          pSVar15 = TypeInfo_DebugConsole;
          type = (int32_t)pSVar8;
          if ((pSVar7 != (System_String_o *)0x0) && (stackTrace != (System_String_o *)0x0)) {
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            *(int *)((long)&pSVar11->fields + 0x14) =
                 *(int *)((long)&pSVar11->fields + 0x14) + (pSVar7->fields)._stringLength +
                 (stackTrace->fields)._stringLength;
            stackTrace = (System_String_o *)&MethodInfo_Void_RemoveFirst;
            iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                      ((long)pSVar15->m_Items + 0xa0))->fields)._syncRoot + 4);
            while( true ) {
              type = (int32_t)pSVar8;
              pSVar6 = pSVar15;
              if (iVar13 == 0) {
                pSStack_40 = (System_String_o *)0x44b155b;
                il2cpp_runtime_helper_02337ed0();
                pSVar6 = TypeInfo_DebugConsole;
              }
              pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar6->m_Items + 0x70))->
                        fields)._siInfo;
              pSVar14 = *(System_Object_array **)((long)&pSVar11->fields + 8);
              if (pSVar14 == (System_Object_array *)0x0) break;
              if (*(int *)&pSVar14->max_length < 0x401) {
                if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)pSVar6->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                  pSStack_40 = (System_String_o *)0x44b1589;
                  il2cpp_runtime_helper_02337ed0();
                  pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo;
                  pSVar6 = TypeInfo_DebugConsole;
                }
                if (*(int *)((long)&pSVar11->fields + 0x14) < 0x7a121) {
                  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                       ((long)pSVar6->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                    pSStack_40 = (System_String_o *)0x44b1637;
                    il2cpp_runtime_helper_02337ed0();
                    pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)
                               ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo;
                  }
                  *(undefined1 *)((long)&pSVar11->fields + 0x28) = 1;
                  ppSVar16 = (System_String_o **)((long)&pSVar11->fields + 0x38);
                  goto label_044b1649;
                }
              }
              if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                   ((long)pSVar6->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                pSStack_40 = (System_String_o *)0x44b15ae;
                il2cpp_runtime_helper_02337ed0();
                pSVar6 = TypeInfo_DebugConsole;
              }
              pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar6->m_Items + 0x70))->
                        fields)._siInfo;
              pSVar6 = *(System_Object_array **)((long)&pSVar11->fields + 8);
              if ((((pSVar6 == (System_Object_array *)0x0) ||
                   (pSVar14 = (System_Object_array *)pSVar6->bounds, pSVar14 == (System_Object_array *)0x0))
                  || (unaff_RBX = *(ApplicationManagers_DebugConsole_LogMessage_o **)
                                   ((long)pSVar14->m_Items + 8),
                     unaff_RBX == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
                 ((pSVar14 = (System_Object_array *)(unaff_RBX->fields).Message,
                  pSVar14 == (System_Object_array *)0x0 ||
                  (pSVar18 = (unaff_RBX->fields).StackTrace, pSVar18 == (System_String_o *)0x0)))) break;
              *(int *)((long)&pSVar11->fields + 0x14) =
                   (*(int *)((long)&pSVar11->fields + 0x14) - *(int *)&pSVar14->bounds) -
                   (pSVar18->fields)._stringLength;
              pSStack_40 = (System_String_o *)0x44b160e;
              System_Collections_Generic_LinkedList_object___RemoveFirst
                        ((System_Collections_Generic_LinkedList_T__o *)pSVar6,MethodInfo_Void_RemoveFirst);
              if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
                pSStack_40 = (System_String_o *)0x44b1624;
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar8 = (System_Object_array *)0x0;
              pSStack_40 = (System_String_o *)0x44b154a;
              ApplicationManagers_DebugConsole_LogMessagePool__Return(unaff_RBX,(MethodInfo *)0x0);
              iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                        ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
              pSVar15 = TypeInfo_DebugConsole;
            }
          }
        }
      }
    }
  }
label_044b177c:
  uVar20 = (uint)pSVar14;
  pSStack_40 = (System_String_o *)0x44b1781;
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(ulong)uVar20;
  value = (ApplicationManagers_DebugConsole_LogMessage_o *)(ulong)(uint)type;
  pAStack_70 = extraout_RDX;
  pAStack_68 = unaff_RBX;
  puStack_60 = puVar21;
  pSStack_58 = pSVar7;
  pAStack_50 = unaff_R14;
  pSStack_48 = unaff_R15;
  pSStack_40 = stackTrace;
  if (g_data_057aea0b == '\0') {
    pSStack_78 = (System_String_o *)0x44b17bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    pSStack_78 = (System_String_o *)0x44b17c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    pSStack_78 = (System_String_o *)0x44b17d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    pSStack_78 = (System_String_o *)0x44b17e0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    pSStack_78 = (System_String_o *)0x44b17ec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_78 = (System_String_o *)0x44b17f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    pSStack_78 = (System_String_o *)0x44b1804;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    pSStack_78 = (System_String_o *)0x44b1810;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0b = '\x01';
  }
  pSStack_78 = (System_String_o *)0x44b1839;
  bVar5 = System_String__op_Equality
                    ((System_String_o *)pSVar6,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))->
                      fields)._syncRoot + 4) == 0) {
    pSStack_78 = (System_String_o *)0x44b185a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_Collections_Generic_LinkedList_T__o *)
            (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
             _siInfo)->fields).m_members;
  if (pSVar10 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    stackTrace = (System_String_o *)(ulong)(byte)uVar20;
    if ((pSVar10->fields).count < 1) {
label_044b190e:
      unaff_R14 = (ApplicationManagers_DebugConsole_LogMessage_o *)&TypeInfo_LogMessagePool;
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        pSStack_78 = (System_String_o *)0x44b1926;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = pAStack_70;
      pSStack_78 = (System_String_o *)0x44b193d;
      value = ApplicationManagers_DebugConsole_LogMessagePool__Get
                        ((System_String_o *)pSVar6,type,(System_String_o *)pAStack_70,uVar20 & 0xff,
                         (MethodInfo *)0x0);
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        pSStack_78 = (System_String_o *)0x44b1952;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = (System_Collections_Generic_LinkedList_T__o *)
                (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                  fields)._siInfo)->fields).m_members;
      if (pSVar10 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
        pSStack_78 = (System_String_o *)0x44b197c;
        System_Collections_Generic_LinkedList_object___AddLast(pSVar10,(Il2CppObject *)value,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
        pSVar14 = TypeInfo_DebugConsole;
        if ((pSVar6 != (System_Object_array *)0x0) &&
           (__this_04 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) {
          pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                    fields)._siInfo;
          *(int *)((long)&pSVar11->fields + 0x10) =
               *(int *)((long)&pSVar11->fields + 0x10) +
               *(int *)&((System_Collections_Generic_LinkedList_T__Fields *)&pSVar6->bounds)->head +
               *(int *)&(__this_04->fields).Message;
          stackTrace = (System_String_o *)&MethodInfo_Void_RemoveFirst;
          iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                    ((long)pSVar14->m_Items + 0xa0))->fields)._syncRoot + 4);
          while( true ) {
            if (iVar13 == 0) {
              pSStack_78 = (System_String_o *)0x44b19dc;
              il2cpp_runtime_helper_02337ed0();
              pSVar14 = TypeInfo_DebugConsole;
            }
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar14->m_Items + 0x70))->fields
                      )._siInfo;
            lVar3 = (long)(pSVar11->fields).m_members;
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) < 0x401) {
              if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                   ((long)pSVar14->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                pSStack_78 = (System_String_o *)0x44b1a0b;
                il2cpp_runtime_helper_02337ed0();
                pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70)
                           )->fields)._siInfo;
                pSVar14 = TypeInfo_DebugConsole;
              }
              if (*(int *)((long)&pSVar11->fields + 0x10) < 0x7a121) {
                if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)pSVar14->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                  pSStack_78 = (System_String_o *)0x44b1aa6;
                  il2cpp_runtime_helper_02337ed0();
                  pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo;
                }
                *(undefined1 *)((long)&pSVar11->fields + 0x38) = 1;
                goto label_044b1ab5;
              }
            }
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)pSVar14->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              pSStack_78 = (System_String_o *)0x44b1a2d;
              il2cpp_runtime_helper_02337ed0();
              pSVar14 = TypeInfo_DebugConsole;
            }
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)pSVar14->m_Items + 0x70))->fields
                      )._siInfo;
            pSVar10 = (System_Collections_Generic_LinkedList_T__o *)(pSVar11->fields).m_members;
            if ((((pSVar10 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                 (pSVar9 = (pSVar10->fields).head,
                 pSVar9 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
                (__this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar9->fields).item,
                __this_04 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
               ((pSVar7 = (__this_04->fields).Message, pSVar7 == (System_String_o *)0x0 ||
                (pSVar18 = (__this_04->fields).StackTrace, pSVar18 == (System_String_o *)0x0)))) break;
            *(int *)((long)&pSVar11->fields + 0x10) =
                 (*(int *)((long)&pSVar11->fields + 0x10) - (pSVar7->fields)._stringLength) -
                 (pSVar18->fields)._stringLength;
            pSStack_78 = (System_String_o *)0x44b1a7e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar10,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              pSStack_78 = (System_String_o *)0x44b1a93;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_78 = (System_String_o *)0x44b19ca;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(__this_04,(MethodInfo *)0x0);
            iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                      ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
            pSVar14 = TypeInfo_DebugConsole;
          }
        }
      }
    }
    else {
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        pSStack_78 = (System_String_o *)0x44b188d;
        il2cpp_runtime_helper_02337ed0();
        pSVar10 = (System_Collections_Generic_LinkedList_T__o *)
                  (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                    fields)._siInfo)->fields).m_members;
        if (pSVar10 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b1ac8;
      }
      pSStack_78 = (System_String_o *)0x44b18b7;
      pSVar9 = System_Collections_Generic_LinkedList_object___get_Last(pSVar10,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
      if (pSVar9 != (System_Collections_Generic_LinkedListNode_T__o *)0x0) {
        __this = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar9->fields).item;
        __this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
        if (__this != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          pSStack_78 = (System_String_o *)0x44b18e4;
          bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                            (__this,(System_String_o *)pSVar6,type,uVar20 & 0xff,(System_String_o *)pAStack_70
                             ,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            piVar1 = &(__this->fields).Count;
            *piVar1 = *piVar1 + 1;
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              pSStack_78 = (System_String_o *)0x44b18fe;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
label_044b1ab5:
            *(undefined1 *)((long)&pSVar11->fields + 0x50) = 1;
            return;
          }
          goto label_044b190e;
        }
      }
    }
  }
label_044b1ac8:
  pSStack_78 = (System_String_o *)0x44b1acd;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  puStack_98 = &TypeInfo_DebugConsole;
  pAStack_a0 = __this_04;
  pSStack_90 = pSVar6;
  pAStack_88 = unaff_R14;
  pAStack_80 = value;
  pSStack_78 = stackTrace;
  if (g_data_057aea0c == '\0') {
    puStack_b0 = (undefined8 *)0x44b1af0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    puStack_b0 = (undefined8 *)0x44b1afc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    puStack_b0 = (undefined8 *)0x44b1b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_b0 = (undefined8 *)0x44b1b14;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    puStack_b0 = (undefined8 *)0x44b1b20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_b0 = (undefined8 *)0x44b1b2c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_b0 = (undefined8 *)0x44b1b38;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_b0 = (undefined8 *)0x44b1b44;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0c = '\x01';
  }
  uVar22 = 0;
  iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                            ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
  while( true ) {
    if (iVar13 == 0) {
      puStack_b0 = (undefined8 *)0x44b1b9f;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    pSVar6 = *(System_Object_array **)((long)&pSVar11->fields + 8);
    if (pSVar6 == (System_Object_array *)0x0) break;
    uVar20 = (uint)uVar22;
    if ((0x31 < uVar20) || (*(int *)&pSVar6->max_length < 1)) {
      if (uVar20 != 0) {
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
          puStack_b0 = (undefined8 *)0x44b1e7c;
          il2cpp_runtime_helper_02337ed0();
          pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                    fields)._siInfo;
        }
        *(undefined1 *)((long)&pSVar11->fields + 0x38) = 1;
        *(undefined1 *)((long)&pSVar11->fields + 0x50) = 1;
      }
      return;
    }
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      puStack_b0 = (undefined8 *)0x44b1bd8;
      il2cpp_runtime_helper_02337ed0();
      pSVar6 = *(System_Object_array **)
                ((long)&((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))
                         ->fields)._siInfo)->fields + 8);
      if (pSVar6 == (System_Object_array *)0x0) break;
    }
    if (pSVar6->bounds == (Il2CppArrayBounds *)0x0) break;
    unaff_R14 = *(ApplicationManagers_DebugConsole_LogMessage_o **)((long)(pSVar6->bounds + 2) + 8);
    puStack_b0 = (undefined8 *)0x44b1c0c;
    System_Collections_Generic_LinkedList_object___RemoveFirst
              ((System_Collections_Generic_LinkedList_T__o *)pSVar6,MethodInfo_Void_RemoveFirst);
    pSVar10 = (System_Collections_Generic_LinkedList_T__o *)
              (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
               ._siInfo)->fields).m_members;
    if (pSVar10 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    if ((pSVar10->fields).count < 1) {
label_044b1d13:
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        puStack_b0 = (undefined8 *)0x44b1d21;
        il2cpp_runtime_helper_02337ed0();
      }
      if (((unaff_R14 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar7 = (unaff_R14->fields).Message, pSVar7 != (System_String_o *)0x0)) &&
         (pSVar18 = (unaff_R14->fields).StackTrace, pSVar18 != (System_String_o *)0x0)) {
        pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                  fields)._siInfo;
        iVar13 = (pSVar18->fields)._stringLength + (pSVar7->fields)._stringLength;
        *(int *)((long)&pSVar11->fields + 0x14) = *(int *)((long)&pSVar11->fields + 0x14) - iVar13;
        ppSVar4 = (System_Type_array **)((long)&pSVar11->fields + 0x10);
        *(int *)ppSVar4 = *(int *)ppSVar4 + iVar13;
        pSVar10 = (System_Collections_Generic_LinkedList_T__o *)(pSVar11->fields).m_members;
        if (pSVar10 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
          puStack_b0 = (undefined8 *)0x44b1d7e;
          System_Collections_Generic_LinkedList_object___AddLast
                    (pSVar10,(Il2CppObject *)unaff_R14,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                    ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
          do {
            if (iVar13 == 0) {
              puStack_b0 = (undefined8 *)0x44b1dab;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            lVar3 = (long)(pSVar11->fields).m_members;
            if (lVar3 == 0) break;
            if (*(int *)(lVar3 + 0x18) < 0x401) {
              if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                   ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
                puStack_b0 = (undefined8 *)0x44b1dd9;
                il2cpp_runtime_helper_02337ed0();
                pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70)
                           )->fields)._siInfo;
              }
              if (*(int *)((long)&pSVar11->fields + 0x10) < 0x7a121) goto label_044b1b8a;
            }
            if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                 ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
              puStack_b0 = (undefined8 *)0x44b1dfe;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                      fields)._siInfo;
            pSVar10 = (System_Collections_Generic_LinkedList_T__o *)(pSVar11->fields).m_members;
            if (((pSVar10 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                (pSVar9 = (pSVar10->fields).head,
                pSVar9 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
               ((__this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar9->fields).item,
                __this_04 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
                ((pSVar7 = (__this_04->fields).Message, pSVar7 == (System_String_o *)0x0 ||
                 (pSVar18 = (__this_04->fields).StackTrace, pSVar18 == (System_String_o *)0x0)))))) break;
            *(int *)((long)&pSVar11->fields + 0x10) =
                 (*(int *)((long)&pSVar11->fields + 0x10) - (pSVar7->fields)._stringLength) -
                 (pSVar18->fields)._stringLength;
            puStack_b0 = (undefined8 *)0x44b1e4e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar10,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              puStack_b0 = (undefined8 *)0x44b1e64;
              il2cpp_runtime_helper_02337ed0();
            }
            puStack_b0 = (undefined8 *)0x44b1d9a;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(__this_04,(MethodInfo *)0x0);
            iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                                      ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
          } while( true );
        }
      }
      break;
    }
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      puStack_b0 = (undefined8 *)0x44b1c3b;
      il2cpp_runtime_helper_02337ed0();
      pSVar10 = (System_Collections_Generic_LinkedList_T__o *)
                (((((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->
                  fields)._siInfo)->fields).m_members;
      if (pSVar10 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    puStack_b0 = (undefined8 *)0x44b1c64;
    pSVar9 = System_Collections_Generic_LinkedList_object___get_Last(pSVar10,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    if (((pSVar9 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
        (unaff_R14 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (__this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar9->fields).item,
       __this_04 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) break;
    puStack_b0 = (undefined8 *)0x44b1c9f;
    bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                      (__this_04,(unaff_R14->fields).Message,(unaff_R14->fields).Type,
                       (uint)(byte)(unaff_R14->fields).IsCustomLogic,(unaff_R14->fields).StackTrace,
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_044b1d13;
    piVar1 = &(__this_04->fields).Count;
    *piVar1 = *piVar1 + (unaff_R14->fields).Count;
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      puStack_b0 = (undefined8 *)0x44b1cbb;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (unaff_R14->fields).Message;
    if ((pSVar7 == (System_String_o *)0x0) ||
       (pSVar18 = (unaff_R14->fields).StackTrace, pSVar18 == (System_String_o *)0x0)) break;
    pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    *(int *)((long)&pSVar11->fields + 0x14) =
         (*(int *)((long)&pSVar11->fields + 0x14) - (pSVar7->fields)._stringLength) -
         (pSVar18->fields)._stringLength;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      puStack_b0 = (undefined8 *)0x44b1d01;
      il2cpp_runtime_helper_02337ed0();
    }
    puStack_b0 = (undefined8 *)0x44b1b8a;
    ApplicationManagers_DebugConsole_LogMessagePool__Return(unaff_R14,(MethodInfo *)0x0);
label_044b1b8a:
    uVar22 = (ulong)(uVar20 + 1);
    iVar13 = *(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                              ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4);
  }
  puStack_b0 = (undefined8 *)0x44b1ea2;
  il2cpp_runtime_helper_022b2c90();
  puStack_b0 = &TypeInfo_LogMessagePool;
  puStack_b8 = &TypeInfo_DebugConsole;
  puStack_c8 = &MethodInfo_Void_RemoveFirst;
  pAStack_d8 = __this_04;
  uStack_d0 = uVar22;
  pAStack_c0 = unaff_R14;
  if (g_data_057aea0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aea0d = '\x01';
  }
  pIVar27 = (InvokerMethod)0x0;
  pcVar29 = (char *)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  pIVar25 = (Il2CppMethodPointer)0x0;
  pSVar31 = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))->
                      fields)._syncRoot + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    cVar2 = *(char *)((long)&pSVar11->fields + 0x38);
  }
  else {
    pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
              _siInfo;
    cVar2 = *(char *)((long)&pSVar11->fields + 0x38);
  }
  if (cVar2 == '\0') {
    if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))
                        ->fields)._syncRoot + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
                ._siInfo;
      if (*(int *)((long)&pSVar11->fields + 0x3c) == *(int *)((long)(pSVar11 + 1) + 0x30)) {
        return;
      }
    }
    else if (*(int *)((long)&pSVar11->fields + 0x3c) == *(int *)((long)(pSVar11 + 1) + 0x30)) {
      return;
    }
  }
  if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0))->
                      fields)._syncRoot + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields).
            _siInfo;
  pSVar7 = *(System_String_o **)((long)&pSVar11->fields + 0x30);
  if (pSVar7 != (System_String_o *)0x0) {
    *(int *)((long)(pSVar7 + 1) + 4U) = *(int *)((long)(pSVar7 + 1) + 4U) + 1;
    iVar17 = *(int32_t *)&pSVar7[1].klass;
    *(undefined4 *)&pSVar7[1].klass = 0;
    if (0 < iVar17) {
      System_Array__Clear((System_Array_o *)pSVar7->fields,0,iVar17,(MethodInfo *)0x0);
      pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
                ._siInfo;
    }
    pSVar10 = (System_Collections_Generic_LinkedList_T__o *)(pSVar11->fields).m_members;
    if (pSVar10 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)auStack_100,pSVar10,MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
      pSVar10 = (System_Collections_Generic_LinkedList_T__o *)auStack_100._0_8_;
      pIVar26 = (Il2CppRGCTXData *)auStack_100._8_8_;
      _Var28 = (_union_300326)auStack_100._16_8_;
      pIVar30 = pIStack_e8;
      pSVar31 = pSStack_e0;
      while (__this_00.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar26,
            __this_00.fields._list = pSVar10, __this_00.fields._16_8_ = _Var28.genericMethod,
            __this_00.fields._current = pIVar30, __this_00.fields._32_8_ = pSVar31,
            bVar5 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219F70 *)&stack0xfffffffffffffed0), (char)bVar5 != '\0')
      {
        if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)
                             ((long)TypeInfo_DebugConsole->m_Items + 0xa0))->fields)._syncRoot + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          uVar20 = *(uint *)((long)((((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo + 1) + 0x30);
        }
        else {
          uVar20 = *(uint *)((long)((((System_Collections_Generic_LinkedList_T__o *)
                                     ((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)._siInfo + 1) + 0x30);
        }
        if ((ulong)uVar20 < 5) {
          (*(code *)(&g_data_00d99a44 + *(int *)(&g_data_00d99a44 + (ulong)uVar20 * 4)))();
          return;
        }
      }
      __this_01.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar26;
      __this_01.fields._list = pSVar10;
      __this_01.fields._16_8_ = _Var28.genericMethod;
      __this_01.fields._current = pIVar30;
      __this_01.fields._32_8_ = pSVar31;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A0F0 *)&stack0xfffffffffffffed0);
      goto label_044b21d9;
    }
  }
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar3 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar25;
    __this_02.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar24;
    __this_02.fields._16_8_ = pIVar27;
    __this_02.fields._current = (Il2CppObject *)pcVar29;
    __this_02.fields._32_8_ = pSVar31;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A0F0 *)&stack0xfffffffffffffed0);
    if (lVar3 == 0) {
label_044b21d9:
      if (*(int *)((long)&(((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0xa0)
                           )->fields)._syncRoot + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = (((System_Collections_Generic_LinkedList_T__o *)((long)TypeInfo_DebugConsole->m_Items + 0x70))->fields)
                ._siInfo;
      *(undefined1 *)((long)&pSVar11->fields + 0x38) = 0;
      *(int32_t *)((long)&pSVar11->fields + 0x3c) = *(int32_t *)((long)(pSVar11 + 1) + 0x30);
      *(undefined1 *)((long)&pSVar11->fields + 0x50) = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar25;
  __this_03.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar24;
  __this_03.fields._16_8_ = pIVar27;
  __this_03.fields._current = (Il2CppObject *)pcVar29;
  __this_03.fields._32_8_ = pSVar31;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A0F0 *)&stack0xfffffffffffffed0);
  _Unwind_Resume(auVar23._0_8_);
}


// ApplicationManagers.DebugConsole$$AddMessage
// il2cpp: void ApplicationManagers_DebugConsole__AddMessage (System_String_o* message, int32_t type, System_String_o* stackTrace, bool isCustomLogic, const MethodInfo* method);
// 0x44b1790

void ApplicationManagers_DebugConsole__AddMessage
               (System_String_o *message,int32_t type,System_String_o *stackTrace,bool_conflict isCustomLogic,
               MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int32_t length;
  ApplicationManagers_DebugConsole_LogMessage_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_LinkedListNode_T__o *pSVar6;
  ApplicationManagers_DebugConsole_LogMessage_o *value;
  System_Collections_Generic_LinkedList_T__o *pSVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_04;
  undefined8 *unaff_RBP;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_R14;
  undefined1 auVar14 [12];
  Il2CppMethodPointer pIVar15;
  Il2CppMethodPointer pIVar16;
  Il2CppRGCTXData *pIVar17;
  InvokerMethod pIVar18;
  _union_300326 _Var19;
  char *pcVar20;
  Il2CppObject *pIVar21;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSVar22;
  undefined1 auStack_c8 [24];
  Il2CppObject *pIStack_b0;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSStack_a8;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_68;
  undefined8 *puStack_60;
  System_String_o *pSStack_58;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_50;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_48;
  undefined8 *puStack_40;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_38;
  
  __this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(ulong)(uint)isCustomLogic;
  value = (ApplicationManagers_DebugConsole_LogMessage_o *)(ulong)(uint)type;
  pAStack_38 = (ApplicationManagers_DebugConsole_LogMessage_o *)stackTrace;
  if (g_data_057aea0b == '\0') {
    puStack_40 = (undefined8 *)0x44b17bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    puStack_40 = (undefined8 *)0x44b17c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    puStack_40 = (undefined8 *)0x44b17d4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_40 = (undefined8 *)0x44b17e0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    puStack_40 = (undefined8 *)0x44b17ec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_40 = (undefined8 *)0x44b17f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_40 = (undefined8 *)0x44b1804;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_40 = (undefined8 *)0x44b1810;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0b = '\x01';
  }
  puStack_40 = (undefined8 *)0x44b1839;
  bVar5 = System_String__op_Equality
                    (message,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x44b185a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
  if (pSVar7 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
    unaff_RBP = (undefined8 *)(ulong)(byte)isCustomLogic;
    if ((pSVar7->fields).count < 1) {
label_044b190e:
      unaff_R14 = (ApplicationManagers_DebugConsole_LogMessage_o *)&TypeInfo_LogMessagePool;
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x44b1926;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_04 = pAStack_38;
      puStack_40 = (undefined8 *)0x44b193d;
      value = ApplicationManagers_DebugConsole_LogMessagePool__Get
                        (message,type,(System_String_o *)pAStack_38,isCustomLogic & 0xff,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x44b1952;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
      if (pSVar7 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
        puStack_40 = (undefined8 *)0x44b197c;
        System_Collections_Generic_LinkedList_object___AddLast(pSVar7,(Il2CppObject *)value,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
        lVar11 = TypeInfo_DebugConsole;
        if ((message != (System_String_o *)0x0) &&
           (__this_04 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) {
          *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x20) =
               *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x20) + (message->fields)._stringLength +
               *(int *)&(__this_04->fields).Message;
          unaff_RBP = &MethodInfo_Void_RemoveFirst;
          iVar10 = *(int *)(lVar11 + 0xe4);
          while( true ) {
            if (iVar10 == 0) {
              puStack_40 = (undefined8 *)0x44b19dc;
              il2cpp_runtime_helper_02337ed0();
              lVar11 = TypeInfo_DebugConsole;
            }
            lVar8 = *(long *)(lVar11 + 0xb8);
            if (*(long *)(lVar8 + 0x10) == 0) break;
            if (*(int *)(*(long *)(lVar8 + 0x10) + 0x18) < 0x401) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                puStack_40 = (undefined8 *)0x44b1a0b;
                il2cpp_runtime_helper_02337ed0();
                lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
                lVar11 = TypeInfo_DebugConsole;
              }
              if (*(int *)(lVar8 + 0x20) < 0x7a121) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  puStack_40 = (undefined8 *)0x44b1aa6;
                  il2cpp_runtime_helper_02337ed0();
                  lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
                }
                *(undefined1 *)(lVar8 + 0x48) = 1;
                goto label_044b1ab5;
              }
            }
            if (*(int *)(lVar11 + 0xe4) == 0) {
              puStack_40 = (undefined8 *)0x44b1a2d;
              il2cpp_runtime_helper_02337ed0();
              lVar11 = TypeInfo_DebugConsole;
            }
            lVar8 = *(long *)(lVar11 + 0xb8);
            pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10);
            if ((((pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                 (pSVar6 = (pSVar7->fields).head,
                 pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
                (__this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
                __this_04 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
               ((pSVar3 = (__this_04->fields).Message, pSVar3 == (System_String_o *)0x0 ||
                (pSVar4 = (__this_04->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))) break;
            *(int *)(lVar8 + 0x20) =
                 (*(int *)(lVar8 + 0x20) - (pSVar3->fields)._stringLength) - (pSVar4->fields)._stringLength;
            puStack_40 = (undefined8 *)0x44b1a7e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              puStack_40 = (undefined8 *)0x44b1a93;
              il2cpp_runtime_helper_02337ed0();
            }
            puStack_40 = (undefined8 *)0x44b19ca;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(__this_04,(MethodInfo *)0x0);
            iVar10 = *(int *)(TypeInfo_DebugConsole + 0xe4);
            lVar11 = TypeInfo_DebugConsole;
          }
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x44b188d;
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
        if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b1ac8;
      }
      puStack_40 = (undefined8 *)0x44b18b7;
      pSVar6 = System_Collections_Generic_LinkedList_object___get_Last(pSVar7,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
      if (pSVar6 != (System_Collections_Generic_LinkedListNode_T__o *)0x0) {
        __this = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item;
        __this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
        if (__this != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) {
          puStack_40 = (undefined8 *)0x44b18e4;
          bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                            (__this,message,type,isCustomLogic & 0xff,(System_String_o *)pAStack_38,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            piVar1 = &(__this->fields).Count;
            *piVar1 = *piVar1 + 1;
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              puStack_40 = (undefined8 *)0x44b18fe;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
label_044b1ab5:
            *(undefined1 *)(lVar8 + 0x60) = 1;
            return;
          }
          goto label_044b190e;
        }
      }
    }
  }
label_044b1ac8:
  puStack_40 = (undefined8 *)0x44b1acd;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  puStack_60 = &TypeInfo_DebugConsole;
  pAStack_68 = __this_04;
  pSStack_58 = message;
  pAStack_50 = unaff_R14;
  pAStack_48 = value;
  puStack_40 = unaff_RBP;
  if (g_data_057aea0c == '\0') {
    puStack_78 = (undefined8 *)0x44b1af0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    puStack_78 = (undefined8 *)0x44b1afc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    puStack_78 = (undefined8 *)0x44b1b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_78 = (undefined8 *)0x44b1b14;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    puStack_78 = (undefined8 *)0x44b1b20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_78 = (undefined8 *)0x44b1b2c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_78 = (undefined8 *)0x44b1b38;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_78 = (undefined8 *)0x44b1b44;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0c = '\x01';
  }
  uVar13 = 0;
  iVar10 = *(int *)(TypeInfo_DebugConsole + 0xe4);
  while( true ) {
    if (iVar10 == 0) {
      puStack_78 = (undefined8 *)0x44b1b9f;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x18);
    if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    uVar12 = (uint)uVar13;
    if ((0x31 < uVar12) || ((pSVar7->fields).count < 1)) {
      if (uVar12 != 0) {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          puStack_78 = (undefined8 *)0x44b1e7c;
          il2cpp_runtime_helper_02337ed0();
          lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
        *(undefined1 *)(lVar8 + 0x48) = 1;
        *(undefined1 *)(lVar8 + 0x60) = 1;
      }
      return;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      puStack_78 = (undefined8 *)0x44b1bd8;
      il2cpp_runtime_helper_02337ed0();
      pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
      if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    pSVar6 = (pSVar7->fields).head;
    if (pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) break;
    unaff_R14 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item;
    puStack_78 = (undefined8 *)0x44b1c0c;
    System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
    pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
    if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    if ((pSVar7->fields).count < 1) {
label_044b1d13:
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        puStack_78 = (undefined8 *)0x44b1d21;
        il2cpp_runtime_helper_02337ed0();
      }
      if (((unaff_R14 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar3 = (unaff_R14->fields).Message, pSVar3 != (System_String_o *)0x0)) &&
         (pSVar4 = (unaff_R14->fields).StackTrace, pSVar4 != (System_String_o *)0x0)) {
        lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        iVar10 = (pSVar4->fields)._stringLength + (pSVar3->fields)._stringLength;
        *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) - iVar10;
        *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + iVar10;
        if (*(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10) !=
            (System_Collections_Generic_LinkedList_T__o *)0x0) {
          puStack_78 = (undefined8 *)0x44b1d7e;
          System_Collections_Generic_LinkedList_object___AddLast
                    (*(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10),(Il2CppObject *)unaff_R14,
                     MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          iVar10 = *(int *)(TypeInfo_DebugConsole + 0xe4);
          do {
            if (iVar10 == 0) {
              puStack_78 = (undefined8 *)0x44b1dab;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            if (*(long *)(lVar8 + 0x10) == 0) break;
            if (*(int *)(*(long *)(lVar8 + 0x10) + 0x18) < 0x401) {
              if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
                puStack_78 = (undefined8 *)0x44b1dd9;
                il2cpp_runtime_helper_02337ed0();
                lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
              }
              if (*(int *)(lVar8 + 0x20) < 0x7a121) goto label_044b1b8a;
            }
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              puStack_78 = (undefined8 *)0x44b1dfe;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10);
            if (((pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                (pSVar6 = (pSVar7->fields).head,
                pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
               ((__this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
                __this_04 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
                ((pSVar3 = (__this_04->fields).Message, pSVar3 == (System_String_o *)0x0 ||
                 (pSVar4 = (__this_04->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))))) break;
            *(int *)(lVar8 + 0x20) =
                 (*(int *)(lVar8 + 0x20) - (pSVar3->fields)._stringLength) - (pSVar4->fields)._stringLength;
            puStack_78 = (undefined8 *)0x44b1e4e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              puStack_78 = (undefined8 *)0x44b1e64;
              il2cpp_runtime_helper_02337ed0();
            }
            puStack_78 = (undefined8 *)0x44b1d9a;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(__this_04,(MethodInfo *)0x0);
            iVar10 = *(int *)(TypeInfo_DebugConsole + 0xe4);
          } while( true );
        }
      }
      break;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      puStack_78 = (undefined8 *)0x44b1c3b;
      il2cpp_runtime_helper_02337ed0();
      pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
      if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    puStack_78 = (undefined8 *)0x44b1c64;
    pSVar6 = System_Collections_Generic_LinkedList_object___get_Last(pSVar7,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    if (((pSVar6 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
        (unaff_R14 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (__this_04 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar6->fields).item,
       __this_04 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) break;
    puStack_78 = (undefined8 *)0x44b1c9f;
    bVar5 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                      (__this_04,(unaff_R14->fields).Message,(unaff_R14->fields).Type,
                       (uint)(byte)(unaff_R14->fields).IsCustomLogic,(unaff_R14->fields).StackTrace,
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_044b1d13;
    piVar1 = &(__this_04->fields).Count;
    *piVar1 = *piVar1 + (unaff_R14->fields).Count;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      puStack_78 = (undefined8 *)0x44b1cbb;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (unaff_R14->fields).Message;
    if ((pSVar3 == (System_String_o *)0x0) ||
       (pSVar4 = (unaff_R14->fields).StackTrace, pSVar4 == (System_String_o *)0x0)) break;
    *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) =
         (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) - (pSVar3->fields)._stringLength) -
         (pSVar4->fields)._stringLength;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      puStack_78 = (undefined8 *)0x44b1d01;
      il2cpp_runtime_helper_02337ed0();
    }
    puStack_78 = (undefined8 *)0x44b1b8a;
    ApplicationManagers_DebugConsole_LogMessagePool__Return(unaff_R14,(MethodInfo *)0x0);
label_044b1b8a:
    uVar13 = (ulong)(uVar12 + 1);
    iVar10 = *(int *)(TypeInfo_DebugConsole + 0xe4);
  }
  puStack_78 = (undefined8 *)0x44b1ea2;
  il2cpp_runtime_helper_022b2c90();
  puStack_78 = &TypeInfo_LogMessagePool;
  puStack_80 = &TypeInfo_DebugConsole;
  puStack_90 = &MethodInfo_Void_RemoveFirst;
  pAStack_a0 = __this_04;
  uStack_98 = uVar13;
  pAStack_88 = unaff_R14;
  if (g_data_057aea0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aea0d = '\x01';
  }
  pIVar18 = (InvokerMethod)0x0;
  pcVar20 = (char *)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  pSVar22 = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar2 = *(char *)(lVar8 + 0x48);
  }
  else {
    lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar2 = *(char *)(lVar8 + 0x48);
  }
  if (cVar2 == '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x4c) == *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98))
      {
        return;
      }
    }
    else if (*(int *)(lVar8 + 0x4c) == *(int *)(lVar8 + 0x98)) {
      return;
    }
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  lVar11 = *(long *)(lVar8 + 0x40);
  if (lVar11 != 0) {
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    length = *(int32_t *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar11 + 0x10),0,length,(MethodInfo *)0x0);
      lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    }
    if (*(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10) !=
        (System_Collections_Generic_LinkedList_T__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)auStack_c8,
                 *(System_Collections_Generic_LinkedList_T__o **)(lVar8 + 0x10),MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
      pSVar7 = (System_Collections_Generic_LinkedList_T__o *)auStack_c8._0_8_;
      pIVar17 = (Il2CppRGCTXData *)auStack_c8._8_8_;
      _Var19 = (_union_300326)auStack_c8._16_8_;
      pIVar21 = pIStack_b0;
      pSVar22 = pSStack_a8;
      while (__this_00.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar17,
            __this_00.fields._list = pSVar7, __this_00.fields._16_8_ = _Var19.genericMethod,
            __this_00.fields._current = pIVar21, __this_00.fields._32_8_ = pSVar22,
            bVar5 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_3219F70 *)&stack0xffffffffffffff08), (char)bVar5 != '\0')
      {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          uVar12 = *(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
        }
        else {
          uVar12 = *(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
        }
        if ((ulong)uVar12 < 5) {
          (*(code *)(&g_data_00d99a44 + *(int *)(&g_data_00d99a44 + (ulong)uVar12 * 4)))();
          return;
        }
      }
      __this_01.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar17;
      __this_01.fields._list = pSVar7;
      __this_01.fields._16_8_ = _Var19.genericMethod;
      __this_01.fields._current = pIVar21;
      __this_01.fields._32_8_ = pSVar22;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A0F0 *)&stack0xffffffffffffff08);
      goto label_044b21d9;
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar8 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar16;
    __this_02.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar15;
    __this_02.fields._16_8_ = pIVar18;
    __this_02.fields._current = (Il2CppObject *)pcVar20;
    __this_02.fields._32_8_ = pSVar22;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A0F0 *)&stack0xffffffffffffff08);
    if (lVar8 == 0) {
label_044b21d9:
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar8 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined1 *)(lVar8 + 0x48) = 0;
      *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(lVar8 + 0x98);
      *(undefined1 *)(lVar8 + 0x60) = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_03.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar16;
  __this_03.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar15;
  __this_03.fields._16_8_ = pIVar18;
  __this_03.fields._current = (Il2CppObject *)pcVar20;
  __this_03.fields._32_8_ = pSVar22;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A0F0 *)&stack0xffffffffffffff08);
  _Unwind_Resume(auVar14._0_8_);
}


// ApplicationManagers.DebugConsole$$ProcessMessageBuffer
// il2cpp: void ApplicationManagers_DebugConsole__ProcessMessageBuffer (const MethodInfo* method);
// 0x44b1ad0

void ApplicationManagers_DebugConsole__ProcessMessageBuffer(MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int32_t length;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  long lVar5;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  bool_conflict bVar6;
  System_Collections_Generic_LinkedList_T__o *pSVar7;
  System_Collections_Generic_LinkedListNode_T__o *pSVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_RBX;
  uint uVar12;
  ulong uVar13;
  ApplicationManagers_DebugConsole_LogMessage_o *unaff_R14;
  undefined1 auVar14 [12];
  Il2CppMethodPointer pIVar15;
  Il2CppMethodPointer pIVar16;
  Il2CppRGCTXData *pIVar17;
  InvokerMethod pIVar18;
  _union_300326 _Var19;
  char *pcVar20;
  Il2CppObject *pIVar21;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSVar22;
  undefined1 auStack_90 [24];
  Il2CppObject *pIStack_78;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSStack_70;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  ApplicationManagers_DebugConsole_LogMessage_o *pAStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  if (g_data_057aea0c == '\0') {
    puStack_40 = (undefined8 *)0x44b1af0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    puStack_40 = (undefined8 *)0x44b1afc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Value);
    puStack_40 = (undefined8 *)0x44b1b08;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_40 = (undefined8 *)0x44b1b14;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveFirst);
    puStack_40 = (undefined8 *)0x44b1b20;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_40 = (undefined8 *)0x44b1b2c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_40 = (undefined8 *)0x44b1b38;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    puStack_40 = (undefined8 *)0x44b1b44;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    g_data_057aea0c = '\x01';
  }
  uVar13 = 0;
  iVar11 = *(int *)(TypeInfo_DebugConsole + 0xe4);
  while( true ) {
    if (iVar11 == 0) {
      puStack_40 = (undefined8 *)0x44b1b9f;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x18);
    if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    uVar12 = (uint)uVar13;
    if ((0x31 < uVar12) || ((pSVar7->fields).count < 1)) {
      if (uVar12 != 0) {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          puStack_40 = (undefined8 *)0x44b1e7c;
          il2cpp_runtime_helper_02337ed0();
          lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
        *(undefined1 *)(lVar9 + 0x48) = 1;
        *(undefined1 *)(lVar9 + 0x60) = 1;
      }
      return;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      puStack_40 = (undefined8 *)0x44b1bd8;
      il2cpp_runtime_helper_02337ed0();
      pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
      if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    pSVar8 = (pSVar7->fields).head;
    if (pSVar8 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) break;
    unaff_R14 = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar8->fields).item;
    puStack_40 = (undefined8 *)0x44b1c0c;
    System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
    pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
    if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    if ((pSVar7->fields).count < 1) {
label_044b1d13:
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x44b1d21;
        il2cpp_runtime_helper_02337ed0();
      }
      if (((unaff_R14 != (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) &&
          (pSVar3 = (unaff_R14->fields).Message, pSVar3 != (System_String_o *)0x0)) &&
         (pSVar4 = (unaff_R14->fields).StackTrace, pSVar4 != (System_String_o *)0x0)) {
        lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        iVar11 = (pSVar4->fields)._stringLength + (pSVar3->fields)._stringLength;
        *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) - iVar11;
        *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + iVar11;
        if (*(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x10) !=
            (System_Collections_Generic_LinkedList_T__o *)0x0) {
          puStack_40 = (undefined8 *)0x44b1d7e;
          System_Collections_Generic_LinkedList_object___AddLast
                    (*(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x10),(Il2CppObject *)unaff_R14,
                     MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
          iVar11 = *(int *)(TypeInfo_DebugConsole + 0xe4);
          do {
            if (iVar11 == 0) {
              puStack_40 = (undefined8 *)0x44b1dab;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            if (*(long *)(lVar9 + 0x10) == 0) break;
            if (*(int *)(*(long *)(lVar9 + 0x10) + 0x18) < 0x401) {
              if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
                puStack_40 = (undefined8 *)0x44b1dd9;
                il2cpp_runtime_helper_02337ed0();
                lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
              }
              if (*(int *)(lVar9 + 0x20) < 0x7a121) goto label_044b1b8a;
            }
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              puStack_40 = (undefined8 *)0x44b1dfe;
              il2cpp_runtime_helper_02337ed0();
            }
            lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x10);
            if (((pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) ||
                (pSVar8 = (pSVar7->fields).head,
                pSVar8 == (System_Collections_Generic_LinkedListNode_T__o *)0x0)) ||
               ((unaff_RBX = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar8->fields).item,
                unaff_RBX == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0 ||
                ((pSVar3 = (unaff_RBX->fields).Message, pSVar3 == (System_String_o *)0x0 ||
                 (pSVar4 = (unaff_RBX->fields).StackTrace, pSVar4 == (System_String_o *)0x0)))))) break;
            *(int *)(lVar9 + 0x20) =
                 (*(int *)(lVar9 + 0x20) - (pSVar3->fields)._stringLength) - (pSVar4->fields)._stringLength;
            puStack_40 = (undefined8 *)0x44b1e4e;
            System_Collections_Generic_LinkedList_object___RemoveFirst(pSVar7,MethodInfo_Void_RemoveFirst);
            if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
              puStack_40 = (undefined8 *)0x44b1e64;
              il2cpp_runtime_helper_02337ed0();
            }
            puStack_40 = (undefined8 *)0x44b1d9a;
            ApplicationManagers_DebugConsole_LogMessagePool__Return(unaff_RBX,(MethodInfo *)0x0);
            iVar11 = *(int *)(TypeInfo_DebugConsole + 0xe4);
          } while( true );
        }
      }
      break;
    }
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      puStack_40 = (undefined8 *)0x44b1c3b;
      il2cpp_runtime_helper_02337ed0();
      pSVar7 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
      if (pSVar7 == (System_Collections_Generic_LinkedList_T__o *)0x0) break;
    }
    puStack_40 = (undefined8 *)0x44b1c64;
    pSVar8 = System_Collections_Generic_LinkedList_object___get_Last(pSVar7,MethodInfo_LinkedListNode_1_ApplicationManagers_DebugConsole_LogMes);
    if (((pSVar8 == (System_Collections_Generic_LinkedListNode_T__o *)0x0) ||
        (unaff_R14 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) ||
       (unaff_RBX = (ApplicationManagers_DebugConsole_LogMessage_o *)(pSVar8->fields).item,
       unaff_RBX == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0)) break;
    puStack_40 = (undefined8 *)0x44b1c9f;
    bVar6 = ApplicationManagers_DebugConsole_LogMessage__IsDuplicateOf
                      (unaff_RBX,(unaff_R14->fields).Message,(unaff_R14->fields).Type,
                       (uint)(byte)(unaff_R14->fields).IsCustomLogic,(unaff_R14->fields).StackTrace,
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_044b1d13;
    piVar1 = &(unaff_RBX->fields).Count;
    *piVar1 = *piVar1 + (unaff_R14->fields).Count;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      puStack_40 = (undefined8 *)0x44b1cbb;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (unaff_R14->fields).Message;
    if ((pSVar3 == (System_String_o *)0x0) ||
       (pSVar4 = (unaff_R14->fields).StackTrace, pSVar4 == (System_String_o *)0x0)) break;
    *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) =
         (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x24) - (pSVar3->fields)._stringLength) -
         (pSVar4->fields)._stringLength;
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      puStack_40 = (undefined8 *)0x44b1d01;
      il2cpp_runtime_helper_02337ed0();
    }
    puStack_40 = (undefined8 *)0x44b1b8a;
    ApplicationManagers_DebugConsole_LogMessagePool__Return(unaff_R14,(MethodInfo *)0x0);
label_044b1b8a:
    uVar13 = (ulong)(uVar12 + 1);
    iVar11 = *(int *)(TypeInfo_DebugConsole + 0xe4);
  }
  puStack_40 = (undefined8 *)0x44b1ea2;
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_LogMessagePool;
  puStack_48 = &TypeInfo_DebugConsole;
  puStack_58 = &MethodInfo_Void_RemoveFirst;
  pAStack_68 = unaff_RBX;
  uStack_60 = uVar13;
  pAStack_50 = unaff_R14;
  if (g_data_057aea0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aea0d = '\x01';
  }
  pIVar18 = (InvokerMethod)0x0;
  pcVar20 = (char *)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  pSVar22 = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar2 = *(char *)(lVar9 + 0x48);
  }
  else {
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar2 = *(char *)(lVar9 + 0x48);
  }
  if (cVar2 == '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x4c) == *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98))
      {
        return;
      }
    }
    else if (*(int *)(lVar9 + 0x4c) == *(int *)(lVar9 + 0x98)) {
      return;
    }
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  lVar5 = *(long *)(lVar9 + 0x40);
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    length = *(int32_t *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,length,(MethodInfo *)0x0);
      lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    }
    if (*(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x10) !=
        (System_Collections_Generic_LinkedList_T__o *)0x0) {
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)auStack_90,
                 *(System_Collections_Generic_LinkedList_T__o **)(lVar9 + 0x10),MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
      pSVar7 = (System_Collections_Generic_LinkedList_T__o *)auStack_90._0_8_;
      pIVar17 = (Il2CppRGCTXData *)auStack_90._8_8_;
      _Var19 = (_union_300326)auStack_90._16_8_;
      pIVar21 = pIStack_78;
      pSVar22 = pSStack_70;
      while (__this.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar17,
            __this.fields._list = pSVar7, __this.fields._16_8_ = _Var19.genericMethod,
            __this.fields._current = pIVar21, __this.fields._32_8_ = pSVar22,
            bVar6 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                              (__this,(MethodInfo_3219F70 *)&stack0xffffffffffffff40), (char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          uVar12 = *(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
        }
        else {
          uVar12 = *(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
        }
        if ((ulong)uVar12 < 5) {
          (*(code *)(&g_data_00d99a44 + *(int *)(&g_data_00d99a44 + (ulong)uVar12 * 4)))();
          return;
        }
      }
      __this_00.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar17;
      __this_00.fields._list = pSVar7;
      __this_00.fields._16_8_ = _Var19.genericMethod;
      __this_00.fields._current = pIVar21;
      __this_00.fields._32_8_ = pSVar22;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A0F0 *)&stack0xffffffffffffff40);
      goto label_044b21d9;
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar9 = *plVar10;
    __cxa_end_catch();
    __this_01.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar16;
    __this_01.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar15;
    __this_01.fields._16_8_ = pIVar18;
    __this_01.fields._current = (Il2CppObject *)pcVar20;
    __this_01.fields._32_8_ = pSVar22;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A0F0 *)&stack0xffffffffffffff40);
    if (lVar9 == 0) {
label_044b21d9:
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined1 *)(lVar9 + 0x48) = 0;
      *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(lVar9 + 0x98);
      *(undefined1 *)(lVar9 + 0x60) = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar9);
  }
  __this_02.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar16;
  __this_02.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar15;
  __this_02.fields._16_8_ = pIVar18;
  __this_02.fields._current = (Il2CppObject *)pcVar20;
  __this_02.fields._32_8_ = pSVar22;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A0F0 *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar14._0_8_);
}


// ApplicationManagers.DebugConsole$$UpdateFilteredMessages
// il2cpp: void ApplicationManagers_DebugConsole__UpdateFilteredMessages (const MethodInfo* method);
// 0x44b1eb0

void ApplicationManagers_DebugConsole__UpdateFilteredMessages(MethodInfo *method)

{
  char cVar1;
  int32_t length;
  long lVar2;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  bool_conflict bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  Il2CppMethodPointer pIVar8;
  Il2CppMethodPointer pIVar9;
  InvokerMethod pIVar10;
  char *pcVar11;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSVar12;
  undefined1 local_58 [24];
  Il2CppObject *pIStack_40;
  System_Collections_Generic_LinkedList_Enumerator_T__c *local_38;
  
  if (g_data_057aea0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057aea0d = '\x01';
  }
  pIVar10 = (InvokerMethod)0x0;
  pcVar11 = (char *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pSVar12 = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x48);
  }
  else {
    lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    cVar1 = *(char *)(lVar4 + 0x48);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x4c) == *(int *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98))
      {
        return;
      }
    }
    else if (*(int *)(lVar4 + 0x4c) == *(int *)(lVar4 + 0x98)) {
      return;
    }
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
      System_Collections_Generic_LinkedList_object___GetEnumerator
                ((System_Collections_Generic_LinkedList_Enumerator_T__o *)local_58,
                 *(System_Collections_Generic_LinkedList_T__o **)(lVar4 + 0x10),MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
      do {
        while( true ) {
          __this.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)local_58._8_8_;
          __this.fields._list = (System_Collections_Generic_LinkedList_T__o *)local_58._0_8_;
          __this.fields._16_8_ = local_58._16_8_;
          __this.fields._current = pIStack_40;
          __this.fields._32_8_ = local_38;
          bVar3 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                            (__this,(MethodInfo_3219F70 *)&stack0xffffffffffffff78);
          if ((char)bVar3 == '\0') {
            __this_00.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)local_58._8_8_;
            __this_00.fields._list = (System_Collections_Generic_LinkedList_T__o *)local_58._0_8_;
            __this_00.fields._16_8_ = local_58._16_8_;
            __this_00.fields._current = pIStack_40;
            __this_00.fields._32_8_ = local_38;
            System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                      (__this_00,(MethodInfo_321A0F0 *)&stack0xffffffffffffff78);
            goto label_044b21d9;
          }
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) break;
          uVar5 = (ulong)*(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
          if (uVar5 < 5) goto label_044b20a8;
        }
        il2cpp_runtime_helper_02337ed0();
        uVar5 = (ulong)*(uint *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x98);
      } while (4 < uVar5);
label_044b20a8:
      (*(code *)(&g_data_00d99a44 + *(int *)(&g_data_00d99a44 + uVar5 * 4)))();
      return;
    }
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar4 = *plVar6;
    __cxa_end_catch();
    __this_01.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar9;
    __this_01.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar8;
    __this_01.fields._16_8_ = pIVar10;
    __this_01.fields._current = (Il2CppObject *)pcVar11;
    __this_01.fields._32_8_ = pSVar12;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A0F0 *)&stack0xffffffffffffff78);
    if (lVar4 == 0) {
label_044b21d9:
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar4 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined1 *)(lVar4 + 0x48) = 0;
      *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar4 + 0x98);
      *(undefined1 *)(lVar4 + 0x60) = 1;
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_02.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)pIVar9;
  __this_02.fields._list = (System_Collections_Generic_LinkedList_T__o *)pIVar8;
  __this_02.fields._16_8_ = pIVar10;
  __this_02.fields._current = (Il2CppObject *)pcVar11;
  __this_02.fields._32_8_ = pSVar12;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A0F0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar7._0_8_);
}


// ApplicationManagers.DebugConsole$$GetDisplayText
// il2cpp: System_String_o* ApplicationManagers_DebugConsole__GetDisplayText (const MethodInfo* method);
// 0x44b2300

System_String_o * ApplicationManagers_DebugConsole__GetDisplayText(MethodInfo *method)

{
  byte bVar1;
  code cVar2;
  int iVar3;
  long *plVar4;
  UnityEngine_Behaviour_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  long lVar5;
  Settings_KeybindSetting_o *__this_02;
  UnityEngine_Rect_Fields UVar6;
  bool_conflict bVar7;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  ApplicationManagers_DebugConsole_LogMessage_o *__this_03;
  System_String_o *pSVar8;
  undefined8 uVar9;
  Il2CppMethodPointer pIVar10;
  undefined4 extraout_var;
  UnityEngine_Texture_o *image;
  System_String_o *extraout_RAX_01;
  UnityEngine_MonoBehaviour_o *__this_04;
  MethodInfo *pMVar11;
  int index;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  if (g_data_057aea0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Item);
    g_data_057aea0e = '\x01';
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) goto label_044b23e9;
label_044b232c:
    pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    cVar2 = pIVar10[0x60];
  }
  else {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) != 0) goto label_044b232c;
label_044b23e9:
    il2cpp_runtime_helper_02337ed0();
    pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    cVar2 = pIVar10[0x60];
  }
  if (cVar2 == (code)0x0) {
    if (*(int *)((long)&((MethodInfo *)((long)TypeInfo_DebugConsole + 0xb0))->parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    }
    if (*(long *)(pIVar10 + 0x40) == 0) goto label_044b25df;
    if (*(int *)(pIVar10 + 100) == *(int *)(*(long *)(pIVar10 + 0x40) + 0x18)) {
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
        if (pIVar10[0x68] == pIVar10[0x9c]) goto label_044b2386;
      }
      else if (pIVar10[0x68] == pIVar10[0x9c]) {
label_044b2386:
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
        }
label_044b25ac:
        return *(System_String_o **)(pIVar10 + 0x58);
      }
    }
  }
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(System_Text_StringBuilder_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x50) !=
      (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Clear
              (*(System_Text_StringBuilder_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x50),
               (MethodInfo *)0x0);
    iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    while( true ) {
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
      if (*(long *)(pIVar10 + 0x40) == 0) goto label_044b25df;
      if (*(int *)(*(long *)(pIVar10 + 0x40) + 0x18) <= index) break;
      if (index != 0) {
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
        }
        if (*(System_Text_StringBuilder_o **)(pIVar10 + 0x50) == (System_Text_StringBuilder_o *)0x0)
        goto label_044b25df;
        System_Text_StringBuilder__Append_3b048f0
                  (*(System_Text_StringBuilder_o **)(pIVar10 + 0x50),10,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x40)
      ;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_044b25df;
      __this_01 = *(System_Text_StringBuilder_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x50);
      __this_03 = (ApplicationManagers_DebugConsole_LogMessage_o *)
                  System_Collections_Generic_List_object___get_Item(__this_00,index,MethodInfo_DebugConsole_LogMessage_get_Item);
      if ((__this_03 == (ApplicationManagers_DebugConsole_LogMessage_o *)0x0) ||
         (pSVar8 = ApplicationManagers_DebugConsole_LogMessage__GetFormattedMessage
                             (__this_03,(uint)(byte)TypeInfo_DebugConsole[2].virtualMethodPointer[0x9c],
                              (MethodInfo *)0x0), __this_01 == (System_Text_StringBuilder_o *)0x0))
      goto label_044b25df;
      System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
      index = index + 1;
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    }
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    }
    plVar4 = *(long **)(pIVar10 + 0x50);
    if (plVar4 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
      *(undefined8 *)(pIVar10 + 0x58) = uVar9;
      il2cpp_runtime_helper_022b4080(pIVar10 + 0x58);
      pIVar10 = TypeInfo_DebugConsole[2].virtualMethodPointer;
      if (*(long *)(pIVar10 + 0x40) != 0) {
        *(undefined4 *)(pIVar10 + 100) = *(undefined4 *)(*(long *)(pIVar10 + 0x40) + 0x18);
        pIVar10[0x68] = pIVar10[0x9c];
        pIVar10[0x60] = (code)0x0;
        goto label_044b25ac;
      }
    }
  }
label_044b25df:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057aea0f = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) ||
     (__this_02 = *(Settings_KeybindSetting_o **)(lVar5 + 0xe0), __this_02 == (Settings_KeybindSetting_o *)0x0
     )) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea10 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
      il2cpp_runtime_helper_023445d0(&"DebugInput");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aea10 = '\x01';
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    }
    else {
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = (System_String_o *)TypeInfo_DebugConsole[2].virtualMethodPointer;
      cVar2 = *(code *)&pSVar8->monitor;
    }
    else {
      pSVar8 = (System_String_o *)((MethodInfo *)((long)TypeInfo_DebugConsole + 0xb0))->virtualMethodPointer;
      cVar2 = *(code *)&pSVar8->monitor;
    }
    if (cVar2 != (code)0x0) {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GUI__set_depth(1,(MethodInfo *)0x0);
      pMVar11 = TypeInfo_DebugConsole;
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DebugConsole__HandleWindowInteraction(pMVar11);
      if (TypeInfo_DebugConsole[2].virtualMethodPointer[0x9d] != (Il2CppMethodPointer)0x0) {
        if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = UnityEngine_GUI__get_color((MethodInfo *)0x0);
        value_00.fields.b = 0.15;
        value_00.fields.a = 1.0;
        value_00.fields.r = 0.15;
        value_00.fields.g = 0.15;
        UnityEngine_GUI__set_color(value_00,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar6 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
        image = (UnityEngine_Texture_o *)UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
        UnityEngine_GUI__DrawTexture((UnityEngine_Rect_o)UVar6,image,(MethodInfo *)0x0);
        UnityEngine_GUI__set_color(value,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar6 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar11 = "";
      UnityEngine_GUI__Box((UnityEngine_Rect_o)UVar6,(System_String_o *)"",(MethodInfo *)0x0);
      ApplicationManagers_DebugConsole__DrawTabs(pMVar11);
      if ((char)bVar7 == '\0') {
        iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
        pMVar11 = TypeInfo_DebugConsole;
      }
      else {
        if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_GUI__set_enabled(0,(MethodInfo *)0x0);
        iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
        pMVar11 = TypeInfo_DebugConsole;
      }
      TypeInfo_DebugConsole = pMVar11;
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        ApplicationManagers_DebugConsole__DrawMessageWindow(pMVar11);
        ApplicationManagers_DebugConsole__DrawInputWindow(pMVar11);
        pMVar11 = TypeInfo_DebugConsole;
      }
      else {
        ApplicationManagers_DebugConsole__DrawMessageWindow(pMVar11);
        ApplicationManagers_DebugConsole__DrawInputWindow(pMVar11);
        pMVar11 = TypeInfo_DebugConsole;
      }
      TypeInfo_DebugConsole = pMVar11;
      if ((char)bVar7 == '\0') {
        if (*(int *)((long)&((MethodInfo *)((long)pMVar11 + 0xb0))->parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          ApplicationManagers_DebugConsole__HandleInput(pMVar11);
          iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
          pMVar11 = TypeInfo_DebugConsole;
        }
        else {
          ApplicationManagers_DebugConsole__HandleInput(pMVar11);
          iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
          pMVar11 = TypeInfo_DebugConsole;
        }
      }
      else {
        if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_GUI__set_enabled(1,(MethodInfo *)0x0);
        pSVar8 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
        bVar7 = System_String__op_Equality(pSVar8,"DebugInput",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
          pMVar11 = TypeInfo_DebugConsole;
        }
        else {
          pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_GUI__FocusControl(pSVar8,(MethodInfo *)0x0);
          iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
          pMVar11 = TypeInfo_DebugConsole;
        }
      }
      TypeInfo_DebugConsole = pMVar11;
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
        ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar11);
        iVar3 = *(int *)(TypeInfo_GUI + 0xe4);
      }
      else {
        ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar11);
        iVar3 = *(int *)(TypeInfo_GUI + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GUI__set_depth(0,(MethodInfo *)0x0);
      return extraout_RAX_01;
    }
    return pSVar8;
  }
  bVar7 = Settings_KeybindSetting__GetKeyDown(__this_02,0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    TypeInfo_DebugConsole[2].virtualMethodPointer[8] =
         (Il2CppMethodPointer)((byte)TypeInfo_DebugConsole[2].virtualMethodPointer[8] ^ 1);
  }
  bVar7 = UnityEngine_Input__GetKeyDown(0x123,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
    if (g_data_057ae898 == '\0') {
      __this_04 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_DebugLagSim;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae898 = '\x01';
    }
    plVar4 = *(long **)(TypeInfo_DebugLagSim + 0xb8);
    bVar1 = *(byte *)(plVar4 + 1);
    *(byte *)(plVar4 + 1) = bVar1 ^ 1;
    if ((*plVar4 != 0) &&
       (__this_04 = *(UnityEngine_MonoBehaviour_o **)(*plVar4 + 0x20),
       __this_04 != (UnityEngine_MonoBehaviour_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_04,(uint)(bVar1 ^ 1),(MethodInfo *)0x0);
      lVar5 = **(long **)(TypeInfo_DebugLagSim + 0xb8);
      if (lVar5 != 0) {
        __this = *(UnityEngine_Behaviour_o **)(lVar5 + 0x28);
        __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
        if (__this != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    (__this,(uint)*(byte *)(*(long **)(TypeInfo_DebugLagSim + 0xb8) + 1),(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  return (System_String_o *)CONCAT44(extraout_var,bVar7);
}


// ApplicationManagers.DebugConsole$$Update
// il2cpp: void ApplicationManagers_DebugConsole__Update (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x44b25f0

void ApplicationManagers_DebugConsole__Update(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  byte bVar1;
  code cVar2;
  int iVar3;
  long *plVar4;
  UnityEngine_Behaviour_o *__this_00;
  long lVar5;
  Settings_KeybindSetting_o *__this_01;
  UnityEngine_Rect_Fields UVar6;
  bool_conflict bVar7;
  UnityEngine_Texture_o *image;
  System_String_o *pSVar8;
  UnityEngine_MonoBehaviour_o *__this_02;
  MethodInfo *pMVar9;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  if (g_data_057aea0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057aea0f = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) ||
     (__this_01 = *(Settings_KeybindSetting_o **)(lVar5 + 0xe0), __this_01 == (Settings_KeybindSetting_o *)0x0
     )) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea10 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
      il2cpp_runtime_helper_023445d0(&"DebugInput");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057aea10 = '\x01';
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    }
    else {
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar2 = TypeInfo_DebugConsole[2].virtualMethodPointer[8];
    }
    else {
      cVar2 = ((MethodInfo *)((long)TypeInfo_DebugConsole + 0xb0))->virtualMethodPointer[8];
    }
    if (cVar2 == (code)0x0) {
      return;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GUI__set_depth(1,(MethodInfo *)0x0);
    pMVar9 = TypeInfo_DebugConsole;
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_DebugConsole__HandleWindowInteraction(pMVar9);
    if (TypeInfo_DebugConsole[2].virtualMethodPointer[0x9d] != (Il2CppMethodPointer)0x0) {
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = UnityEngine_GUI__get_color((MethodInfo *)0x0);
      value_00.fields.b = 0.15;
      value_00.fields.a = 1.0;
      value_00.fields.r = 0.15;
      value_00.fields.g = 0.15;
      UnityEngine_GUI__set_color(value_00,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar6 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
      image = (UnityEngine_Texture_o *)UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
      UnityEngine_GUI__DrawTexture((UnityEngine_Rect_o)UVar6,image,(MethodInfo *)0x0);
      UnityEngine_GUI__set_color(value,(MethodInfo *)0x0);
    }
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar6 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = "";
    UnityEngine_GUI__Box((UnityEngine_Rect_o)UVar6,(System_String_o *)"",(MethodInfo *)0x0);
    ApplicationManagers_DebugConsole__DrawTabs(pMVar9);
    if ((char)bVar7 == '\0') {
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar9 = TypeInfo_DebugConsole;
    }
    else {
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GUI__set_enabled(0,(MethodInfo *)0x0);
      iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar9 = TypeInfo_DebugConsole;
    }
    TypeInfo_DebugConsole = pMVar9;
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      ApplicationManagers_DebugConsole__DrawMessageWindow(pMVar9);
      ApplicationManagers_DebugConsole__DrawInputWindow(pMVar9);
      pMVar9 = TypeInfo_DebugConsole;
    }
    else {
      ApplicationManagers_DebugConsole__DrawMessageWindow(pMVar9);
      ApplicationManagers_DebugConsole__DrawInputWindow(pMVar9);
      pMVar9 = TypeInfo_DebugConsole;
    }
    TypeInfo_DebugConsole = pMVar9;
    if ((char)bVar7 == '\0') {
      if (*(int *)((long)&((MethodInfo *)((long)pMVar9 + 0xb0))->parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        ApplicationManagers_DebugConsole__HandleInput(pMVar9);
        iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
        pMVar9 = TypeInfo_DebugConsole;
      }
      else {
        ApplicationManagers_DebugConsole__HandleInput(pMVar9);
        iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
        pMVar9 = TypeInfo_DebugConsole;
      }
    }
    else {
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GUI__set_enabled(1,(MethodInfo *)0x0);
      pSVar8 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(pSVar8,"DebugInput",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
        pMVar9 = TypeInfo_DebugConsole;
      }
      else {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_GUI__FocusControl(pSVar8,(MethodInfo *)0x0);
        iVar3 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
        pMVar9 = TypeInfo_DebugConsole;
      }
    }
    TypeInfo_DebugConsole = pMVar9;
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar9);
      iVar3 = *(int *)(TypeInfo_GUI + 0xe4);
    }
    else {
      ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar9);
      iVar3 = *(int *)(TypeInfo_GUI + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GUI__set_depth(0,(MethodInfo *)0x0);
    return;
  }
  bVar7 = Settings_KeybindSetting__GetKeyDown(__this_01,0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    TypeInfo_DebugConsole[2].virtualMethodPointer[8] =
         (Il2CppMethodPointer)((byte)TypeInfo_DebugConsole[2].virtualMethodPointer[8] ^ 1);
  }
  bVar7 = UnityEngine_Input__GetKeyDown(0x123,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (g_data_057ae898 == '\0') {
    __this_02 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_DebugLagSim;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae898 = '\x01';
  }
  plVar4 = *(long **)(TypeInfo_DebugLagSim + 0xb8);
  bVar1 = *(byte *)(plVar4 + 1);
  *(byte *)(plVar4 + 1) = bVar1 ^ 1;
  if ((*plVar4 != 0) &&
     (__this_02 = *(UnityEngine_MonoBehaviour_o **)(*plVar4 + 0x20),
     __this_02 != (UnityEngine_MonoBehaviour_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_02,(uint)(bVar1 ^ 1),(MethodInfo *)0x0);
    lVar5 = **(long **)(TypeInfo_DebugLagSim + 0xb8);
    if (lVar5 != 0) {
      __this_00 = *(UnityEngine_Behaviour_o **)(lVar5 + 0x28);
      __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
      if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled
                  (__this_00,(uint)*(byte *)(*(long **)(TypeInfo_DebugLagSim + 0xb8) + 1),(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$OnGUI
// il2cpp: void ApplicationManagers_DebugConsole__OnGUI (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x44b26a0

void ApplicationManagers_DebugConsole__OnGUI(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

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
  
  if (g_data_057aea10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&"DebugInput");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea10 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = TypeInfo_DebugConsole[2].virtualMethodPointer[8];
  }
  else {
    cVar1 = ((MethodInfo *)((long)TypeInfo_DebugConsole + 0xb0))->virtualMethodPointer[8];
  }
  if (cVar1 == (code)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_GUI__set_depth(1,(MethodInfo *)0x0);
  pMVar6 = TypeInfo_DebugConsole;
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_DebugConsole__HandleWindowInteraction(pMVar6);
  if (TypeInfo_DebugConsole[2].virtualMethodPointer[0x9d] != (Il2CppMethodPointer)0x0) {
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = UnityEngine_GUI__get_color((MethodInfo *)0x0);
    value_00.fields.b = 0.15;
    value_00.fields.a = 1.0;
    value_00.fields.r = 0.15;
    value_00.fields.g = 0.15;
    UnityEngine_GUI__set_color(value_00,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar3 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
    image = (UnityEngine_Texture_o *)UnityEngine_Texture2D__get_whiteTexture((MethodInfo *)0x0);
    UnityEngine_GUI__DrawTexture((UnityEngine_Rect_o)UVar3,image,(MethodInfo *)0x0);
    UnityEngine_GUI__set_color(value,(MethodInfo *)0x0);
  }
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar3 = *(UnityEngine_Rect_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GUI__set_enabled(0,(MethodInfo *)0x0);
    iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
    pMVar6 = TypeInfo_DebugConsole;
  }
  TypeInfo_DebugConsole = pMVar6;
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GUI__set_enabled(1,(MethodInfo *)0x0);
    pSVar5 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar5,"DebugInput",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar6 = TypeInfo_DebugConsole;
    }
    else {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GUI__FocusControl(pSVar5,(MethodInfo *)0x0);
      iVar2 = *(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4);
      pMVar6 = TypeInfo_DebugConsole;
    }
  }
  TypeInfo_DebugConsole = pMVar6;
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar6);
    iVar2 = *(int *)(TypeInfo_GUI + 0xe4);
  }
  else {
    ApplicationManagers_DebugConsole__DrawResizeHandle(pMVar6);
    iVar2 = *(int *)(TypeInfo_GUI + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_GUI__set_depth(0,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$HandleWindowInteraction
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowInteraction (const MethodInfo* method);
// 0x44b2a50

void ApplicationManagers_DebugConsole__HandleWindowInteraction(MethodInfo *method)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  System_Collections_Generic_LinkedList_T__o *pSVar4;
  long lVar5;
  System_String_o *pSVar6;
  UnityEngine_Vector2_Fields UVar7;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_03;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_04;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_05;
  undefined8 uVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  UnityEngine_Event_o *__this_06;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  undefined1 auVar24 [12];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_f0 [48];
  Il2CppType **ppIStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  _union_300326 _Stack_b0;
  System_Collections_Generic_LinkedList_Enumerator_T__c *pSStack_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  float local_48;
  float fStack_44;
  
  if (g_data_057aea11 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057aea11 = '\x01';
  }
  __this_06 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this_06 != (UnityEngine_Event_o *)0x0) {
    UVar7 = (UnityEngine_Vector2_Fields)UnityEngine_Event__get_mousePosition(__this_06,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    fVar23 = *(float *)(lVar11 + 0x6c);
    fVar21 = *(float *)(lVar11 + 0x70);
    fVar19 = *(float *)(lVar11 + 0x74);
    fVar22 = *(float *)(lVar11 + 0x78);
    iVar9 = UnityEngine_Event__get_type(__this_06,(MethodInfo *)0x0);
    local_48 = UVar7.x;
    fStack_44 = UVar7.y;
    if ((iVar9 == 0) && (iVar9 = UnityEngine_Event__get_button(__this_06,(MethodInfo *)0x0), iVar9 == 0)) {
      fVar18 = fVar23 + fVar19;
      if ((((local_48 < fVar18 + -15.0) || (fVar18 + -15.0 + 15.0 <= local_48)) ||
          (fVar22 = fVar22 + fVar21 + -15.0, fStack_44 < fVar22)) || (fVar22 + 15.0 <= fStack_44)) {
        if (local_48 < fVar23) {
          return;
        }
        if (fVar18 <= local_48) {
          return;
        }
        if (fStack_44 < fVar21) {
          return;
        }
        if (fVar21 + 80.0 <= fStack_44) {
          return;
        }
        fVar22 = fVar18 + -335.0 + -20.0;
        if (((fVar22 <= local_48) && (local_48 < fVar22 + 345.0)) &&
           ((fVar21 + 10.0 <= fStack_44 && (fStack_44 < fVar21 + 10.0 + 25.0)))) {
          return;
        }
        if (((fVar23 + 10.0 <= local_48) && (local_48 < fVar23 + 10.0 + fVar19 + -20.0)) &&
           ((fVar23 = fVar21 + 20.0 + 25.0, fVar23 <= fStack_44 && (fStack_44 < fVar23 + 25.0)))) {
          return;
        }
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        *(undefined1 *)(lVar11 + 0x7c) = 1;
        *(float *)(lVar11 + 0x80) = local_48 - *(float *)(lVar11 + 0x6c);
        *(float *)(lVar11 + 0x84) = fStack_44 - *(float *)(lVar11 + 0x70);
      }
      else {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar5 = TypeInfo_DebugConsole;
        lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        *(undefined1 *)(lVar11 + 0x7d) = 1;
        *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar11 + 0x74);
        *(UnityEngine_Vector2_Fields *)(*(long *)(lVar5 + 0xb8) + 0x90) = UVar7;
      }
    }
    else {
      iVar9 = UnityEngine_Event__get_type(__this_06,(MethodInfo *)0x0);
      if ((iVar9 == 1) && (iVar9 = UnityEngine_Event__get_button(__this_06,(MethodInfo *)0x0), iVar9 == 0)) {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined2 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c) = 0;
        return;
      }
      iVar9 = UnityEngine_Event__get_type(__this_06,(MethodInfo *)0x0);
      if (iVar9 != 3) {
        return;
      }
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        cVar2 = *(char *)(lVar11 + 0x7c);
      }
      else {
        lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        cVar2 = *(char *)(lVar11 + 0x7c);
      }
      if (cVar2 == '\0') {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
          cVar2 = *(char *)(lVar11 + 0x7d);
        }
        else {
          cVar2 = *(char *)(lVar11 + 0x7d);
        }
        if (cVar2 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
        fVar21 = (local_48 - (float)*(undefined8 *)(lVar11 + 0x90)) + *(float *)(lVar11 + 0x88);
        fVar23 = 400.0;
        if (400.0 <= fVar21) {
          fVar23 = fVar21;
        }
        *(float *)(lVar11 + 0x74) = fVar23;
        fVar21 = (fStack_44 - (float)((ulong)*(undefined8 *)(lVar11 + 0x90) >> 0x20)) +
                 *(float *)(lVar11 + 0x8c);
        fVar23 = 300.0;
        if (300.0 <= fVar21) {
          fVar23 = fVar21;
        }
        *(float *)(lVar11 + 0x78) = fVar23;
      }
      else {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        }
        *(float *)(lVar11 + 0x6c) = local_48 - *(float *)(lVar11 + 0x80);
        *(float *)(lVar11 + 0x70) = fStack_44 - *(float *)(lVar11 + 0x84);
      }
    }
    UnityEngine_Event__Use(__this_06,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&"Hide Traces");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"No Wrap");
    il2cpp_runtime_helper_023445d0(&"Opaque");
    il2cpp_runtime_helper_023445d0(&"Warning");
    il2cpp_runtime_helper_023445d0(&"Show Traces");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"Info");
    il2cpp_runtime_helper_023445d0(&"CL");
    il2cpp_runtime_helper_023445d0(&"Glass");
    il2cpp_runtime_helper_023445d0(&"Debug Console (Press F11 to hide)");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Error");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea12 = '\x01';
  }
  auStack_f0._16_8_ = (InvokerMethod)0x0;
  auStack_f0._24_8_ = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
  uVar29 = 0;
  uVar26 = 0;
  uVar30 = 0;
  uVar31 = 0;
  auStack_f0._0_8_ = (Il2CppType *)0x0;
  auStack_f0._8_8_ = (Il2CppType **)0x0;
  auStack_f0._32_8_ = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  iVar16 = (int)*(float *)(lVar11 + 0x6c);
  iVar13 = (int)*(float *)(lVar11 + 0x70);
  iVar15 = (int)*(float *)(lVar11 + 0x74);
  iVar17 = iVar16 + 10;
  position.fields.m_XMin = (float)iVar17;
  uVar32 = 0;
  fVar19 = (float)(iVar13 + 10);
  auStack_90 = ZEXT416((uint)position.fields.m_XMin);
  uVar25 = 0;
  uVar27 = 0;
  uVar28 = 0;
  fVar23 = (float)(iVar15 + -0x195);
  uVar20 = 0x41c80000;
  fVar21 = fVar19;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    uStack_9c = 0x41c80000;
    uStack_98 = 0;
    uStack_94 = 0;
    fStack_a0 = (float)(iVar15 + -0x195);
    il2cpp_runtime_helper_02337ed0();
    fVar23 = fStack_a0;
    uVar20 = uStack_9c;
  }
  position.fields.m_YMin = fVar19;
  position.fields.m_Height = (float)uVar20;
  position.fields.m_Width = fVar23;
  UnityEngine_GUI__Label(position,"Debug Console (Press F11 to hide)",(MethodInfo *)0x0);
  position_00.fields.m_XMin = (float)(iVar15 + iVar16 + -0x181);
  position_00.fields.m_YMin = fVar21;
  position_00.fields.m_Width = (float)(int)(long)g_data_00d1c010;
  position_00.fields.m_Height = (float)(int)((ulong)(long)g_data_00d1c010 >> 0x20);
  bVar10 = UnityEngine_GUI__Button(position_00,"Clear",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
    if (pSVar4 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b382a;
    System_Collections_Generic_LinkedList_object___GetEnumerator
              ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(auStack_f0 + 0x28),pSVar4,
               MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    auStack_f0._32_8_ = pSStack_a8;
    auStack_f0._20_4_ = uStack_b4;
    auStack_f0._16_4_ = uStack_b8;
    auStack_f0._28_4_ = _Stack_b0._4_4_;
    auStack_f0._24_4_ = _Stack_b0._0_4_;
    auStack_f0._0_8_ = auStack_f0._40_8_;
    auStack_f0._8_8_ = ppIStack_c0;
    while (__this.fields._list._4_4_ = uVar25, __this.fields._list._0_4_ = fVar21,
          __this.fields._node._0_4_ = uVar27, __this.fields._node._4_4_ = uVar28,
          __this.fields._version = uVar29, __this.fields._20_4_ = uVar26,
          __this.fields._current._0_4_ = uVar30, __this.fields._current._4_4_ = uVar31,
          __this.fields._index = iVar13, __this.fields._36_4_ = uVar32,
          bVar10 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                             (__this,(MethodInfo_3219F70 *)auStack_f0), uVar8 = auStack_f0._24_8_,
          (char)bVar10 != '\0') {
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DebugConsole_LogMessagePool__Return
                ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar8,(MethodInfo *)0x0);
    }
    __this_00.fields._list._4_4_ = uVar25;
    __this_00.fields._list._0_4_ = fVar21;
    __this_00.fields._node._0_4_ = uVar27;
    __this_00.fields._node._4_4_ = uVar28;
    __this_00.fields._version = uVar29;
    __this_00.fields._20_4_ = uVar26;
    __this_00.fields._current._0_4_ = uVar30;
    __this_00.fields._current._4_4_ = uVar31;
    __this_00.fields._index = iVar13;
    __this_00.fields._36_4_ = uVar32;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_00,(MethodInfo_321A0F0 *)auStack_f0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
    if (pSVar4 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b382a;
    System_Collections_Generic_LinkedList_object___GetEnumerator
              ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(auStack_f0 + 0x28),pSVar4,
               MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    auStack_f0._32_8_ = pSStack_a8;
    auStack_f0._20_4_ = uStack_b4;
    auStack_f0._16_4_ = uStack_b8;
    auStack_f0._28_4_ = _Stack_b0._4_4_;
    auStack_f0._24_4_ = _Stack_b0._0_4_;
    auStack_f0._0_8_ = auStack_f0._40_8_;
    auStack_f0._8_8_ = ppIStack_c0;
    while (__this_01.fields._list._4_4_ = uVar25, __this_01.fields._list._0_4_ = fVar21,
          __this_01.fields._node._0_4_ = uVar27, __this_01.fields._node._4_4_ = uVar28,
          __this_01.fields._version = uVar29, __this_01.fields._20_4_ = uVar26,
          __this_01.fields._current._0_4_ = uVar30, __this_01.fields._current._4_4_ = uVar31,
          __this_01.fields._index = iVar13, __this_01.fields._36_4_ = uVar32,
          bVar10 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                             (__this_01,(MethodInfo_3219F70 *)auStack_f0), uVar8 = auStack_f0._24_8_,
          (char)bVar10 != '\0') {
      if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_DebugConsole_LogMessagePool__Return
                ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar8,(MethodInfo *)0x0);
    }
    __this_02.fields._list._4_4_ = uVar25;
    __this_02.fields._list._0_4_ = fVar21;
    __this_02.fields._node._0_4_ = uVar27;
    __this_02.fields._node._4_4_ = uVar28;
    __this_02.fields._version = uVar29;
    __this_02.fields._20_4_ = uVar26;
    __this_02.fields._current._0_4_ = uVar30;
    __this_02.fields._current._4_4_ = uVar31;
    __this_02.fields._index = iVar13;
    __this_02.fields._36_4_ = uVar32;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A0F0 *)auStack_f0);
    do {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
      if (pSVar4 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
        System_Collections_Generic_LinkedList_object___Clear(pSVar4,MethodInfo_Void_Clear);
        pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
        if (pSVar4 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
          System_Collections_Generic_LinkedList_object___Clear(pSVar4,MethodInfo_Void_Clear);
          lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
          lVar5 = *(long *)(lVar11 + 0x40);
          if (lVar5 != 0) {
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            iVar3 = *(int *)(lVar5 + 0x18);
            *(undefined4 *)(lVar5 + 0x18) = 0;
            if (0 < iVar3) {
              System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar3,(MethodInfo *)0x0);
              lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
            }
            *(undefined8 *)(lVar11 + 0x20) = 0;
            *(undefined1 *)(lVar11 + 0x48) = 1;
            *(undefined1 *)(lVar11 + 0x60) = 1;
            *(System_String_o **)(lVar11 + 0x58) = "";
            il2cpp_runtime_helper_022b4080(lVar11 + 0x58);
            break;
          }
        }
      }
label_044b382a:
      auVar24 = il2cpp_runtime_helper_022b2c90();
      if (auVar24._8_4_ != 1) {
        __this_04.fields._list._4_4_ = uVar25;
        __this_04.fields._list._0_4_ = fVar21;
        __this_04.fields._node._0_4_ = uVar27;
        __this_04.fields._node._4_4_ = uVar28;
        __this_04.fields._version = uVar29;
        __this_04.fields._20_4_ = uVar26;
        __this_04.fields._current._0_4_ = uVar30;
        __this_04.fields._current._4_4_ = uVar31;
        __this_04.fields._index = iVar13;
        __this_04.fields._36_4_ = uVar32;
        System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A0F0 *)auStack_f0);
        goto label_044b3904;
      }
      plVar12 = (long *)__cxa_begin_catch(auVar24._0_8_);
      lVar11 = *plVar12;
      __cxa_end_catch();
      __this_03.fields._list._4_4_ = uVar25;
      __this_03.fields._list._0_4_ = fVar21;
      __this_03.fields._node._0_4_ = uVar27;
      __this_03.fields._node._4_4_ = uVar28;
      __this_03.fields._version = uVar29;
      __this_03.fields._20_4_ = uVar26;
      __this_03.fields._current._0_4_ = uVar30;
      __this_03.fields._current._4_4_ = uVar31;
      __this_03.fields._index = iVar13;
      __this_03.fields._36_4_ = uVar32;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A0F0 *)auStack_f0);
      if (lVar11 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar11);
        __this_05.fields._list._4_4_ = uVar25;
        __this_05.fields._list._0_4_ = fVar21;
        __this_05.fields._node._0_4_ = uVar27;
        __this_05.fields._node._4_4_ = uVar28;
        __this_05.fields._version = uVar29;
        __this_05.fields._20_4_ = uVar26;
        __this_05.fields._current._0_4_ = uVar30;
        __this_05.fields._current._4_4_ = uVar31;
        __this_05.fields._index = iVar13;
        __this_05.fields._36_4_ = uVar32;
        System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A0F0 *)auStack_f0);
label_044b3904:
        _Unwind_Resume(auVar24._0_8_);
      }
    } while( true );
  }
  iVar16 = iVar15 + iVar16;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (*(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9c) == '\0') {
    puVar14 = &"Show Traces";
  }
  else {
    puVar14 = &"Hide Traces";
  }
  pSVar6 = (System_String_o *)*puVar14;
  position_01.fields.m_XMin = (float)(iVar16 + -0x122);
  fVar23 = fVar21;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_01.fields.m_YMin = fVar21;
  position_01.fields.m_Width = 90.0;
  position_01.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_01,pSVar6,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    iVar3 = *(int *)(TypeInfo_DebugConsole + 0xe4);
    lVar5 = TypeInfo_DebugConsole;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = TypeInfo_DebugConsole;
    lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    pbVar1 = (byte *)(lVar11 + 0x9c);
    *pbVar1 = *pbVar1 ^ 1;
    *(undefined1 *)(lVar11 + 0x60) = 1;
    iVar3 = *(int *)(lVar5 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar2 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9d);
  }
  else {
    cVar2 = *(char *)(*(long *)(lVar5 + 0xb8) + 0x9d);
  }
  if (cVar2 == '\0') {
    puVar14 = &"Opaque";
  }
  else {
    puVar14 = &"Glass";
  }
  pSVar6 = (System_String_o *)*puVar14;
  position_02.fields.m_XMin = (float)(iVar16 + -0xc3);
  fVar21 = fVar23;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_02.fields.m_YMin = fVar23;
  position_02.fields.m_Width = 90.0;
  position_02.fields.m_Height = 25.0;
  bVar10 = UnityEngine_GUI__Button(position_02,pSVar6,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    iVar3 = *(int *)(TypeInfo_DebugConsole + 0xe4);
    lVar11 = TypeInfo_DebugConsole;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = TypeInfo_DebugConsole;
    pbVar1 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9d);
    *pbVar1 = *pbVar1 ^ 1;
    iVar3 = *(int *)(lVar11 + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar2 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9e);
  }
  else {
    cVar2 = *(char *)(*(long *)(lVar11 + 0xb8) + 0x9e);
  }
  if (cVar2 == '\0') {
    puVar14 = &"Wrap";
  }
  else {
    puVar14 = &"No Wrap";
  }
  pSVar6 = (System_String_o *)*puVar14;
  fVar23 = (float)(iVar16 + -100);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_03.fields.m_YMin = fVar21;
  position_03.fields.m_XMin = fVar23;
  position_03.fields.m_Width = 90.0;
  position_03.fields.m_Height = 25.0;
  uVar29 = auStack_90._0_4_;
  bVar10 = UnityEngine_GUI__Button(position_03,pSVar6,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pbVar1 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9e);
    *pbVar1 = *pbVar1 ^ 1;
  }
  iVar16 = (iVar15 + -0x3c) / 5;
  fVar21 = (float)(iVar13 + 0x2d);
  fVar19 = (float)iVar16;
  uVar26 = 0x41c80000;
  fVar23 = fVar21;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_04.fields.m_YMin = fVar21;
  position_04.fields.m_XMin = (float)uVar29;
  position_04.fields.m_Height = (float)uVar26;
  position_04.fields.m_Width = fVar19;
  bVar10 = UnityEngine_GUI__Button(position_04,"All",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(undefined4 *)(lVar11 + 0x98) = 0;
    *(undefined1 *)(lVar11 + 0x38) = 1;
    *(undefined1 *)(lVar11 + 0x48) = 1;
  }
  iVar13 = iVar16 + iVar17 + 10;
  fVar22 = (float)iVar13;
  fVar21 = fVar23;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar16 = iVar16 + 10;
  position_05.fields.m_Height = (float)uVar26;
  position_05.fields.m_Width = fVar19;
  position_05.fields.m_YMin = fVar23;
  position_05.fields.m_XMin = fVar22;
  bVar10 = UnityEngine_GUI__Button(position_05,"Info",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(undefined4 *)(lVar11 + 0x98) = 1;
    *(undefined1 *)(lVar11 + 0x38) = 1;
    *(undefined1 *)(lVar11 + 0x48) = 1;
  }
  iVar13 = iVar13 + iVar16;
  fVar22 = (float)iVar13;
  fVar23 = fVar21;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_06.fields.m_Height = (float)uVar26;
  position_06.fields.m_Width = fVar19;
  position_06.fields.m_YMin = fVar21;
  position_06.fields.m_XMin = fVar22;
  bVar10 = UnityEngine_GUI__Button(position_06,"Warning",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(undefined4 *)(lVar11 + 0x98) = 2;
    *(undefined1 *)(lVar11 + 0x38) = 1;
    *(undefined1 *)(lVar11 + 0x48) = 1;
  }
  iVar13 = iVar13 + iVar16;
  fVar22 = (float)iVar13;
  fVar21 = fVar23;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_07.fields.m_Height = (float)uVar26;
  position_07.fields.m_Width = fVar19;
  position_07.fields.m_YMin = fVar23;
  position_07.fields.m_XMin = fVar22;
  bVar10 = UnityEngine_GUI__Button(position_07,"Error",(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(undefined4 *)(lVar11 + 0x98) = 3;
    *(undefined1 *)(lVar11 + 0x38) = 1;
    *(undefined1 *)(lVar11 + 0x48) = 1;
  }
  fVar22 = (float)(iVar13 + iVar16);
  fVar23 = fVar21;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_08.fields.m_Height = (float)uVar26;
  position_08.fields.m_Width = fVar19;
  position_08.fields.m_YMin = fVar21;
  position_08.fields.m_XMin = fVar22;
  bVar10 = UnityEngine_GUI__Button(position_08,"CL",(MethodInfo *)0x0);
  lVar11 = TypeInfo_DebugConsole;
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = TypeInfo_DebugConsole;
    lVar5 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(undefined4 *)(lVar5 + 0x98) = 4;
    *(undefined1 *)(lVar5 + 0x38) = 1;
    *(undefined1 *)(lVar5 + 0x48) = 1;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar11 = TypeInfo_DebugConsole;
  }
  fVar21 = (float)(iVar16 * *(int *)(*(long *)(lVar11 + 0xb8) + 0x98) + iVar17);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position_09.fields.m_Height = (float)uVar26;
  position_09.fields.m_Width = fVar19;
  position_09.fields.m_YMin = fVar23;
  position_09.fields.m_XMin = fVar21;
  UnityEngine_GUI__Box(position_09,"",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$DrawTabs
// il2cpp: void ApplicationManagers_DebugConsole__DrawTabs (const MethodInfo* method);
// 0x44b2e60

void ApplicationManagers_DebugConsole__DrawTabs(MethodInfo *method)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  System_Collections_Generic_LinkedList_T__o *pSVar4;
  long lVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_00;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_01;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_02;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_03;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_04;
  System_Collections_Generic_LinkedList_Enumerator_T__o __this_05;
  undefined8 uVar7;
  bool_conflict bVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
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
  undefined1 auVar21 [12];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_a8 [48];
  Il2CppType **ppIStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  _union_300326 _Stack_68;
  System_Collections_Generic_LinkedList_Enumerator_T__c *local_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  if (g_data_057aea12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DebugConsole_LogMessage_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LogMessagePool);
    il2cpp_runtime_helper_023445d0(&"Hide Traces");
    il2cpp_runtime_helper_023445d0(&"Clear");
    il2cpp_runtime_helper_023445d0(&"No Wrap");
    il2cpp_runtime_helper_023445d0(&"Opaque");
    il2cpp_runtime_helper_023445d0(&"Warning");
    il2cpp_runtime_helper_023445d0(&"Show Traces");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"Info");
    il2cpp_runtime_helper_023445d0(&"CL");
    il2cpp_runtime_helper_023445d0(&"Glass");
    il2cpp_runtime_helper_023445d0(&"Debug Console (Press F11 to hide)");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Error");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea12 = '\x01';
  }
  local_a8._16_8_ = (InvokerMethod)0x0;
  local_a8._24_8_ = (ApplicationManagers_DebugConsole_LogMessage_o *)0x0;
  uVar26 = 0;
  uVar23 = 0;
  uVar27 = 0;
  uVar28 = 0;
  local_a8._0_8_ = (Il2CppType *)0x0;
  local_a8._8_8_ = (Il2CppType **)0x0;
  local_a8._32_8_ = (System_Collections_Generic_LinkedList_Enumerator_T__c *)0x0;
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  iVar14 = (int)*(float *)(lVar12 + 0x6c);
  iVar10 = (int)*(float *)(lVar12 + 0x70);
  iVar13 = (int)*(float *)(lVar12 + 0x74);
  iVar15 = iVar14 + 10;
  position.fields.m_XMin = (float)iVar15;
  uVar29 = 0;
  fVar17 = (float)(iVar10 + 10);
  local_48 = ZEXT416((uint)position.fields.m_XMin);
  uVar22 = 0;
  uVar24 = 0;
  uVar25 = 0;
  fVar20 = (float)(iVar13 + -0x195);
  uVar19 = 0x41c80000;
  fVar18 = fVar17;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    uStack_54 = 0x41c80000;
    uStack_50 = 0;
    uStack_4c = 0;
    local_58 = (float)(iVar13 + -0x195);
    il2cpp_runtime_helper_02337ed0();
    fVar20 = local_58;
    uVar19 = uStack_54;
  }
  position.fields.m_YMin = fVar17;
  position.fields.m_Height = (float)uVar19;
  position.fields.m_Width = fVar20;
  UnityEngine_GUI__Label(position,"Debug Console (Press F11 to hide)",(MethodInfo *)0x0);
  position_00.fields.m_XMin = (float)(iVar13 + iVar14 + -0x181);
  position_00.fields.m_YMin = fVar18;
  position_00.fields.m_Width = (float)(int)(long)g_data_00d1c010;
  position_00.fields.m_Height = (float)(int)((ulong)(long)g_data_00d1c010 >> 0x20);
  bVar8 = UnityEngine_GUI__Button(position_00,"Clear",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_044b32ef:
    iVar14 = iVar13 + iVar14;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (*(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9c) == '\0') {
      puVar11 = &"Show Traces";
    }
    else {
      puVar11 = &"Hide Traces";
    }
    pSVar6 = (System_String_o *)*puVar11;
    position_01.fields.m_XMin = (float)(iVar14 + -0x122);
    fVar20 = fVar18;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_01.fields.m_YMin = fVar18;
    position_01.fields.m_Width = 90.0;
    position_01.fields.m_Height = 25.0;
    bVar8 = UnityEngine_GUI__Button(position_01,pSVar6,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      iVar3 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      lVar5 = TypeInfo_DebugConsole;
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = TypeInfo_DebugConsole;
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      pbVar1 = (byte *)(lVar12 + 0x9c);
      *pbVar1 = *pbVar1 ^ 1;
      *(undefined1 *)(lVar12 + 0x60) = 1;
      iVar3 = *(int *)(lVar5 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar2 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9d);
    }
    else {
      cVar2 = *(char *)(*(long *)(lVar5 + 0xb8) + 0x9d);
    }
    if (cVar2 == '\0') {
      puVar11 = &"Opaque";
    }
    else {
      puVar11 = &"Glass";
    }
    pSVar6 = (System_String_o *)*puVar11;
    position_02.fields.m_XMin = (float)(iVar14 + -0xc3);
    fVar18 = fVar20;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_02.fields.m_YMin = fVar20;
    position_02.fields.m_Width = 90.0;
    position_02.fields.m_Height = 25.0;
    bVar8 = UnityEngine_GUI__Button(position_02,pSVar6,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      iVar3 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      lVar12 = TypeInfo_DebugConsole;
    }
    else {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = TypeInfo_DebugConsole;
      pbVar1 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9d);
      *pbVar1 = *pbVar1 ^ 1;
      iVar3 = *(int *)(lVar12 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar2 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9e);
    }
    else {
      cVar2 = *(char *)(*(long *)(lVar12 + 0xb8) + 0x9e);
    }
    if (cVar2 == '\0') {
      puVar11 = &"Wrap";
    }
    else {
      puVar11 = &"No Wrap";
    }
    pSVar6 = (System_String_o *)*puVar11;
    fVar20 = (float)(iVar14 + -100);
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_03.fields.m_YMin = fVar18;
    position_03.fields.m_XMin = fVar20;
    position_03.fields.m_Width = 90.0;
    position_03.fields.m_Height = 25.0;
    uVar26 = local_48._0_4_;
    bVar8 = UnityEngine_GUI__Button(position_03,pSVar6,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pbVar1 = (byte *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x9e);
      *pbVar1 = *pbVar1 ^ 1;
    }
    iVar14 = (iVar13 + -0x3c) / 5;
    fVar18 = (float)(iVar10 + 0x2d);
    fVar17 = (float)iVar14;
    uVar23 = 0x41c80000;
    fVar20 = fVar18;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_04.fields.m_YMin = fVar18;
    position_04.fields.m_XMin = (float)uVar26;
    position_04.fields.m_Height = (float)uVar23;
    position_04.fields.m_Width = fVar17;
    bVar8 = UnityEngine_GUI__Button(position_04,"All",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 0;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    iVar10 = iVar14 + iVar15 + 10;
    fVar16 = (float)iVar10;
    fVar18 = fVar20;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar14 = iVar14 + 10;
    position_05.fields.m_Height = (float)uVar23;
    position_05.fields.m_Width = fVar17;
    position_05.fields.m_YMin = fVar20;
    position_05.fields.m_XMin = fVar16;
    bVar8 = UnityEngine_GUI__Button(position_05,"Info",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 1;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    iVar10 = iVar10 + iVar14;
    fVar16 = (float)iVar10;
    fVar20 = fVar18;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_06.fields.m_Height = (float)uVar23;
    position_06.fields.m_Width = fVar17;
    position_06.fields.m_YMin = fVar18;
    position_06.fields.m_XMin = fVar16;
    bVar8 = UnityEngine_GUI__Button(position_06,"Warning",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 2;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    iVar10 = iVar10 + iVar14;
    fVar16 = (float)iVar10;
    fVar18 = fVar20;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_07.fields.m_Height = (float)uVar23;
    position_07.fields.m_Width = fVar17;
    position_07.fields.m_YMin = fVar20;
    position_07.fields.m_XMin = fVar16;
    bVar8 = UnityEngine_GUI__Button(position_07,"Error",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar12 + 0x98) = 3;
      *(undefined1 *)(lVar12 + 0x38) = 1;
      *(undefined1 *)(lVar12 + 0x48) = 1;
    }
    fVar16 = (float)(iVar10 + iVar14);
    fVar20 = fVar18;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_08.fields.m_Height = (float)uVar23;
    position_08.fields.m_Width = fVar17;
    position_08.fields.m_YMin = fVar18;
    position_08.fields.m_XMin = fVar16;
    bVar8 = UnityEngine_GUI__Button(position_08,"CL",(MethodInfo *)0x0);
    lVar12 = TypeInfo_DebugConsole;
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = TypeInfo_DebugConsole;
      lVar5 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      *(undefined4 *)(lVar5 + 0x98) = 4;
      *(undefined1 *)(lVar5 + 0x38) = 1;
      *(undefined1 *)(lVar5 + 0x48) = 1;
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = TypeInfo_DebugConsole;
    }
    fVar18 = (float)(iVar14 * *(int *)(*(long *)(lVar12 + 0xb8) + 0x98) + iVar15);
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position_09.fields.m_Height = (float)uVar23;
    position_09.fields.m_Width = fVar17;
    position_09.fields.m_YMin = fVar20;
    position_09.fields.m_XMin = fVar18;
    UnityEngine_GUI__Box(position_09,"",(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
  if (pSVar4 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b382a;
  System_Collections_Generic_LinkedList_object___GetEnumerator
            ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(local_a8 + 0x28),pSVar4,MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
  local_a8._32_8_ = local_60;
  local_a8._20_4_ = uStack_6c;
  local_a8._16_4_ = local_70;
  local_a8._28_4_ = _Stack_68._4_4_;
  local_a8._24_4_ = _Stack_68._0_4_;
  local_a8._0_8_ = local_a8._40_8_;
  local_a8._8_8_ = ppIStack_78;
  while (__this.fields._list._4_4_ = uVar22, __this.fields._list._0_4_ = fVar18,
        __this.fields._node._0_4_ = uVar24, __this.fields._node._4_4_ = uVar25,
        __this.fields._version = uVar26, __this.fields._20_4_ = uVar23, __this.fields._current._0_4_ = uVar27,
        __this.fields._current._4_4_ = uVar28, __this.fields._index = iVar10, __this.fields._36_4_ = uVar29,
        bVar8 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                          (__this,(MethodInfo_3219F70 *)local_a8), uVar7 = local_a8._24_8_,
        (char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_DebugConsole_LogMessagePool__Return
              ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar7,(MethodInfo *)0x0);
  }
  __this_00.fields._list._4_4_ = uVar22;
  __this_00.fields._list._0_4_ = fVar18;
  __this_00.fields._node._0_4_ = uVar24;
  __this_00.fields._node._4_4_ = uVar25;
  __this_00.fields._version = uVar26;
  __this_00.fields._20_4_ = uVar23;
  __this_00.fields._current._0_4_ = uVar27;
  __this_00.fields._current._4_4_ = uVar28;
  __this_00.fields._index = iVar10;
  __this_00.fields._36_4_ = uVar29;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose(__this_00,(MethodInfo_321A0F0 *)local_a8);
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
  if (pSVar4 == (System_Collections_Generic_LinkedList_T__o *)0x0) goto label_044b382a;
  System_Collections_Generic_LinkedList_object___GetEnumerator
            ((System_Collections_Generic_LinkedList_Enumerator_T__o *)(local_a8 + 0x28),pSVar4,MethodInfo_LinkedList_1_T_Enumerator_ApplicationManagers_DebugConso);
  local_a8._32_8_ = local_60;
  local_a8._20_4_ = uStack_6c;
  local_a8._16_4_ = local_70;
  local_a8._28_4_ = _Stack_68._4_4_;
  local_a8._24_4_ = _Stack_68._0_4_;
  local_a8._0_8_ = local_a8._40_8_;
  local_a8._8_8_ = ppIStack_78;
  while (__this_01.fields._list._4_4_ = uVar22, __this_01.fields._list._0_4_ = fVar18,
        __this_01.fields._node._0_4_ = uVar24, __this_01.fields._node._4_4_ = uVar25,
        __this_01.fields._version = uVar26, __this_01.fields._20_4_ = uVar23,
        __this_01.fields._current._0_4_ = uVar27, __this_01.fields._current._4_4_ = uVar28,
        __this_01.fields._index = iVar10, __this_01.fields._36_4_ = uVar29,
        bVar8 = System_Collections_Generic_LinkedList_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219F70 *)local_a8), uVar7 = local_a8._24_8_,
        (char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_LogMessagePool + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_DebugConsole_LogMessagePool__Return
              ((ApplicationManagers_DebugConsole_LogMessage_o *)uVar7,(MethodInfo *)0x0);
  }
  __this_02.fields._list._4_4_ = uVar22;
  __this_02.fields._list._0_4_ = fVar18;
  __this_02.fields._node._0_4_ = uVar24;
  __this_02.fields._node._4_4_ = uVar25;
  __this_02.fields._version = uVar26;
  __this_02.fields._20_4_ = uVar23;
  __this_02.fields._current._0_4_ = uVar27;
  __this_02.fields._current._4_4_ = uVar28;
  __this_02.fields._index = iVar10;
  __this_02.fields._36_4_ = uVar29;
  System_Collections_Generic_LinkedList_Enumerator_object___Dispose(__this_02,(MethodInfo_321A0F0 *)local_a8);
  do {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x10);
    if (pSVar4 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
      System_Collections_Generic_LinkedList_object___Clear(pSVar4,MethodInfo_Void_Clear);
      pSVar4 = *(System_Collections_Generic_LinkedList_T__o **)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x18);
      if (pSVar4 != (System_Collections_Generic_LinkedList_T__o *)0x0) {
        System_Collections_Generic_LinkedList_object___Clear(pSVar4,MethodInfo_Void_Clear);
        lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
        lVar5 = *(long *)(lVar12 + 0x40);
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          iVar3 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          if (0 < iVar3) {
            System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar3,(MethodInfo *)0x0);
            lVar12 = *(long *)(TypeInfo_DebugConsole + 0xb8);
          }
          *(undefined8 *)(lVar12 + 0x20) = 0;
          *(undefined1 *)(lVar12 + 0x48) = 1;
          *(undefined1 *)(lVar12 + 0x60) = 1;
          *(System_String_o **)(lVar12 + 0x58) = "";
          il2cpp_runtime_helper_022b4080(lVar12 + 0x58);
          goto label_044b32ef;
        }
      }
    }
label_044b382a:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) {
      __this_04.fields._list._4_4_ = uVar22;
      __this_04.fields._list._0_4_ = fVar18;
      __this_04.fields._node._0_4_ = uVar24;
      __this_04.fields._node._4_4_ = uVar25;
      __this_04.fields._version = uVar26;
      __this_04.fields._20_4_ = uVar23;
      __this_04.fields._current._0_4_ = uVar27;
      __this_04.fields._current._4_4_ = uVar28;
      __this_04.fields._index = iVar10;
      __this_04.fields._36_4_ = uVar29;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A0F0 *)local_a8);
      goto label_044b3904;
    }
    plVar9 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar12 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._list._4_4_ = uVar22;
    __this_03.fields._list._0_4_ = fVar18;
    __this_03.fields._node._0_4_ = uVar24;
    __this_03.fields._node._4_4_ = uVar25;
    __this_03.fields._version = uVar26;
    __this_03.fields._20_4_ = uVar23;
    __this_03.fields._current._0_4_ = uVar27;
    __this_03.fields._current._4_4_ = uVar28;
    __this_03.fields._index = iVar10;
    __this_03.fields._36_4_ = uVar29;
    System_Collections_Generic_LinkedList_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A0F0 *)local_a8);
    if (lVar12 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar12);
      __this_05.fields._list._4_4_ = uVar22;
      __this_05.fields._list._0_4_ = fVar18;
      __this_05.fields._node._0_4_ = uVar24;
      __this_05.fields._node._4_4_ = uVar25;
      __this_05.fields._version = uVar26;
      __this_05.fields._20_4_ = uVar23;
      __this_05.fields._current._0_4_ = uVar27;
      __this_05.fields._current._4_4_ = uVar28;
      __this_05.fields._index = iVar10;
      __this_05.fields._36_4_ = uVar29;
      System_Collections_Generic_LinkedList_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A0F0 *)local_a8);
label_044b3904:
      _Unwind_Resume(auVar21._0_8_);
    }
  } while( true );
}


// ApplicationManagers.DebugConsole$$DrawMessageWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawMessageWindow (const MethodInfo* method);
// 0x44b3920

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
  System_String_o *pSVar9;
  UnityEngine_GUIContent_o *pUVar10;
  System_String_array *pSVar11;
  ulong uVar12;
  Il2CppMethodPointer pIVar13;
  int iVar14;
  MethodInfo *pMVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Rect_o position;
  UnityEngine_Rect_o position_00;
  
  if (g_data_057aea13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUIContent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUIStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea13 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
  fVar20 = *(float *)(pIVar13 + 0x6c);
  fVar1 = *(float *)(pIVar13 + 0x70);
  fVar2 = *(float *)(pIVar13 + 0x74);
  fVar3 = *(float *)(pIVar13 + 0x78);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = UnityEngine_GUI__get_skin((MethodInfo *)0x0);
  if (__this == (UnityEngine_GUISkin_o *)0x0) goto label_044b3d94;
  other = UnityEngine_GUISkin__get_textArea(__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GUIStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GUIStyle);
  UnityEngine_GUIStyle___ctor_4e585a0(__this_00,other,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GUIStyle_o *)0x0) goto label_044b3d94;
  UnityEngine_GUIStyle__set_wordWrap
            (__this_00,(uint)(byte)TypeInfo_DebugConsole[2].virtualMethodPointer[0x9e],(MethodInfo *)0x0);
  UnityEngine_GUIStyle__set_richText(__this_00,1,(MethodInfo *)0x0);
  pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
  if (pIVar13[0x38] == (Il2CppMethodPointer)0x0) {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    }
    if (*(long *)(pIVar13 + 0x18) == 0) goto label_044b3d94;
    if (0 < *(int *)(*(long *)(pIVar13 + 0x18) + 0x18)) goto label_044b3a7c;
  }
  else {
label_044b3a7c:
    pMVar15 = TypeInfo_DebugConsole;
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_DebugConsole__ProcessMessageBuffer(pMVar15);
  }
  pMVar15 = TypeInfo_DebugConsole;
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_DebugConsole__UpdateFilteredMessages(pMVar15);
  pSVar9 = ApplicationManagers_DebugConsole__GetDisplayText(pMVar15);
  iVar17 = (int)fVar2 + -0x28;
  if (TypeInfo_DebugConsole[2].virtualMethodPointer[0x9e] != (Il2CppMethodPointer)0x0) {
    pUVar10 = (UnityEngine_GUIContent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GUIContent);
    UnityEngine_GUIContent___ctor_4e4e650(pUVar10,pSVar9,(MethodInfo *)0x0);
label_044b3be6:
    fVar18 = (float)iVar17;
    fVar19 = UnityEngine_GUIStyle__CalcHeight(__this_00,pUVar10,fVar18,(MethodInfo *)0x0);
    position.fields.m_XMin = (float)((int)fVar20 + 10);
    position.fields.m_Width = (float)((int)fVar2 + -0x14);
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar4 = *(UnityEngine_Vector2_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x28);
    fVar20 = (float)((int)fVar19 + 10);
    auVar8._4_4_ = fVar20;
    auVar8._0_4_ = fVar18;
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    position.fields.m_YMin = (float)((int)fVar1 + 0x50);
    position.fields.m_Height = (float)((int)fVar3 + -0x87);
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar18;
    auVar7._8_8_ = 0;
    UVar4 = (UnityEngine_Vector2_Fields)
            UnityEngine_GUI__BeginScrollView
                      (position,(UnityEngine_Vector2_o)UVar4,(UnityEngine_Rect_o)(auVar7 << 0x40),
                       (MethodInfo *)0x0);
    *(UnityEngine_Vector2_Fields *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x28) = UVar4;
    auVar8._8_8_ = 0;
    UnityEngine_GUI__TextArea((UnityEngine_Rect_o)(auVar8 << 0x40),pSVar9,__this_00,(MethodInfo *)0x0);
    pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
    if (pIVar13[0x38] != (Il2CppMethodPointer)0x0) {
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
      }
      iVar17 = ((int)fVar19 + 10) - ((int)fVar3 + -0x87);
      if (iVar17 < 0) {
        iVar17 = 0;
      }
      pIVar13[0x38] = (code)0x0;
      *(undefined4 *)(pIVar13 + 0x28) = 0;
      *(float *)(pIVar13 + 0x2c) = (float)iVar17;
    }
    if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GUI__EndScrollView((MethodInfo *)0x0);
    return;
  }
  if (pSVar9 != (System_String_o *)0x0) {
    iVar14 = 10;
    pSVar11 = System_String__Split(pSVar9,10,0,(MethodInfo *)0x0);
    if (pSVar11 != (System_String_array *)0x0) {
      if (0 < (int)pSVar11->max_length) {
        uVar12 = pSVar11->max_length & 0xffffffff;
        uVar16 = 0;
        fVar18 = 0.0;
        do {
          if (uVar12 <= uVar16) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_044b3d94;
          }
          text = pSVar11->m_Items[uVar16];
          pUVar10 = (UnityEngine_GUIContent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GUIContent);
          UnityEngine_GUIContent___ctor_4e4e650(pUVar10,text,(MethodInfo *)0x0);
          UVar6 = UnityEngine_GUIStyle__CalcSize(__this_00,pUVar10,(MethodInfo *)0x0);
          fVar19 = UVar6.fields.x;
          if (UVar6.fields.x <= fVar18) {
            fVar19 = fVar18;
          }
          uVar16 = uVar16 + 1;
          uVar5 = (uint)pSVar11->max_length;
          uVar12 = (ulong)uVar5;
          fVar18 = fVar19;
        } while ((long)uVar16 < (long)(int)uVar5);
        iVar14 = (int)fVar19 + 10;
      }
      if (iVar17 < iVar14) {
        iVar17 = iVar14;
      }
      pUVar10 = (UnityEngine_GUIContent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GUIContent);
      UnityEngine_GUIContent___ctor_4e4e650(pUVar10,pSVar9,(MethodInfo *)0x0);
      goto label_044b3be6;
    }
  }
label_044b3d94:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&"DebugInput");
    g_data_057aea14 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar20 = *(float *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x70);
  fVar1 = *(float *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x78);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_GUI__SetNextControlName("DebugInput",(MethodInfo *)0x0);
  pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
  position_00.fields.m_XMin = (float)((int)*(float *)(pIVar13 + 0x6c) + 10);
  position_00.fields.m_Width = (float)((int)*(float *)(pIVar13 + 0x74) + -0x14);
  position_00.fields.m_YMin = (float)((int)(fVar20 + fVar1) + -0x23);
  position_00.fields.m_Height = 25.0;
  pSVar9 = UnityEngine_GUI__TextField(position_00,*(System_String_o **)(pIVar13 + 0x30),(MethodInfo *)0x0);
  pIVar13 = TypeInfo_DebugConsole[2].virtualMethodPointer;
  *(System_String_o **)(pIVar13 + 0x30) = pSVar9;
  il2cpp_runtime_helper_022b4080(pIVar13 + 0x30,pSVar9);
  return;
}


// ApplicationManagers.DebugConsole$$DrawInputWindow
// il2cpp: void ApplicationManagers_DebugConsole__DrawInputWindow (const MethodInfo* method);
// 0x44b3da0

void ApplicationManagers_DebugConsole__DrawInputWindow(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  long lVar3;
  System_String_o *pSVar4;
  UnityEngine_Rect_o position;
  
  if (g_data_057aea14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&"DebugInput");
    g_data_057aea14 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar1 = *(float *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x70);
  fVar2 = *(float *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x78);
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_GUI__SetNextControlName("DebugInput",(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  position.fields.m_XMin = (float)((int)*(float *)(lVar3 + 0x6c) + 10);
  position.fields.m_YMin = (float)((int)(fVar1 + fVar2) + -0x23);
  position.fields.m_Width = (float)((int)*(float *)(lVar3 + 0x74) + -0x14);
  position.fields.m_Height = 25.0;
  pSVar4 = UnityEngine_GUI__TextField(position,*(System_String_o **)(lVar3 + 0x30),(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_String_o **)(lVar3 + 0x30) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x30,pSVar4);
  return;
}


// ApplicationManagers.DebugConsole$$HandleInput
// il2cpp: void ApplicationManagers_DebugConsole__HandleInput (const MethodInfo* method);
// 0x44b3ea0

void ApplicationManagers_DebugConsole__HandleInput(MethodInfo *method)

{
  undefined8 uVar1;
  Il2CppObject *message;
  undefined8 uVar2;
  Il2CppMethodPointer pIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  UnityEngine_Rect_o position;
  
  if (g_data_057aea15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&"Invalid debug command.");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"DebugInput");
    g_data_057aea15 = '\x01';
  }
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UnityEngine_GUI__GetNameOfFocusedControl((MethodInfo *)0x0);
  bVar5 = System_String__op_Equality(pSVar6,"DebugInput",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
      method_00 = TypeInfo_DebugConsole;
      il2cpp_runtime_helper_02337ed0();
      bVar5 = ApplicationManagers_DebugConsole__IsEnterUp(method_00);
      cVar4 = (char)bVar5;
    }
    else {
      bVar5 = ApplicationManagers_DebugConsole__IsEnterUp(TypeInfo_DebugConsole);
      cVar4 = (char)bVar5;
    }
    if (cVar4 != '\0') {
      if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = System_String__op_Inequality
                        (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30),
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        message = *(Il2CppObject **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
        if (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30) == (System_String_o *)0x0) {
label_044b4107:
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aea17 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
            il2cpp_runtime_helper_023445d0(&"\xe2\x8b\xb0");
            g_data_057aea17 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar2 = *(undefined8 *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x6c);
          uVar1 = *(undefined8 *)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x74);
          position.fields.m_XMin = (float)uVar1 + (float)uVar2 + -15.0;
          position.fields.m_YMin = (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar2 >> 0x20) + -15.0;
          if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.m_Width = 15.0;
          position.fields.m_Height = 15.0;
          UnityEngine_GUI__Box(position,"\xe2\x8b\xb0",(MethodInfo *)0x0);
          return;
        }
        bVar5 = System_String__StartsWith
                          (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30),"/",
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Debug__Log("Invalid debug command.",(MethodInfo *)0x0);
        }
        else {
          if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30) == (System_String_o *)0x0)
          goto label_044b4107;
          pSVar6 = System_String__Substring
                             (*(System_String_o **)(TypeInfo_DebugConsole[2].virtualMethodPointer + 0x30),1,
                              (MethodInfo *)0x0);
          ApplicationManagers_DebugTesting__RunDebugCommand(pSVar6,(MethodInfo *)0x0);
        }
        uVar2 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)((long)&TypeInfo_DebugConsole[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar3 = TypeInfo_DebugConsole[2].virtualMethodPointer;
        *(undefined8 *)(pIVar3 + 0x30) = uVar2;
        il2cpp_runtime_helper_022b4080(pIVar3 + 0x30);
      }
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GUI__FocusControl(pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ApplicationManagers.DebugConsole$$IsEnterUp
// il2cpp: bool ApplicationManagers_DebugConsole__IsEnterUp (const MethodInfo* method);
// 0x44b41c0

bool_conflict ApplicationManagers_DebugConsole__IsEnterUp(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_Fields UVar5;
  bool bVar6;
  int32_t iVar7;
  bool_conflict extraout_EAX;
  UnityEngine_Event_o *pUVar8;
  long lVar9;
  UnityEngine_MonoBehaviour_o *__this;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Event_o *)0x0) {
    iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
    if (iVar7 != 5) {
      return 0;
    }
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Event_o *)0x0) {
      iVar7 = UnityEngine_Event__get_keyCode(pUVar8,(MethodInfo *)0x0);
      if (iVar7 == 0xd) {
        return 1;
      }
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Event_o *)0x0) {
        iVar7 = UnityEngine_Event__get_keyCode(pUVar8,(MethodInfo *)0x0);
        return (uint)(iVar7 == 0x10f);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    g_data_057aea16 = '\x01';
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto label_044b458e;
label_044b425a:
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c);
    lVar9 = TypeInfo_DebugConsole;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto label_044b425a;
label_044b458e:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c);
    lVar9 = TypeInfo_DebugConsole;
  }
  TypeInfo_DebugConsole = lVar9;
  if (cVar1 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UVar4 = UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = TypeInfo_DebugConsole;
    lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(float *)(lVar3 + 0x6c) = *(float *)(lVar3 + 0x80) + UVar4.fields.x;
    *(float *)(lVar3 + 0x70) = UVar4.fields.y + *(float *)(lVar3 + 0x84);
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7d);
  }
  else {
    cVar1 = *(char *)(*(long *)(lVar9 + 0xb8) + 0x7d);
  }
  if (cVar1 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UVar4 = UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
  __this = (UnityEngine_MonoBehaviour_o *)0x0;
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
  iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
  if (iVar7 == 0) {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    iVar7 = UnityEngine_Event__get_button(pUVar8,(MethodInfo *)0x0);
    if (iVar7 != 0) goto label_044b4484;
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UVar5 = (UnityEngine_Vector2_Fields)UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    fVar11 = UVar5.x;
    fVar10 = UVar5.y;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    fVar12 = *(float *)(lVar9 + 0x6c);
    if (((fVar11 < fVar12) || (*(float *)(lVar9 + 0x74) + fVar12 <= fVar11)) ||
       (fVar10 < *(float *)(lVar9 + 0x70))) {
      bVar6 = false;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto label_044b461c;
label_044b4432:
      if (bVar6) goto label_044b443b;
label_044b4641:
      fVar12 = fVar12 + *(float *)(lVar9 + 0x74) + -15.0;
      if (((fVar11 < fVar12) || (fVar12 + 15.0 <= fVar11)) ||
         ((fVar11 = *(float *)(lVar9 + 0x70) + *(float *)(lVar9 + 0x78) + -15.0, fVar10 < fVar11 ||
          (fVar11 + 15.0 <= fVar10)))) goto label_044b4484;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      }
      lVar3 = TypeInfo_DebugConsole;
      *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(lVar9 + 0x74);
      *(UnityEngine_Vector2_Fields *)(*(long *)(lVar3 + 0xb8) + 0x90) = UVar5;
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x7d) = 1;
      __this = (UnityEngine_MonoBehaviour_o *)0x0;
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    }
    else {
      bVar6 = fVar10 < *(float *)(lVar9 + 0x70) + 70.0;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto label_044b4432;
label_044b461c:
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      fVar12 = *(float *)(lVar9 + 0x6c);
      if (!bVar6) goto label_044b4641;
label_044b443b:
      lVar3 = TypeInfo_DebugConsole;
      *(float *)(lVar9 + 0x80) = fVar12 - fVar11;
      *(float *)(lVar9 + 0x84) = *(float *)(lVar9 + 0x70) - fVar10;
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x7c) = 1;
      __this = (UnityEngine_MonoBehaviour_o *)0x0;
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    }
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UnityEngine_Event__Use(pUVar8,(MethodInfo *)0x0);
  }
label_044b4484:
  __this = (UnityEngine_MonoBehaviour_o *)0x0;
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Event_o *)0x0) {
label_044b46ef:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
  if (iVar7 == 1) {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    iVar7 = UnityEngine_Event__get_button(pUVar8,(MethodInfo *)0x0);
    if (iVar7 == 0) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined2 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c) = 0;
      iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      goto joined_r0x044b44cf;
    }
  }
  iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
joined_r0x044b44cf:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  fVar10 = (float)iVar7 - *(float *)(lVar9 + 0x78);
  if (fVar11 <= fVar10) {
    fVar10 = fVar11;
  }
  *(uint *)(lVar9 + 0x70) = -(uint)(0.0 <= fVar11) & (uint)fVar10;
  return (bool_conflict)lVar9;
}


// ApplicationManagers.DebugConsole$$HandleWindowDraggingAndResizing
// il2cpp: void ApplicationManagers_DebugConsole__HandleWindowDraggingAndResizing (const MethodInfo* method);
// 0x44b4230

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
  UnityEngine_MonoBehaviour_o *__this;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (g_data_057aea16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    g_data_057aea16 = '\x01';
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto label_044b425a;
label_044b458e:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c);
    lVar9 = TypeInfo_DebugConsole;
  }
  else {
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto label_044b458e;
label_044b425a:
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c);
    lVar9 = TypeInfo_DebugConsole;
  }
  TypeInfo_DebugConsole = lVar9;
  if (cVar1 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UVar4 = UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = TypeInfo_DebugConsole;
    lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    *(float *)(lVar3 + 0x6c) = *(float *)(lVar3 + 0x80) + UVar4.fields.x;
    *(float *)(lVar3 + 0x70) = UVar4.fields.y + *(float *)(lVar3 + 0x84);
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7d);
  }
  else {
    cVar1 = *(char *)(*(long *)(lVar9 + 0xb8) + 0x7d);
  }
  if (cVar1 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UVar4 = UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
  __this = (UnityEngine_MonoBehaviour_o *)0x0;
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
  iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
  if (iVar7 == 0) {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    iVar7 = UnityEngine_Event__get_button(pUVar8,(MethodInfo *)0x0);
    if (iVar7 != 0) goto label_044b4484;
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UVar5 = (UnityEngine_Vector2_Fields)UnityEngine_Event__get_mousePosition(pUVar8,(MethodInfo *)0x0);
    fVar11 = UVar5.x;
    fVar10 = UVar5.y;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    fVar12 = *(float *)(lVar9 + 0x6c);
    if (((fVar11 < fVar12) || (*(float *)(lVar9 + 0x74) + fVar12 <= fVar11)) ||
       (fVar10 < *(float *)(lVar9 + 0x70))) {
      bVar6 = false;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) != 0) goto label_044b4432;
label_044b461c:
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      fVar12 = *(float *)(lVar9 + 0x6c);
      if (bVar6) goto label_044b443b;
label_044b4641:
      fVar12 = fVar12 + *(float *)(lVar9 + 0x74) + -15.0;
      if (((fVar11 < fVar12) || (fVar12 + 15.0 <= fVar11)) ||
         ((fVar11 = *(float *)(lVar9 + 0x70) + *(float *)(lVar9 + 0x78) + -15.0, fVar10 < fVar11 ||
          (fVar11 + 15.0 <= fVar10)))) goto label_044b4484;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(TypeInfo_DebugConsole + 0xb8);
      }
      lVar3 = TypeInfo_DebugConsole;
      *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(lVar9 + 0x74);
      *(UnityEngine_Vector2_Fields *)(*(long *)(lVar3 + 0xb8) + 0x90) = UVar5;
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x7d) = 1;
      __this = (UnityEngine_MonoBehaviour_o *)0x0;
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    }
    else {
      bVar6 = fVar10 < *(float *)(lVar9 + 0x70) + 70.0;
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) goto label_044b461c;
label_044b4432:
      if (!bVar6) goto label_044b4641;
label_044b443b:
      lVar3 = TypeInfo_DebugConsole;
      *(float *)(lVar9 + 0x80) = fVar12 - fVar11;
      *(float *)(lVar9 + 0x84) = *(float *)(lVar9 + 0x70) - fVar10;
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x7c) = 1;
      __this = (UnityEngine_MonoBehaviour_o *)0x0;
      pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    }
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    UnityEngine_Event__Use(pUVar8,(MethodInfo *)0x0);
  }
label_044b4484:
  __this = (UnityEngine_MonoBehaviour_o *)0x0;
  pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_Event_o *)0x0) {
label_044b46ef:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
    return;
  }
  iVar7 = UnityEngine_Event__get_type(pUVar8,(MethodInfo *)0x0);
  if (iVar7 == 1) {
    __this = (UnityEngine_MonoBehaviour_o *)0x0;
    pUVar8 = UnityEngine_Event__get_current((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Event_o *)0x0) goto label_044b46ef;
    iVar7 = UnityEngine_Event__get_button(pUVar8,(MethodInfo *)0x0);
    if (iVar7 == 0) {
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined2 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x7c) = 0;
      iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
      goto joined_r0x044b44cf;
    }
  }
  iVar2 = *(int *)(TypeInfo_DebugConsole + 0xe4);
joined_r0x044b44cf:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x44b4110

void ApplicationManagers_DebugConsole__DrawResizeHandle(MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Rect_o position;
  
  if (g_data_057aea17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GUI);
    il2cpp_runtime_helper_023445d0(&"\xe2\x8b\xb0");
    g_data_057aea17 = '\x01';
  }
  if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x6c);
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x74);
  position.fields.m_XMin = (float)uVar2 + (float)uVar1 + -15.0;
  position.fields.m_YMin = (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar1 >> 0x20) + -15.0;
  if (*(int *)(TypeInfo_GUI + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  position.fields.m_Width = 15.0;
  position.fields.m_Height = 15.0;
  UnityEngine_GUI__Box(position,"\xe2\x8b\xb0",(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.ctor
// il2cpp: void ApplicationManagers_DebugConsole___ctor (ApplicationManagers_DebugConsole_o* __this, const MethodInfo* method);
// 0x44b4700

void ApplicationManagers_DebugConsole___ctor(ApplicationManagers_DebugConsole_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.DebugConsole$$.cctor
// il2cpp: void ApplicationManagers_DebugConsole___cctor (const MethodInfo* method);
// 0x44b4710

void ApplicationManagers_DebugConsole___cctor(MethodInfo *method)

{
  System_Collections_Generic_LinkedList_T__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Text_StringBuilder_o *__this_00;
  long lVar3;
  
  if (g_data_057aea18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LinkedList_1_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LinkedList_LogMessage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_DebugConsole_LogMessage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_LogMessage);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea18 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_LinkedList_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_LinkedList_LogMessage);
  System_Collections_Generic_LinkedList_object____ctor(pSVar1,MethodInfo_LinkedList_1_ApplicationManagers_DebugConsole_LogMessage);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Collections_Generic_LinkedList_T__o **)(lVar3 + 0x10) = pSVar1;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x10,pSVar1);
  pSVar1 = (System_Collections_Generic_LinkedList_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_LinkedList_LogMessage);
  System_Collections_Generic_LinkedList_object____ctor(pSVar1,MethodInfo_LinkedList_1_ApplicationManagers_DebugConsole_LogMessage);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Collections_Generic_LinkedList_T__o **)(lVar3 + 0x18) = pSVar1;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x18,pSVar1);
  lVar2 = TypeInfo_DebugConsole;
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
    lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
    lVar2 = TypeInfo_DebugConsole;
  }
  *(undefined8 *)(lVar3 + 0x28) = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  lVar3 = *(long *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar3 + 0x30) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_LogMessage);
  System_Collections_Generic_List_object____ctor_362b930(__this,0x400,MethodInfo_List_1_ApplicationManagers_DebugConsole_LogMessage);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar3 + 0x40) = __this;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x40,__this);
  *(undefined1 *)(*(long *)(TypeInfo_DebugConsole + 0xb8) + 0x48) = 1;
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor_3b026e0(__this_00,0x2000,(MethodInfo *)0x0);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(System_Text_StringBuilder_o **)(lVar3 + 0x50) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x50,__this_00);
  lVar3 = *(long *)(TypeInfo_DebugConsole + 0xb8);
  *(undefined8 *)(lVar3 + 0x58) = "";
  il2cpp_runtime_helper_022b4080(lVar3 + 0x58);
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


