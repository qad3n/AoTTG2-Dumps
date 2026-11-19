// Type: UI.KDRPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/KDRPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KDRPanel.cs
// --------------------------------

// UI.KDRPanel.<>c$$.cctor
// il2cpp: void UI_KDRPanel___c___cctor (const MethodInfo* method);
// 0x5d33b60

void UI_KDRPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KDRPanel_c);
    Il2CppMethodInitialized_07547e3a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_KDRPanel_c->static_fields->__9 = (UI_KDRPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_KDRPanel_c->static_fields->__9);
  return;
}


// UI.KDRPanel.<>c$$.ctor
// il2cpp: void UI_KDRPanel___c___ctor (UI_KDRPanel___c_o* __this, const MethodInfo* method);
// 0x5d33bd0

void UI_KDRPanel___c___ctor(UI_KDRPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_0
// il2cpp: System_String_o* UI_KDRPanel___c___ReorganizeLayout_b__14_0 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x, const MethodInfo* method);
// 0x5d33be0

System_String_o *
UI_KDRPanel___c___ReorganizeLayout_b__14_0
          (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_string__TeamKDRRow__o x,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_TeamKDRRow_get_Key);
    Il2CppMethodInitialized_07547e3b = '\x01';
  }
  return x.fields.key;
}


// UI.KDRPanel.<>c$$<ReorganizeLayout>b__14_2
// il2cpp: int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2 (UI_KDRPanel___c_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x5d33c10

int32_t UI_KDRPanel___c___ReorganizeLayout_b__14_2
                  (UI_KDRPanel___c_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x,
                  MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerKDRRow_get_Key);
    Il2CppMethodInitialized_07547e3c = '\x01';
  }
  return x.fields.key;
}


// UI.KDRPanel$$Setup
// il2cpp: void UI_KDRPanel__Setup (UI_KDRPanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5d32030

void UI_KDRPanel__Setup(UI_KDRPanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
  UI_KDRPanel__DestroyAndRecreate(__this,(MethodInfo *)style);
  UI_KDRPanel__Sync(__this,(MethodInfo *)style);
  return;
}


// UI.KDRPanel$$Update
// il2cpp: void UI_KDRPanel__Update (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d32670

void UI_KDRPanel__Update(UI_KDRPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  UI_KDRPanel__Sync(__this,method);
  return;
}


// UI.KDRPanel$$Sync
// il2cpp: void UI_KDRPanel__Sync (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d32510
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d325e8: jmp 0x5d3264f
// asm:   0x5d32638: jmp 0x5d3264f

void UI_KDRPanel__Sync(UI_KDRPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  Settings_SettingsManager_StaticFields *pSVar6;
  bool bVar7;
  
  if (Il2CppMethodInitialized_07547e2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547e2d = '\x01';
  }
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields;
  if ((pSVar6->UISettings == (Settings_UISettings_o *)0x0) ||
     (pSVar3 = (pSVar6->UISettings->fields).KDR, pSVar3 == (Settings_IntSetting_o *)0x0)) {
label_05d3265e:
    ThrowNullReferenceException();
  }
  iVar2 = (pSVar3->fields)._value;
  if (iVar2 != (__this->fields)._kdrMode) {
    (__this->fields)._kdrMode = iVar2;
    UI_KDRPanel__DestroyAndRecreate(__this,method);
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields;
  }
  if (((pSVar6->InGameCurrent == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar6->InGameCurrent->fields).Misc, pSVar4 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar4->fields).PVP, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_05d3265e;
  iVar2 = (pSVar3->fields)._value;
  if (iVar2 == (__this->fields)._pvpMode) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d325d8;
label_05d32608:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    (__this->fields)._pvpMode = iVar2;
    UI_KDRPanel__DestroyAndRecreate(__this,method);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d32608;
label_05d325d8:
    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar1 = (pCVar5->fields).ShowScoreboardStatus;
    if ((__this->fields)._showScoreboardStatus == bVar1) {
      bVar7 = (pCVar5->fields).ShowScoreboardLoadout;
      if ((__this->fields)._showScoreboardLoadout == bVar7) goto label_05d3264f;
    }
    else {
      bVar7 = (pCVar5->fields).ShowScoreboardLoadout;
    }
    (__this->fields)._showScoreboardLoadout = bVar7;
    (__this->fields)._showScoreboardStatus = bVar1;
    UI_KDRPanel__DestroyAndRecreate(__this,method);
  }
label_05d3264f:
  (__this->fields)._currentSyncDelay = 0.2;
  return;
}


// UI.KDRPanel$$GetPlayerTeam
// il2cpp: System_String_o* UI_KDRPanel__GetPlayerTeam (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d326c0

System_String_o *
UI_KDRPanel__GetPlayerTeam(UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547e2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547e2e = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).PVP, pSVar3 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._value != 2) {
    return (__this->fields)._defaultTeam;
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar4 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                      (__this->fields)._defaultTeam,(MethodInfo *)0x0);
  return pSVar4;
}


