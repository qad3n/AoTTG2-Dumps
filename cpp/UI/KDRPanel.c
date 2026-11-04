// Type: UI.KDRPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KDRPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KDRPanel.cs
// --------------------------------

// UI.KDRPanel.<>c$$.cctor
// il2cpp: void UI_KDRPanel___c___cctor (const MethodInfo* method);
// 0x18226de90

void UI_KDRPanel___c___cctor(MethodInfo *method)

{
  UI_KDRPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_1843472bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KDRPanel_c);
    Il2CppMethodInitialized_1843472bd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_KDRPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_KDRPanel_c->static_fields->__9,__this);
  return;
}


// UI.KDRPanel.<>c$$.ctor
// il2cpp: void UI_KDRPanel___c___ctor (UI_KDRPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_KDRPanel___c___ctor(UI_KDRPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_0
// il2cpp: System_String_o* UI_KDRPanel___c___ReorganizeLayout_b__14_0 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x, const MethodInfo* method);
// 0x18226cc00

System_String_o *
UI_KDRPanel___c___ReorganizeLayout_b__14_0
          (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o *x,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_TeamKDRRow_get_Key);
    Il2CppMethodInitialized_1843472be = 1;
    return (x->fields).key;
  }
  return (x->fields).key;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_2
// il2cpp: int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x18226cc40

int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2
                  (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o *x,
                  MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerKDRRow_get_Key);
    Il2CppMethodInitialized_1843472bf = 1;
    return (x->fields).key;
  }
  return (x->fields).key;
}


// UI.KDRPanel$$Setup
// il2cpp: void UI_KDRPanel__Setup (UI_KDRPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x182257210

void UI_KDRPanel__Setup(UI_KDRPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,style);
  UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)0x0);
  UI_KDRPanel__Sync(__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$Update
// il2cpp: void UI_KDRPanel__Update (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182257410

void UI_KDRPanel__Update(UI_KDRPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (fVar2 <= 0.0) {
    UI_KDRPanel__Sync(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.KDRPanel$$Sync
// il2cpp: void UI_KDRPanel__Sync (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182257240

void UI_KDRPanel__Sync(UI_KDRPanel_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  
  if (Il2CppMethodInitialized_1843472b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).KDR, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != (__this->fields)._kdrMode) {
      (__this->fields)._kdrMode =
           (((TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).KDR)->fields)._value;
      UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)0x0);
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar2 = (pSVar4->fields).PVP, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar2->fields)._value != (__this->fields)._pvpMode) {
        (__this->fields)._pvpMode =
             (((((TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent->fields).Misc)->fields).PVP)
             ->fields)._value;
        UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)0x0);
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
         (((__this->fields)._showScoreboardStatus != (pCVar5->fields).ShowScoreboardStatus ||
          ((__this->fields)._showScoreboardLoadout != (pCVar5->fields).ShowScoreboardLoadout)))) {
        (__this->fields)._showScoreboardLoadout = (pCVar5->fields).ShowScoreboardLoadout;
        (__this->fields)._showScoreboardStatus = (pCVar5->fields).ShowScoreboardStatus;
        UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)0x0);
      }
      (__this->fields)._currentSyncDelay = 0.2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.KDRPanel$$GetPlayerTeam
// il2cpp: System_String_o* UI_KDRPanel__GetPlayerTeam (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x182256380

