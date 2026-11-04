// Type: UI.EditProfileStatsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfileStatsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileStatsPanel.cs
// --------------------------------

// UI.EditProfileStatsPanel$$get_DoublePanel
// il2cpp: bool UI_EditProfileStatsPanel__get_DoublePanel (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfileStatsPanel__get_DoublePanel(UI_EditProfileStatsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfileStatsPanel$$get_DoublePanelDivider
// il2cpp: bool UI_EditProfileStatsPanel__get_DoublePanelDivider (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfileStatsPanel__get_DoublePanelDivider(UI_EditProfileStatsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfileStatsPanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileStatsPanel__get_ScrollBar (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfileStatsPanel__get_ScrollBar(UI_EditProfileStatsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfileStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_EditProfileStatsPanel__get_VerticalSpacing (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_EditProfileStatsPanel__get_VerticalSpacing(UI_EditProfileStatsPanel_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.EditProfileStatsPanel$$Setup
// il2cpp: void UI_EditProfileStatsPanel__Setup (UI_EditProfileStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822891b0
// eh: try 0x182289750..0x18228a278 -> pad 0x183320350 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822898a4: mov r8, qword ptr [rsp + 0x58]
// asm:   0x1822898a9: cmp qword ptr [r8], 0
// asm:   0x1822898ad: je 0x1822898c0
// asm:   0x1822898af: xor ecx, ecx
// asm:   0x1822898b1: mov r8, qword ptr [r8]
// asm:   0x1822898b4: mov rdx, qword ptr [rip + 0x1e0fa45]  ; TypeInfo_System_IDisposable
// asm:   0x1822898bb: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1822898c0: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1822898c5: test rcx, rcx
// asm:   0x1822898c8: jne 0x18228a278
// asm:   0x1822898ce: xor r14d, r14d
// asm:   0x1822898d1: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1822898d9: mov r15, qword ptr [rsp + 0x38]
// asm:   0x1822898de: movss xmm6, dword ptr [rip + 0x10cf322]
// asm:   0x1822898e6: mov r13, qword ptr [rsp + 0x40]
// asm:   0x18228a278: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320350: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320355: push rbp
// asm:   0x183320356: sub rsp, 0x30
// asm:   0x18332035a: mov rbp, rdx
// asm:   0x18332035d: mov rax, qword ptr [rbp + 0x48]
// asm:   0x183320361: mov rcx, qword ptr [rax]
// asm:   0x183320364: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183320368: movabs rax, 0
// asm:   0x183320372: add rsp, 0x30
// asm:   0x183320376: pop rbp
// asm:   0x183320377: ret 

