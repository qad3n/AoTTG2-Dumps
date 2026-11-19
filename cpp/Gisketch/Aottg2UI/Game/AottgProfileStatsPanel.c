// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfileStatsPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, const MethodInfo* method);
// 0x590a410

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass0_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* rows, const MethodInfo* method);
// 0x590bc40

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *rows,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754568d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_OpenAll);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.ClearAll");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-all");
    Il2CppMethodInitialized_0754568d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_OpenAll,
             (MethodInfo_4A803E0 *)0x0);
  if (rows != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                       (rows,6,"MainMenu.Profile.Stats.ClearAll",__this_00,"profile-stats-clear-all",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    method_00 = (MethodInfo *)"FlexEnd";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        "FlexEnd",(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
                (rows,(__this->fields).stat,(__this->fields).achievements,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x590b9c0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass2_0$$<Header>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___Header_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x590bdf0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0___Header_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t record;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754568e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_0754568e = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (row,(__this->fields).key,"header",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      if ((__this->fields).record.fields.hasValue == false) {
        return;
      }
      record = System_Nullable_Int32Enum___get_Value
                         ((System_Nullable_Int32Enum__o *)&(__this->fields).record,
                          (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_GameStatRecord_get_Value);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton
                (row,record,(pGVar1->fields).text,(__this->fields).id,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x590b9d0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass4_0$$<Stat>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___Stat_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x590bf60

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0___Stat_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int32_t record;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754568f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_0754568f = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,(__this->fields).label,"subtext",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = (__this->fields).key;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (row,(__this->fields).value,"header",(System_String_o *)0x0,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
        if ((__this->fields).record.fields.hasValue == false) {
          return;
        }
        record = System_Nullable_Int32Enum___get_Value
                           ((System_Nullable_Int32Enum__o *)&(__this->fields).record,
                            (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_GameStatRecord_get_Value);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton
                  (row,record,(__this->fields).label,(__this->fields).id,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x590bc30

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel.<>c__DisplayClass5_0$$<ClearButton>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ClearButton_b__0 (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x590c1b0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0___ClearButton_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Open
            (context,(__this->fields).record,(__this->fields).label,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x590a1a0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  GameProgress_GameProgressContainer_o *pGVar1;
  GameProgress_AchievementContainer_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *__this_01;
  GameProgress_AchievementCount_o *pGVar2;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545687 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-unavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.StatsUnavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-list");
    Il2CppMethodInitialized_07545687 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  else {
    pGVar1 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  }
  if (pGVar1 == (GameProgress_GameProgressContainer_o *)0x0) {
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
                (ui,2,"MainMenu.Profile.StatsUnavailable","profile-stats-unavailable",(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_01 != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass0_0_o *)0x0) {
    (__this_01->fields).stat = (pGVar1->fields).GameStat;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).stat);
    __this_00 = (pGVar1->fields).Achievement;
    if (__this_00 != (GameProgress_AchievementContainer_o *)0x0) {
      pGVar2 = GameProgress_AchievementContainer__GetAchievementCount(__this_00,(MethodInfo *)0x0);
      (__this_01->fields).achievements = pGVar2;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).achievements);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_01,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass0_0_Build_b__0,
                 (MethodInfo_4A81BE0 *)0x0);
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
                  (ui,"default",__this_02,"profile-stats-list",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$BuildRows
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows (Gisketch_Aottg2UI_Code_AottgUi_o* ui, GameProgress_GameStatContainer_o* stat, GameProgress_AchievementCount_o* achievements, const MethodInfo* method);
// 0x590a420
// eh: try 0x590ac8f..0x590ad51 -> pad 0x590ad61 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x590ad7d..0x590ad82 -> pad 0x590b560 cleanup
// eh: try 0x590b563..0x590b56d -> pad 0x590b575 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x590ac7e: nop 
// asm:   0x590aced: nop dword ptr [rax]
// asm:   0x590ad51: jmp 0x590ad61
// asm:   0x590ad53: jmp 0x590ad55
// asm:   0x590ad55: mov rbx, rax
// asm:   0x590ad58: mov r13, qword ptr [rsp + 0x10]
// asm:   0x590ad5d: jmp 0x590ad64
// asm:   0x590ad5f: jmp 0x590ad61
// asm:   0x590ad61: mov rbx, rax
// asm:   0x590ad64: cmp edx, 1
// asm:   0x590ad67: jne 0x590b563
// asm:   0x590ad6d: mov rdi, rbx
// asm:   0x590ad70: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x590ad75: mov r15, qword ptr [rax]
// asm:   0x590ad78: mov qword ptr [rsp + 0x28], r15
// asm:   0x590ad7d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x590b558: mov rdi, r15
// asm:   0x590b55b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x590b560: mov rbx, rax
// asm:   0x590b563: lea rdi, [rsp + 0x28]
// asm:   0x590b568: call 0x2fd19c0  ; il2cpp_runtime_helper_02fd19c0()
// asm:   0x590b56d: mov rdi, rbx
// asm:   0x590b570: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x590b575: mov rdi, rax
// asm:   0x590b578: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__BuildRows
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,GameProgress_GameStatContainer_o *stat,
               GameProgress_AchievementCount_o *achievements,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  GameProgress_DamageSetting_o *__this;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  GameProgress_GameStatContainer_o *pGVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_TimeSpan_o ts;
  Il2CppObject *pIVar11;
  VirtualInvokeData *pVVar12;
  ulong uVar13;
  long lVar14;
  MethodInfo *in_R8;
  System_Nullable_GameStatRecord__Fields SVar15;
  MethodInfo *pMVar16;
  float fVar17;
  undefined1 auVar18 [16];
  MethodInfo *in_stack_ffffffffffffff78;
  int32_t iStack_7c;
  GameProgress_GameStatContainer_o *pGStack_78;
  System_Nullable_GameStatRecord__Fields SStack_70;
  Il2CppObject *pIStack_68;
  System_Nullable_GameStatRecord__Fields SStack_60;
  Il2CppObject **ppIStack_58;
  float fStack_4c;
  System_Nullable_GameStatRecord__Fields SStack_48;
  System_Nullable_GameStatRecord__Fields SStack_40;
  System_Nullable_GameStatRecord__Fields SStack_38;
  
  if (Il2CppMethodInitialized_07545688 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"highest-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.APG");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.TitansKilled");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Playtime");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.HighestSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"humans-killed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Level");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"damage");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Other");
    il2cpp_codegen_initialize_runtime_metadata(&"level");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.General");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.ThunderSpear");
    il2cpp_codegen_initialize_runtime_metadata(&"playtime");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Total");
    il2cpp_codegen_initialize_runtime_metadata(&"titans-killed");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.HumansKilled");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"exp");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Achievements");
    Il2CppMethodInitialized_07545688 = '\x01';
  }
  pIStack_68 = (Il2CppObject *)0x0;
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
            (ui,"MainMenu.Profile.Stats.General",(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,in_R8);
  if ((stat != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar1 = (stat->fields).Level, pGStack_78 = stat, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    iStack_7c = (pSVar1->fields)._value;
    pSVar7 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
    SStack_60.hasValue = false;
    SStack_60._1_3_ = 0;
    SStack_60.value = 0;
    System_Nullable_Int32Enum____ctor
              ((System_Nullable_Int32Enum__o *)&SStack_60,0,
               (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
    SVar15 = SStack_60;
    pSVar10 = "level";
    pSVar9 = "MainMenu.Profile.Stats.Level";
    if (Il2CppMethodInitialized_0754568a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_0754568a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
              (ui,pSVar9,pSVar8,pSVar7,(System_Nullable_GameStatRecord__o)SVar15,pSVar10,
               in_stack_ffffffffffffff78);
    pSVar1 = (pGStack_78->fields).Exp;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      iStack_7c = (pSVar1->fields)._value;
      pSVar9 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
      if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
      }
      iStack_7c = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
      pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_5301f10(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
      SStack_70.hasValue = false;
      SStack_70._1_3_ = 0;
      SStack_70.value = 0;
      System_Nullable_Int32Enum____ctor
                ((System_Nullable_Int32Enum__o *)&SStack_70,1,
                 (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
      SVar15 = SStack_70;
      pSVar10 = "exp";
      pSVar9 = "MainMenu.Profile.Stats.Exp";
      if (Il2CppMethodInitialized_0754568a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_0754568a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                (ui,pSVar9,pSVar8,pSVar7,(System_Nullable_GameStatRecord__o)SVar15,pSVar10,
                 in_stack_ffffffffffffff78);
      pSVar2 = (pGStack_78->fields).PlayTime;
      if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
        fVar17 = (pSVar2->fields)._value;
        if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
          fStack_4c = fVar17;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
          fVar17 = fStack_4c;
        }
        ts = System_TimeSpan__FromSeconds((double)fVar17,(MethodInfo *)0x0);
        pSVar7 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
        SStack_38.hasValue = false;
        SStack_38._1_3_ = 0;
        SStack_38.value = 0;
        System_Nullable_Int32Enum____ctor
                  ((System_Nullable_Int32Enum__o *)&SStack_38,2,
                   (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
        SVar15 = SStack_38;
        pSVar10 = "playtime";
        pSVar9 = "MainMenu.Profile.Stats.Playtime";
        if (Il2CppMethodInitialized_0754568a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          Il2CppMethodInitialized_0754568a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                  (ui,pSVar9,pSVar8,pSVar7,(System_Nullable_GameStatRecord__o)SVar15,pSVar10,
                   in_stack_ffffffffffffff78);
        pSVar2 = (pGStack_78->fields).HighestSpeed;
        if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
          iStack_7c = (int32_t)(pSVar2->fields)._value;
          pSVar7 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
          SStack_40.hasValue = false;
          SStack_40._1_3_ = 0;
          SStack_40.value = 0;
          System_Nullable_Int32Enum____ctor
                    ((System_Nullable_Int32Enum__o *)&SStack_40,3,
                     (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
          SVar15 = SStack_40;
          pSVar10 = "highest-speed";
          pSVar9 = "MainMenu.Profile.Stats.HighestSpeed";
          if (Il2CppMethodInitialized_0754568a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            Il2CppMethodInitialized_0754568a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                    (ui,pSVar9,pSVar8,pSVar7,(System_Nullable_GameStatRecord__o)SVar15,pSVar10,
                     in_stack_ffffffffffffff78);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                    (ui,"Common.Achievements",(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                     (MethodInfo *)SVar15);
          if (achievements != (GameProgress_AchievementCount_o *)0x0) {
            pSVar9 = System_Int32__ToString(&(achievements->fields).FinishedBronze,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString(&(achievements->fields).TotalBronze,(MethodInfo *)0x0);
            pSVar10 = System_String__Concat_5301f10(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
            pGVar5 = pGStack_78;
            pSVar9 = "MainMenu.Profile.Stats.Bronze";
            if (Il2CppMethodInitialized_0754568a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              Il2CppMethodInitialized_0754568a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            }
            pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                      (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                       in_stack_ffffffffffffff78);
            pSVar9 = System_Int32__ToString(&(achievements->fields).FinishedSilver,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString(&(achievements->fields).TotalSilver,(MethodInfo *)0x0);
            pSVar10 = System_String__Concat_5301f10(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
            pSVar9 = "MainMenu.Profile.Stats.Silver";
            if (Il2CppMethodInitialized_0754568a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              Il2CppMethodInitialized_0754568a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            }
            pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                      (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                       in_stack_ffffffffffffff78);
            pSVar9 = System_Int32__ToString(&(achievements->fields).FinishedGold,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString(&(achievements->fields).TotalGold,(MethodInfo *)0x0);
            pSVar10 = System_String__Concat_5301f10(pSVar9,"/",pSVar10,(MethodInfo *)0x0);
            pSVar9 = "MainMenu.Profile.Stats.Gold";
            if (Il2CppMethodInitialized_0754568a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              Il2CppMethodInitialized_0754568a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            }
            pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
            pMVar16 = (MethodInfo *)0x0;
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                      (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                       in_stack_ffffffffffffff78);
            SStack_48.hasValue = false;
            SStack_48._1_3_ = 0;
            SStack_48.value = 0;
            System_Nullable_Int32Enum____ctor
                      ((System_Nullable_Int32Enum__o *)&SStack_48,4,
                       (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                      (ui,"MainMenu.Profile.Stats.Damage",(System_Nullable_GameStatRecord__o)SStack_48,
                       "damage",pMVar16);
            __this = (pGVar5->fields).Damage;
            if ((__this != (GameProgress_DamageSetting_o *)0x0) &&
               (pIVar11 = (Il2CppObject *)GameProgress_DamageSetting__GetStatLabels(__this,(MethodInfo *)0x0),
               pIVar11 != (Il2CppObject *)0x0)) {
              pIVar3 = pIVar11->klass;
              uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
              if (uVar13 != 0) {
                pIVar4 = (pIVar3->_1).interfaceOffsets;
                lVar14 = 0;
                do {
                  if (*(System_Collections_Generic_IEnumerable_ValueTuple_string__string___c **)
                       ((long)&pIVar4->interfaceType + lVar14) ==
                      TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_string_string) {
                    pVVar12 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
                    goto label_0590ac11;
                  }
                  lVar14 = lVar14 + 0x10;
                } while (uVar13 * 0x10 != lVar14);
              }
              pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar11,(Il2CppClass *)
                                           TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_string_string
                                   ,0);
label_0590ac11:
              pIStack_68 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
              SStack_60.hasValue = false;
              SStack_60._1_3_ = 0;
              SStack_60.value = 0;
              ppIStack_58 = &pIStack_68;
              do {
                pIVar11 = pIStack_68;
                if (pIStack_68 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar3 = pIStack_68->klass;
                uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
                if (uVar13 != 0) {
                  pIVar4 = (pIVar3->_1).interfaceOffsets;
                  lVar14 = 0;
                  do {
                    if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
                        TypeInfo_System_Collections_IEnumerator) {
                      pVVar12 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
                      goto label_0590acb3;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while (uVar13 * 0x10 != lVar14);
                }
                pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIStack_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0590acb3:
                bVar6 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
                pIVar11 = pIStack_68;
                if (!bVar6) {
                  if (pIStack_68 == (Il2CppObject *)0x0) goto label_0590adf6;
                  pIVar3 = pIStack_68->klass;
                  uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
                  if (uVar13 == 0) goto label_0590adcf;
                  pIVar4 = (pIVar3->_1).interfaceOffsets;
                  lVar14 = 0;
                  goto label_0590adc0;
                }
                if (pIStack_68 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar3 = pIStack_68->klass;
                uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
                if (uVar13 != 0) {
                  pIVar4 = (pIVar3->_1).interfaceOffsets;
                  lVar14 = 0;
                  do {
                    if (*(System_Collections_Generic_IEnumerator_ValueTuple_string__string___c **)
                         ((long)&pIVar4->interfaceType + lVar14) ==
                        TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string) {
                      pVVar12 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
                      goto label_0590ad23;
                    }
                    lVar14 = lVar14 + 0x10;
                  } while (uVar13 * 0x10 != lVar14);
                }
                pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIStack_68,
                                     (Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string,
                                     0);
label_0590ad23:
                auVar18 = (*pVVar12->methodPtr)(pIVar11);
                pMVar16 = (MethodInfo *)0x0;
                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                          (ui,(System_String_o *)0x0,auVar18._0_8_,auVar18._8_8_,
                           (System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                           in_stack_ffffffffffffff78);
              } while( true );
            }
          }
        }
      }
    }
  }
  goto label_0590b553;
  while (lVar14 = lVar14 + 0x10, uVar13 * 0x10 != lVar14) {
label_0590adc0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar12 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
      goto label_0590aded;
    }
  }
label_0590adcf:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_68,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0590aded:
  (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
label_0590adf6:
  SStack_60.hasValue = false;
  SStack_60._1_3_ = 0;
  SStack_60.value = 0;
  System_Nullable_Int32Enum____ctor
            ((System_Nullable_Int32Enum__o *)&SStack_60,5,
             (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
            (ui,"MainMenu.Profile.Stats.TitansKilled",(System_Nullable_GameStatRecord__o)SStack_60,"titans-killed",
             pMVar16);
  pSVar1 = (pGVar5->fields).TitansKilledTotal;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    iStack_7c = (pSVar1->fields)._value;
    pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
    pSVar9 = "MainMenu.Profile.Stats.Total";
    if (Il2CppMethodInitialized_0754568a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_0754568a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
              (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
               in_stack_ffffffffffffff78);
    pSVar1 = (pGVar5->fields).TitansKilledBlade;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      iStack_7c = (pSVar1->fields)._value;
      pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
      pSVar9 = "MainMenu.Profile.Stats.Blade";
      if (Il2CppMethodInitialized_0754568a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_0754568a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                 in_stack_ffffffffffffff78);
      pSVar1 = (pGVar5->fields).TitansKilledAHSS;
      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
        iStack_7c = (pSVar1->fields)._value;
        pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
        pSVar9 = "MainMenu.Profile.Stats.AHSS";
        if (Il2CppMethodInitialized_0754568a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          Il2CppMethodInitialized_0754568a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                  (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                   in_stack_ffffffffffffff78);
        pSVar1 = (pGVar5->fields).TitansKilledAPG;
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          iStack_7c = (pSVar1->fields)._value;
          pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
          pSVar9 = "MainMenu.Profile.Stats.APG";
          if (Il2CppMethodInitialized_0754568a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            Il2CppMethodInitialized_0754568a = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          }
          pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                    (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                     in_stack_ffffffffffffff78);
          pSVar1 = (pGVar5->fields).TitansKilledThunderspear;
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            iStack_7c = (pSVar1->fields)._value;
            pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
            pSVar9 = "MainMenu.Profile.Stats.ThunderSpear";
            if (Il2CppMethodInitialized_0754568a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              Il2CppMethodInitialized_0754568a = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
            }
            pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                      (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,(System_String_o *)0x0,
                       in_stack_ffffffffffffff78);
            pSVar1 = (pGStack_78->fields).TitansKilledOther;
            if (pSVar1 != (Settings_IntSetting_o *)0x0) {
              iStack_7c = (pSVar1->fields)._value;
              pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
              pSVar9 = "MainMenu.Profile.Stats.Other";
              if (Il2CppMethodInitialized_0754568a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                Il2CppMethodInitialized_0754568a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              }
              pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
              pMVar16 = (MethodInfo *)0x0;
              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                        (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                         (System_String_o *)0x0,in_stack_ffffffffffffff78);
              SStack_70.hasValue = false;
              SStack_70._1_3_ = 0;
              SStack_70.value = 0;
              System_Nullable_Int32Enum____ctor
                        ((System_Nullable_Int32Enum__o *)&SStack_70,6,
                         (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
              Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
                        (ui,"MainMenu.Profile.Stats.HumansKilled",(System_Nullable_GameStatRecord__o)SStack_70,
                         "humans-killed",pMVar16);
              pSVar1 = (pGStack_78->fields).HumansKilledTotal;
              if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                iStack_7c = (pSVar1->fields)._value;
                pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                pSVar9 = "MainMenu.Profile.Stats.Total";
                if (Il2CppMethodInitialized_0754568a == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                  Il2CppMethodInitialized_0754568a = '\x01';
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                }
                pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                          (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                           (System_String_o *)0x0,in_stack_ffffffffffffff78);
                pSVar1 = (pGStack_78->fields).HumansKilledBlade;
                if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                  iStack_7c = (pSVar1->fields)._value;
                  pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                  pSVar9 = "MainMenu.Profile.Stats.Blade";
                  if (Il2CppMethodInitialized_0754568a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                    Il2CppMethodInitialized_0754568a = '\x01';
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                  }
                  pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar9,(MethodInfo *)0x0)
                  ;
                  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                            (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                             (System_String_o *)0x0,in_stack_ffffffffffffff78);
                  pSVar1 = (pGStack_78->fields).HumansKilledAHSS;
                  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                    iStack_7c = (pSVar1->fields)._value;
                    pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                    pSVar9 = "MainMenu.Profile.Stats.AHSS";
                    if (Il2CppMethodInitialized_0754568a == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                      Il2CppMethodInitialized_0754568a = '\x01';
                    }
                    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                    }
                    pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                       (pSVar9,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                              (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                               (System_String_o *)0x0,in_stack_ffffffffffffff78);
                    pSVar1 = (pGStack_78->fields).HumansKilledAPG;
                    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                      iStack_7c = (pSVar1->fields)._value;
                      pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                      pSVar9 = "MainMenu.Profile.Stats.APG";
                      if (Il2CppMethodInitialized_0754568a == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                        Il2CppMethodInitialized_0754568a = '\x01';
                      }
                      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale
                                  );
                      }
                      pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                         (pSVar9,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                                (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                                 (System_String_o *)0x0,in_stack_ffffffffffffff78);
                      pSVar1 = (pGStack_78->fields).HumansKilledThunderspear;
                      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                        iStack_7c = (pSVar1->fields)._value;
                        pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                        pSVar9 = "MainMenu.Profile.Stats.ThunderSpear";
                        if (Il2CppMethodInitialized_0754568a == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                          Il2CppMethodInitialized_0754568a = '\x01';
                        }
                        pGVar5 = pGStack_78;
                        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                        }
                        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                           (pSVar9,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                                  (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                                   (System_String_o *)0x0,in_stack_ffffffffffffff78);
                        pSVar1 = (pGVar5->fields).HumansKilledTitan;
                        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                          iStack_7c = (pSVar1->fields)._value;
                          pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                          pSVar9 = "Common.Titan";
                          if (Il2CppMethodInitialized_0754568a == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                            Il2CppMethodInitialized_0754568a = '\x01';
                          }
                          if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                          }
                          pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                             (pSVar9,(MethodInfo *)0x0);
                          Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                                    (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                                     (System_String_o *)0x0,in_stack_ffffffffffffff78);
                          pSVar1 = (pGVar5->fields).HumansKilledOther;
                          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                            iStack_7c = (pSVar1->fields)._value;
                            pSVar10 = System_Int32__ToString(&iStack_7c,(MethodInfo *)0x0);
                            pSVar9 = "MainMenu.Profile.Stats.Other";
                            if (Il2CppMethodInitialized_0754568a == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                              Il2CppMethodInitialized_0754568a = '\x01';
                            }
                            if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
                            }
                            pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                               (pSVar9,(MethodInfo *)0x0);
                            Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
                                      (ui,pSVar9,pSVar7,pSVar10,(System_Nullable_GameStatRecord__o)0x0,
                                       (System_String_o *)0x0,in_stack_ffffffffffffff78);
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
label_0590b553:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Header
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_Nullable_GameStatRecord__o record, System_String_o* id, const MethodInfo* method);
// 0x590b580

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Header
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,
               System_Nullable_GameStatRecord__o record,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545689 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0_Header_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_07545689 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass2_0_o *)0x0) {
    (__this->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).key);
    (__this->fields).record.fields = record.fields;
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass2_0_Header_b__0,
               (MethodInfo_4A81BE0 *)0x0);
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
                (ui,"row",__this_00,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* value, System_Nullable_GameStatRecord__o record, System_String_o* id, const MethodInfo* method);
// 0x590b740

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *value,
               System_Nullable_GameStatRecord__o record,System_String_o *id,MethodInfo *method)

{
  System_String_o *label;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_0754568a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_0754568a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
            (ui,key,label,value,record,id,in_stack_ffffffffffffffc8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$Stat
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* label, System_String_o* value, System_Nullable_GameStatRecord__o record, System_String_o* id, const MethodInfo* method);
// 0x590b7c0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__Stat_580b7c0
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *label,
               System_String_o *value,System_Nullable_GameStatRecord__o record,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754568b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0_Stat_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_0754568b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass4_0_o *)0x0) {
    (__this->fields).label = label;
    Il2CppCodeGenWriteBarrier(&(__this->fields).label);
    (__this->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).key);
    (__this->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    (__this->fields).record.fields = record.fields;
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass4_0_Stat_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
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
                (ui,"row",__this_00,(System_String_o *)0x0,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$ClearButton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t record, System_String_o* label, System_String_o* id, const MethodInfo* method);
// 0x590b9e0

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel__ClearButton
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t record,System_String_o *label,System_String_o *id
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *__this;
  System_Action_GisketchActionContext__o *__this_00;
  System_String_o *id_00;
  System_String_o *format;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754568c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0_ClearButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.ClearRecordTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-");
    Il2CppMethodInitialized_0754568c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___c__DisplayClass5_0_o *)0x0) {
    (__this->fields).record = record;
    targetAddress = &(__this->fields).label;
    (__this->fields).label = label;
    Il2CppCodeGenWriteBarrier(targetAddress);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_c__DisplayClass5_0_ClearButton_b__0,
               (MethodInfo_4A803E0 *)0x0);
    id_00 = System_String__Concat_52f0320("profile-stats-clear-",id,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    format = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.Stats.ClearRecordTooltip",(MethodInfo *)0x0);
    pSVar1 = *targetAddress;
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
      pSVar1 = System_String__Format(format,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__IconButton
                           (ui,3,"return",__this_00,id_00,pSVar1,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).layout = pGVar3;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x5907240

void Gisketch_Aottg2UI_Game_AottgProfileStatsPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsPanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