System_String_o *
UI_KDRPanel__GetPlayerTeam(UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843472b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b1 = '\x01';
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).PVP, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value == 2) {
        if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
        }
        pSVar4 = PhotonExtensions__GetStringProperty
                           (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                            (__this->fields)._defaultTeam,(MethodInfo *)0x0);
        return pSVar4;
      }
      return (__this->fields)._defaultTeam;
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.KDRPanel$$ReorganizeLayout
// il2cpp: void UI_KDRPanel__ReorganizeLayout (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182256cd0
// eh: try 0x182257040..0x182257202 -> pad 0x1833245a0 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822570de: nop 
// asm:   0x182257166: mov rdx, qword ptr [rip + 0x1e17aab]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_Dispose
// asm:   0x18225716d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182257172: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182257177: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18225717c: test rcx, rcx
// asm:   0x18225717f: jne 0x1822571ed
// asm:   0x182257181: xor r13d, r13d
// asm:   0x182257184: mov r14, qword ptr [rsp + 0x100]
// asm:   0x18225718c: mov r12, qword ptr [rsp + 0x118]
// asm:   0x182257194: mov edi, dword ptr [rsp + 0x110]
// asm:   0x18225719b: jmp 0x182257040
// asm:   0x1822571b3: mov rdx, qword ptr [rip + 0x1e1877e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_Dispose
// asm:   0x1822571ba: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822571bf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822571c4: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822571c9: test rcx, rcx
// asm:   0x1822571cc: jne 0x182257202
// asm:   0x1822571ed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182257202: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
// asm:   0x18333c7d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c7d5: push rbp
// asm:   0x18333c7d6: sub rsp, 0x20
// asm:   0x18333c7da: mov rbp, rdx
// asm:   0x18333c7dd: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333c7e4: mov rcx, qword ptr [rax]
// asm:   0x18333c7e7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333c7eb: movabs rax, 0
// asm:   0x18333c7f5: add rsp, 0x20
// asm:   0x18333c7f9: pop rbp
// asm:   0x18333c7fa: ret 