// UI.KDRPanel$$ReorganizeLayout
// il2cpp: void UI_KDRPanel__ReorganizeLayout (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d327a0
// eh: try 0x5d32b4a..0x5d32e08 -> pad 0x5d32e30 (+20 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d32e0e..0x5d32e18 -> pad 0x5d32e8b catch (...) [compiler noexcept guard]
// eh: try 0x5d32e4c..0x5d32e51 -> pad 0x5d32e76 cleanup
// eh: try 0x5d32e79..0x5d32e83 -> pad 0x5d32e8b catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d32925: jmp 0x5d32940
// asm:   0x5d32a31: jmp 0x5d32a4c
// asm:   0x5d32b3f: nop 
// asm:   0x5d32d2e: jmp 0x5d32dca
// asm:   0x5d32d51: jmp 0x5d32d55
// asm:   0x5d32d53: jmp 0x5d32d65
// asm:   0x5d32d55: mov r15, rdx
// asm:   0x5d32d58: mov r14, rax
// asm:   0x5d32d5b: jmp 0x5d32d6b
// asm:   0x5d32d5d: jmp 0x5d32d65
// asm:   0x5d32d5f: jmp 0x5d32d65
// asm:   0x5d32d61: jmp 0x5d32d65
// asm:   0x5d32d63: jmp 0x5d32d65
// asm:   0x5d32d65: mov r15, rdx
// asm:   0x5d32d68: mov r14, rax
// asm:   0x5d32d6b: cmp r15d, 1
// asm:   0x5d32d6f: jne 0x5d32e0e
// asm:   0x5d32d75: mov rdi, r14
// asm:   0x5d32d78: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d32d7d: mov r14, qword ptr [rax]
// asm:   0x5d32d80: mov qword ptr [rsp + 0x38], r14
// asm:   0x5d32d85: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d32d8a: jmp 0x5d32d13
// asm:   0x5d32dca: mov rdi, r14
// asm:   0x5d32dcd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d32e08: mov r15, rdx
// asm:   0x5d32e0b: mov r14, rax
// asm:   0x5d32e0e: lea rdi, [rsp + 0x38]
// asm:   0x5d32e13: call 0x2fdc4c0  ; il2cpp_runtime_helper_02fdc4c0()
// asm:   0x5d32e18: jmp 0x5d32e36
// asm:   0x5d32e1a: jmp 0x5d32e30
// asm:   0x5d32e1c: jmp 0x5d32e30
// asm:   0x5d32e1e: jmp 0x5d32e30
// asm:   0x5d32e20: jmp 0x5d32e30
// asm:   0x5d32e22: jmp 0x5d32e30
// asm:   0x5d32e24: jmp 0x5d32e30
// asm:   0x5d32e26: jmp 0x5d32e30
// asm:   0x5d32e28: jmp 0x5d32e30
// asm:   0x5d32e2a: jmp 0x5d32e30
// asm:   0x5d32e2c: jmp 0x5d32e30
// asm:   0x5d32e2e: jmp 0x5d32e30
// asm:   0x5d32e30: mov r15, rdx
// asm:   0x5d32e33: mov r14, rax
// asm:   0x5d32e36: cmp r15d, 1
// asm:   0x5d32e3a: jne 0x5d32e79
// asm:   0x5d32e3c: mov rdi, r14
// asm:   0x5d32e3f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d32e44: mov rbx, qword ptr [rax]
// asm:   0x5d32e47: mov qword ptr [rsp + 0x60], rbx
// asm:   0x5d32e4c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d32e51: lea rax, [rip + 0x155a560]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_Dispose
// asm:   0x5d32e58: mov rsi, qword ptr [rax]
// asm:   0x5d32e5b: lea rdi, [rsp + 0x10]
// asm:   0x5d32e60: call 0x4d1cb40  ; System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose()
// asm:   0x5d32e65: test rbx, rbx
// asm:   0x5d32e68: je 0x5d32db8
// asm:   0x5d32e6e: mov rdi, rbx
// asm:   0x5d32e71: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d32e76: mov r14, rax
// asm:   0x5d32e79: lea rdi, [rsp + 0x60]
// asm:   0x5d32e7e: call 0x2fdc4f0  ; il2cpp_runtime_helper_02fdc4f0()
// asm:   0x5d32e83: mov rdi, r14
// asm:   0x5d32e86: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d32e8b: mov rdi, rax
// asm:   0x5d32e8e: call 0x2ab61e0  ; __clang_call_terminate()

