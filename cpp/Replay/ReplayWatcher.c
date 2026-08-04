// Type: Replay.ReplayWatcher
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Replay/ReplayWatcher.cs
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayWatcher.cs
// --------------------------------

// Replay.ReplayWatcher$$LoadScript
// il2cpp: void Replay_ReplayWatcher__LoadScript (Replay_ReplayWatcher_o* __this, Replay_ReplayScript_o* script, const MethodInfo* method);
// 0x4204650

void Replay_ReplayWatcher__LoadScript
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScript_o *script,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_ReplayScriptEvent__o *pSVar3;
  Replay_ReplayScript_o *pRVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Replay_ReplayScriptEvent_o *pRVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint index;
  Replay_ReplayWatcher_o *pRVar10;
  undefined8 *unaff_R15;
  float fVar11;
  float fVar12;
  System_Enum_o SStack_48;
  undefined4 uStack_38;
  Replay_ReplayWatcher_o *pRStack_30;
  Replay_ReplayScript_o *pRStack_28;
  undefined8 *puStack_20;
  
  if (g_data_057ad8d4 == '\0') {
    puStack_20 = (undefined8 *)0x4204670;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_20 = (undefined8 *)0x420467c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ReplayScriptEvent_get_Item);
    g_data_057ad8d4 = '\x01';
    method = extraout_RDX;
  }
  pRVar10 = (Replay_ReplayWatcher_o *)&(__this->fields)._script;
  (__this->fields)._script = script;
  puStack_20 = (undefined8 *)0x4204693;
  pRVar7 = (Replay_ReplayScriptEvent_o *)script;
  il2cpp_runtime_helper_022b4080(pRVar10,script,method);
  (__this->fields)._currentEvent = 0;
  *(undefined1 *)&(__this->fields).Playing = 0;
  if ((script != (Replay_ReplayScript_o *)0x0) &&
     (pRVar10 = (Replay_ReplayWatcher_o *)(script->fields).Events, pRVar10 != (Replay_ReplayWatcher_o *)0x0))
  {
    unaff_R15 = &MethodInfo_ReplayScriptEvent_get_Item;
    pRVar7 = (Replay_ReplayScriptEvent_o *)0x0;
    puStack_20 = (undefined8 *)0x42046bd;
    pIVar6 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pRVar10,0,MethodInfo_ReplayScriptEvent_get_Item);
    if (pIVar6 != (Il2CppObject *)0x0) {
      (__this->fields).CurrentTime = *(float *)&pIVar6[1].klass;
      pRVar10 = (Replay_ReplayWatcher_o *)(script->fields).Events;
      if (pRVar10 != (Replay_ReplayWatcher_o *)0x0) {
        index = *(int *)&(pRVar10->fields).m_CancellationTokenSource - 1;
        pRVar7 = (Replay_ReplayScriptEvent_o *)(ulong)index;
        puStack_20 = (undefined8 *)0x42046df;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pRVar10,index,MethodInfo_ReplayScriptEvent_get_Item);
        if (pIVar6 != (Il2CppObject *)0x0) {
          (__this->fields).MaxTime = *(float *)&pIVar6[1].klass;
          pSVar3 = (script->fields).Events;
          pRVar10 = (Replay_ReplayWatcher_o *)0x0;
          if (pSVar3 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0) {
            puStack_20 = (undefined8 *)0x42046fd;
            pRVar7 = (Replay_ReplayScriptEvent_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_ReplayScriptEvent_get_Item);
            Replay_ReplayWatcher__HandleEvent(__this,pRVar7,method_00);
            return;
          }
        }
      }
    }
  }
  puStack_20 = (undefined8 *)0x420470f;
  il2cpp_runtime_helper_022b2c90();
  pRStack_30 = __this;
  pRStack_28 = script;
  puStack_20 = unaff_R15;
  if (g_data_057ad8d6 == '\0') {
    pRVar10 = (Replay_ReplayWatcher_o *)&TypeInfo_ReplayEventCategory;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8d6 = '\x01';
  }
  if (pRVar7 != (Replay_ReplayScriptEvent_o *)0x0) {
    pRVar10 = (Replay_ReplayWatcher_o *)(pRVar7->fields).Category;
    SStack_48.klass = TypeInfo_ReplayEventCategory;
    SStack_48.monitor = (void *)0xffffffffffffffff;
    uStack_38 = 0;
    pSVar8 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
    bVar5 = System_String__op_Equality((System_String_o *)pRVar10,pSVar8,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pSVar8 = (pRVar7->fields).Category;
      SStack_48.klass = TypeInfo_ReplayEventCategory;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      uStack_38 = 1;
      pSVar9 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      bVar5 = System_String__op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pSVar8 = (pRVar7->fields).Category;
        SStack_48.klass = TypeInfo_ReplayEventCategory;
        SStack_48.monitor = (void *)0xffffffffffffffff;
        uStack_38 = 2;
        pSVar9 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
        bVar5 = System_String__op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          pSVar8 = (pRVar7->fields).Category;
          SStack_48.klass = TypeInfo_ReplayEventCategory;
          SStack_48.monitor = (void *)0xffffffffffffffff;
          uStack_38 = 3;
          pSVar9 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
          bVar5 = System_String__op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            pSVar8 = (pRVar7->fields).Category;
            SStack_48.klass = TypeInfo_ReplayEventCategory;
            SStack_48.monitor = (void *)0xffffffffffffffff;
            uStack_38 = 4;
            pSVar9 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
            System_String__op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
          }
        }
      }
    }
    else {
      Replay_ReplayWatcher__HandleMapEvent(pRVar10,pRVar7,method_01);
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8d5 = '\x01';
  }
  if ((char)(pRVar10->fields).Playing != '\0') {
    fVar12 = (pRVar10->fields).CurrentTime;
    fVar11 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    (pRVar10->fields).CurrentTime = fVar11 * (pRVar10->fields).Speed + fVar12;
    pRVar4 = (pRVar10->fields)._script;
    while ((pRVar4 != (Replay_ReplayScript_o *)0x0 &&
           (pSVar3 = (pRVar4->fields).Events,
           pSVar3 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0))) {
      iVar2 = (pRVar10->fields)._currentEvent;
      if ((pSVar3->fields)._size + -1 <= iVar2) goto label_04204952;
      pRVar7 = (Replay_ReplayScriptEvent_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,iVar2 + 1,MethodInfo_ReplayScriptEvent_get_Item);
      if (pRVar7 == (Replay_ReplayScriptEvent_o *)0x0) break;
      fVar12 = (pRVar10->fields).CurrentTime;
      if (fVar12 < (pRVar7->fields).Time) goto label_04204957;
      piVar1 = &(pRVar10->fields)._currentEvent;
      *piVar1 = *piVar1 + 1;
      Replay_ReplayWatcher__HandleEvent(pRVar10,pRVar7,method_02);
      pRVar4 = (pRVar10->fields)._script;
    }
    il2cpp_runtime_helper_022b2c90();
label_04204952:
    fVar12 = (pRVar10->fields).CurrentTime;
label_04204957:
    fVar11 = (pRVar10->fields).MaxTime;
    if (fVar11 <= fVar12) {
      (pRVar10->fields).CurrentTime = fVar11;
      *(undefined1 *)&(pRVar10->fields).Playing = 0;
    }
  }
  return;
}