void UI_KDRPanel__ReorganizeLayout(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *source;
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *source_00;
  System_String_o *b;
  UnityEngine_Component_o *__this_00;
  bool bVar2;
  System_Func_KeyValuePair_string__TeamKDRRow___string__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar3;
  System_Collections_Generic_List_TSource__o *__this_02;
  System_Func_KeyValuePair_int__PlayerKDRRow___string__o *__this_03;
  System_Func_KeyValuePair_int__PlayerKDRRow___int__o *__this_04;
  System_Collections_Generic_List_TSource__o *__this_05;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *a;
  int index;
  undefined1 local_c8 [16];
  System_String_o *local_b8;
  UnityEngine_Component_o *pUStack_b0;
  undefined1 local_a8 [8];
  uint64_t uStack_a0;
  System_String_o *local_98;
  UnityEngine_Component_o *pUStack_90;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  UnityEngine_Component_o *pUStack_70;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  UnityEngine_Component_o *pUStack_40;
  
  if (Il2CppMethodInitialized_1843472b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_int_PlayerKDRRow_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_TeamKDRRow_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ThenBy_KeyValuePair_int_PlayerKDRRow_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_int_PlayerKDRRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_TeamKDRRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_int_PlayerKDRRow_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_int_PlayerKDRRow_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_TeamKDRRow_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_KDRPanel_ReorganizeLayout_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_TeamKDRRow_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_TeamKDRRow_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerKDRRow_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_string_TeamKDRRow_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_int_PlayerKDRRow_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KDRPanel_c);
    Il2CppMethodInitialized_1843472b2 = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  uStack_a0 = 0;
  local_98 = (System_String_o *)0x0;
  pUStack_90 = (UnityEngine_Component_o *)0x0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pUStack_70 = (UnityEngine_Component_o *)0x0;
  source = (__this->fields)._teamHeaders;
  if ((TypeInfo_UI_KDRPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
  }
  __this_01 = TypeInfo_UI_KDRPanel_c->static_fields->__9__14_0;
  if (__this_01 == (System_Func_KeyValuePair_string__TeamKDRRow___string__o *)0x0) {
    if ((TypeInfo_UI_KDRPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_UI_KDRPanel_c->static_fields->__9;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_TeamKDRRow_string);
    System_Func_KeyValuePair_object__object___object____ctor
              ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_01,pIVar1,
               (intptr_t)MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_0,(MethodInfo_13859D0 *)0x0);
    TypeInfo_UI_KDRPanel_c->static_fields->__9__14_0 = __this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_KDRPanel_c->static_fields->__9__14_0,__this_01);
  }
  pSVar3 = System_Linq_Enumerable__OrderBy_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__TKey__o *)__this_01,
                      (MethodInfo_6C1360 *)
                      MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_TeamKDRRow_string);
  __this_02 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                         (MethodInfo_6C9850 *)
                         MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_TeamKDRRow);
  source_00 = (__this->fields)._players;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_PlayerKDRRow_string);
  System_Func_KeyValuePair_int__object___object____ctor
            ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_03,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_KDRPanel_ReorganizeLayout_b__14_1,(MethodInfo_13859D0 *)0x0);
  pSVar3 = System_Linq_Enumerable__OrderBy_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TKey__o *)__this_03,
                      (MethodInfo_6C1360 *)
                      MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_int_PlayerKDRRow_string);
  if ((TypeInfo_UI_KDRPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
  }
  __this_04 = TypeInfo_UI_KDRPanel_c->static_fields->__9__14_2;
  if (__this_04 == (System_Func_KeyValuePair_int__PlayerKDRRow___int__o *)0x0) {
    if ((TypeInfo_UI_KDRPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_UI_KDRPanel_c->static_fields->__9;
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_PlayerKDRRow_int);
    System_Func_KeyValuePair_int__object___int____ctor
              ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_04,pIVar1,
               (intptr_t)MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_2,(MethodInfo_13859D0 *)0x0);
    TypeInfo_UI_KDRPanel_c->static_fields->__9__14_2 = __this_04;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_KDRPanel_c->static_fields->__9__14_2,__this_04);
  }
  pSVar3 = System_Linq_Enumerable__ThenBy___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                     (pSVar3,(System_Func_TSource__TKey__o *)__this_04,
                      (MethodInfo_6C7A40 *)
                      MethodInfo_System_Linq_Enumerable_ThenBy_KeyValuePair_int_PlayerKDRRow_int);
  __this_05 = System_Linq_Enumerable__ToList_KeyValuePair_int__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                         (MethodInfo_6C97B0 *)
                         MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_int_PlayerKDRRow);
  if (__this_02 == (System_Collections_Generic_List_TSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = 0;
  System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
             (System_Collections_Generic_List_T__o *)__this_02,
             (MethodInfo_91F200 *)
             MethodInfo_System_Collections_Generic_List_KeyValuePair_string_TeamKDRRow_GetEnumerator);
  local_a8 = (undefined1  [8])local_c8._0_8_;
  uStack_a0 = local_c8._8_8_;
  local_98 = local_b8;
  pUStack_90 = pUStack_b0;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                       (MethodInfo_15292D0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_MoveNext
                      );
    b = local_98;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_Dispose)
      ;
      return;
    }
    if (pUStack_90 == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = UnityEngine_Component__get_transform(pUStack_90,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetSiblingIndex(pUVar4,index,(MethodInfo *)0x0);
    if (__this_05 == (System_Collections_Generic_List_TSource__o *)0x0) break;
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
              (&local_58,(System_Collections_Generic_List_T__o *)__this_05,
               (MethodInfo_91F200 *)
               MethodInfo_System_Collections_Generic_List_KeyValuePair_int_PlayerKDRRow_GetEnumerator);
    local_88.fields._list = local_58.fields._list;
    local_88.fields._index = local_58.fields._index;
    local_88.fields._version = local_58.fields._version;
    local_88.fields._current = local_58.fields._current;
    pUStack_70 = pUStack_40;
    local_c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    index = index + 1;
    local_c8._8_8_ = &local_88;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_StyleSelectorHelper_SelectorWorkItem___MoveNext
                        (&local_88,
                         (MethodInfo_1529A80 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_MoveNext
                        );
      __this_00 = pUStack_70;
      if (!bVar2) break;
      if (pUStack_70 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      a = UI_KDRPanel__GetPlayerTeam(__this,(*(uint64_t *)((char *)pUStack_70 + 0x20)),(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar4 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__SetSiblingIndex(pUVar4,index,(MethodInfo *)0x0);
        index = index + 1;
      }
    }
    System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_Dispose);
  }
  ThrowNullReferenceException();
}


// UI.KDRPanel$$AddPlayer
// il2cpp: void UI_KDRPanel__AddPlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, bool isVisible, const MethodInfo* method);
// 0x182255c80

void UI_KDRPanel__AddPlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool redoLayout,bool isVisible,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *__this_02;
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_PlayerKDRRow_o *player_00;
  System_String_o *team;
  UI_TeamKDRRow_o *pUVar7;
  
  if (Il2CppMethodInitialized_1843472b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_PlayerKDRRow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TeamKDRRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b3 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
    if (bVar4) {
      return;
    }
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreatePlayerKDRRow(pUVar5,(__this->fields)._style,player,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      player_00 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar6,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_PlayerKDRRow);
      if (!isVisible) {
        if ((player_00 == (UI_PlayerKDRRow_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)player_00,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto label_182255f02;
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      }
      __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Add
                  (__this_01,(player->fields).actorNumber,(Il2CppObject *)player_00,
                   (MethodInfo_1415BA0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Add
                  );
        if ((__this->fields)._pvpMode != 2) {
          return;
        }
        team = UI_KDRPanel__GetPlayerTeam(__this,player,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._teamHeaders;
        if (__this_02 != (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)0x0) {
          bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                             (Il2CppObject *)team,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
          if (!bVar4) {
            pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar6 = UI_ElementFactory__CreateTeamKDRRow
                               (pUVar5,(__this->fields)._style,team,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_182255f02;
            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar6,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_TeamKDRRow);
            pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
               (pSVar2 = (pSVar1->fields).KDR, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_182255f02;
            UnityEngine_GameObject__SetActive(pUVar6,(pSVar2->fields)._value != 0,(MethodInfo *)0x0);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182255f02;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar3,(Il2CppObject *)team,(Il2CppObject *)pUVar7,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Add);
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
          if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pUVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar3,(Il2CppObject *)team,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item)
             , pUVar7 != (UI_TeamKDRRow_o *)0x0)) {
            UI_TeamKDRRow__AddPlayerStats(pUVar7,player_00,(MethodInfo *)0x0);
            UI_TeamKDRRow__UpdateRow(pUVar7,(MethodInfo *)0x0);
            if (!redoLayout) {
              return;
            }
            UI_KDRPanel__ReorganizeLayout(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_182255f02:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$RemovePlayer
// il2cpp: void UI_KDRPanel__RemovePlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, const MethodInfo* method);
// 0x182256a00

void UI_KDRPanel__RemovePlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool redoLayout,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar4;
  uint64_t uVar5;
  UI_TeamKDRRow_o *pUVar6;
  UI_PlayerKDRRow_o *player_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Object_o *pUVar7;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_1843472b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843472b4 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
  if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_182256cbf;
  bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar1,(player->fields).actorNumber,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
  if (!bVar4) {
    return;
  }
  if ((__this->fields)._pvpMode == 2) {
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
        (uVar5 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar1,(player->fields).actorNumber,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item),
        uVar5 == 0)) ||
       (pSVar2 = (__this->fields)._teamHeaders,
       pSVar2 == (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)0x0)) goto label_182256cbf;
    key = *(System_String_o **)(uVar5 + 0x68);
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    if (!bVar4) {
      key = (__this->fields)._defaultTeam;
    }
    pSVar2 = (__this->fields)._teamHeaders;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)0x0) goto label_182256cbf;
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    if (bVar4) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182256cbf;
      pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)key,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
         (player_00 = (UI_PlayerKDRRow_o *)
                      System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar1,(player->fields).actorNumber,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item),
         pUVar6 == (UI_TeamKDRRow_o *)0x0)) goto label_182256cbf;
      UI_TeamKDRRow__RemovePlayerStats(pUVar6,player_00,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         ((pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)key,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item),
          pUVar6 == (UI_TeamKDRRow_o *)0x0 ||
          (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders,
          pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)))) goto label_182256cbf;
      if ((pUVar6->fields).playerCount < 1) {
        pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)key,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
        if (pUVar6 == (UI_TeamKDRRow_o *)0x0) goto label_182256cbf;
        pUVar7 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar7,(MethodInfo *)0x0);
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182256cbf;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar3,(Il2CppObject *)key,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Remove);
      }
      else {
        pUVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)key,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
        if (pUVar6 == (UI_TeamKDRRow_o *)0x0) goto label_182256cbf;
        UI_TeamKDRRow__UpdateRow(pUVar6,(MethodInfo *)0x0);
      }
    }
    if (redoLayout) {
      UI_KDRPanel__ReorganizeLayout(__this,(MethodInfo *)0x0);
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
     (__this_01 = (UnityEngine_Component_o *)
                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar1,(player->fields).actorNumber,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item),
     __this_01 != (UnityEngine_Component_o *)0x0)) {
    pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar7,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Remove
                (__this_00,(player->fields).actorNumber,
                 (MethodInfo_1419B90 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Remove);
      return;
    }
  }
