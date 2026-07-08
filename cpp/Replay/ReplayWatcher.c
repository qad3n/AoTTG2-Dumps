// Type: Replay.ReplayWatcher
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Replay/ReplayWatcher.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Replay/ReplayWatcher.cs  [CHANGED since prior version]
// --------------------------------

// Replay.ReplayWatcher$$LoadScript
// il2cpp: void Replay_ReplayWatcher__LoadScript (Replay_ReplayWatcher_o* __this, Replay_ReplayScript_o* script, const MethodInfo* method);
// 0x3f15560

void Replay_ReplayWatcher__LoadScript
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScript_o *script,MethodInfo *method)

{
  System_Collections_Generic_List_ReplayScriptEvent__o *pSVar1;
  Il2CppObject *pIVar2;
  Replay_ReplayScriptEvent_o *currentEvent;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05703cb3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_ReplayScriptEvent_get_Item);
    DAT_05703cb3 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._script = script;
  il2cpp_runtime_glue(&(__this->fields)._script,script,method);
  (__this->fields)._currentEvent = 0;
  *(undefined1 *)&(__this->fields).Playing = 0;
  if ((script != (Replay_ReplayScript_o *)0x0) &&
     (pSVar1 = (script->fields).Events,
     pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0)) {
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_ReplayScriptEvent_get_Item);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (__this->fields).CurrentTime = *(float *)&pIVar2[1].klass;
      pSVar1 = (script->fields).Events;
      if (pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,
                            (pSVar1->fields)._size + -1,MethodInfo_ReplayScriptEvent_get_Item);
        if (pIVar2 != (Il2CppObject *)0x0) {
          (__this->fields).MaxTime = *(float *)&pIVar2[1].klass;
          pSVar1 = (script->fields).Events;
          if (pSVar1 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
            currentEvent = (Replay_ReplayScriptEvent_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar1,0,
                                      MethodInfo_ReplayScriptEvent_get_Item);
            Replay_ReplayWatcher__HandleEvent(__this,currentEvent,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Replay.ReplayWatcher$$FixedUpdate
// il2cpp: void Replay_ReplayWatcher__FixedUpdate (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x3f157a0

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
  
  if (DAT_05703cb4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata();
    DAT_05703cb4 = '\x01';
  }
  if ((char)(__this->fields).Playing == '\0') {
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
LAB_03f15867:
      fVar4 = (__this->fields).MaxTime;
      if (fVar5 < fVar4) {
        return;
      }
      (__this->fields).CurrentTime = fVar4;
      *(undefined1 *)&(__this->fields).Playing = 0;
      return;
    }
    currentEvent = (Replay_ReplayScriptEvent_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,iVar2 + 1,
                              MethodInfo_ReplayScriptEvent_get_Item);
    if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) break;
    fVar5 = (__this->fields).CurrentTime;
    if (fVar5 < (currentEvent->fields).Time) goto LAB_03f15867;
    piVar1 = &(__this->fields)._currentEvent;
    *piVar1 = *piVar1 + 1;
    Replay_ReplayWatcher__HandleEvent(__this,currentEvent,method_00);
    pRVar3 = (__this->fields)._script;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Replay.ReplayWatcher$$HandleEvent
// il2cpp: void Replay_ReplayWatcher__HandleEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x3f15620

void Replay_ReplayWatcher__HandleEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  Replay_ReplayWatcher_o *__this_00;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (DAT_05703cb5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ReplayEventCategory);
    DAT_05703cb5 = '\x01';
  }
  if (currentEvent != (Replay_ReplayScriptEvent_o *)0x0) {
    __this_00 = (Replay_ReplayWatcher_o *)(currentEvent->fields).Category;
    local_30.klass = TypeInfo_ReplayEventCategory;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 0;
    pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality((System_String_o *)__this_00,pSVar2,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (currentEvent->fields).Category;
      local_30.klass = TypeInfo_ReplayEventCategory;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = 1;
      pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (currentEvent->fields).Category;
        local_30.klass = TypeInfo_ReplayEventCategory;
        local_30.monitor = (void *)0xffffffffffffffff;
        local_20 = 2;
        pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pSVar2 = (currentEvent->fields).Category;
          local_30.klass = TypeInfo_ReplayEventCategory;
          local_30.monitor = (void *)0xffffffffffffffff;
          local_20 = 3;
          pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            pSVar2 = (currentEvent->fields).Category;
            local_30.klass = TypeInfo_ReplayEventCategory;
            local_30.monitor = (void *)0xffffffffffffffff;
            local_20 = 4;
            pSVar3 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
            System_String__op_Equality(pSVar2,pSVar3,(MethodInfo *)0x0);
          }
        }
      }
    }
    else {
      Replay_ReplayWatcher__HandleMapEvent(__this_00,currentEvent,method_00);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Replay.ReplayWatcher$$HandleMapEvent
// il2cpp: void Replay_ReplayWatcher__HandleMapEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x3f15890

void Replay_ReplayWatcher__HandleMapEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,
               MethodInfo *method)

{
  System_String_o *a;
  System_Collections_Generic_List_string__o *__this_00;
  bool_conflict bVar1;
  System_String_o *b;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (DAT_05703cb6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ReplayEventMapAction);
    DAT_05703cb6 = '\x01';
  }
  if (currentEvent != (Replay_ReplayScriptEvent_o *)0x0) {
    a = (currentEvent->fields).Action;
    local_28.klass = TypeInfo_ReplayEventMapAction;
    local_28.monitor = (void *)0xffffffffffffffff;
    local_18 = 0;
    b = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = (currentEvent->fields).Parameters;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03f15927;
      System_Collections_Generic_List<object>__get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
    }
    return;
  }
LAB_03f15927:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Replay.ReplayWatcher$$HandleHumanEvent
// il2cpp: void Replay_ReplayWatcher__HandleHumanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x3f15930

void Replay_ReplayWatcher__HandleHumanEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,
               MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleTitanEvent
// il2cpp: void Replay_ReplayWatcher__HandleTitanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x3f15940

void Replay_ReplayWatcher__HandleTitanEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,
               MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleCameraEvent
// il2cpp: void Replay_ReplayWatcher__HandleCameraEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x3f15950

void Replay_ReplayWatcher__HandleCameraEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,
               MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleChatEvent
// il2cpp: void Replay_ReplayWatcher__HandleChatEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x3f15960

void Replay_ReplayWatcher__HandleChatEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,
               MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$.ctor
// il2cpp: void Replay_ReplayWatcher___ctor (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x3f15970

void Replay_ReplayWatcher___ctor(Replay_ReplayWatcher_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