// Replay.ReplayWatcher$$FixedUpdate
// il2cpp: void Replay_ReplayWatcher__FixedUpdate (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x4204890

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
  
  if (g_data_057ad8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8d5 = '\x01';
  }
  if ((char)(__this->fields).Playing != '\0') {
    fVar5 = (__this->fields).CurrentTime;
    fVar4 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    (__this->fields).CurrentTime = fVar4 * (__this->fields).Speed + fVar5;
    pRVar3 = (__this->fields)._script;
    while ((pRVar3 != (Replay_ReplayScript_o *)0x0 &&
           (__this_00 = (pRVar3->fields).Events,
           __this_00 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0))) {
      iVar2 = (__this->fields)._currentEvent;
      if ((__this_00->fields)._size + -1 <= iVar2) goto label_04204952;
      currentEvent = (Replay_ReplayScriptEvent_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,iVar2 + 1,MethodInfo_ReplayScriptEvent_get_Item)
      ;
      if (currentEvent == (Replay_ReplayScriptEvent_o *)0x0) break;
      fVar5 = (__this->fields).CurrentTime;
      if (fVar5 < (currentEvent->fields).Time) goto label_04204957;
      piVar1 = &(__this->fields)._currentEvent;
      *piVar1 = *piVar1 + 1;
      Replay_ReplayWatcher__HandleEvent(__this,currentEvent,method_00);
      pRVar3 = (__this->fields)._script;
    }
    il2cpp_runtime_helper_022b2c90();
label_04204952:
    fVar5 = (__this->fields).CurrentTime;
label_04204957:
    fVar4 = (__this->fields).MaxTime;
    if (fVar4 <= fVar5) {
      (__this->fields).CurrentTime = fVar4;
      *(undefined1 *)&(__this->fields).Playing = 0;
    }
  }
  return;
}


// Replay.ReplayWatcher$$HandleEvent
// il2cpp: void Replay_ReplayWatcher__HandleEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x4204710