label_182256cbf:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$DestroyAndRecreate
// il2cpp: void UI_KDRPanel__DestroyAndRecreate (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182255f10
// eh: try 0x182256090..0x182256369 -> pad 0x183331de0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822560ef: mov rdx, qword ptr [rip + 0x1e5a6f2]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_Dispose
// asm:   0x1822560f6: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822560fb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182256100: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182256105: test rcx, rcx
// asm:   0x182256108: jne 0x18225635d
// asm:   0x18225610e: xor r14d, r14d
// asm:   0x182256111: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x18225618e: nop 
// asm:   0x1822561f2: mov rdx, qword ptr [rip + 0x1e68887]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_Dispose
// asm:   0x1822561f9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822561fe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182256203: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182256208: test rcx, rcx
// asm:   0x18225620b: jne 0x182256369
// asm:   0x182256211: xor r14d, r14d
// asm:   0x182256214: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x1822562fc: mov ebx, r14d
// asm:   0x1822562ff: mov eax, r14d
// asm:   0x18225635d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182256369: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a3f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a3f5: push rbp
// asm:   0x18332a3f6: sub rsp, 0x30
// asm:   0x18332a3fa: mov rbp, rdx
// asm:   0x18332a3fd: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18332a404: mov rcx, qword ptr [rax]
// asm:   0x18332a407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a40b: movabs rax, 0
// asm:   0x18332a415: add rsp, 0x30
// asm:   0x18332a419: pop rbp
// asm:   0x18332a41a: ret 
// asm:   0x183331de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331de5: push rbp
// asm:   0x183331de6: sub rsp, 0x30
// asm:   0x183331dea: mov rbp, rdx
// asm:   0x183331ded: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x183331df4: mov rcx, qword ptr [rax]
// asm:   0x183331df7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331dfb: movabs rax, 0
// asm:   0x183331e05: add rsp, 0x30
// asm:   0x183331e09: pop rbp
// asm:   0x183331e0a: ret 