void UI_KDRPanel__ReorganizeLayout(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *source;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *source_00;
  Photon_Realtime_Player_o *player;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_o *b;
  UnityEngine_Component_o *__this_00;
  bool bVar6;
  System_Func_T__TResult__o *pSVar7;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar8;
  System_Collections_Generic_List_TSource__o *__this_01;
  UI_KDRPanel___c_StaticFields *pUVar9;
  System_Collections_Generic_List_KeyValuePair_int__object___o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  System_String_o *a;
  System_String_o **ppSVar12;
  int index;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  System_String_o *local_a8;
  UnityEngine_Component_o *pUStack_a0;
  undefined1 local_90 [16];
  System_String_o *local_80;
  UnityEngine_Component_o *pUStack_78;
  System_Collections_Generic_List_KeyValuePair_int__object___o *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_T__o *pSStack_50;
  System_String_o *local_48;
  UnityEngine_Component_o *pUStack_40;
  
  if (Il2CppMethodInitialized_07547e2f == '\0') {
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
    Il2CppMethodInitialized_07547e2f = '\x01';
  }
  local_a8 = (System_String_o *)0x0;
  pUStack_a0 = (UnityEngine_Component_o *)0x0;
  local_b8 = (undefined1  [8])0x0;
  uStack_b0._0_4_ = 0;
  uStack_b0._4_4_ = 0;
  local_48 = (System_String_o *)0x0;
  pUStack_40 = (UnityEngine_Component_o *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_T__o *)0x0;
  source = (__this->fields)._teamHeaders;
  if ((TypeInfo_UI_KDRPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
    pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    pSVar7 = (System_Func_T__TResult__o *)pUVar9->__9__14_0;
  }
  else {
    pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    pSVar7 = (System_Func_T__TResult__o *)pUVar9->__9__14_0;
  }
  if (pSVar7 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_KDRPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
      pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pUVar9->__9;
    pSVar7 = (System_Func_T__TResult__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_TeamKDRRow_string);
    System_Func_KeyValuePair_object__object___object____ctor
              (pSVar7,pIVar2,(intptr_t)MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_0,
               (MethodInfo_4F10320 *)0x0);
    pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    pUVar9->__9__14_0 = (System_Func_KeyValuePair_string__TeamKDRRow___string__o *)pSVar7;
    Il2CppCodeGenWriteBarrier(&pUVar9->__9__14_0);
  }
  pSVar8 = System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__TKey__o *)pSVar7,
                      (MethodInfo_34F1A50 *)
                      MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_string_TeamKDRRow_string);
  __this_01 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                         (MethodInfo_3500CB0 *)
                         MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_string_TeamKDRRow);
  source_00 = (__this->fields)._players;
  pSVar7 = (System_Func_T__TResult__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_PlayerKDRRow_string)
  ;
  System_Func_KeyValuePair_int__object___object____ctor
            (pSVar7,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_KDRPanel_ReorganizeLayout_b__14_1,
             (MethodInfo_4F0F5A0 *)0x0);
  pSVar8 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (System_Func_TSource__TKey__o *)pSVar7,
                      (MethodInfo_34F19D0 *)
                      MethodInfo_System_Linq_Enumerable_OrderBy_KeyValuePair_int_PlayerKDRRow_string);
  if ((TypeInfo_UI_KDRPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
    pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    pSVar7 = (System_Func_T__TResult__o *)pUVar9->__9__14_2;
  }
  else {
    pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    pSVar7 = (System_Func_T__TResult__o *)pUVar9->__9__14_2;
  }
  if (pSVar7 == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_KDRPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_KDRPanel_c);
      pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pUVar9->__9;
    pSVar7 = (System_Func_T__TResult__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_PlayerKDRRow_int);
    System_Func_KeyValuePair_int__object___int____ctor
              (pSVar7,pIVar2,(intptr_t)MethodInfo_UI_KDRPanel_c_ReorganizeLayout_b__14_2,
               (MethodInfo_4F0F4E0 *)0x0);
    pUVar9 = TypeInfo_UI_KDRPanel_c->static_fields;
    pUVar9->__9__14_2 = (System_Func_KeyValuePair_int__PlayerKDRRow___int__o *)pSVar7;
    Il2CppCodeGenWriteBarrier(&pUVar9->__9__14_2);
  }
  pSVar8 = System_Linq_Enumerable__ThenBy_KeyValuePair_int__object___int_
                     (pSVar8,(System_Func_TSource__TKey__o *)pSVar7,
                      (MethodInfo_34FE200 *)
                      MethodInfo_System_Linq_Enumerable_ThenBy_KeyValuePair_int_PlayerKDRRow_int);
  pSVar10 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
            System_Linq_Enumerable__ToList_KeyValuePair_int__object__
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                       (MethodInfo_3500C30 *)
                       MethodInfo_System_Linq_Enumerable_ToList_KeyValuePair_int_PlayerKDRRow);
  if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_KeyValuePair_object__object____GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
             (System_Collections_Generic_List_T__o *)__this_01,
             (MethodInfo_516A1C0 *)
             MethodInfo_System_Collections_Generic_List_KeyValuePair_string_TeamKDRRow_GetEnumerator);
  local_a8 = local_80;
  pUStack_a0 = pUStack_78;
  local_b8 = (undefined1  [8])local_90._0_8_;
  uStack_b0 = (System_Collections_Generic_List_Enumerator_T__o *)local_90._8_8_;
  local_68 = 0;
  local_60 = local_b8;
  if (pSVar10 == (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
    bVar6 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                       (MethodInfo_4C1CB50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_MoveNext
                      );
    if (bVar6) {
      if (pUStack_a0 != (UnityEngine_Component_o *)0x0) {
        pUVar11 = UnityEngine_Component__get_transform(pUStack_a0,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetSiblingIndex(pUVar11,0,(MethodInfo *)0x0);
          ThrowNullReferenceException();
        }
label_05d32df2:
        ThrowNullReferenceException();
      }
label_05d32de1:
      ThrowNullReferenceException();
    }
  }
  else {
    ppSVar1 = &(__this->fields)._defaultTeam;
    index = 0;
    local_70 = pSVar10;
label_05d32b40:
    bVar6 = System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                       (MethodInfo_4C1CB50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_MoveNext
                      );
    b = local_a8;
    if (bVar6) {
      if (pUStack_a0 != (UnityEngine_Component_o *)0x0) {
        pUVar11 = UnityEngine_Component__get_transform(pUStack_a0,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetSiblingIndex(pUVar11,index,(MethodInfo *)0x0);
          System_Collections_Generic_List_KeyValuePair_int__object____GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_90,local_70,
                     (MethodInfo_51600E0 *)
                     MethodInfo_System_Collections_Generic_List_KeyValuePair_int_PlayerKDRRow_GetEnumerator);
          local_48 = local_80;
          pUStack_40 = pUStack_78;
          local_58 = (undefined1  [8])local_90._0_8_;
          pSStack_50 = (System_Collections_Generic_List_Enumerator_T__o *)local_90._8_8_;
          local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_90._8_8_ = (System_Collections_Generic_List_Enumerator_T__o *)local_58;
          do {
            index = index + 1;
            do {
              bVar6 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____MoveNext
                                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                                 (MethodInfo_4C1B930 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_MoveNext
                                );
              __this_00 = pUStack_40;
              if (!bVar6) {
                System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                           (MethodInfo_4C1B920 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_PlayerKDRRow_Dispose
                          );
                goto label_05d32b40;
              }
              if (pUStack_40 == (UnityEngine_Component_o *)0x0) {
                ThrowNullReferenceException();
              }
              player = (*(uint64_t *)((char *)pUStack_40 + 0x20));
              if (Il2CppMethodInitialized_07547e2e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
                Il2CppMethodInitialized_07547e2e = '\x01';
              }
              if (player == (Photon_Realtime_Player_o *)0x0) {
                ppSVar12 = *(System_String_o ***)(g_data_07556758 + 0xb8);
label_05d32cd5:
                a = *ppSVar12;
              }
              else {
                pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
                if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
                    (pSVar4 = (pSVar3->fields).Misc, pSVar4 == (Settings_InGameMiscSettings_o *)0x0)) ||
                   (pSVar5 = (pSVar4->fields).PVP, pSVar5 == (Settings_IntSetting_o *)0x0)) {
                  ThrowNullReferenceException();
                }
                ppSVar12 = ppSVar1;
                if ((pSVar5->fields)._value != 2) goto label_05d32cd5;
                if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
                }
                a = PhotonExtensions__GetStringProperty
                              (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,*ppSVar1,
                               (MethodInfo *)0x0);
              }
              bVar6 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
            } while (!bVar6);
            pUVar11 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Transform__SetSiblingIndex(pUVar11,index,(MethodInfo *)0x0);
          } while( true );
        }
        goto label_05d32df2;
      }
      goto label_05d32de1;
    }
  }
  System_Collections_Generic_List_Enumerator_KeyValuePair_object__object____Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
             (MethodInfo_4C1CB40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_string_TeamKDRRow_Dispose);
  return;
}


