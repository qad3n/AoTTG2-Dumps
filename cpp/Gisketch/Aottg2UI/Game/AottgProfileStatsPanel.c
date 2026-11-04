// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileStatsPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x181e24460

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *rows,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_OpenAll);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear All Records");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.ClearAll");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-all");
    Il2CppMethodInitialized_184344d17 = '\x01';
  }
  __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_OpenAll,
             (MethodInfo_1387DC0 *)0x0);
  if (rows != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_18c6e10
                       (rows,6,"MainMenu.Profile.Stats.ClearAll","Clear All Records",
                        (System_Action_GisketchActionContext__o *)__this_00,"profile-stats-clear-all",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "return",(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       "FlexEnd",(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
                (rows,(__this->fields).stat,(__this->fields).achievements,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass2_0$$<Header>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___Header_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e25180

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___Header_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint32_t record;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184344d18 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (row,(__this->fields).key,(__this->fields).label,"header",
                        (System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                       1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      if ((__this->fields).record.fields.hasValue != false) {
        record = System_Nullable_uint___get_Value
                           ((System_Nullable_uint__o *)&(__this->fields).record,
                            (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_GameStatRecord_get_Value);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton
                  (row,record,(__this->fields).label,(__this->fields).id,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass4_0$$<Stat>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___Stat_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e265b0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___Stat_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool bVar1;
  uint32_t record;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344d19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184344d19 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).key,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (bVar1) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,(__this->fields).label,"subtext",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
    }
    else {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                         (row,(__this->fields).key,(__this->fields).label,"subtext",
                          (System_String_o *)0x0,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar3);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,(__this->fields).value,"header",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar3);
        if ((__this->fields).record.fields.hasValue != false) {
          record = System_Nullable_uint___get_Value
                             ((System_Nullable_uint__o *)&(__this->fields).record,
                              (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_GameStatRecord_get_Value);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton
                    (row,record,(__this->fields).label,(__this->fields).id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass5_0$$<ClearButton>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ClearButton_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e268b0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ClearButton_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  int32_t value;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_Nullable_GameStatRecord__Fields local_res8;
  
  value = (__this->fields).record;
  value_00 = (__this->fields).label;
  __this_01 = (context->fields).GameObject;
  if (Il2CppMethodInitialized_184344d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_ctor);
    Il2CppMethodInitialized_184344d0c = '\x01';
  }
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0;
  System_Data_SqlTypes_SqlInt32___ctor_ae2660
            ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,value,
             MethodInfo_System_Nullable_GameStatRecord_ctor);
  (TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields = local_res8;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label = value_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label,value_00);
  if (Il2CppMethodInitialized_184344d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_184344d10 = '\x01';
  }
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this_01,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this_00,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e201b0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e203ff: mov rax, qword ptr [rip + 0x229d402]  ; "profile-stats-unavailable"
// asm:   0x181e20406: xor ebx, ebx
// asm:   0x181e20408: mov r9, qword ptr [rip + 0x2293211]  ; "Stats are unavailable until game progress is loaded."
// asm:   0x181e2040f: mov edx, 2
// asm:   0x181e20414: mov r8, qword ptr [rip + 0x22dbc15]  ; "MainMenu.Profile.StatsUnavailable"
// asm:   0x181e2041b: mov rcx, rdi
// asm:   0x181e2041e: mov qword ptr [rsp + 0x28], rbx
// asm:   0x181e20423: mov qword ptr [rsp + 0x20], rax
// asm:   0x181e20428: call 0x1818c71d0  ; Gisketch_Aottg2UI_Code_AottgUi__CalloutKey()
// asm:   0x181e2042d: jmp 0x181e203e5

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  GameProgress_GameProgressContainer_o *pGVar1;
  GameProgress_GameStatContainer_o *value;
  GameProgress_AchievementContainer_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *object;
  GameProgress_AchievementCount_o *value_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats are unavailable until game progress is loaded.");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-unavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.StatsUnavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-list");
    Il2CppMethodInitialized_184344d12 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  if (pGVar1 == (GameProgress_GameProgressContainer_o *)0x0) {
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
                (ui,2,"MainMenu.Profile.StatsUnavailable","Stats are unavailable until game progress is loaded.","profile-stats-unavailable",(MethodInfo *)0x0);
      return;
    }
  }
  else if (object != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *)0x0) {
    value = (pGVar1->fields).GameStat;
    (object->fields).stat = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).stat,value);
    __this_00 = (pGVar1->fields).Achievement;
    if (__this_00 != (GameProgress_AchievementContainer_o *)0x0) {
      value_00 = GameProgress_AchievementContainer__GetAchievementCount(__this_00,(MethodInfo *)0x0);
      (object->fields).achievements = value_00;
      Il2CppCodeGenWriteBarrier(&(object->fields).achievements,value_00);
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0_Build_b__0,
                 (MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"default",(System_Action_AottgUi__o *)__this_01,"profile-stats-list",layout
                   ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$BuildRows
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows (Gisketch_Aottg2UI_Code_AottgUi_o* ui, GameProgress_GameStatContainer_o* stat, GameProgress_AchievementCount_o* achievements, const MethodInfo* method);
// 0x181e1f510
// eh: try 0x181e1fc00..0x181e201a0 -> pad 0x18333c710 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1fbf9: nop dword ptr [rax]
// asm:   0x181e1fcdb: mov r8, qword ptr [rsp + 0x58]
// asm:   0x181e1fce0: cmp qword ptr [r8], 0
// asm:   0x181e1fce4: je 0x181e1fcf7
// asm:   0x181e1fce6: xor ecx, ecx
// asm:   0x181e1fce8: mov r8, qword ptr [r8]
// asm:   0x181e1fceb: mov rdx, qword ptr [rip + 0x227960e]  ; TypeInfo_System_IDisposable
// asm:   0x181e1fcf2: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e1fcf7: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e1fcfc: test rcx, rcx
// asm:   0x181e1fcff: jne 0x181e201a0
// asm:   0x181e1fd05: xor ebx, ebx
// asm:   0x181e1fd07: mov r15, qword ptr [rsp + 0xc8]
// asm:   0x181e1fd0f: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x181e201a0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c710: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c715: push rbp
// asm:   0x18333c716: sub rsp, 0x40
// asm:   0x18333c71a: mov rbp, rdx
// asm:   0x18333c71d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x18333c724: mov rcx, qword ptr [rax]
// asm:   0x18333c727: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333c72b: movabs rax, 0
// asm:   0x18333c735: add rsp, 0x40
// asm:   0x18333c739: pop rbp
// asm:   0x18333c73a: ret 

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,GameProgress_GameStatContainer_o *stat,
               GameProgress_AchievementCount_o *achievements,MethodInfo *method)

{
  float fVar1;
  ushort uVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  GameProgress_DamageSetting_o *__this;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_TimeSpan_o ts;
  Il2CppObject *pIVar9;
  void *pvVar10;
  VirtualInvokeData *pVVar11;
  undefined8 *puVar12;
  ushort uVar13;
  System_Nullable_GameStatRecord__Fields local_res8;
  System_Nullable_GameStatRecord__Fields local_res10;
  int32_t local_78 [2];
  Il2CppObject *local_70;
  System_Nullable_GameStatRecord__Fields local_68;
  Il2CppObject **local_60;
  System_Nullable_GameStatRecord__Fields local_58;
  System_Nullable_GameStatRecord__Fields local_50;
  System_Nullable_GameStatRecord__Fields local_48;
  System_Nullable_GameStatRecord__Fields local_40 [5];
  
  local_res8 = (System_Nullable_GameStatRecord__Fields)ui;
  local_res10 = (System_Nullable_GameStatRecord__Fields)stat;
  if (Il2CppMethodInitialized_184344d13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"highest-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.TitansKilled");
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Playtime");
    il2cpp_codegen_initialize_runtime_metadata(&"Other");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.HighestSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"humans-killed");
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Level");
    il2cpp_codegen_initialize_runtime_metadata(&"DAMAGE");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"ACHIEVEMENTS");
    il2cpp_codegen_initialize_runtime_metadata(&"damage");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Playtime");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder Spear");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Other");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"level");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.General");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Level");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.ThunderSpear");
    il2cpp_codegen_initialize_runtime_metadata(&"playtime");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Total");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"titans-killed");
    il2cpp_codegen_initialize_runtime_metadata(&"GENERAL");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.HumansKilled");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"HUMANS KILLED");
    il2cpp_codegen_initialize_runtime_metadata(&"exp");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Achievements");
    il2cpp_codegen_initialize_runtime_metadata(&"TITANS KILLED");
    Il2CppMethodInitialized_184344d13 = '\x01';
  }
  local_78[0] = 0;
  local_70 = (Il2CppObject *)0x0;
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
            (ui,"MainMenu.Profile.Stats.General","GENERAL",(System_Nullable_GameStatRecord__o)0x0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  if ((stat != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar3 = (stat->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    local_78[0] = (pSVar3->fields)._value;
    pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
    local_58.hasValue = false;
    local_58._1_3_ = 0;
    local_58.value = 0;
    System_Data_SqlTypes_SqlInt32___ctor_ae2660
              ((System_Data_SqlTypes_SqlInt32_o *)&local_58,0,MethodInfo_System_Nullable_GameStatRecord_ctor);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
              (ui,"MainMenu.Profile.Stats.Level","Level",pSVar7,
               (System_Nullable_GameStatRecord__o)local_58,"level",(MethodInfo *)0x0);
    pSVar3 = (stat->fields).Exp;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      local_78[0] = (pSVar3->fields)._value;
      pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
      if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
      }
      local_78[0] = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
      pSVar8 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969b70(pSVar7,"/",pSVar8,(MethodInfo *)0x0);
      local_50.hasValue = false;
      local_50._1_3_ = 0;
      local_50.value = 0;
      System_Data_SqlTypes_SqlInt32___ctor_ae2660
                ((System_Data_SqlTypes_SqlInt32_o *)&local_50,1,MethodInfo_System_Nullable_GameStatRecord_ctor
                );
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                (ui,"MainMenu.Profile.Stats.Exp","Exp",pSVar7,
                 (System_Nullable_GameStatRecord__o)local_50,"exp",(MethodInfo *)0x0);
      pSVar4 = (stat->fields).PlayTime;
      if (pSVar4 != (Settings_FloatSetting_o *)0x0) {
        fVar1 = (pSVar4->fields)._value;
        if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
        }
        ts = System_TimeSpan__FromSeconds((double)fVar1,(MethodInfo *)0x0);
        pSVar7 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value = 0;
        System_Data_SqlTypes_SqlInt32___ctor_ae2660
                  ((System_Data_SqlTypes_SqlInt32_o *)&local_48,2,
                   MethodInfo_System_Nullable_GameStatRecord_ctor);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                  (ui,"MainMenu.Profile.Stats.Playtime","Playtime",pSVar7,
                   (System_Nullable_GameStatRecord__o)local_48,"playtime",(MethodInfo *)0x0);
        pSVar4 = (stat->fields).HighestSpeed;
        if (pSVar4 != (Settings_FloatSetting_o *)0x0) {
          local_78[0] = (int32_t)(pSVar4->fields)._value;
          pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
          local_40[0].hasValue = false;
          local_40[0]._1_3_ = 0;
          local_40[0].value = 0;
          System_Data_SqlTypes_SqlInt32___ctor_ae2660
                    ((System_Data_SqlTypes_SqlInt32_o *)local_40,3,
                     MethodInfo_System_Nullable_GameStatRecord_ctor);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                    (ui,"MainMenu.Profile.Stats.HighestSpeed","Highest Speed",pSVar7,
                     (System_Nullable_GameStatRecord__o)local_40[0],"highest-speed",(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                    (ui,"Common.Achievements","ACHIEVEMENTS",(System_Nullable_GameStatRecord__o)0x0,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
          if (achievements != (GameProgress_AchievementCount_o *)0x0) {
            pSVar7 = System_Int32__ToString(&(achievements->fields).FinishedBronze,(MethodInfo *)0x0);
            pSVar8 = System_Int32__ToString(&(achievements->fields).TotalBronze,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_1969b70(pSVar7,"/",pSVar8,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                      (ui,"MainMenu.Profile.Stats.Bronze","Bronze",pSVar7,
                       (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar7 = System_Int32__ToString(&(achievements->fields).FinishedSilver,(MethodInfo *)0x0);
            pSVar8 = System_Int32__ToString(&(achievements->fields).TotalSilver,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_1969b70(pSVar7,"/",pSVar8,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                      (ui,"MainMenu.Profile.Stats.Silver","Silver",pSVar7,
                       (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar7 = System_Int32__ToString(&(achievements->fields).FinishedGold,(MethodInfo *)0x0);
            pSVar8 = System_Int32__ToString(&(achievements->fields).TotalGold,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_1969b70(pSVar7,"/",pSVar8,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                      (ui,"MainMenu.Profile.Stats.Gold","Gold",pSVar7,
                       (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
            local_68.hasValue = false;
            local_68._1_3_ = 0;
            local_68.value = 0;
            System_Data_SqlTypes_SqlInt32___ctor_ae2660
                      ((System_Data_SqlTypes_SqlInt32_o *)&local_68,4,
                       MethodInfo_System_Nullable_GameStatRecord_ctor);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                      (ui,"MainMenu.Profile.Stats.Damage","DAMAGE",
                       (System_Nullable_GameStatRecord__o)local_68,"damage",(MethodInfo *)0x0);
            __this = (stat->fields).Damage;
            if (__this != (GameProgress_DamageSetting_o *)0x0) {
              pIVar9 = (Il2CppObject *)GameProgress_DamageSetting__GetStatLabels(__this,(MethodInfo *)0x0);
              if (pIVar9 != (Il2CppObject *)0x0) {
                local_70 = InterfaceInvoker0_Invoke
                                     (0,(Il2CppClass *)
                                        TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_string_string
                                      ,pIVar9);
                local_68.hasValue = false;
                local_68._1_3_ = 0;
                local_68.value = 0;
                local_60 = &local_70;
                do {
                  if (local_70 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pvVar10 = InterfaceInvoker0_Invoke
                                      (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_70);
                  pIVar9 = local_70;
                  if ((char)pvVar10 == '\0') {
                    if (local_70 != (Il2CppObject *)0x0) {
                      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_70);
                    }
                    local_res10.hasValue = false;
                    local_res10._1_3_ = 0;
                    local_res10.value = 0;
                    System_Data_SqlTypes_SqlInt32___ctor_ae2660
                              ((System_Data_SqlTypes_SqlInt32_o *)&local_res10,5,
                               MethodInfo_System_Nullable_GameStatRecord_ctor);
                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                              (ui,"MainMenu.Profile.Stats.TitansKilled","TITANS KILLED",
                               (System_Nullable_GameStatRecord__o)local_res10,"titans-killed",
                               (MethodInfo *)0x0);
                    pSVar3 = (stat->fields).TitansKilledTotal;
                    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                      local_78[0] = (pSVar3->fields)._value;
                      pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                (ui,"MainMenu.Profile.Stats.Total","Total",pSVar7,
                                 (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                 (MethodInfo *)0x0);
                      pSVar3 = (stat->fields).TitansKilledBlade;
                      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                        local_78[0] = (pSVar3->fields)._value;
                        pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                  (ui,"MainMenu.Profile.Stats.Blade","Blade",pSVar7,
                                   (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                   (MethodInfo *)0x0);
                        pSVar3 = (stat->fields).TitansKilledAHSS;
                        if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                          local_78[0] = (pSVar3->fields)._value;
                          pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                    (ui,"MainMenu.Profile.Stats.AHSS","AHSS",pSVar7,
                                     (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar3 = (stat->fields).TitansKilledAPG;
                          if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                            local_78[0] = (pSVar3->fields)._value;
                            pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                      (ui,"MainMenu.Profile.Stats.APG","APG",pSVar7,
                                       (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                       (MethodInfo *)0x0);
                            pSVar3 = (stat->fields).TitansKilledThunderspear;
                            if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                              local_78[0] = (pSVar3->fields)._value;
                              pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                        (ui,"MainMenu.Profile.Stats.ThunderSpear","Thunder Spear",pSVar7,
                                         (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                         (MethodInfo *)0x0);
                              pSVar3 = (stat->fields).TitansKilledOther;
                              if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                local_78[0] = (pSVar3->fields)._value;
                                pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                          (ui,"MainMenu.Profile.Stats.Other","Other",pSVar7,
                                           (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                           (MethodInfo *)0x0);
                                local_res8.hasValue = false;
                                local_res8._1_3_ = 0;
                                local_res8.value = 0;
                                System_Data_SqlTypes_SqlInt32___ctor_ae2660
                                          ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,6,
                                           MethodInfo_System_Nullable_GameStatRecord_ctor);
                                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                                          (ui,"MainMenu.Profile.Stats.HumansKilled","HUMANS KILLED",
                                           (System_Nullable_GameStatRecord__o)local_res8,"humans-killed"
                                           ,(MethodInfo *)0x0);
                                pSVar3 = (stat->fields).HumansKilledTotal;
                                if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                  local_78[0] = (pSVar3->fields)._value;
                                  pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                            (ui,"MainMenu.Profile.Stats.Total","Total",pSVar7,
                                             (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                             (MethodInfo *)0x0);
                                  pSVar3 = (stat->fields).HumansKilledBlade;
                                  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                    local_78[0] = (pSVar3->fields)._value;
                                    pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                              (ui,"MainMenu.Profile.Stats.Blade","Blade",pSVar7,
                                               (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                                               (MethodInfo *)0x0);
                                    pSVar3 = (stat->fields).HumansKilledAHSS;
                                    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                      local_78[0] = (pSVar3->fields)._value;
                                      pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                                (ui,"MainMenu.Profile.Stats.AHSS","AHSS",pSVar7,
                                                 (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0
                                                 ,(MethodInfo *)0x0);
                                      pSVar3 = (stat->fields).HumansKilledAPG;
                                      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                        local_78[0] = (pSVar3->fields)._value;
                                        pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                                  (ui,"MainMenu.Profile.Stats.APG","APG",pSVar7,
                                                   (System_Nullable_GameStatRecord__o)0x0,
                                                   (System_String_o *)0x0,(MethodInfo *)0x0);
                                        pSVar3 = (stat->fields).HumansKilledThunderspear;
                                        if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                          local_78[0] = (pSVar3->fields)._value;
                                          pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                                    (ui,"MainMenu.Profile.Stats.ThunderSpear","Thunder Spear",pSVar7,
                                                     (System_Nullable_GameStatRecord__o)0x0,
                                                     (System_String_o *)0x0,(MethodInfo *)0x0);
                                          pSVar3 = (stat->fields).HumansKilledTitan;
                                          if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                            local_78[0] = (pSVar3->fields)._value;
                                            pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                                      (ui,"Common.Titan","Titan",pSVar7,
                                                       (System_Nullable_GameStatRecord__o)0x0,
                                                       (System_String_o *)0x0,(MethodInfo *)0x0);
                                            pSVar3 = (stat->fields).HumansKilledOther;
                                            if (pSVar3 != (Settings_IntSetting_o *)0x0) {
                                              local_78[0] = (pSVar3->fields)._value;
                                              pSVar7 = System_Int32__ToString(local_78,(MethodInfo *)0x0);
                                              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                                                        (ui,"MainMenu.Profile.Stats.Other","Other",pSVar7
                                                         ,(System_Nullable_GameStatRecord__o)0x0,
                                                         (System_String_o *)0x0,(MethodInfo *)0x0);
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
                    ThrowNullReferenceException();
                  }
                  if (local_70 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar5 = local_70->klass;
                  uVar2 = (pIVar5->_2).interface_offsets_count;
                  uVar13 = 0;
                  if (uVar2 != 0) {
                    pIVar6 = (pIVar5->_1).interfaceOffsets;
                    do {
                      if (pIVar6[uVar13].interfaceType ==
                          (Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string) {
                        pVVar11 = pIVar5->vtable + pIVar6[uVar13].offset;
                        goto label_181e1fc75;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar2);
                  }
                  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_70,(Il2CppClass *)
                                                TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string
                                       ,0);
label_181e1fc75:
                  puVar12 = (undefined8 *)(*pVVar11->methodPtr)(local_40,pIVar9,pVVar11->method);
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
                            (ui,(System_String_o *)0x0,(System_String_o *)*puVar12,
                             (System_String_o *)puVar12[1],(System_Nullable_GameStatRecord__o)0x0,
                             (System_String_o *)0x0,(MethodInfo *)0x0);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Header
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* label, System_Nullable_GameStatRecord__o record, System_String_o* id, const MethodInfo* method);
// 0x181e20690

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *label,
               System_Nullable_GameStatRecord__o record,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0_Header_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_184344d14 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *)0x0) {
    (object->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(object->fields).key,key);
    (object->fields).label = label;
    Il2CppCodeGenWriteBarrier(&(object->fields).label,label);
    (object->fields).id = id;
    (object->fields).record.fields = record.fields;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0_Header_b__0,
               (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"row",(System_Action_AottgUi__o *)__this,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* value, const MethodInfo* method);
// 0x181e20890

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
            (ui,(System_String_o *)0x0,label,value,(System_Nullable_GameStatRecord__o)0x0,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* label, System_String_o* value, System_Nullable_GameStatRecord__o record, System_String_o* id, const MethodInfo* method);
// 0x181e208c0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_1e208c0
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *label,
               System_String_o *value,System_Nullable_GameStatRecord__o record,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0_Stat_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_184344d15 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *)0x0) {
    (object->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(object->fields).key,key);
    (object->fields).label = label;
    Il2CppCodeGenWriteBarrier(&(object->fields).label,label);
    (object->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,value);
    (object->fields).record.fields = record.fields;
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0_Stat_b__0
               ,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,16.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"row",(System_Action_AottgUi__o *)__this,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$ClearButton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t record, System_String_o* label, System_String_o* id, const MethodInfo* method);
// 0x181e20440

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t record,System_String_o *label,System_String_o *id
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *object;
  DG_Tweening_Core_DOSetter_Color2__o *__this;
  System_String_o *id_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0_ClearButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&" record");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear ");
    Il2CppMethodInitialized_184344d16 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *)0x0) {
    (object->fields).record = record;
    (object->fields).label = label;
    Il2CppCodeGenWriteBarrier(&(object->fields).label,label);
    __this = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0_ClearButton_b__0,
               (MethodInfo_1387DC0 *)0x0);
    id_00 = System_String__Concat_1969e50("profile-stats-clear-",id,(MethodInfo *)0x0);
    pSVar1 = (object->fields).label;
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_1969b70
                         ("Clear ",pSVar1," record",(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                           (ui,3,"return",(System_Action_GisketchActionContext__o *)__this,id_00,
                            pSVar1,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
        ;
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
        value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).layout = value;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor(Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