void UI_KDRPanel__DestroyAndRecreate(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *pSVar2;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *pSVar3;
  Settings_UISettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  UnityEngine_Object_o *pUVar7;
  Photon_Realtime_Player_o *player;
  Photon_Realtime_Player_array *pPVar8;
  uint uVar9;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_1843472b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_TeamKDRRow_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerKDRRow_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b5 = '\x01';
  }
  local_a8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.fields._version = 0;
  local_a8.fields._index = 0;
  local_a8.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a8.fields._getEnumeratorRetType = 0;
  local_a8.fields._36_4_ = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  pSVar2 = (__this->fields)._players;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_GetEnumerator);
    local_a8.fields._dictionary = local_58.fields._dictionary;
    local_a8.fields._version = local_58.fields._version;
    local_a8.fields._index = local_58.fields._index;
    local_a8.fields._current.fields.key = local_58.fields._current.fields.key;
    local_a8.fields._current.fields.value = local_58.fields._current.fields.value;
    local_a8.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
    local_a8.fields._36_4_ = local_58.fields._36_4_;
    uVar9 = 0;
    while (bVar6 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                             (&local_a8,
                              (MethodInfo_15642D0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_MoveNext
                             ), bVar6) {
      if ((UnityEngine_Component_o *)local_a8.fields._current.fields.value == (UnityEngine_Component_o *)0x0)
      {
        ThrowNullReferenceException();
      }
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_a8.fields._current.fields.value,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar7,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_a8,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_Dispose);
    pSVar2 = (__this->fields)._players;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Clear
                );
      pSVar3 = (__this->fields)._teamHeaders;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)0x0) {
        System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                  (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                   (MethodInfo_13C1150 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_GetEnumerator);
        local_80.fields._dictionary = local_58.fields._dictionary;
        local_80.fields._version = local_58.fields._version;
        local_80.fields._index = local_58.fields._index;
        local_80.fields._current.fields.key = local_58.fields._current.fields.key;
        local_80.fields._current.fields.value = local_58.fields._current.fields.value;
        local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
        local_80.fields._36_4_ = local_58.fields._36_4_;
        while (bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                 (&local_80,
                                  (MethodInfo_1585360 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_MoveNext
                                 ), bVar6) {
          if ((UnityEngine_Component_o *)local_80.fields._current.fields.value ==
              (UnityEngine_Component_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)local_80.fields._current.fields.value,
                              (MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar7,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_Dispose);
        pSVar3 = (__this->fields)._teamHeaders;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Clear);
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
          if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
             (pSVar5 = (pSVar4->fields).KDR, pSVar5 != (Settings_IntSetting_o *)0x0)) {
            iVar1 = (pSVar5->fields)._value;
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            UI_KDRPanel__AddPlayer(__this,player,false,iVar1 != 0,(MethodInfo *)0x0);
            if (iVar1 == 0) {
              bVar6 = false;
            }
            else {
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if ((pSVar4 == (Settings_UISettings_o *)0x0) ||
                 (pSVar5 = (pSVar4->fields).KDR, pSVar5 == (Settings_IntSetting_o *)0x0)) goto label_182256351;
              bVar6 = (pSVar5->fields)._value != 1;
            }
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar8 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
            if (pPVar8 != (Photon_Realtime_Player_array *)0x0) {
              while( true ) {
                if ((int)pPVar8->max_length <= (int)uVar9) {
                  UI_KDRPanel__ReorganizeLayout(__this,(MethodInfo *)0x0);
                  return;
                }
                if ((uint)pPVar8->max_length <= uVar9) break;
                UI_KDRPanel__AddPlayer(__this,pPVar8->m_Items[(int)uVar9],false,bVar6,(MethodInfo *)0x0);
                uVar9 = uVar9 + 1;
              }
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_182256351:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$OnPlayerEnteredRoom
// il2cpp: void UI_KDRPanel__OnPlayerEnteredRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x182256530

void UI_KDRPanel__OnPlayerEnteredRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newPlayer,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843472b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b6 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).KDR, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    UI_KDRPanel__AddPlayer
              (__this,newPlayer,true,
               (pSVar2->fields)._value == 2 && newPlayer != (Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// UI.KDRPanel$$OnPlayerLeftRoom
// il2cpp: void UI_KDRPanel__OnPlayerLeftRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x1822565d0

void UI_KDRPanel__OnPlayerLeftRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *otherPlayer,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843472b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b7 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).KDR, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if (((pSVar2->fields)._value == 2) && (otherPlayer != (Photon_Realtime_Player_o *)0x0)) {
      UI_KDRPanel__RemovePlayer(__this,otherPlayer,true,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.KDRPanel$$OnPlayerPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnPlayerPropertiesUpdate (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x182256660
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822569b5: xor edx, edx
// asm:   0x1822569b7: mov rcx, rax
// asm:   0x1822569ba: call 0x182281790  ; UI_TeamKDRRow__UpdateRow()
// asm:   0x1822569bf: jmp 0x182256874
// asm:   0x1822569c4: xor r9d, r9d
// asm:   0x1822569c7: xor r8d, r8d
// asm:   0x1822569ca: mov rdx, rbx
// asm:   0x1822569cd: mov rcx, rdi
// asm:   0x1822569d0: call 0x182256a00  ; UI_KDRPanel__RemovePlayer()
// asm:   0x1822569d5: movzx r9d, sil
// asm:   0x1822569d9: mov qword ptr [rsp + 0x20], 0
// asm:   0x1822569e2: mov r8b, 1
// asm:   0x1822569e5: mov rdx, rbx
// asm:   0x1822569e8: mov rcx, rdi
// asm:   0x1822569eb: call 0x182255c80  ; UI_KDRPanel__AddPlayer()
// asm:   0x1822569f0: jmp 0x182256874

void UI_KDRPanel__OnPlayerPropertiesUpdate
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar3;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool bVar5;
  Photon_Realtime_Player_o *pPVar6;
  UI_PlayerKDRRow_o *pUVar7;
  System_String_o *key;
  UI_TeamKDRRow_o *pUVar8;
  Il2CppObject *local_18 [2];
  
  if (Il2CppMethodInitialized_1843472b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843472b8 = '\x01';
  }
  local_18[0] = (Il2CppObject *)0x0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).KDR, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == 0) {
      bVar5 = false;
    }
    else if ((((TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).KDR)->fields)._value ==
             1) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar5 = targetPlayer == pPVar6;
    }
    else {
      bVar5 = true;
    }
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    if (changedProps != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___TryGetValue
                ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,local_18,
                 (MethodInfo_14769C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
      if (local_18[0] != (Il2CppObject *)0x0) {
        UI_KDRPanel__RemovePlayer(__this,targetPlayer,false,(MethodInfo *)0x0);
        UI_KDRPanel__AddPlayer(__this,targetPlayer,true,bVar5,(MethodInfo *)0x0);
        return;
      }
      if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
        if ((targetPlayer->fields).IsLocal == false) {
          pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
          if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
             (pSVar2 = (pSVar1->fields).KDR, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_1822569f5;
          if ((pSVar2->fields)._value != 2) {
            return;
          }
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
        if (pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar3,(targetPlayer->fields).actorNumber,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
          if (!bVar5) {
            return;
          }
          if ((__this->fields)._pvpMode == 2) {
            key = UI_KDRPanel__GetPlayerTeam(__this,targetPlayer,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._teamHeaders;
            if (__this_00 != (System_Collections_Generic_Dictionary_string__TeamKDRRow__o *)0x0) {
              bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                 (Il2CppObject *)key,
                                 (MethodInfo_1455450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey
                                );
              if (!bVar5) {
                return;
              }
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._teamHeaders;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar4,(Il2CppObject *)key,
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item
                                   );
                pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
                if ((pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
                   (pUVar7 = (UI_PlayerKDRRow_o *)
                             System_Collections_Generic_Dictionary_int__ulong___get_Item
                                       (pSVar3,(targetPlayer->fields).actorNumber,
                                        (MethodInfo_14156F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                       ), pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
                  UI_TeamKDRRow__RemovePlayerStats(pUVar8,pUVar7,(MethodInfo *)0x0);
                  pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
                  if ((pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
                     (pUVar7 = (UI_PlayerKDRRow_o *)
                               System_Collections_Generic_Dictionary_int__ulong___get_Item
                                         (pSVar3,(targetPlayer->fields).actorNumber,
                                          (MethodInfo_14156F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                         ), pUVar7 != (UI_PlayerKDRRow_o *)0x0)) {
                    (pUVar7->fields).player = targetPlayer;
                    Il2CppCodeGenWriteBarrier(&(pUVar7->fields).player,targetPlayer);
                    UI_PlayerKDRRow__UpdateRow_225fdd0(pUVar7,(MethodInfo *)0x0);
                    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._teamHeaders;
                    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                         (pSVar4,(Il2CppObject *)key,
                                          (MethodInfo_147A5B0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item
                                         );
                      pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                               (__this->fields)._players;
                      if ((pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
                         (pUVar7 = (UI_PlayerKDRRow_o *)
                                   System_Collections_Generic_Dictionary_int__ulong___get_Item
                                             (pSVar3,(targetPlayer->fields).actorNumber,
                                              (MethodInfo_14156F0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                             ), pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
                        UI_TeamKDRRow__AddPlayerStats(pUVar8,pUVar7,(MethodInfo *)0x0);
                        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._teamHeaders;
                        if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                           (pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                               (pSVar4,(Il2CppObject *)key,
                                                (MethodInfo_147A5B0 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item
                                               ), pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
                          UI_TeamKDRRow__UpdateRow(pUVar8,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar3 = (System_Collections_Generic_Dictionary_int__ulong__o *)(__this->fields)._players;
            if ((pSVar3 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
               (pUVar7 = (UI_PlayerKDRRow_o *)
                         System_Collections_Generic_Dictionary_int__ulong___get_Item
                                   (pSVar3,(targetPlayer->fields).actorNumber,
                                    (MethodInfo_14156F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                   ), pUVar7 != (UI_PlayerKDRRow_o *)0x0)) {
              (pUVar7->fields).player = targetPlayer;
              Il2CppCodeGenWriteBarrier(&(pUVar7->fields).player,targetPlayer);
              UI_PlayerKDRRow__UpdateRow_225fdd0(pUVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1822569f5:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$OnJoinedRoom
// il2cpp: void UI_KDRPanel__OnJoinedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182256520

void UI_KDRPanel__OnJoinedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnEnable
// il2cpp: void UI_KDRPanel__OnEnable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x1822564d0

void UI_KDRPanel__OnEnable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843472b9 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnDisable
// il2cpp: void UI_KDRPanel__OnDisable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182256480

void UI_KDRPanel__OnDisable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843472ba = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnRoomPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnRoomPropertiesUpdate (UI_KDRPanel_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnRoomPropertiesUpdate(UI_KDRPanel_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnMasterClientSwitched
// il2cpp: void UI_KDRPanel__OnMasterClientSwitched (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnMasterClientSwitched(UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newMasterClient, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnFriendListUpdate
// il2cpp: void UI_KDRPanel__OnFriendListUpdate (UI_KDRPanel_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnFriendListUpdate(UI_KDRPanel_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnCreatedRoom
// il2cpp: void UI_KDRPanel__OnCreatedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnCreatedRoom(UI_KDRPanel_o* __this, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnCreateRoomFailed
// il2cpp: void UI_KDRPanel__OnCreateRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnCreateRoomFailed(UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnJoinRoomFailed
// il2cpp: void UI_KDRPanel__OnJoinRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnJoinRoomFailed(UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnJoinRandomFailed
// il2cpp: void UI_KDRPanel__OnJoinRandomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnJoinRandomFailed(UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$OnLeftRoom
// il2cpp: void UI_KDRPanel__OnLeftRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_KDRPanel__OnLeftRoom(UI_KDRPanel_o* __this, MethodInfo* method)

{
  return;
}


// UI.KDRPanel$$.ctor
// il2cpp: void UI_KDRPanel___ctor (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x182257450

void UI_KDRPanel___ctor(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *__this_00;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *__this_01;
  
  if (Il2CppMethodInitialized_1843472bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow);
    il2cpp_codegen_initialize_runtime_metadata(&"Individuals");
    Il2CppMethodInitialized_1843472bb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ctor);
  (__this->fields)._players = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._players,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ctor);
  (__this->fields)._teamHeaders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._teamHeaders,__this_01);
  (__this->fields)._currentSyncDelay = 1.0;
  (__this->fields)._defaultTeam = "Individuals";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultTeam,"Individuals");
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$<ReorganizeLayout>b__14_1
// il2cpp: System_String_o* UI_KDRPanel___ReorganizeLayout_b__14_1 (UI_KDRPanel_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x1822573b0

System_String_o *
UI_KDRPanel___ReorganizeLayout_b__14_1
          (UI_KDRPanel_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o *x,
          MethodInfo *method)

{
  UI_PlayerKDRRow_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843472bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerKDRRow_get_Value);
    Il2CppMethodInitialized_1843472bc = '\x01';
  }
  pUVar1 = (x->fields).value;
  if (pUVar1 != (UI_PlayerKDRRow_o *)0x0) {
    pSVar2 = UI_KDRPanel__GetPlayerTeam(__this,(pUVar1->fields).player,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