// UI.KDRPanel$$AddPlayer
// il2cpp: void UI_KDRPanel__AddPlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, bool isVisible, const MethodInfo* method);
// 0x5d32ea0

void UI_KDRPanel__AddPlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool redoLayout,bool isVisible,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_PlayerKDRRow_o *player_00;
  System_String_o *team;
  UI_TeamKDRRow_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547e30 == '\0') {
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
    Il2CppMethodInitialized_07547e30 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
    if (bVar5) {
      return;
    }
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar7 = UI_ElementFactory__CreatePlayerKDRRow(pUVar6,(__this->fields)._style,player,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      player_00 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar7,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_PlayerKDRRow);
      if (!isVisible) {
        if ((player_00 == (UI_PlayerKDRRow_o *)0x0) ||
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)player_00,(MethodInfo *)0x0),
           pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto label_05d3312a;
        UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Add
                  (pSVar1,(player->fields).actorNumber,(Il2CppObject *)player_00,
                   (MethodInfo_4A0F740 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Add
                  );
        if ((__this->fields)._pvpMode != 2) {
          return;
        }
        team = UI_KDRPanel__GetPlayerTeam(__this,player,method_00);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar2,(Il2CppObject *)team,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
          if (!bVar5) {
            pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar7 = UI_ElementFactory__CreateTeamKDRRow
                               (pUVar6,(__this->fields)._style,team,(MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_05d3312a;
            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar7,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_TeamKDRRow);
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
            if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
               (pSVar4 = (pSVar3->fields).KDR, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_05d3312a;
            UnityEngine_GameObject__SetActive(pUVar7,(pSVar4->fields)._value != 0,(MethodInfo *)0x0);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d3312a;
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar2,(Il2CppObject *)team,(Il2CppObject *)pUVar8,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Add);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
          if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)team,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item)
             , pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
            UI_TeamKDRRow__AddPlayerStats(pUVar8,player_00,(MethodInfo *)0x0);
            method_01 = (MethodInfo *)0x0;
            UI_TeamKDRRow__UpdateRow(pUVar8,(MethodInfo *)0x0);
            if (redoLayout) {
              UI_KDRPanel__ReorganizeLayout(__this,method_01);
              return;
            }
            return;
          }
        }
      }
    }
  }