void Replay_ReplayWatcher__HandleEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Replay_ReplayScript_o *pRVar3;
  System_Collections_Generic_List_ReplayScriptEvent__o *__this_00;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Replay_ReplayScriptEvent_o *currentEvent_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Replay_ReplayWatcher_o *__this_01;
  float fVar7;
  float fVar8;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (g_data_057ad8d6 == '\0') {
    __this = (Replay_ReplayWatcher_o *)&TypeInfo_ReplayEventCategory;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8d6 = '\x01';
  }
  if (currentEvent != (Replay_ReplayScriptEvent_o *)0x0) {
    __this_01 = (Replay_ReplayWatcher_o *)(currentEvent->fields).Category;
    local_30.klass = TypeInfo_ReplayEventCategory;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = 0;
    pSVar5 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality((System_String_o *)__this_01,pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar5 = (currentEvent->fields).Category;
      local_30.klass = TypeInfo_ReplayEventCategory;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = 1;
      pSVar6 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      bVar4 = System_String__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pSVar5 = (currentEvent->fields).Category;
        local_30.klass = TypeInfo_ReplayEventCategory;
        local_30.monitor = (void *)0xffffffffffffffff;
        local_20 = 2;
        pSVar6 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
        bVar4 = System_String__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pSVar5 = (currentEvent->fields).Category;
          local_30.klass = TypeInfo_ReplayEventCategory;
          local_30.monitor = (void *)0xffffffffffffffff;
          local_20 = 3;
          pSVar6 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
          bVar4 = System_String__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            pSVar5 = (currentEvent->fields).Category;
            local_30.klass = TypeInfo_ReplayEventCategory;
            local_30.monitor = (void *)0xffffffffffffffff;
            local_20 = 4;
            pSVar6 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
            System_String__op_Equality(pSVar5,pSVar6,(MethodInfo *)0x0);
          }
        }
      }
    }
    else {
      Replay_ReplayWatcher__HandleMapEvent(__this_01,currentEvent,method_00);
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8d5 = '\x01';
  }
  if ((char)(__this->fields).Playing != '\0') {
    fVar8 = (__this->fields).CurrentTime;
    fVar7 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    (__this->fields).CurrentTime = fVar7 * (__this->fields).Speed + fVar8;
    pRVar3 = (__this->fields)._script;
    while ((pRVar3 != (Replay_ReplayScript_o *)0x0 &&
           (__this_00 = (pRVar3->fields).Events,
           __this_00 != (System_Collections_Generic_List_ReplayScriptEvent__o *)0x0))) {
      iVar2 = (__this->fields)._currentEvent;
      if ((__this_00->fields)._size + -1 <= iVar2) goto label_04204952;
      currentEvent_00 =
           (Replay_ReplayScriptEvent_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,iVar2 + 1,MethodInfo_ReplayScriptEvent_get_Item);
      if (currentEvent_00 == (Replay_ReplayScriptEvent_o *)0x0) break;
      fVar8 = (__this->fields).CurrentTime;
      if (fVar8 < (currentEvent_00->fields).Time) goto label_04204957;
      piVar1 = &(__this->fields)._currentEvent;
      *piVar1 = *piVar1 + 1;
      Replay_ReplayWatcher__HandleEvent(__this,currentEvent_00,method_01);
      pRVar3 = (__this->fields)._script;
    }
    il2cpp_runtime_helper_022b2c90();
label_04204952:
    fVar8 = (__this->fields).CurrentTime;
label_04204957:
    fVar7 = (__this->fields).MaxTime;
    if (fVar7 <= fVar8) {
      (__this->fields).CurrentTime = fVar7;
      *(undefined1 *)&(__this->fields).Playing = 0;
    }
  }
  return;
}


// Replay.ReplayWatcher$$HandleMapEvent
// il2cpp: void Replay_ReplayWatcher__HandleMapEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x4204980

void Replay_ReplayWatcher__HandleMapEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  System_String_o *a;
  System_Collections_Generic_List_string__o *__this_00;
  bool_conflict bVar1;
  System_String_o *b;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (g_data_057ad8d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ReplayEventMapAction);
    g_data_057ad8d7 = '\x01';
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
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_04204a17;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_String_get_Item);
    }
    return;
  }
label_04204a17:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Replay.ReplayWatcher$$HandleHumanEvent
// il2cpp: void Replay_ReplayWatcher__HandleHumanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x4204a20

void Replay_ReplayWatcher__HandleHumanEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleTitanEvent
// il2cpp: void Replay_ReplayWatcher__HandleTitanEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x4204a30

void Replay_ReplayWatcher__HandleTitanEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleCameraEvent
// il2cpp: void Replay_ReplayWatcher__HandleCameraEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x4204a40

void Replay_ReplayWatcher__HandleCameraEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$HandleChatEvent
// il2cpp: void Replay_ReplayWatcher__HandleChatEvent (Replay_ReplayWatcher_o* __this, Replay_ReplayScriptEvent_o* currentEvent, const MethodInfo* method);
// 0x4204a50

void Replay_ReplayWatcher__HandleChatEvent
               (Replay_ReplayWatcher_o *__this,Replay_ReplayScriptEvent_o *currentEvent,MethodInfo *method)

{
  return;
}


// Replay.ReplayWatcher$$.ctor
// il2cpp: void Replay_ReplayWatcher___ctor (Replay_ReplayWatcher_o* __this, const MethodInfo* method);
// 0x4204a60

void Replay_ReplayWatcher___ctor(Replay_ReplayWatcher_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