void UI_EditProfileStatsPanel__Setup
               (UI_EditProfileStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  float fVar1;
  ushort uVar2;
  GameProgress_GameProgressContainer_o *pGVar3;
  GameProgress_AchievementContainer_o *__this_00;
  GameProgress_GameStatContainer_o *pGVar4;
  Settings_IntSetting_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  Settings_FloatSetting_o *pSVar7;
  GameProgress_DamageSetting_o *__this_01;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  GameProgress_AchievementCount_o *pGVar10;
  System_String_o *pSVar11;
  UI_ElementStyle_o *__this_02;
  System_String_o *pSVar12;
  System_TimeSpan_o ts;
  Il2CppObject *pIVar13;
  void *pvVar14;
  VirtualInvokeData *pVVar15;
  undefined8 *puVar16;
  UnityEngine_GameObject_o *pUVar17;
  ushort uVar18;
  int32_t local_res10 [4];
  Il2CppObject *local_res20;
  undefined1 local_58 [32];
  
  if (Il2CppMethodInitialized_184347418 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"Other");
    il2cpp_codegen_initialize_runtime_metadata(&"Total");
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"Achievements");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans Killed");
    il2cpp_codegen_initialize_runtime_metadata(&"Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"Highest speed");
    il2cpp_codegen_initialize_runtime_metadata(&"Playtime");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans Killed");
    il2cpp_codegen_initialize_runtime_metadata(&"Level");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder spear");
    Il2CppMethodInitialized_184347418 = '\x01';
  }
  local_res10[0] = 0;
  local_res20 = (Il2CppObject *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
  }
  pGVar3 = TypeInfo_GameProgress_GameProgressManager->static_fields->GameProgress;
  if ((pGVar3 != (GameProgress_GameProgressContainer_o *)0x0) &&
     (__this_00 = (pGVar3->fields).Achievement, __this_00 != (GameProgress_AchievementContainer_o *)0x0)) {
    pGVar4 = (pGVar3->fields).GameStat;
    pGVar10 = GameProgress_AchievementContainer__GetAchievementCount(__this_00,(MethodInfo *)0x0);
    pSVar11 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_02,0x18,100.0,20.0,pSVar11,(MethodInfo *)0x0);
    UI_EditProfileStatsPanel__CreateTitleLabel
              (__this,(__this->fields).DoublePanelLeft,__this_02,"General",(MethodInfo *)0x0);
    if ((pGVar4 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar5 = (pGVar4->fields).Level, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      pUVar6 = (__this->fields).DoublePanelLeft;
      local_res10[0] = (pSVar5->fields)._value;
      pSVar11 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      UI_EditProfileStatsPanel__CreateStatLabel
                (__this,pUVar6,__this_02,"Level",pSVar11,(MethodInfo *)0x0);
      pSVar5 = (pGVar4->fields).Exp;
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        pUVar6 = (__this->fields).DoublePanelLeft;
        local_res10[0] = (pSVar5->fields)._value;
        pSVar11 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
        local_res10[0] = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
        pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
        pSVar11 = System_String__Concat_1969b70(pSVar11,"/",pSVar12,(MethodInfo *)0x0);
        UI_EditProfileStatsPanel__CreateStatLabel
                  (__this,pUVar6,__this_02,"Exp",pSVar11,(MethodInfo *)0x0);
        pSVar7 = (pGVar4->fields).PlayTime;
        if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
          pUVar6 = (__this->fields).DoublePanelLeft;
          fVar1 = (pSVar7->fields)._value;
          if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
          }
          ts = System_TimeSpan__FromSeconds((double)fVar1,(MethodInfo *)0x0);
          pSVar11 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
          UI_EditProfileStatsPanel__CreateStatLabel
                    (__this,pUVar6,__this_02,"Playtime",pSVar11,(MethodInfo *)0x0);
          pSVar7 = (pGVar4->fields).HighestSpeed;
          if (pSVar7 != (Settings_FloatSetting_o *)0x0) {
            pUVar6 = (__this->fields).DoublePanelLeft;
            local_res10[0] = (int32_t)(pSVar7->fields)._value;
            pSVar11 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
            UI_EditProfileStatsPanel__CreateStatLabel
                      (__this,pUVar6,__this_02,"Highest speed",pSVar11,(MethodInfo *)0x0);
            UI_BasePanel__CreateHorizontalDivider
                      ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
            UI_EditProfileStatsPanel__CreateTitleLabel
                      (__this,(__this->fields).DoublePanelLeft,__this_02,"Achievements",
                       (MethodInfo *)0x0);
            if (pGVar10 != (GameProgress_AchievementCount_o *)0x0) {
              pUVar6 = (__this->fields).DoublePanelLeft;
              pSVar11 = System_Int32__ToString(&(pGVar10->fields).FinishedBronze,(MethodInfo *)0x0);
              pSVar12 = System_Int32__ToString(&(pGVar10->fields).TotalBronze,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat_1969b70(pSVar11,"/",pSVar12,(MethodInfo *)0x0)
              ;
              UI_EditProfileStatsPanel__CreateStatLabel
                        (__this,pUVar6,__this_02,"Bronze",pSVar11,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).DoublePanelLeft;
              pSVar11 = System_Int32__ToString(&(pGVar10->fields).FinishedSilver,(MethodInfo *)0x0);
              pSVar12 = System_Int32__ToString(&(pGVar10->fields).TotalSilver,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat_1969b70(pSVar11,"/",pSVar12,(MethodInfo *)0x0)
              ;
              UI_EditProfileStatsPanel__CreateStatLabel
                        (__this,pUVar6,__this_02,"Silver",pSVar11,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).DoublePanelLeft;
              pSVar11 = System_Int32__ToString(&(pGVar10->fields).FinishedGold,(MethodInfo *)0x0);
              pSVar12 = System_Int32__ToString(&(pGVar10->fields).TotalGold,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat_1969b70(pSVar11,"/",pSVar12,(MethodInfo *)0x0)
              ;
              UI_EditProfileStatsPanel__CreateStatLabel
                        (__this,pUVar6,__this_02,"Gold",pSVar11,(MethodInfo *)0x0);
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
              UI_EditProfileStatsPanel__CreateTitleLabel
                        (__this,(__this->fields).DoublePanelLeft,__this_02,"Damage",
                         (MethodInfo *)0x0);
              __this_01 = (pGVar4->fields).Damage;
              if (__this_01 != (GameProgress_DamageSetting_o *)0x0) {
                pIVar13 = (Il2CppObject *)
                          GameProgress_DamageSetting__GetStatLabels(__this_01,(MethodInfo *)0x0);
                if (pIVar13 != (Il2CppObject *)0x0) {
                  local_res20 = InterfaceInvoker0_Invoke
                                          (0,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_IEnumerable_ValueTuple_string_string
                                           ,pIVar13);
                  while( true ) {
                    if (local_res20 == (Il2CppObject *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pvVar14 = InterfaceInvoker0_Invoke
                                        (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20)
                    ;
                    pIVar13 = local_res20;
                    if ((char)pvVar14 == '\0') break;
                    if (local_res20 == (Il2CppObject *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pIVar8 = local_res20->klass;
                    uVar2 = (pIVar8->_2).interface_offsets_count;
                    uVar18 = 0;
                    if (uVar2 != 0) {
                      pIVar9 = (pIVar8->_1).interfaceOffsets;
                      do {
                        if (pIVar9[uVar18].interfaceType ==
                            (Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string) {
                          pVVar15 = pIVar8->vtable + pIVar9[uVar18].offset;
                          goto label_1822897d6;
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar2);
                    }
                    pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                                        (local_res20,
                                         (Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_IEnumerator_ValueTuple_string_string
                                         ,0);
label_1822897d6:
                    puVar16 = (undefined8 *)(*pVVar15->methodPtr)(local_58,pIVar13,pVVar15->method);
                    pSVar11 = (System_String_o *)*puVar16;
                    pSVar12 = (System_String_o *)puVar16[1];
                    pUVar6 = (__this->fields).DoublePanelLeft;
                    if (Il2CppMethodInitialized_184347419 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      il2cpp_codegen_initialize_runtime_metadata(&": ");
                      Il2CppMethodInitialized_184347419 = '\x01';
                    }
                    pSVar11 = System_String__Concat_1969b70
                                        (pSVar11,": ",pSVar12,(MethodInfo *)0x0);
                    pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                        (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0);
                    if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    UnityEngine_GameObject__GetComponent_object_
                              (pUVar17,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                  }
                  if (local_res20 != (Il2CppObject *)0x0) {
                    InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
                  }
                  pSVar11 = "Titans Killed";
                  pUVar6 = (__this->fields).DoublePanelRight;
                  if (Il2CppMethodInitialized_18434741a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                    Il2CppMethodInitialized_18434741a = '\x01';
                  }
                  pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                      (pUVar6,__this_02,pSVar11,1,3,(MethodInfo *)0x0);
                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__GetComponent_object_
                              (pUVar17,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                    pSVar5 = (pGVar4->fields).TitansKilledTotal;
                    if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                      pUVar6 = (__this->fields).DoublePanelRight;
                      local_res10[0] = (pSVar5->fields)._value;
                      pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
                      pSVar11 = "Total";
                      if (Il2CppMethodInitialized_184347419 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                        il2cpp_codegen_initialize_runtime_metadata(&": ");
                        Il2CppMethodInitialized_184347419 = '\x01';
                      }
                      pSVar11 = System_String__Concat_1969b70
                                          (pSVar11,": ",pSVar12,(MethodInfo *)0x0);
                      pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                          (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0);
                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__GetComponent_object_
                                  (pUVar17,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                        pSVar5 = (pGVar4->fields).TitansKilledBlade;
                        if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                          pUVar6 = (__this->fields).DoublePanelRight;
                          local_res10[0] = (pSVar5->fields)._value;
                          pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
                          pSVar11 = "Blade";
                          if (Il2CppMethodInitialized_184347419 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                            il2cpp_codegen_initialize_runtime_metadata(&": ");
                            Il2CppMethodInitialized_184347419 = '\x01';
                          }
                          pSVar11 = System_String__Concat_1969b70
                                              (pSVar11,": ",pSVar12,(MethodInfo *)0x0);
                          pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                              (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0);
                          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__GetComponent_object_
                                      (pUVar17,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                            pSVar5 = (pGVar4->fields).TitansKilledAHSS;
                            if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                              pUVar6 = (__this->fields).DoublePanelRight;
                              local_res10[0] = (pSVar5->fields)._value;
                              pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
                              pSVar11 = "AHSS";
                              if (Il2CppMethodInitialized_184347419 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                il2cpp_codegen_initialize_runtime_metadata(&": ");
                                Il2CppMethodInitialized_184347419 = '\x01';
                              }
                              pSVar11 = System_String__Concat_1969b70
                                                  (pSVar11,": ",pSVar12,(MethodInfo *)0x0);
                              pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                  (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0);
                              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                UnityEngine_GameObject__GetComponent_object_
                                          (pUVar17,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                pSVar5 = (pGVar4->fields).TitansKilledAPG;
                                if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                  pUVar6 = (__this->fields).DoublePanelRight;
                                  local_res10[0] = (pSVar5->fields)._value;
                                  pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
                                  pSVar11 = "APG";
                                  if (Il2CppMethodInitialized_184347419 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                    il2cpp_codegen_initialize_runtime_metadata(&": ");
                                    Il2CppMethodInitialized_184347419 = '\x01';
                                  }
                                  pSVar11 = System_String__Concat_1969b70
                                                      (pSVar11,": ",pSVar12,(MethodInfo *)0x0
                                                      );
                                  pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                      (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0);
                                  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__GetComponent_object_
                                              (pUVar17,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                    pSVar5 = (pGVar4->fields).TitansKilledThunderspear;
                                    if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                      pUVar6 = (__this->fields).DoublePanelRight;
                                      local_res10[0] = (pSVar5->fields)._value;
                                      pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
                                      pSVar11 = "Thunder spear";
                                      if (Il2CppMethodInitialized_184347419 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                        il2cpp_codegen_initialize_runtime_metadata(&": ");
                                        Il2CppMethodInitialized_184347419 = '\x01';
                                      }
                                      pSVar11 = System_String__Concat_1969b70
                                                          (pSVar11,": ",pSVar12,
                                                           (MethodInfo *)0x0);
                                      pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                          (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0);
                                      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                        UnityEngine_GameObject__GetComponent_object_
                                                  (pUVar17,(MethodInfo_6F5650 *)
                                                           MethodInfo_UnityEngine_GameObject_GetComponent_Text
                                                  );
                                        pSVar5 = (pGVar4->fields).TitansKilledOther;
                                        if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                          pUVar6 = (__this->fields).DoublePanelRight;
                                          local_res10[0] = (pSVar5->fields)._value;
                                          pSVar12 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
                                          pSVar11 = "Other";
                                          if (Il2CppMethodInitialized_184347419 == '\0') {
                                            il2cpp_codegen_initialize_runtime_metadata
                                                      (&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                            il2cpp_codegen_initialize_runtime_metadata(&": ")
                                            ;
                                            Il2CppMethodInitialized_184347419 = '\x01';
                                          }
                                          pSVar11 = System_String__Concat_1969b70
                                                              (pSVar11,": ",pSVar12,
                                                               (MethodInfo *)0x0);
                                          pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                              (pUVar6,__this_02,pSVar11,0,3,(MethodInfo *)0x0)
                                          ;
                                          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                            UnityEngine_GameObject__GetComponent_object_
                                                      (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                            UI_BasePanel__CreateHorizontalDivider
                                                      ((UI_BasePanel_o *)__this,
                                                       (__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0
                                                      );
                                            pSVar11 = "Humans Killed";
                                            pUVar6 = (__this->fields).DoublePanelRight;
                                            if (Il2CppMethodInitialized_18434741a == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&MethodInfo_UnityEngine_GameObject_GetComponent_Text)
                                              ;
                                              Il2CppMethodInitialized_18434741a = '\x01';
                                            }
                                            pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                (pUVar6,__this_02,pSVar11,1,3,
                                                                 (MethodInfo *)0x0);
                                            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                              pSVar5 = (pGVar4->fields).HumansKilledTotal;
                                              if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                pUVar6 = (__this->fields).DoublePanelRight;
                                                local_res10[0] = (pSVar5->fields)._value;
                                                pSVar12 = System_Int32__ToString
                                                                    (local_res10,(MethodInfo *)0x0);
                                                pSVar11 = "Total";
                                                if (Il2CppMethodInitialized_184347419 == '\0') {
                                                  il2cpp_codegen_initialize_runtime_metadata
                                                            (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                  il2cpp_codegen_initialize_runtime_metadata
                                                            (&": ");
                                                  Il2CppMethodInitialized_184347419 = '\x01';
                                                }
                                                pSVar11 = System_String__Concat_1969b70
                                                                    (pSVar11,": ",pSVar12,
                                                                     (MethodInfo *)0x0);
                                                pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                    (pUVar6,__this_02,pSVar11,0,3,
                                                                     (MethodInfo *)0x0);
                                                if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                  pSVar5 = (pGVar4->fields).HumansKilledBlade;
                                                  if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                    pUVar6 = (__this->fields).DoublePanelRight;
                                                    local_res10[0] = (pSVar5->fields)._value;
                                                    pSVar12 = System_Int32__ToString
                                                                        (local_res10,(MethodInfo *)0x0);
                                                    pSVar11 = "Blade";
                                                    if (Il2CppMethodInitialized_184347419 == '\0') {
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                      il2cpp_codegen_initialize_runtime_metadata
                                                                (&": ");
                                                      Il2CppMethodInitialized_184347419 = '\x01';
                                                    }
                                                    pSVar11 = System_String__Concat_1969b70
                                                                        (pSVar11,": ",pSVar12
                                                                         ,(MethodInfo *)0x0);
                                                    pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                        (pUVar6,__this_02,pSVar11,0,3,
                                                                         (MethodInfo *)0x0);
                                                    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                      pSVar5 = (pGVar4->fields).HumansKilledAHSS;
                                                      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                        pUVar6 = (__this->fields).DoublePanelRight;
                                                        local_res10[0] = (pSVar5->fields)._value;
                                                        pSVar12 = System_Int32__ToString
                                                                            (local_res10,(MethodInfo *)0x0);
                                                        pSVar11 = "AHSS";
                                                        if (Il2CppMethodInitialized_184347419 == '\0') {
                                                          il2cpp_codegen_initialize_runtime_metadata
                                                                    (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&": ");
                                                       Il2CppMethodInitialized_184347419 = '\x01';
                                                       }
                                                       pSVar11 = System_String__Concat_1969b70
                                                                           (pSVar11,": ",
                                                                            pSVar12,(MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar6,__this_02,pSVar11,0,3,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__GetComponent_object_
                                                                   (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       pSVar5 = (pGVar4->fields).HumansKilledAPG;
                                                       if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                         pUVar6 = (__this->fields).DoublePanelRight;
                                                         local_res10[0] = (pSVar5->fields)._value;
                                                         pSVar12 = System_Int32__ToString
                                                                             (local_res10,(MethodInfo *)0x0);
                                                         pSVar11 = "APG";
                                                         if (Il2CppMethodInitialized_184347419 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&": ");
                                                       Il2CppMethodInitialized_184347419 = '\x01';
                                                       }
                                                       pSVar11 = System_String__Concat_1969b70
                                                                           (pSVar11,": ",
                                                                            pSVar12,(MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar6,__this_02,pSVar11,0,3,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__GetComponent_object_
                                                                   (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       pSVar5 = (pGVar4->fields).HumansKilledThunderspear;
                                                       if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                         pUVar6 = (__this->fields).DoublePanelRight;
                                                         local_res10[0] = (pSVar5->fields)._value;
                                                         pSVar12 = System_Int32__ToString
                                                                             (local_res10,(MethodInfo *)0x0);
                                                         pSVar11 = "Thunder spear";
                                                         if (Il2CppMethodInitialized_184347419 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&": ");
                                                       Il2CppMethodInitialized_184347419 = '\x01';
                                                       }
                                                       pSVar11 = System_String__Concat_1969b70
                                                                           (pSVar11,": ",
                                                                            pSVar12,(MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar6,__this_02,pSVar11,0,3,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__GetComponent_object_
                                                                   (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       pSVar5 = (pGVar4->fields).HumansKilledTitan;
                                                       if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                         pUVar6 = (__this->fields).DoublePanelRight;
                                                         local_res10[0] = (pSVar5->fields)._value;
                                                         pSVar12 = System_Int32__ToString
                                                                             (local_res10,(MethodInfo *)0x0);
                                                         pSVar11 = "Titan";
                                                         if (Il2CppMethodInitialized_184347419 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&": ");
                                                       Il2CppMethodInitialized_184347419 = '\x01';
                                                       }
                                                       pSVar11 = System_String__Concat_1969b70
                                                                           (pSVar11,": ",
                                                                            pSVar12,(MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar6,__this_02,pSVar11,0,3,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__GetComponent_object_
                                                                   (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       pSVar5 = (pGVar4->fields).HumansKilledOther;
                                                       if (pSVar5 != (Settings_IntSetting_o *)0x0) {
                                                         pUVar6 = (__this->fields).DoublePanelRight;
                                                         local_res10[0] = (pSVar5->fields)._value;
                                                         pSVar12 = System_Int32__ToString
                                                                             (local_res10,(MethodInfo *)0x0);
                                                         pSVar11 = "Other";
                                                         if (Il2CppMethodInitialized_184347419 == '\0') {
                                                           il2cpp_codegen_initialize_runtime_metadata
                                                                     (&
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                                                       il2cpp_codegen_initialize_runtime_metadata
                                                                 (&": ");
                                                       Il2CppMethodInitialized_184347419 = '\x01';
                                                       }
                                                       pSVar11 = System_String__Concat_1969b70
                                                                           (pSVar11,": ",
                                                                            pSVar12,(MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar6,__this_02,pSVar11,0,3,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__GetComponent_object_
                                                                   (pUVar17,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Text);
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


// UI.EditProfileStatsPanel$$CreateStatLabel
// il2cpp: void UI_EditProfileStatsPanel__CreateStatLabel (UI_EditProfileStatsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* title, System_String_o* value, const MethodInfo* method);
// 0x182289070

void UI_EditProfileStatsPanel__CreateStatLabel
               (UI_EditProfileStatsPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *value,MethodInfo *method)

{
  System_String_o *title_00;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184347419 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    Il2CppMethodInitialized_184347419 = '\x01';
  }
  title_00 = System_String__Concat_1969b70(title,": ",value,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__CreateDefaultLabel(panel,style,title_00,0,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_
              (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileStatsPanel$$CreateTitleLabel
// il2cpp: void UI_EditProfileStatsPanel__CreateTitleLabel (UI_EditProfileStatsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* title, const MethodInfo* method);
// 0x182289120

void UI_EditProfileStatsPanel__CreateTitleLabel
               (UI_EditProfileStatsPanel_o *__this,UnityEngine_Transform_o *panel,UI_ElementStyle_o *style,
               System_String_o *title,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_18434741a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    Il2CppMethodInitialized_18434741a = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateDefaultLabel(panel,style,title,1,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_
              (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileStatsPanel$$.ctor
// il2cpp: void UI_EditProfileStatsPanel___ctor (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_EditProfileStatsPanel___ctor(UI_EditProfileStatsPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