label_05d3312a:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$RemovePlayer
// il2cpp: void UI_KDRPanel__RemovePlayer (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* player, bool redoLayout, const MethodInfo* method);
// 0x5d33130
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3330b: test r15b, r15b
// asm:   0x5d33416: jmp 0x5d33318

void UI_KDRPanel__RemovePlayer
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *player,bool redoLayout,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UI_PlayerKDRRow_o *pUVar4;
  UI_TeamKDRRow_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *key;
  
  if (Il2CppMethodInitialized_07547e31 == '\0') {
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
    Il2CppMethodInitialized_07547e31 = '\x01';
  }
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05d3341b;
  bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar1,(player->fields).actorNumber,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
  if (!bVar3) {
    return;
  }
  if ((__this->fields)._pvpMode == 2) {
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pUVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,(player->fields).actorNumber,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item),
        pUVar4 == (UI_PlayerKDRRow_o *)0x0)) ||
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders,
       pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05d3341b;
    key = (MethodInfo *)(pUVar4->fields).team;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    if (!bVar3) {
      key = (MethodInfo *)(__this->fields)._defaultTeam;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d3341b;
    method_00 = key;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey);
    if (bVar3) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d3341b;
      pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)key,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item);
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pUVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar1,(player->fields).actorNumber,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item),
         pUVar5 == (UI_TeamKDRRow_o *)0x0)) goto label_05d3341b;
      UI_TeamKDRRow__RemovePlayerStats(pUVar5,pUVar4,(MethodInfo *)0x0);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,(Il2CppObject *)key,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item),
         pUVar5 == (UI_TeamKDRRow_o *)0x0)) goto label_05d3341b;
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if ((pUVar5->fields).playerCount < 1) {
        if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)key,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item),
           pUVar5 == (UI_TeamKDRRow_o *)0x0)) goto label_05d3341b;
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar6,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d3341b;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar2,(Il2CppObject *)key,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Remove);
        method_00 = key;
      }
      else {
        if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)key,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item),
           pUVar5 == (UI_TeamKDRRow_o *)0x0)) goto label_05d3341b;
        method_00 = (MethodInfo *)0x0;
        UI_TeamKDRRow__UpdateRow(pUVar5,(MethodInfo *)0x0);
      }
    }
    if (redoLayout) {
      UI_KDRPanel__ReorganizeLayout(__this,method_00);
    }
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (pUVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar1,(player->fields).actorNumber,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item),
     pUVar4 != (UI_PlayerKDRRow_o *)0x0)) {
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar6,(MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Remove
                (pSVar1,(player->fields).actorNumber,
                 (MethodInfo_4A10DC0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Remove);
      return;
    }
  }
label_05d3341b:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$DestroyAndRecreate
// il2cpp: void UI_KDRPanel__DestroyAndRecreate (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d32060
// eh: try 0x5d321e0..0x5d3244b -> pad 0x5d324a8 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d32475..0x5d3247a -> pad 0x5d32499 cleanup
// eh: try 0x5d3249c..0x5d324a6 -> pad 0x5d324ff catch (...) [compiler noexcept guard]
// eh: try 0x5d324c0..0x5d324c5 -> pad 0x5d324ea cleanup
// eh: try 0x5d324ed..0x5d324f7 -> pad 0x5d324ff catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d32455: jmp 0x5d3245d
// asm:   0x5d32457: jmp 0x5d324a8
// asm:   0x5d32459: jmp 0x5d3245d
// asm:   0x5d3245b: jmp 0x5d324a8
// asm:   0x5d3245d: mov r14, rax
// asm:   0x5d32460: cmp edx, 1
// asm:   0x5d32463: jne 0x5d3249c
// asm:   0x5d32465: mov rdi, r14
// asm:   0x5d32468: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d3246d: mov rbx, qword ptr [rax]
// asm:   0x5d32470: mov qword ptr [rsp + 8], rbx
// asm:   0x5d32475: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d3247a: lea rax, [rip + 0x155dd3f]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_Dispose
// asm:   0x5d32481: mov rsi, qword ptr [rax]
// asm:   0x5d32484: lea rdi, [rsp + 0x30]
// asm:   0x5d32489: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5d3248e: test rbx, rbx
// asm:   0x5d32491: je 0x5d32309
// asm:   0x5d32497: jmp 0x5d324e2
// asm:   0x5d32499: mov r14, rax
// asm:   0x5d3249c: lea rdi, [rsp + 8]
// asm:   0x5d324a1: call 0x2fdc550  ; il2cpp_runtime_helper_02fdc550()
// asm:   0x5d324a6: jmp 0x5d324f7
// asm:   0x5d324a8: mov r14, rax
// asm:   0x5d324ab: cmp edx, 1
// asm:   0x5d324ae: jne 0x5d324ed
// asm:   0x5d324b0: mov rdi, r14
// asm:   0x5d324b3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d324b8: mov rbx, qword ptr [rax]
// asm:   0x5d324bb: mov qword ptr [rsp + 8], rbx
// asm:   0x5d324c0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d324c5: lea rax, [rip + 0x155d4c4]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_Dispose
// asm:   0x5d324cc: mov rsi, qword ptr [rax]
// asm:   0x5d324cf: lea rdi, [rsp + 0x60]
// asm:   0x5d324d4: call 0x4da11d0  ; System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose()
// asm:   0x5d324d9: test rbx, rbx
// asm:   0x5d324dc: je 0x5d32239
// asm:   0x5d324e2: mov rdi, rbx
// asm:   0x5d324e5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d324ea: mov r14, rax
// asm:   0x5d324ed: lea rdi, [rsp + 8]
// asm:   0x5d324f2: call 0x2fdc520  ; il2cpp_runtime_helper_02fdc520()
// asm:   0x5d324f7: mov rdi, r14
// asm:   0x5d324fa: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d324ff: mov rdi, rax
// asm:   0x5d32502: call 0x2ab61e0  ; __clang_call_terminate()

void UI_KDRPanel__DestroyAndRecreate(UI_KDRPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Settings_UISettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  bool bVar7;
  UnityEngine_Object_o *pUVar8;
  MethodInfo *method_00;
  Photon_Realtime_Player_array *pPVar9;
  ulong uVar10;
  ulong uVar11;
  MethodInfo *in_R8;
  undefined1 local_b0 [16];
  Il2CppObject *local_a0;
  UnityEngine_Component_o *pUStack_98;
  int32_t local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_80;
  Il2CppObject *local_78;
  UnityEngine_Component_o *pUStack_70;
  undefined8 local_68;
  undefined1 local_58 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_50;
  Il2CppObject *local_48;
  UnityEngine_Component_o *pUStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07547e32 == '\0') {
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
    Il2CppMethodInitialized_07547e32 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  pUStack_40 = (UnityEngine_Component_o *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_78 = (Il2CppObject *)0x0;
  pUStack_70 = (UnityEngine_Component_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  pSStack_80 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0,pSVar3,
               (MethodInfo_4A0FBD0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_GetEnumerator);
    local_38._0_4_ = local_90;
    local_38._4_4_ = uStack_8c;
    local_48 = local_a0;
    pUStack_40 = pUStack_98;
    local_58 = (undefined1  [8])local_b0._0_8_;
    pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0._8_8_;
    local_b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_b0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58;
    while( true ) {
      bVar7 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,
                         (MethodInfo_4CA10B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_MoveNext
                        );
      if (!bVar7) break;
      if (pUStack_40 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUStack_40,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,
               (MethodInfo_4CA11D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_PlayerKDRRow_Dispose);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Clear
                (pSVar3,(MethodInfo_4A0F8F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_Clear);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0,pSVar4,
                   (MethodInfo_4AAD970 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_GetEnumerator);
        local_68._0_4_ = local_90;
        local_68._4_4_ = uStack_8c;
        local_78 = local_a0;
        pUStack_70 = pUStack_98;
        local_88 = (undefined1  [8])local_b0._0_8_;
        pSStack_80 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b0._8_8_;
        local_b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_b0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88;
        while( true ) {
          bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
                             (MethodInfo_4CE66D0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_MoveNext
                            );
          if (!bVar7) break;
          if (pUStack_70 == (UnityEngine_Component_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUStack_70,(MethodInfo *)0x0)
          ;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
                   (MethodInfo_4CE67F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_TeamKDRRow_Dispose);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Clear
                    (pSVar4,(MethodInfo_4AAD690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_Clear);
          pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
          if ((pSVar5 != (Settings_UISettings_o *)0x0) &&
             (pSVar6 = (pSVar5->fields).KDR, pSVar6 != (Settings_IntSetting_o *)0x0)) {
            iVar1 = (pSVar6->fields)._value;
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            bVar7 = false;
            method_00 = (MethodInfo *)Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            UI_KDRPanel__AddPlayer(__this,(Photon_Realtime_Player_o *)method_00,false,iVar1 != 0,in_R8);
            if (iVar1 != 0) {
              pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
              if ((pSVar5 == (Settings_UISettings_o *)0x0) ||
                 (pSVar6 = (pSVar5->fields).KDR, pSVar6 == (Settings_IntSetting_o *)0x0)) goto label_05d32450;
              bVar7 = (pSVar6->fields)._value != 1;
            }
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            pPVar9 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
            if (pPVar9 != (Photon_Realtime_Player_array *)0x0) {
              if (0 < (int)pPVar9->max_length) {
                uVar10 = pPVar9->max_length & 0xffffffff;
                uVar11 = 0;
                do {
                  if (uVar10 <= uVar11) {
                    ThrowIndexOutOfRangeException();
                  }
                  method_00 = (MethodInfo *)pPVar9->m_Items[uVar11];
                  UI_KDRPanel__AddPlayer(__this,(Photon_Realtime_Player_o *)method_00,false,bVar7,in_R8);
                  uVar11 = uVar11 + 1;
                  uVar2 = (uint)pPVar9->max_length;
                  uVar10 = (ulong)uVar2;
                } while ((long)uVar11 < (long)(int)uVar2);
              }
              UI_KDRPanel__ReorganizeLayout(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
label_05d32450:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$OnPlayerEnteredRoom
// il2cpp: void UI_KDRPanel__OnPlayerEnteredRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x5d33420

void UI_KDRPanel__OnPlayerEnteredRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newPlayer,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547e33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547e33 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).KDR, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_KDRPanel__AddPlayer
            (__this,newPlayer,true,
             newPlayer != (Photon_Realtime_Player_o *)0x0 && (pSVar2->fields)._value == 2,in_R8);
  return;
}


// UI.KDRPanel$$OnPlayerLeftRoom
// il2cpp: void UI_KDRPanel__OnPlayerLeftRoom (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x5d334b0

void UI_KDRPanel__OnPlayerLeftRoom
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *otherPlayer,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547e34 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).KDR, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((otherPlayer == (Photon_Realtime_Player_o *)0x0) || ((pSVar2->fields)._value != 2)) {
    return;
  }
  UI_KDRPanel__RemovePlayer(__this,otherPlayer,true,in_RCX);
  return;
}


// UI.KDRPanel$$OnPlayerPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnPlayerPropertiesUpdate (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x5d33540
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3364b: jmp 0x5d3367a
// asm:   0x5d33662: jmp 0x5d3367a
// asm:   0x5d33874: mov rdi, rax
// asm:   0x5d33877: xor esi, esi
// asm:   0x5d33879: call 0x5d52230  ; UI_TeamKDRRow__UpdateRow()
// asm:   0x5d3387e: jmp 0x5d336d3
// asm:   0x5d338a5: mov rdi, rax
// asm:   0x5d338a8: mov rsi, r12
// asm:   0x5d338ab: xor edx, edx
// asm:   0x5d338ad: call 0x5d3b0a0  ; UI_PlayerKDRRow__UpdateRow()
// asm:   0x5d338b2: jmp 0x5d336d3

void UI_KDRPanel__OnPlayerPropertiesUpdate
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Settings_UISettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Photon_Realtime_Player_o *pPVar7;
  System_String_o *key;
  UI_TeamKDRRow_o *pUVar8;
  UI_PlayerKDRRow_o *pUVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  bool bVar10;
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_07547e35 == '\0') {
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
    Il2CppMethodInitialized_07547e35 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).KDR, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar4->fields)._value;
    if (iVar1 == 0) {
      bVar10 = false;
      uVar2 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
    }
    else if (iVar1 == 1) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar10 = pPVar7 == targetPlayer;
      uVar2 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
    }
    else {
      bVar10 = true;
      uVar2 = (TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    if (changedProps != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
      method_00 = MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue;
      System_Collections_Generic_Dictionary_object__object___TryGetValue
                ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,&pIStack_38,
                 (MethodInfo_4AAF440 *)
                 MethodInfo_System_Collections_Generic_Dictionary_object_object_TryGetValue);
      if (pIStack_38 != (Il2CppObject *)0x0) {
        UI_KDRPanel__RemovePlayer(__this,targetPlayer,false,method_00);
        UI_KDRPanel__AddPlayer(__this,targetPlayer,true,bVar10,in_R8);
        return;
      }
      if (targetPlayer != (Photon_Realtime_Player_o *)0x0) {
        if ((targetPlayer->fields).IsLocal == false) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
          if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).KDR, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_05d338b7;
          if ((pSVar4->fields)._value != 2) {
            return;
          }
        }
        pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
        if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (pSVar5,(targetPlayer->fields).actorNumber,
                              (MethodInfo_4A0F950 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ContainsKey);
          if (!bVar10) {
            return;
          }
          if ((__this->fields)._pvpMode == 2) {
            key = UI_KDRPanel__GetPlayerTeam(__this,targetPlayer,method_01);
            pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._teamHeaders;
            if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar6,(Il2CppObject *)key,
                                  (MethodInfo_4AAD6F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ContainsKey
                                 );
              if (!bVar10) {
                return;
              }
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._teamHeaders;
              if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar6,(Il2CppObject *)key,
                                    (MethodInfo_4AAD450 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item
                                   );
                pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
                if ((pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                   (pUVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                                       (pSVar5,(targetPlayer->fields).actorNumber,
                                        (MethodInfo_4A0F690 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                       ), pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
                  UI_TeamKDRRow__RemovePlayerStats(pUVar8,pUVar9,(MethodInfo *)0x0);
                  pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
                  if ((pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (pUVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                                         (pSVar5,(targetPlayer->fields).actorNumber,
                                          (MethodInfo_4A0F690 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                         ), pUVar9 != (UI_PlayerKDRRow_o *)0x0)) {
                    UI_PlayerKDRRow__UpdateRow(pUVar9,targetPlayer,(MethodInfo *)0x0);
                    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._teamHeaders;
                    if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                         (pSVar6,(Il2CppObject *)key,
                                          (MethodInfo_4AAD450 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_get_Item
                                         );
                      pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                               (__this->fields)._players;
                      if ((pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                         (pUVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                                             (pSVar5,(targetPlayer->fields).actorNumber,
                                              (MethodInfo_4A0F690 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                             ), pUVar8 != (UI_TeamKDRRow_o *)0x0)) {
                        UI_TeamKDRRow__AddPlayerStats(pUVar8,pUVar9,(MethodInfo *)0x0);
                        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._teamHeaders;
                        if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                           (pUVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                               (pSVar6,(Il2CppObject *)key,
                                                (MethodInfo_4AAD450 *)
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
            pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._players;
            if ((pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                                   (pSVar5,(targetPlayer->fields).actorNumber,
                                    (MethodInfo_4A0F690 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_get_Item
                                   ), pUVar9 != (UI_PlayerKDRRow_o *)0x0)) {
              UI_PlayerKDRRow__UpdateRow(pUVar9,targetPlayer,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05d338b7:
  ThrowNullReferenceException();
}


// UI.KDRPanel$$OnJoinedRoom
// il2cpp: void UI_KDRPanel__OnJoinedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d338c0

void UI_KDRPanel__OnJoinedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  UI_KDRPanel__DestroyAndRecreate(__this,method);
  return;
}


// UI.KDRPanel$$OnEnable
// il2cpp: void UI_KDRPanel__OnEnable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d338d0

void UI_KDRPanel__OnEnable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547e36 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  method_00 = (MethodInfo *)0x0;
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((__this->fields)._style == (UI_ElementStyle_o *)0x0) {
    return;
  }
  UI_KDRPanel__DestroyAndRecreate(__this,method_00);
  return;
}


// UI.KDRPanel$$OnDisable
// il2cpp: void UI_KDRPanel__OnDisable (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d33930

void UI_KDRPanel__OnDisable(UI_KDRPanel_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547e37 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$OnRoomPropertiesUpdate
// il2cpp: void UI_KDRPanel__OnRoomPropertiesUpdate (UI_KDRPanel_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x5d339a0

void UI_KDRPanel__OnRoomPropertiesUpdate
               (UI_KDRPanel_o *__this,ExitGames_Client_Photon_Hashtable_o *propertiesThatChanged,
               MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnMasterClientSwitched
// il2cpp: void UI_KDRPanel__OnMasterClientSwitched (UI_KDRPanel_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x5d339b0

void UI_KDRPanel__OnMasterClientSwitched
               (UI_KDRPanel_o *__this,Photon_Realtime_Player_o *newMasterClient,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnFriendListUpdate
// il2cpp: void UI_KDRPanel__OnFriendListUpdate (UI_KDRPanel_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x5d339c0

void UI_KDRPanel__OnFriendListUpdate
               (UI_KDRPanel_o *__this,System_Collections_Generic_List_FriendInfo__o *friendList,
               MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnCreatedRoom
// il2cpp: void UI_KDRPanel__OnCreatedRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d339d0

void UI_KDRPanel__OnCreatedRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnCreateRoomFailed
// il2cpp: void UI_KDRPanel__OnCreateRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x5d339e0

void UI_KDRPanel__OnCreateRoomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnJoinRoomFailed
// il2cpp: void UI_KDRPanel__OnJoinRoomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x5d339f0

void UI_KDRPanel__OnJoinRoomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnJoinRandomFailed
// il2cpp: void UI_KDRPanel__OnJoinRandomFailed (UI_KDRPanel_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x5d33a00

void UI_KDRPanel__OnJoinRandomFailed
               (UI_KDRPanel_o *__this,int16_t returnCode,System_String_o *message,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$OnLeftRoom
// il2cpp: void UI_KDRPanel__OnLeftRoom (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d33a10

void UI_KDRPanel__OnLeftRoom(UI_KDRPanel_o *__this,MethodInfo *method)

{
  return;
}


// UI.KDRPanel$$.ctor
// il2cpp: void UI_KDRPanel___ctor (UI_KDRPanel_o* __this, const MethodInfo* method);
// 0x5d33a20

void UI_KDRPanel___ctor(UI_KDRPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__PlayerKDRRow__o *__this_00;
  System_Collections_Generic_Dictionary_string__TeamKDRRow__o *__this_01;
  
  if (Il2CppMethodInitialized_07547e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow);
    il2cpp_codegen_initialize_runtime_metadata(&"Individuals");
    Il2CppMethodInitialized_07547e38 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerKDRRow_ctor);
  (__this->fields)._players = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._players);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_TeamKDRRow_ctor);
  (__this->fields)._teamHeaders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._teamHeaders);
  (__this->fields)._currentSyncDelay = 1.0;
  (__this->fields)._defaultTeam = "Individuals";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultTeam);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KDRPanel$$<ReorganizeLayout>b__14_1
// il2cpp: System_String_o* UI_KDRPanel___ReorganizeLayout_b__14_1 (UI_KDRPanel_o* __this, System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x, const MethodInfo* method);
// 0x5d33b10

System_String_o *
UI_KDRPanel___ReorganizeLayout_b__14_1
          (UI_KDRPanel_o *__this,System_Collections_Generic_KeyValuePair_int__PlayerKDRRow__o x,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  UI_PlayerKDRRow_o *pUVar2;
  UI_PlayerKDRRow_o *extraout_RDX;
  UI_PlayerKDRRow_o *method_00;
  
  pUVar2 = x.fields.value;
  method_00 = pUVar2;
  if (Il2CppMethodInitialized_07547e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_PlayerKDRRow_get_Value);
    Il2CppMethodInitialized_07547e39 = '\x01';
    method_00 = extraout_RDX;
  }
  if (pUVar2 == (UI_PlayerKDRRow_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UI_KDRPanel__GetPlayerTeam
                     (__this,(Photon_Realtime_Player_o *)(pUVar2->fields).player,(MethodInfo *)method_00);
  return pSVar1;
}


