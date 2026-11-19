// Type: Replay.ReplayWatcher
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Replay/ReplayWatcher.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayWatcher.cs
// --------------------------------

// Replay.ReplayWatcher$$LoadScript
// il2cpp: void Replay_ReplayWatcher__LoadScript (Replay_ReplayWatcher_o* __this, Replay_ReplayScript_o* script, const MethodInfo* method);
// 0x586e5c0

void Replay_ReplayWatcher__LoadScript
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScript_o *script,MethodInfo *method)

{
  System_Collections_Generic_List_ReplayScriptEvent__o *pSVar1;
  Replay_ReplayScriptEvent_o *pRVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754515e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    Il2CppMethodInitialized_0754515e = '\x01';
  }
  (__this->fields)._script = script;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._script);
  (__this->fields)._currentEvent = 0;
  (__this->fields).Playing = false;
  if ((script != (Replay_ReplayScript_o *)0x0) &&
     (pSVar1 = (script->fields).Events, pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0)
     ) {
    pRVar2 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    if (pRVar2 != (Replay_ReplayScriptEvent_o *)0x0) {
      (__this->fields).CurrentTime = (pRVar2->fields).Time;
      pSVar1 = (script->fields).Events;
      if (pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
        pRVar2 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,(pSVar1->fields)._size + -1,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
        if (pRVar2 != (Replay_ReplayScriptEvent_o *)0x0) {
          (__this->fields).MaxTime = (pRVar2->fields).Time;
          pSVar1 = (script->fields).Events;
          if (pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
            pRVar2 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,0,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
            Replay_ReplayWatcher__HandleEvent(__this,pRVar2,method_00);
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
// 0x586e810
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586e874: lea r14, [rip + 0x1a27c65]  ; MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item
// asm:   0x586e87b: nop dword ptr [rax + rax]

void Replay_ReplayWatcher__FixedUpdate(Replay_ReplayWatcher_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Replay_ReplayScript_o *pRVar3;
  System_Collections_Generic_List_ReplayScriptEvent__o *__this_00;
  Replay_ReplayScriptEvent_o *currentEvent;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754515f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    Il2CppMethodInitialized_0754515f = '\x01';
  }
  if ((__this->fields).Playing == false) {
    return;
  }
  fVar5 = (__this->fields).CurrentTime;
  fVar4 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).CurrentTime = fVar4 * (__this->fields).Speed + fVar5;
  pRVar3 = (__this->fields)._script;
  while ((pRVar3 != (Replay_ReplayScript_o *)0x0 &&
         (__this_00 = (pRVar3->fields).Events,
         __this_00 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0))) {
    iVar2 = (__this->fields)._currentEvent;
    if ((__this_00->fields)._size + -1 <= iVar2) {
      fVar5 = (__this->fields).CurrentTime;
label_0586e8d4:
      fVar4 = (__this->fields).MaxTime;
      if (fVar5 < fVar4) {
        return;
      }
      (__this->fields).CurrentTime = fVar4;
      (__this->fields).Playing = false;
      return;
    }
    currentEvent = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,iVar2 + 1,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_ReplayScriptEvent_get_Item);
    if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) break;
    fVar5 = (__this->fields).CurrentTime;
    if (fVar5 < (currentEvent->fields).Time) goto label_0586e8d4;
    piVar1 = &(__this->fields)._currentEvent;
    *piVar1 = *piVar1 + 1;
    Replay_ReplayWatcher__HandleEvent(__this,currentEvent,method_00);
    pRVar3 = (__this->fields)._script;
  }
  ThrowNullReferenceException();
}


// Replay.ReplayWatcher$$HandleEvent
// il2cpp: void Replay_ReplayWatcher__HandleEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x586e690

void Replay_ReplayWatcher__HandleEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  Replay_ReplayWatcher_o *__this_00;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (Il2CppMethodInitialized_07545160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayEventCategory);
    Il2CppMethodInitialized_07545160 = '\x01';
  }
  if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (Replay_ReplayWatcher_o *)(currentEvent->fields).Category;
  local_30.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
  local_30.monitor = (void *)0xffffffffffffffff;
  local_20 = 0;
  pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality((System_String_o *)__this_00,pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    Replay_ReplayWatcher__HandleMapEvent(__this_00,currentEvent,method_00);
  }
  else {
    pSVar2 = (currentEvent->fields).Category;
    local_30.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 1;
    pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (currentEvent->fields).Category;
      local_30.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = 2;
      pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = (currentEvent->fields).Category;
        local_30.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
        local_30.monitor = (void *)0xffffffffffffffff;
        local_20 = 3;
        pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = (currentEvent->fields).Category;
          local_30.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventCategory;
          local_30.monitor = (void *)0xffffffffffffffff;
          local_20 = 4;
          pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
          System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Replay.ReplayWatcher$$HandleMapEvent
// il2cpp: void Replay_ReplayWatcher__HandleMapEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x586e8f0

void Replay_ReplayWatcher__HandleMapEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  System_String_o *a;
  System_Collections_Generic_List_string__o *__this_00;
  bool bVar1;
  System_String_o *b;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_07545161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Replay_ReplayEventMapAction);
    Il2CppMethodInitialized_07545161 = '\x01';
  }
  if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) {
label_0586e987:
    ThrowNullReferenceException();
  }
  a = (currentEvent->fields).Action;
  local_28.klass = (System_Enum_c *)TypeInfo_Replay_ReplayEventMapAction;
  local_28.monitor = (void *)0xffffffffffffffff;
  local_18 = 0;
  b = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (currentEvent->fields).Parameters;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_0586e987;
    System_Collections_Generic_List_object___get_Item
              ((System_Collections_Generic_List_object__o *)__this_00,0,
               (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  }
  return;
}


// Replay.ReplayWatcher$$HandleHumanEvent
// il2cpp: void Replay_ReplayWatcher__HandleHumanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x586e990

void Replay_ReplayWatcher__HandleHumanEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleTitanEvent
// il2cpp: void Replay_ReplayWatcher__HandleTitanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x586e9a0

void Replay_ReplayWatcher__HandleTitanEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleCameraEvent
// il2cpp: void Replay_ReplayWatcher__HandleCameraEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x586e9b0

void Replay_ReplayWatcher__HandleCameraEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleChatEvent
// il2cpp: void Replay_ReplayWatcher__HandleChatEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x586e9c0

void Replay_ReplayWatcher__HandleChatEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$.ctor
// il2cpp: void Replay_ReplayWatcher___ctor (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x586e9d0

void Replay_ReplayWatcher___ctor(Replay_ReplayWatcher_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


