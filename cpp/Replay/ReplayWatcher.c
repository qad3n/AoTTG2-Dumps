// Type: Replay.ReplayWatcher
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayWatcher.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayWatcher.cs
// --------------------------------

// Replay.ReplayWatcher$$LoadScript
// il2cpp: void Replay_ReplayWatcher__LoadScript (Replay_ReplayWatcher_o* __this, Replay_ReplayScript_o* script, const MethodInfo* method);
// 0x181f255a0

void Replay_ReplayWatcher__LoadScript
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScript_o *script,MethodInfo *method)

{
  System_Collections_Generic_List_ReplayScriptEvent__o *pSVar1;
  Replay_ReplayScriptEvent_o *pRVar2;
  
  if (Il2CppMethodInitialized_1843454d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    Il2CppMethodInitialized_1843454d4 = '\x01';
  }
  (__this->fields)._script = script;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._script,script);
  (__this->fields)._currentEvent = 0;
  (__this->fields).Playing = false;
  if ((script != (Replay_ReplayScript_o *)0x0) &&
     (pSVar1 = (script->fields).Events, pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0)
     ) {
    pRVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    if (pRVar2 != (Replay_ReplayScriptEvent_o *)0x0) {
      (__this->fields).CurrentTime = (pRVar2->fields).Time;
      pSVar1 = (script->fields).Events;
      if (pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
        pRVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)(script->fields).Events,
                            (pSVar1->fields)._size + -1,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
        if (pRVar2 != (Replay_ReplayScriptEvent_o *)0x0) {
          (__this->fields).MaxTime = (pRVar2->fields).Time;
          pSVar1 = (script->fields).Events;
          if (pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
            pRVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,0,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
            Replay_ReplayWatcher__HandleEvent(__this,pRVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Replay.ReplayWatcher$$FixedUpdate
// il2cpp: void Replay_ReplayWatcher__FixedUpdate (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x181f251e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f2524f: nop 
// asm:   0x181f252b2: jmp 0x181f25250

void Replay_ReplayWatcher__FixedUpdate(Replay_ReplayWatcher_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  float fVar3;
  System_Collections_Generic_List_ReplayScriptEvent__o *pSVar4;
  Replay_ReplayScript_o *pRVar5;
  Replay_ReplayScriptEvent_o *currentEvent;
  int iVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_1843454d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    Il2CppMethodInitialized_1843454d5 = '\x01';
  }
  if ((__this->fields).Playing == false) {
    return;
  }
  fVar3 = (__this->fields).CurrentTime;
  fVar7 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pRVar5 = (__this->fields)._script;
  iVar6 = (__this->fields)._currentEvent;
  (__this->fields).CurrentTime = fVar7 * (__this->fields).Speed + fVar3;
  if (pRVar5 != (Replay_ReplayScript_o *)0x0) {
    while (pSVar4 = (pRVar5->fields).Events,
          pSVar4 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
      if ((pSVar4->fields)._size + -1 <= iVar6) {
label_181f252b4:
        if ((__this->fields).CurrentTime < (__this->fields).MaxTime) {
          return;
        }
        (__this->fields).CurrentTime = (__this->fields).MaxTime;
        (__this->fields).Playing = false;
        return;
      }
      pRVar5 = (__this->fields)._script;
      if (((pRVar5 == (Replay_ReplayScript_o *)0x0) ||
          (pSVar4 = (pRVar5->fields).Events,
          pSVar4 == (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0)) ||
         (currentEvent = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar4,
                                    (__this->fields)._currentEvent + 1,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item),
         currentEvent == (Replay_ReplayScriptEvent_o *)0x0)) break;
      fVar3 = (currentEvent->fields).Time;
      pfVar1 = &(__this->fields).CurrentTime;
      if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) goto label_181f252b4;
      piVar2 = &(__this->fields)._currentEvent;
      *piVar2 = *piVar2 + 1;
      Replay_ReplayWatcher__HandleEvent(__this,currentEvent,(MethodInfo *)0x0);
      pRVar5 = (__this->fields)._script;
      iVar6 = (__this->fields)._currentEvent;
      if (pRVar5 == (Replay_ReplayScript_o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Replay.ReplayWatcher$$HandleEvent
// il2cpp: void Replay_ReplayWatcher__HandleEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x181f252e0

void Replay_ReplayWatcher__HandleEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_1843454d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayEventCategory);
    Il2CppMethodInitialized_1843454d6 = '\x01';
  }
  if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (currentEvent->fields).Category;
  local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = 0;
  pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar1,pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    if (Il2CppMethodInitialized_1843454d7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayEventMapAction);
      Il2CppMethodInitialized_1843454d7 = '\x01';
    }
    pSVar1 = (currentEvent->fields).Action;
    local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventMapAction;
    local_28.monitor = &g_data_ffffffffffffffff;
    local_18 = 0;
    pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar1,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (currentEvent->fields).Parameters;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___System_Collections_IList_get_Item
                  ((System_Collections_Generic_List_object__o *)__this_00,0,
                   (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  else {
    pSVar1 = (currentEvent->fields).Category;
    local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
    local_28.monitor = &g_data_ffffffffffffffff;
    local_18 = 1;
    pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar1,pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (currentEvent->fields).Category;
      local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
      local_28.monitor = &g_data_ffffffffffffffff;
      local_18 = 2;
      pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar1,pSVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (currentEvent->fields).Category;
        local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
        local_28.monitor = &g_data_ffffffffffffffff;
        local_18 = 3;
        pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar1,pSVar3,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar1 = (currentEvent->fields).Category;
          local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
          local_28.monitor = &g_data_ffffffffffffffff;
          local_18 = 4;
          pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
          System_String__op_Equality(pSVar1,pSVar3,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Replay.ReplayWatcher$$HandleMapEvent
// il2cpp: void Replay_ReplayWatcher__HandleMapEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x181f254f0

void Replay_ReplayWatcher__HandleMapEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  System_String_o *a;
  System_Collections_Generic_List_string__o *__this_00;
  bool bVar1;
  System_String_o *b;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_1843454d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayEventMapAction);
    Il2CppMethodInitialized_1843454d7 = '\x01';
  }
  if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (currentEvent->fields).Action;
  local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventMapAction;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = 0;
  b = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (currentEvent->fields).Parameters;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___System_Collections_IList_get_Item
              ((System_Collections_Generic_List_object__o *)__this_00,0,
               (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    return;
  }
  ThrowNullReferenceException();
}


// Replay.ReplayWatcher$$HandleHumanEvent
// il2cpp: void Replay_ReplayWatcher__HandleHumanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x180547020

void
Replay_ReplayWatcher__HandleHumanEvent(Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, MethodInfo* method)

{
  return;
}


// Replay.ReplayWatcher$$HandleTitanEvent
// il2cpp: void Replay_ReplayWatcher__HandleTitanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x180547020

void
Replay_ReplayWatcher__HandleTitanEvent(Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, MethodInfo* method)

{
  return;
}


// Replay.ReplayWatcher$$HandleCameraEvent
// il2cpp: void Replay_ReplayWatcher__HandleCameraEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x180547020

void
Replay_ReplayWatcher__HandleCameraEvent(Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, MethodInfo* method)

{
  return;
}


// Replay.ReplayWatcher$$HandleChatEvent
// il2cpp: void Replay_ReplayWatcher__HandleChatEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x180547020

void
Replay_ReplayWatcher__HandleChatEvent(Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, MethodInfo* method)

{
  return;
}


// Replay.ReplayWatcher$$.ctor
// il2cpp: void Replay_ReplayWatcher___ctor (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x180528540

void
Replay_ReplayWatcher___ctor(Replay_ReplayWatcher_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


